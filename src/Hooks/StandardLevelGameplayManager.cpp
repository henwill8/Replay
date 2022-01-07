#include "static-defines.hpp"

#include "GlobalNamespace/StandardLevelGameplayManager.hpp"
#include "Utils/SongUtils.hpp"
#include "ReplayManager.hpp"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(StandardLevelGameplayManager_HandleGameEnergyDidReach0, &StandardLevelGameplayManager::HandleGameEnergyDidReach0, void, StandardLevelGameplayManager* self) {
    if(ReplayManager::replayState == ReplayState::RECORDING) {
        SongUtils::didFail = true;
        SongUtils::failTime = SongUtils::GetSongTime();
    }

    StandardLevelGameplayManager_HandleGameEnergyDidReach0(self);
}

void StandardLevelGameplayManagerHook(Logger& logger) {
    INSTALL_HOOK(logger, StandardLevelGameplayManager_HandleGameEnergyDidReach0);
}

ReplayInstallHooks(StandardLevelGameplayManagerHook);