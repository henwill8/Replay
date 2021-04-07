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
# Creating prebuilt for dependency: modloader - version: 1.0.4
include $(CLEAR_VARS)
LOCAL_MODULE := modloader
LOCAL_EXPORT_C_INCLUDES := extern/modloader
LOCAL_SRC_FILES := extern/libmodloader.so
include $(PREBUILT_SHARED_LIBRARY)
# Creating prebuilt for dependency: questui - version: 0.5.0
include $(CLEAR_VARS)
LOCAL_MODULE := questui
LOCAL_EXPORT_C_INCLUDES := extern/questui
LOCAL_SRC_FILES := extern/libquestui.so
include $(PREBUILT_SHARED_LIBRARY)
# Creating prebuilt for dependency: custom-types - version: 0.5.1
include $(CLEAR_VARS)
LOCAL_MODULE := custom-types
LOCAL_EXPORT_C_INCLUDES := extern/custom-types
LOCAL_SRC_FILES := extern/libcustom-types.so
include $(PREBUILT_SHARED_LIBRARY)
# Creating prebuilt for dependency: bs-utils - version: 0.5.9
include $(CLEAR_VARS)
LOCAL_MODULE := bs-utils
LOCAL_EXPORT_C_INCLUDES := extern/bs-utils
LOCAL_SRC_FILES := extern/libbs-utils.so
include $(PREBUILT_SHARED_LIBRARY)
# Creating prebuilt for dependency: beatsaber-hook - version: 1.2.4
include $(CLEAR_VARS)
LOCAL_MODULE := beatsaber-hook_1_2_4
LOCAL_EXPORT_C_INCLUDES := extern/beatsaber-hook
LOCAL_SRC_FILES := extern/libbeatsaber-hook_1_2_4.so
include $(PREBUILT_SHARED_LIBRARY)
# Creating prebuilt for dependency: codegen - version: 0.7.0
include $(CLEAR_VARS)
LOCAL_MODULE := codegen_0_7_0
LOCAL_EXPORT_C_INCLUDES := extern/codegen
LOCAL_SRC_FILES := extern/libcodegen_0_7_0.so
include $(PREBUILT_SHARED_LIBRARY)

#FFmpeg Libraries:

# Creating prebuilt for dependency: ffmpeg - avcodec
include $(CLEAR_VARS)
LOCAL_MODULE := avcodec
LOCAL_EXPORT_C_INCLUDES := extern/ffmpeg/libavcodec
LOCAL_SRC_FILES := extern/libavcodec.so
include $(PREBUILT_SHARED_LIBRARY)
# Creating prebuilt for dependency: ffmpeg - avdevice
include $(CLEAR_VARS)
LOCAL_MODULE := avdevice
LOCAL_EXPORT_C_INCLUDES := extern/ffmpeg/libavdevice
LOCAL_SRC_FILES := extern/libavdevice.so
include $(PREBUILT_SHARED_LIBRARY)
# Creating prebuilt for dependency: ffmpeg - avfilter
include $(CLEAR_VARS)
LOCAL_MODULE := avfilter
LOCAL_EXPORT_C_INCLUDES := extern/ffmpeg/libavfilter
LOCAL_SRC_FILES := extern/libavfilter.so
include $(PREBUILT_SHARED_LIBRARY)
# Creating prebuilt for dependency: ffmpeg - avformat
include $(CLEAR_VARS)
LOCAL_MODULE := avformat
LOCAL_EXPORT_C_INCLUDES := extern/ffmpeg/libavformat
LOCAL_SRC_FILES := extern/libavformat.so
include $(PREBUILT_SHARED_LIBRARY)
# Creating prebuilt for dependency: ffmpeg - avutil
include $(CLEAR_VARS)
LOCAL_MODULE := avutil
LOCAL_EXPORT_C_INCLUDES := extern/ffmpeg/libavutil
LOCAL_SRC_FILES := extern/libavutil.so
include $(PREBUILT_SHARED_LIBRARY)
# Creating prebuilt for dependency: ffmpeg - swresample
include $(CLEAR_VARS)
LOCAL_MODULE := swresample
LOCAL_EXPORT_C_INCLUDES := extern/ffmpeg/libswresample
LOCAL_SRC_FILES := extern/libswresample.so
include $(PREBUILT_SHARED_LIBRARY)
# Creating prebuilt for dependency: ffmpeg - swscale
include $(CLEAR_VARS)
LOCAL_MODULE := swscale
LOCAL_EXPORT_C_INCLUDES := extern/ffmpeg/libswscale
LOCAL_SRC_FILES := extern/libswscale.so
include $(PREBUILT_SHARED_LIBRARY)
# Creating prebuilt for dependency: ffmpeg - mobileffmpeg
include $(CLEAR_VARS)
LOCAL_MODULE := mobileffmpeg
LOCAL_SRC_FILES := extern/libmobileffmpeg.so
include $(PREBUILT_SHARED_LIBRARY)
# Creating prebuilt for dependency: ffmpeg - mobileffmpegabidetect
include $(CLEAR_VARS)
LOCAL_MODULE := mobileffmpegabidetect
LOCAL_SRC_FILES := extern/libmobileffmpeg_abidetect.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := replay
LOCAL_LDLIBS := -lGLESv3
LOCAL_SRC_FILES += $(call rwildcard,src/,*.cpp)
LOCAL_SRC_FILES += $(call rwildcard,extern/beatsaber-hook/src/inline-hook,*.cpp)
LOCAL_SRC_FILES += $(call rwildcard,extern/beatsaber-hook/src/inline-hook,*.c)
LOCAL_SHARED_LIBRARIES += modloader
LOCAL_SHARED_LIBRARIES += beatsaber-hook_1_2_4
LOCAL_SHARED_LIBRARIES += codegen_0_7_0
LOCAL_SHARED_LIBRARIES += questui
LOCAL_SHARED_LIBRARIES += custom-types
LOCAL_SHARED_LIBRARIES += bs-utils
LOCAL_SHARED_LIBRARIES += avcodec
LOCAL_SHARED_LIBRARIES += avformat
LOCAL_SHARED_LIBRARIES += avutil
LOCAL_SHARED_LIBRARIES += swscale
LOCAL_SHARED_LIBRARIES += mobileffmpegabidetect
LOCAL_SHARED_LIBRARIES += mobileffmpeg
LOCAL_LDLIBS += -llog
LOCAL_CFLAGS += -D"MOD_ID=\"replay\"" -D"VERSION=\"0.1.0\"" -I"extern/libil2cpp/il2cpp/libil2cpp" -DID='"replay"' -I'./shared' -I'./extern' -I'./extern/codegen/include' -I'./extern/ffmpeg'
LOCAL_CPPFLAGS += -std=c++2a
LOCAL_C_INCLUDES += ./include ./src
LOCAL_CPP_FEATURES += exceptions
# LOCAL_SHARED_LIBRARIES += avdevice
# LOCAL_SHARED_LIBRARIES += avfilter
# LOCAL_SHARED_LIBRARIES += postproc
# LOCAL_SHARED_LIBRARIES += swresample
# LOCAL_SHARED_LIBRARIES += mobileffmpeg
# LOCAL_SHARED_LIBRARIES += mobileffmpegabidetect
include $(BUILD_SHARED_LIBRARY)

# In order to make this mod work with BMBF, you must provide a zip file with the specific libbeatsaber-hook.so (file copied to the libs directory)
# and the mod itself (installed as a hook mod)
