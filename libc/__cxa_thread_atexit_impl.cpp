// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <unistd.h>

#include "native_bridge_support/vdso/vdso.h"

extern "C" void __loader_add_thread_local_dtor(void* dso_handle) __attribute__((weak));
extern "C" void __loader_remove_thread_local_dtor(void* dso_handle) __attribute__((weak));

struct WrappedArg {
  typedef void (*thread_atexit_fn_t)(void*);
  thread_atexit_fn_t fn;
  void* arg;
  void* dso_handle;
};

static void WrappedFn(void* arg) {
  WrappedArg* wrapped_arg = static_cast<WrappedArg*>(arg);
  WrappedArg::thread_atexit_fn_t origin_fn = wrapped_arg->fn;
  void* origin_arg = wrapped_arg->arg;
  void* dso_handle = wrapped_arg->dso_handle;

  delete wrapped_arg;

  origin_fn(origin_arg);

  if (__loader_remove_thread_local_dtor != nullptr) {
    __loader_remove_thread_local_dtor(dso_handle);
  }
}

extern "C" int __cxa_thread_atexit_impl(void (*func)(void*), void* arg, void* dso_handle) {
  WrappedArg* wrapped_arg = new WrappedArg();
  wrapped_arg->fn = func;
  wrapped_arg->arg = arg;
  wrapped_arg->dso_handle = dso_handle;

  if (__loader_add_thread_local_dtor != nullptr) {
    __loader_add_thread_local_dtor(dso_handle);
  }

  typedef decltype(__cxa_thread_atexit_impl)* fn_t;
  static fn_t __host_cxa_thread_atexit_impl = reinterpret_cast<fn_t>(
      native_bridge_find_proxy_library_symbol("libc.so", "__cxa_thread_atexit_impl"));

  return __host_cxa_thread_atexit_impl(WrappedFn, wrapped_arg, dso_handle);
}
