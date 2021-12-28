#include "static-defines.hpp"

#include "Utils/SaberUtils.hpp"
#include "GlobalNamespace/SaberManager.hpp"
#include "UnityEngine/Resources.hpp"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(SaberManager_Start, &SaberManager::Start, void, SaberManager* self) {
    SaberManager_Start(self);
    SaberUtils::saberManager = self;
}

void SaberManagerHook(Logger& logger) {
    INSTALL_HOOK(logger, SaberManager_Start);
}

ReplayInstallHooks(SaberManagerHook);