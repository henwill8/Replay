#include "static-defines.hpp"

#include "GlobalNamespace/PlayerTransforms.hpp"
#include "Recording/PlayerRecorder.hpp"
#include "fstream"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(PlayerTransforms_Update, &GlobalNamespace::PlayerTransforms::Update, void, GlobalNamespace::PlayerTransforms* self) {
    PlayerTransforms_Update(self);

    std::ifstream f("sdcard/test.replay", std::ios::binary);

    if(PlayerRecorder::GetEventCount() < 900) {
        PlayerRecorder::AddEvent(PlayerRecorder::TransformsToPlayerTransforms(self->headTransform, self->leftHandTransform, self->rightHandTransform));
    } else if(!f.good()) {
        std::ofstream o("sdcard/test.replay", std::ios::binary);
        PlayerRecorder::WriteEvents(o);
    }
}

void PlayerTransformsHook(Logger& logger) {
    INSTALL_HOOK(logger, PlayerTransforms_Update);
}

ReplayInstallHooks(PlayerTransformsHook);