#include "static-defines.hpp"

#include "GlobalNamespace/FlyingScoreEffect.hpp"
#include "GlobalNamespace/NoteCutInfo.hpp"
#include "GlobalNamespace/SaberSwingRatingCounter.hpp"
#include "GlobalNamespace/ISaberSwingRatingCounter.hpp"
#include "ReplayManager.hpp"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(FlyingScoreEffect_InitAndPresent, &FlyingScoreEffect::InitAndPresent, void, FlyingScoreEffect* self, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo, int multiplier, float duration, UnityEngine::Vector3 targetPos, UnityEngine::Quaternion rotation, UnityEngine::Color color) {
    FlyingScoreEffect_InitAndPresent(self, noteCutInfo, multiplier, duration, targetPos, rotation, color);

    if(ReplayManager::replayState == ReplayState::REPLAYING) {
        self->HandleSaberSwingRatingCounterDidChange(reinterpret_cast<ISaberSwingRatingCounter *>(noteCutInfo->swingRatingCounter), 0);
    }
}

void FlyingScoreEffectHook(Logger& logger) {
    INSTALL_HOOK(logger, FlyingScoreEffect_InitAndPresent);
}

ReplayInstallHooks(FlyingScoreEffectHook);