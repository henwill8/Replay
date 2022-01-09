#include "static-defines.hpp"

#include "GlobalNamespace/AudioTimeSyncController.hpp"
#include "UnityEngine/AudioSource.hpp"
#include "Utils/SongUtils.hpp"
#include "ReplayManager.hpp"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_FIND_INSTANCE(AudioTimeSyncController_ctor, classof(AudioTimeSyncController*), ".ctor", void, AudioTimeSyncController* self) {
    AudioTimeSyncController_ctor(self);

    SongUtils::audioTimeSyncController = self;
    SongUtils::inSong = true;

    if(ReplayManager::replayState == ReplayState::RECORDING) {
        SongUtils::didFail = false;

        ReplayManager::recorder = ReplayRecorder();
        ReplayManager::recorder.Init();
    } else if(ReplayManager::replayState == ReplayState::REPLAYING) {
        ReplayManager::replayer = Replayer();
        ReplayManager::replayer.Init();
    }
}

MAKE_HOOK_MATCH(SongUpdate, &AudioTimeSyncController::Update, void, AudioTimeSyncController* self) {
    
    // log("SongUpdate");

    if(ReplayManager::replayState == ReplayState::REPLAYING) {
        // UnityEngine::AudioSource* audio = self->audioSource;

        // float roundedReplaySpeed = float(int((0.25f)*100))/100;

        // self->timeScale = roundedReplaySpeed;
        // audio->set_pitch(roundedReplaySpeed);
    }

    SongUpdate(self);
}

void AudioTimeSyncControllerHook(Logger& logger) {
    INSTALL_HOOK(logger, AudioTimeSyncController_ctor);
    INSTALL_HOOK(logger, SongUpdate);
}

ReplayInstallHooks(AudioTimeSyncControllerHook);