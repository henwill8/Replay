// Implementation by https://github.com/StackDoubleFlow
// yoinked from 
#pragma once
#include "beatsaber-hook/shared/utils/logging.hpp"
#include <vector>

namespace Replay {
    class Hooks {
    private:
        static inline std::vector<void(*)(Logger& logger)> installFuncs;
    public:
        static void AddInstallFunc(void(*installFunc)(Logger& logger)) 
        {
            installFuncs.push_back(installFunc);
        }

        static void InstallHooks(Logger& logger)
        {
            for (auto installFunc : installFuncs)
            {
                installFunc(logger);
            }
        }
    };
}

#define ReplayInstallHooks(func) \
struct __ReplayRegister##func { \
	__ReplayRegister##func() { \
		Replay::Hooks::AddInstallFunc(func); \
	} \
}; \
static __ReplayRegister##func __ReplayRegisterInstance##func;