//
// Copyright (C) 2017 The Android Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#ifndef NATIVE_BRIDGE_SUPPORT_VDSO_INTERCEPTABLE_FUNCTIONS_H_
#define NATIVE_BRIDGE_SUPPORT_VDSO_INTERCEPTABLE_FUNCTIONS_H_

#include <stdint.h>

#include "native_bridge_support/vdso/vdso.h"

// An app may patch symbols exported from NDK libraries (e.g. b/378772009). This effectively
// invalidates trampolines bound to such symbols. In addition invalidation usually affects the whole
// cache line so that unpatched functions adjacent to the patched one may lose trampoline
// connection too.
//
// As a workaround to this issue each symbol below has two entries: a regular exported symbol and a
// hidden stub. The regular symbol simply jumps to the stub which we bind to a trampoline. This way
// if the regular symbol is patched the stub still remains correctly connected to the trampoline.
// Since the stub is hidden it's unlikely that it'll be patched on purpose.
//
// When a symbol is patched the corresponding instruction cache invalidation instruction is
// issued on ARM and RISC-V. It usually invalidates the whole cache line so that unpatched functions
// adjacent to the patched one may also lose trampoline connection. Since currently regular and stub
// entries are interleaved we align them on cache line size (64 bytes) so that invalidations are
// isolated.
// TODO(b/379378784): This results in somewhat larger stubs binaries (<1Mb in total for all of
// them). If we combine regular and stub entries in two groups, we'll only need to ensure alignment
// at the start/end of the regular symbols group. Note, that we should leave enough code for
// patching to be successful. E.g. 8 bytes may not be enough to encode arbitrary 64-bit address,
// but 16 bytes should always be enough.
//
// As an optimization we keep regular symbols bound to trampolines as well, so that we don't need
// to translate their code unless and until it's invalidated.

#if defined(__arm__)

#define INTERCEPTABLE_STUB_ASM_FUNCTION(name)                                                      \
  extern "C" void                                                                                  \
      __attribute__((target("arm"), aligned(64), naked, __visibility__("hidden"))) name##_stub() { \
    __asm__ __volatile__(                                                                          \
        "ldr r3, =0\n"                                                                             \
        "bx r3");                                                                                  \
  }                                                                                                \
                                                                                                   \
  extern "C" __attribute__((target("arm"), aligned(64), naked)) void name() {                      \
    __asm__ __volatile__("b " #name "_stub");                                                      \
  }

#elif defined(__aarch64__)

#define INTERCEPTABLE_STUB_ASM_FUNCTION(name)                                                   \
  extern "C" void __attribute__((aligned(64), naked, __visibility__("hidden"))) name##_stub() { \
    /* TODO(b/232598137): maybe replace with "udf imm16" */                                     \
    __asm__ __volatile__(                                                                       \
        "ldr x3, =0\n"                                                                          \
        "blr x3\n");                                                                            \
  }                                                                                             \
                                                                                                \
  extern "C" __attribute__((aligned(64), naked)) void name() {                                  \
    __asm__ __volatile__("b " #name "_stub");                                                   \
  }

#elif defined(__riscv)

#define INTERCEPTABLE_STUB_ASM_FUNCTION(name)                                                   \
  extern "C" void __attribute__((aligned(64), naked, __visibility__("hidden"))) name##_stub() { \
    __asm__ __volatile__("unimp\n");                                                            \
  }                                                                                             \
                                                                                                \
  extern "C" __attribute__((aligned(64), naked)) void name() {                                  \
    __asm__ __volatile__("j " #name "_stub");                                                   \
  }

#else

#error Unknown architecture, only riscv64, arm and aarch64 are supported.

#endif

#define DEFINE_INTERCEPTABLE_STUB_VARIABLE(name) uintptr_t name;

#define INIT_INTERCEPTABLE_STUB_VARIABLE(library_name, name) \
  native_bridge_intercept_symbol(&name, library_name, #name)

#define DEFINE_INTERCEPTABLE_STUB_FUNCTION(name) INTERCEPTABLE_STUB_ASM_FUNCTION(name)

#define INIT_INTERCEPTABLE_STUB_FUNCTION(library_name, name)                          \
  native_bridge_intercept_symbol(reinterpret_cast<void*>(name), library_name, #name); \
  native_bridge_intercept_symbol(reinterpret_cast<void*>(name##_stub), library_name, #name)

#endif  // NATIVE_BRIDGE_SUPPORT_VDSO_INTERCEPTABLE_FUNCTIONS_H_
