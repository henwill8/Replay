#include "static-defines.hpp"

#include "GlobalNamespace/PlayerTransforms.hpp"
#include "Recording/PlayerRecorder.hpp"
#include "EventTypes.hpp"
#include "ReplayManager.hpp"
#include "fstream"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(PlayerTransforms_Update, &GlobalNamespace::PlayerTransforms::Update, void, GlobalNamespace::PlayerTransforms* self) {
    PlayerTransforms_Update(self);

    if(ReplayManager::replayState == ReplayState::RECORDING) {
        ReplayManager::recorder.playerRecorder.AddEvent(PlayerEventTypes::PlayerTransforms(self->headPseudoLocalPos, self->headPseudoLocalRot, self->leftHandPseudoLocalPos, self->leftHandPseudoLocalRot, self->rightHandPseudoLocalPos, self->rightHandPseudoLocalRot));
    } else if(ReplayManager::replayState == ReplayState::REPLAYING) {
        ReplayManager::replayer.playerReplayer.SetPlayerTransforms(self);
    }
}

void PlayerTransformsHook(Logger& logger) {
    INSTALL_HOOK(logger, PlayerTransforms_Update);
}

ReplayInstallHooks(PlayerTransformsHook);