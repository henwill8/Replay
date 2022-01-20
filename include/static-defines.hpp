#pragma once

#include "modloader/shared/modloader.hpp"
#include "beatsaber-hook/shared/utils/logging.hpp"
#include "beatsaber-hook/shared/utils/hooking.hpp"
#include "custom-types/shared/register.hpp"
#include "questui/shared/QuestUI.hpp"
#include "hooks.hpp"

using byte = unsigned char;

#define eventIdByteSize 1
#define eventCountByteSize 4

#define replayMagicBytes 0x443d3d38
#define fileVersion 0b00000000
#define replayFileExtension ".questplay"

// My excuse for it being defined here is for universal colors across the mod, definitely belongs in this file yep
#define RED std::string("#cc1818")
#define GREEN std::string("#2adb44")
#define TEAL std::string("#1dbcd1")

#define USE_CODEGEN_FIELDS

static ModInfo modInfo;

static Logger& replayLogger()
{
    modInfo.id = ID;
    modInfo.version = VERSION;
	static Logger* logger = new Logger(modInfo, LoggerOptions(false, true));
	return *logger;
}

#define log(...) replayLogger().info(__VA_ARGS__)