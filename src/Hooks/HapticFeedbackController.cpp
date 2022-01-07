#include "static-defines.hpp"

#include "GlobalNamespace/HapticFeedbackController.hpp"
#include "Utils/SongUtils.hpp"
#include "ReplayManager.hpp"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(HapticFeedbackController_PlayHapticFeedback, &HapticFeedbackController::PlayHapticFeedback, void, HapticFeedbackController* self, UnityEngine::XR::XRNode node, Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset) {
    if(SongUtils::inSong && ReplayManager::replayState == ReplayState::REPLAYING) return;

    HapticFeedbackController_PlayHapticFeedback(self, node, hapticPreset);
}

void HapticFeedbackControllerHook(Logger& logger) {
    INSTALL_HOOK(logger, HapticFeedbackController_PlayHapticFeedback);
}

ReplayInstallHooks(HapticFeedbackControllerHook);