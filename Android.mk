# Copyright (C) 2009 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.


LOCAL_PATH := $(call my-dir)

TARGET_ARCH_ABI := arm64-v8a

include $(CLEAR_VARS)
LOCAL_MODULE := hook
rwildcard=$(wildcard $1$2) $(foreach d,$(wildcard $1*),$(call rwildcard,$d/,$2))
# Creating prebuilt for dependency: modloader - version: 1.0.2
include $(CLEAR_VARS)
LOCAL_MODULE := modloader
LOCAL_EXPORT_C_INCLUDES := extern/modloader
LOCAL_SRC_FILES := extern/libmodloader.so
include $(PREBUILT_SHARED_LIBRARY)
# Creating prebuilt for dependency: questui - version: 0.1.3
include $(CLEAR_VARS)
LOCAL_MODULE := questui
LOCAL_EXPORT_C_INCLUDES := extern/questui
LOCAL_SRC_FILES := extern/libquestui.so
include $(PREBUILT_SHARED_LIBRARY)
# Creating prebuilt for dependency: custom-types - version: 0.2.7
include $(CLEAR_VARS)
LOCAL_MODULE := custom-types
LOCAL_EXPORT_C_INCLUDES := extern/custom-types
LOCAL_SRC_FILES := extern/libcustom-types.so
include $(PREBUILT_SHARED_LIBRARY)
# Creating prebuilt for dependency: bs-utils - version: 0.4.4
include $(CLEAR_VARS)
LOCAL_MODULE := bs-utils
LOCAL_EXPORT_C_INCLUDES := extern/bs-utils
LOCAL_SRC_FILES := extern/libbs-utils.so
include $(PREBUILT_SHARED_LIBRARY)
# Creating prebuilt for dependency: beatsaber-hook - version: 0.8.4
include $(CLEAR_VARS)
LOCAL_MODULE := beatsaber-hook_0_8_4
LOCAL_EXPORT_C_INCLUDES := extern/beatsaber-hook
LOCAL_SRC_FILES := extern/libbeatsaber-hook_0_8_4.so
include $(PREBUILT_SHARED_LIBRARY)
# Creating prebuilt for dependency: codegen - version: 0.4.0
include $(CLEAR_VARS)
LOCAL_MODULE := codegen_0_4_0
LOCAL_EXPORT_C_INCLUDES := extern/codegen
LOCAL_SRC_FILES := extern/libcodegen_0_4_0.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := replay
LOCAL_SRC_FILES += $(call rwildcard,src/,*.cpp)
LOCAL_SRC_FILES += $(call rwildcard,extern/beatsaber-hook/src/inline-hook,*.cpp)
LOCAL_SRC_FILES += $(call rwildcard,extern/beatsaber-hook/src/inline-hook,*.c)
LOCAL_SHARED_LIBRARIES += modloader
LOCAL_SHARED_LIBRARIES += beatsaber-hook_0_8_4
LOCAL_SHARED_LIBRARIES += codegen_0_4_0
LOCAL_SHARED_LIBRARIES += questui
LOCAL_SHARED_LIBRARIES += custom-types
LOCAL_SHARED_LIBRARIES += bs-utils
LOCAL_LDLIBS += -llog
LOCAL_CFLAGS += -D"MOD_ID=\"replay\"" -D"VERSION=\"0.1.0\"" -I"extern/libil2cpp/il2cpp/libil2cpp" -DID='"replay"' -I'./shared' -I'./extern' -I'./extern/codegen/include'
LOCAL_CPPFLAGS += -std=c++2a
LOCAL_C_INCLUDES += ./include ./src
LOCAL_CPP_FEATURES += exceptions
include $(BUILD_SHARED_LIBRARY)

# In order to make this mod work with BMBF, you must provide a zip file with the specific libbeatsaber-hook.so (file copied to the libs directory)
# and the mod itself (installed as a hook mod)
