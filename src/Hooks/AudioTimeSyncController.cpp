#include "static-defines.hpp"

#include "GlobalNamespace/AudioTimeSyncController.hpp"
#include "Utils/SongUtils.hpp"
#include "ReplayManager.hpp"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_FIND_INSTANCE(AudioTimeSyncController_ctor, classof(AudioTimeSyncController*), ".ctor", void, AudioTimeSyncController* self) {
    AudioTimeSyncController_ctor(self);

    SongUtils::audioTimeSyncController = self;
    SongUtils::inSong = true;

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