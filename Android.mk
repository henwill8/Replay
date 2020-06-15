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

# Build the modloader shared library
include $(CLEAR_VARS)
LOCAL_MODULE	        := modloader
LOCAL_SRC_FILES         := ./extern/beatsaber-hook/include/libs/libmodloader.so
LOCAL_EXPORT_C_INCLUDES := ./extern/beatsaber-hook/include/
include $(PREBUILT_SHARED_LIBRARY)

# Build the beatsaber-hook shared library, SPECIFICALLY VERSIONED!
include $(CLEAR_VARS)
LOCAL_MODULE	        := beatsaber-hook_TESTHOOK
LOCAL_SRC_FILES         := ./extern/beatsaber-hook/include/libs/libbeatsaber-hook_TESTHOOK.so
LOCAL_EXPORT_C_INCLUDES := ./extern/beatsaber-hook/shared/
include $(PREBUILT_SHARED_LIBRARY)

# Build the CustomUI shared library
include $(CLEAR_VARS)
LOCAL_MODULE	        := CustomUI_2019_2_1f1_0_1_3
LOCAL_SRC_FILES         := ./extern/BeatSaberQuestCustomUI/libs/arm64-v8a/libcustomui_2019_2_1f1_0_1_3.so
LOCAL_EXPORT_C_INCLUDES := ./extern/BeatSaberQuestCustomUI/shared
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
# Include the two libraries
LOCAL_SHARED_LIBRARIES := modloader
LOCAL_SHARED_LIBRARIES += beatsaber-hook_TESTHOOK
LOCAL_SHARED_LIBRARIES += CustomUI_2019_2_1f1_0_1_3
LOCAL_LDLIBS     := -llog
LOCAL_CFLAGS     := -D"MOD_ID=\"replay\"" -D"VERSION=\"0.1.0\"" -I"c:/Program Files/Unity/Hub/Editor/2019.3.2f1/Editor/Data/il2cpp/libil2cpp"
LOCAL_MODULE     := replay
LOCAL_CPPFLAGS   := -std=c++2a
LOCAL_C_INCLUDES := ./include ./src
LOCAL_SRC_FILES  += $(call rwildcard,src/,*.cpp) ./extern/beatsaber-hook/src/inline-hook/And64InlineHook.cpp
include $(BUILD_SHARED_LIBRARY)

# In order to make this mod work with BMBF, you must provide a zip file with the specific libbeatsaber-hook.so (file copied to the libs directory)
# and the mod itself (installed as a hook mod)