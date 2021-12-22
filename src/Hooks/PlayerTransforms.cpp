#include "static-defines.hpp"

#include "GlobalNamespace/PlayerTransforms.hpp"
#include "Recording/PlayerRecorder.hpp"
#include "ReplayManager.hpp"
#include "fstream"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(PlayerTransforms_Update, &GlobalNamespace::PlayerTransforms::Update, void, GlobalNamespace::PlayerTransforms* self) {
    PlayerTransforms_Update(self);

    if(ReplayManager::replayState == ReplayState::RECORDING) {
        ReplayManager::recorder.playerRecorder.AddEvent(PlayerRecorder::TransformsToPlayerTransforms(self->headTransform, self->leftHandTransform, self->rightHandTransform));
    } else if(ReplayManager::replayState == ReplayState::REPLAYING) {
        // ReplayManager::replayer.playerReplayer.SetPlayerTransforms(self->headTransform, self->leftHandTransform, self->rightHandTransform);
    }
}

void PlayerTransformsHook(Logger& logger) {
    INSTALL_HOOK(logger, PlayerTransforms_Update);
}

ReplayInstallHooks(PlayerTransformsHook);