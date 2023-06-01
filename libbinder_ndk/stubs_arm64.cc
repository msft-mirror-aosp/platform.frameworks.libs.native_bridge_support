//
// Copyright (C) 2023 The Android Open Source Project
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

// clang-format off
#include "native_bridge_support/vdso/interceptable_functions.h"

DEFINE_INTERCEPTABLE_STUB_FUNCTION(ABinderProcess_handlePolledCommands);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ABinderProcess_isThreadPoolStarted);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ABinderProcess_joinThreadPool);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ABinderProcess_setThreadPoolMaxThreadCount);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ABinderProcess_setupPolling);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(ABinderProcess_startThreadPool);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_Class_define);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_Class_disableInterfaceTokenHeader);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_Class_getDescriptor);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_Class_setHandleShellCommand);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_Class_setOnDump);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_DeathRecipient_delete);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_DeathRecipient_new);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_DeathRecipient_setOnUnlinked);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_Weak_clone);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_Weak_delete);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_Weak_lt);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_Weak_new);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_Weak_promote);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_associateClass);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_debugGetRefCount);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_decStrong);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_dump);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_forceDowngradeToSystemStability);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_forceDowngradeToVendorStability);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_fromJavaBinder);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_getCallingPid);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_getCallingSid);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_getCallingUid);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_getClass);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_getExtension);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_getUserData);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_incStrong);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_isAlive);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_isHandlingTransaction);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_isRemote);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_linkToDeath);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_lt);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_markSystemStability);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_markVendorStability);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_markVintfStability);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_new);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_ping);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_prepareTransaction);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_setExtension);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_setInheritRt);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_setMinSchedulerPolicy);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_setRequestingSid);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_toJavaBinder);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_transact);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AIBinder_unlinkToDeath);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_appendFrom);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_create);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_delete);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_fromJavaParcel);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_getAllowFds);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_getDataPosition);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_getDataSize);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_markSensitive);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_marshal);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_readBool);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_readBoolArray);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_readByte);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_readByteArray);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_readChar);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_readCharArray);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_readDouble);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_readDoubleArray);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_readFloat);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_readFloatArray);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_readInt32);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_readInt32Array);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_readInt64);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_readInt64Array);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_readParcelFileDescriptor);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_readParcelableArray);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_readStatusHeader);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_readString);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_readStringArray);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_readStrongBinder);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_readUint32);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_readUint32Array);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_readUint64);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_readUint64Array);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_reset);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_setDataPosition);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_unmarshal);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_writeBool);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_writeBoolArray);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_writeByte);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_writeByteArray);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_writeChar);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_writeCharArray);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_writeDouble);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_writeDoubleArray);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_writeFloat);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_writeFloatArray);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_writeInt32);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_writeInt32Array);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_writeInt64);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_writeInt64Array);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_writeParcelFileDescriptor);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_writeParcelableArray);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_writeStatusHeader);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_writeString);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_writeStringArray);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_writeStrongBinder);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_writeUint32);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_writeUint32Array);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_writeUint64);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AParcel_writeUint64Array);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AServiceManager_NotificationRegistration_delete);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AServiceManager_addService);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AServiceManager_addServiceWithFlags);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AServiceManager_checkService);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AServiceManager_forEachDeclaredInstance);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AServiceManager_forceLazyServicesPersist);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AServiceManager_getService);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AServiceManager_getUpdatableApexName);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AServiceManager_isDeclared);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AServiceManager_isUpdatableViaApex);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AServiceManager_reRegister);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AServiceManager_registerForServiceNotifications);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AServiceManager_registerLazyService);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AServiceManager_setActiveServicesCallback);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AServiceManager_tryUnregister);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AServiceManager_waitForService);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AStatus_delete);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AStatus_deleteDescription);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AStatus_fromExceptionCode);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AStatus_fromExceptionCodeWithMessage);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AStatus_fromServiceSpecificError);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AStatus_fromServiceSpecificErrorWithMessage);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AStatus_fromStatus);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AStatus_getDescription);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AStatus_getExceptionCode);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AStatus_getMessage);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AStatus_getServiceSpecificError);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AStatus_getStatus);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AStatus_isOk);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(AStatus_newOk);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(_Z25AIBinder_toPlatformBinderP8AIBinder);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(_Z26AParcel_viewPlatformParcelP7AParcel);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(_Z26AParcel_viewPlatformParcelPK7AParcel);
DEFINE_INTERCEPTABLE_STUB_FUNCTION(_Z27AIBinder_fromPlatformBinderRKN7android2spINS_7IBinderEEE);

static void __attribute__((constructor(0))) init_stub_library() {
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", ABinderProcess_handlePolledCommands);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", ABinderProcess_isThreadPoolStarted);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", ABinderProcess_joinThreadPool);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", ABinderProcess_setThreadPoolMaxThreadCount);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", ABinderProcess_setupPolling);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", ABinderProcess_startThreadPool);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_Class_define);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_Class_disableInterfaceTokenHeader);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_Class_getDescriptor);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_Class_setHandleShellCommand);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_Class_setOnDump);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_DeathRecipient_delete);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_DeathRecipient_new);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_DeathRecipient_setOnUnlinked);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_Weak_clone);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_Weak_delete);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_Weak_lt);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_Weak_new);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_Weak_promote);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_associateClass);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_debugGetRefCount);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_decStrong);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_dump);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_forceDowngradeToSystemStability);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_forceDowngradeToVendorStability);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_fromJavaBinder);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_getCallingPid);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_getCallingSid);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_getCallingUid);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_getClass);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_getExtension);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_getUserData);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_incStrong);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_isAlive);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_isHandlingTransaction);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_isRemote);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_linkToDeath);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_lt);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_markSystemStability);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_markVendorStability);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_markVintfStability);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_new);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_ping);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_prepareTransaction);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_setExtension);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_setInheritRt);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_setMinSchedulerPolicy);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_setRequestingSid);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_toJavaBinder);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_transact);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AIBinder_unlinkToDeath);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_appendFrom);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_create);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_delete);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_fromJavaParcel);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_getAllowFds);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_getDataPosition);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_getDataSize);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_markSensitive);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_marshal);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_readBool);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_readBoolArray);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_readByte);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_readByteArray);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_readChar);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_readCharArray);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_readDouble);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_readDoubleArray);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_readFloat);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_readFloatArray);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_readInt32);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_readInt32Array);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_readInt64);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_readInt64Array);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_readParcelFileDescriptor);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_readParcelableArray);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_readStatusHeader);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_readString);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_readStringArray);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_readStrongBinder);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_readUint32);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_readUint32Array);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_readUint64);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_readUint64Array);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_reset);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_setDataPosition);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_unmarshal);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_writeBool);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_writeBoolArray);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_writeByte);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_writeByteArray);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_writeChar);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_writeCharArray);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_writeDouble);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_writeDoubleArray);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_writeFloat);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_writeFloatArray);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_writeInt32);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_writeInt32Array);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_writeInt64);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_writeInt64Array);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_writeParcelFileDescriptor);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_writeParcelableArray);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_writeStatusHeader);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_writeString);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_writeStringArray);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_writeStrongBinder);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_writeUint32);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_writeUint32Array);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_writeUint64);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AParcel_writeUint64Array);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AServiceManager_NotificationRegistration_delete);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AServiceManager_addService);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AServiceManager_addServiceWithFlags);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AServiceManager_checkService);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AServiceManager_forEachDeclaredInstance);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AServiceManager_forceLazyServicesPersist);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AServiceManager_getService);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AServiceManager_getUpdatableApexName);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AServiceManager_isDeclared);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AServiceManager_isUpdatableViaApex);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AServiceManager_reRegister);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AServiceManager_registerForServiceNotifications);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AServiceManager_registerLazyService);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AServiceManager_setActiveServicesCallback);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AServiceManager_tryUnregister);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AServiceManager_waitForService);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AStatus_delete);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AStatus_deleteDescription);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AStatus_fromExceptionCode);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AStatus_fromExceptionCodeWithMessage);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AStatus_fromServiceSpecificError);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AStatus_fromServiceSpecificErrorWithMessage);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AStatus_fromStatus);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AStatus_getDescription);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AStatus_getExceptionCode);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AStatus_getMessage);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AStatus_getServiceSpecificError);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AStatus_getStatus);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AStatus_isOk);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", AStatus_newOk);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", _Z25AIBinder_toPlatformBinderP8AIBinder);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", _Z26AParcel_viewPlatformParcelP7AParcel);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", _Z26AParcel_viewPlatformParcelPK7AParcel);
  INIT_INTERCEPTABLE_STUB_FUNCTION("libbinder_ndk.so", _Z27AIBinder_fromPlatformBinderRKN7android2spINS_7IBinderEEE);
}
// clang-format on
