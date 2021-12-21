#include "static-defines.hpp"

#include "GlobalNamespace/AudioTimeSyncController.hpp"
#include "SongData.hpp"
#include "ReplayManager.hpp"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_FIND_INSTANCE(AudioTimeSyncController_ctor, classof(AudioTimeSyncController*), ".ctor", void, AudioTimeSyncController* self) {
    AudioTimeSyncController_ctor(self);

    SongData::audioTimeSyncController = self;
    
    ReplayManager::replayState = ReplayState::REPLAYING;// TEMPORARY, REMOVE WHEN BUTTONS ARE ADDED

    if(ReplayManager::replayState == ReplayState::RECORDING) {
        ReplayManager::recorder = ReplayRecorder();
        ReplayManager::recorder.Init();
    } else if(ReplayManager::replayState == ReplayState::REPLAYING) {
        ReplayManager::replayer = Replayer();
        ReplayManager::replayer.Init();
    }
}

void AudioTimeSyncControllerHook(Logger& logger) {
    INSTALL_HOOK(logger, AudioTimeSyncController_ctor);
}

ReplayInstallHooks(AudioTimeSyncControllerHook);