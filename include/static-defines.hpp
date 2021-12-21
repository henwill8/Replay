#pragma once

#include "modloader/shared/modloader.hpp"
#include "beatsaber-hook/shared/utils/logging.hpp"
#include "beatsaber-hook/shared/utils/hooking.hpp"
#include "custom-types/shared/register.hpp"
#include "questui/shared/QuestUI.hpp"
#include "hooks.hpp"

typedef unsigned char byte;

#define eventIdByteSize 1
#define eventCountByteSize 4

#define replayMagicBytes 0x2971B5F8
#define fileVersion 0b00000000
#define replayFileExtension ".questplay"

static ModInfo modInfo;

static Logger& replayLogger()
{
    modInfo.id = ID;
    modInfo.version = VERSION;
	static Logger* logger = new Logger(modInfo, LoggerOptions(false, true));
	return *logger;
}

#define log(...) replayLogger().info(__VA_ARGS__)