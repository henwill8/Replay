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
include $(CLEAR_VARS)
LOCAL_MODULE := beatsaber-hook_0_7_1
LOCAL_EXPORT_C_INCLUDES := extern/beatsaber-hook
LOCAL_SRC_FILES := extern/libbeatsaber-hook_0_7_1.so
include $(PREBUILT_SHARED_LIBRARY)

# Build the CustomUI shared library
include $(CLEAR_VARS)
LOCAL_MODULE := CustomUI_2019_2_1f1_0_1_3
LOCAL_EXPORT_C_INCLUDES := ./extern/BeatSaberQuestCustomUI/shared
LOCAL_SRC_FILES := ./extern/BeatSaberQuestCustomUI/libs/arm64-v8a/libcustomui_2019_2_1f1_0_1_3.so
include $(PREBUILT_SHARED_LIBRARY)

# Creating prebuilt for dependency: bs-utils - version: 0.2.4
include $(CLEAR_VARS)
LOCAL_MODULE := bs-utils_0_3_4
LOCAL_EXPORT_C_INCLUDES := ./extern/bs-utils/shared
LOCAL_SRC_FILES := extern/libbs-utils_0_3_4.so
include $(PREBUILT_SHARED_LIBRARY)
# Creating prebuilt for dependency: codegen - version: 0.2.6
include $(CLEAR_VARS)
LOCAL_MODULE := codegen_0_2_6
LOCAL_EXPORT_C_INCLUDES := extern/codegen
LOCAL_SRC_FILES := extern/libcodegen_0_2_6.so
include $(PREBUILT_SHARED_LIBRARY)
# Creating prebuilt for dependency: modloader - version: 1.0.2
include $(CLEAR_VARS)
LOCAL_MODULE := modloader
LOCAL_EXPORT_C_INCLUDES := extern/modloader
LOCAL_SRC_FILES := extern/libmodloader.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := replay_0_3_0
LOCAL_SRC_FILES += $(call rwildcard,src/,*.cpp)
LOCAL_SRC_FILES += $(call rwildcard,extern/beatsaber-hook/src/inline-hook,*.cpp)
LOCAL_SRC_FILES += $(call rwildcard,extern/beatsaber-hook/src/inline-hook,*.c)
LOCAL_SHARED_LIBRARIES += modloader
LOCAL_SHARED_LIBRARIES += beatsaber-hook_0_7_1
LOCAL_SHARED_LIBRARIES += bs-utils_0_3_4
LOCAL_SHARED_LIBRARIES += CustomUI_2019_2_1f1_0_1_3
LOCAL_SHARED_LIBRARIES += codegen_0_2_6
LOCAL_LDLIBS += -llog
LOCAL_CFLAGS += -D"MOD_ID=\"replay\"" -D"VERSION=\"0.1.0\"" -I"C:\Program Files\Unity\Hub\Editor\2019.3.15f1\Editor\Data\il2cpp\libil2cpp" -DID='"replay"' -DVERSION='"0.3.0"' -I'./shared' -I'./extern'
LOCAL_CPPFLAGS += -std=c++2a
LOCAL_C_INCLUDES += ./include ./src
include $(BUILD_SHARED_LIBRARY)

# In order to make this mod work with BMBF, you must provide a zip file with the specific libbeatsaber-hook.so (file copied to the libs directory)
# and the mod itself (installed as a hook mod)
