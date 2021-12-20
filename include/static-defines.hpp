#pragma once

#include "modloader/shared/modloader.hpp"
#include "beatsaber-hook/shared/utils/logging.hpp"
#include "beatsaber-hook/shared/utils/hooking.hpp"
#include "custom-types/shared/register.hpp"
#include "questui/shared/QuestUI.hpp"
#include "hooks.hpp"

#ifndef ID
#define ID "Replay"
#endif

#ifndef VERSION
#define VERSION "1.0.0"
#endif

#define eventIdByteSize 1
#define eventSizeByteSize 4
#define eventCountByteSize 4

#define replayFileExtension ".questplay"

typedef unsigned char byte;

static ModInfo modInfo;

static Logger& getLogger()
{
	static Logger* logger = new Logger(modInfo, LoggerOptions(false, true));
	return *logger;
}

#define log(...) getLogger().info(__VA_ARGS__)