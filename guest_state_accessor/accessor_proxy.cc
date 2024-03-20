/*
 * Copyright (C) 2024 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define LOG_TAG "nativebridgesupport"

#include <android-base/properties.h>
#include <dlfcn.h>
#include <log/log_main.h>

#include "native_bridge_support/guest_state_accessor/accessor.h"

int LoadGuestStateRegisters(const void* guest_state_data,
                            size_t guest_state_data_size,
                            NativeBridgeGuestRegs* guest_regs) {
  std::string library_name = android::base::GetProperty(
      "ro.dalvik.vm.native.bridge", /*default_value=*/"");
  if (library_name.empty()) {
    return NATIVE_BRIDGE_GUEST_STATE_ACCESSOR_ERROR_INVALID_STATE;
  }

  void *proxy = dlopen(library_name.c_str(), RTLD_NOW | RTLD_LOCAL);
  if (!proxy) {
    ALOGE("dlopen failed: %s: %s", library_name.c_str(), dlerror());
    return NATIVE_BRIDGE_GUEST_STATE_ACCESSOR_ERROR_INVALID_STATE;
  }

  using LoadGuestStateRegistersFunc =
      int (*)(const void *, size_t, NativeBridgeGuestRegs *);
  LoadGuestStateRegistersFunc LoadGuestStateRegistersImpl =
      reinterpret_cast<LoadGuestStateRegistersFunc>(
          dlsym(proxy, "LoadGuestStateRegisters"));
  if (!LoadGuestStateRegistersImpl) {
    ALOGE("failed to initialize proxy library LoadGuestStateRegisters");
    return NATIVE_BRIDGE_GUEST_STATE_ACCESSOR_ERROR_INVALID_STATE;
  }

  return LoadGuestStateRegistersImpl(guest_state_data, guest_state_data_size, guest_regs);
}
