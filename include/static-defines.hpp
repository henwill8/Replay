#pragma once

#define ID "Replay"
#define VERSION "1.0.0"

static ModInfo modInfo;

static Logger& getLogger()
{
	static Logger* logger = new Logger(modInfo, LoggerOptions(false, true));
	return *logger;
}

#define log(...) getLogger().info(__VA_ARGS__)