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
