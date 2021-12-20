#include "static-defines.hpp"

#include "GlobalNamespace/AudioTimeSyncController.hpp"
#include "SongData.hpp"

using namespace GlobalNamespace;

MAKE_HOOK_FIND_INSTANCE(AudioTimeSyncController_ctor, classof(AudioTimeSyncController*), ".ctor", void, AudioTimeSyncController* self) {
    AudioTimeSyncController_ctor(self);

    Replay::SongData::audioTimeSyncController = self;
}

void AudioTimeSyncControllerHook(Logger& logger) {
    INSTALL_HOOK(logger, AudioTimeSyncController_ctor);
}

ReplayInstallHooks(AudioTimeSyncControllerHook);