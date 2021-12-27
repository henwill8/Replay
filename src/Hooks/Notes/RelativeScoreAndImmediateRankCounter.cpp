#include "static-defines.hpp"

#include "GlobalNamespace/RelativeScoreAndImmediateRankCounter.hpp"
#include "GlobalNamespace/ScoreModel.hpp"
#include "Utils/SongUtils.hpp"
#include "ReplayManager.hpp"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(RelativeScoreAndImmediateRankCounter_HandleScoreControllerImmediateMaxPossibleScoreDidChange, &RelativeScoreAndImmediateRankCounter::HandleScoreControllerImmediateMaxPossibleScoreDidChange, void, RelativeScoreAndImmediateRankCounter* self, int immediateMaxPossibleScore, int immediateMaxPossibleModifiedScore) {
    if(ReplayManager::replayState == ReplayState::REPLAYING) {
        immediateMaxPossibleScore = ScoreModel::MaxRawScoreForNumberOfNotes(SongUtils::scoreController->cutOrMissedNotes);
        immediateMaxPossibleModifiedScore = ScoreModel::GetModifiedScoreForGameplayModifiersScoreMultiplier(immediateMaxPossibleScore, SongUtils::scoreController->gameplayModifiersScoreMultiplier);
    }
    
    RelativeScoreAndImmediateRankCounter_HandleScoreControllerImmediateMaxPossibleScoreDidChange(self, immediateMaxPossibleScore, immediateMaxPossibleModifiedScore);
}

void RelativeScoreAndImmediateRankCounterHook(Logger& logger) {
    INSTALL_HOOK(logger, RelativeScoreAndImmediateRankCounter_HandleScoreControllerImmediateMaxPossibleScoreDidChange);
}

ReplayInstallHooks(RelativeScoreAndImmediateRankCounterHook);