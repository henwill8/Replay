#pragma once

// Comment if no FFMPEG recording with smooth camera
#define DO_FPS_RECORD

#include "codegen.hpp"

#include <unordered_set>
#include <map>
#include <list>
#include <tuple> // for tuple 
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <sstream>

#include "beatsaber-hook/shared/utils/il2cpp-utils.hpp"  
#include "beatsaber-hook/shared/utils/il2cpp-functions.hpp"
#include "questui/shared/BeatSaberUI.hpp"
#include "custom-types/shared/macros.hpp"
#include "custom-types/shared/register.hpp"
#include "custom-types/shared/types.hpp"
#include "beatsaber-hook/shared/utils/utils.h"  
#include "beatsaber-hook/shared/config/rapidjson-utils.hpp"
#include "beatsaber-hook/shared/config/config-utils.hpp"
#include "modloader/shared/modloader.hpp"

using namespace il2cpp_utils;

Configuration& getConfig();

static ModInfo modInfo;

Logger& loggingFunction();

#define log(...) loggingFunction().info(__VA_ARGS__)

// Remove when using bs-hooks >=2.1.0
template<class T>
struct MethodDecomposer;

template<typename R, typename... TArgs>
struct MethodDecomposer<R (*)(TArgs...)> {
    using mPtr = R (*)(TArgs...);
};

template<typename R, typename T, typename... TArgs>
struct MethodDecomposer<R (T::*)(TArgs...)> {
    using mPtr = R (*)(T*, TArgs...);
};

template<auto val>
concept is_valid_il2cpp_method = requires (decltype(val) v) {
    typename MethodDecomposer<decltype(val)>::mPtr;
};

template<auto val>
requires (is_valid_il2cpp_method<val>)
struct FPtrWrapper {
    static auto get() {
        return reinterpret_cast<typename MethodDecomposer<decltype(val)>::mPtr>(il2cpp_utils::il2cpp_type_check::MetadataGetter<val>::get()->methodPointer);
    }

    static auto get(const MethodInfo* method) {
        return reinterpret_cast<typename MethodDecomposer<decltype(val)>::mPtr>(method->methodPointer);
    }
};