#include "static-defines.hpp"

#include "GlobalNamespace/CutScoreBuffer.hpp"
#include "GlobalNamespace/NoteCutInfo.hpp"
#include "GlobalNamespace/NoteData.hpp"
#include "GlobalNamespace/ISaberSwingRatingCounter.hpp"
#include "ReplayManager.hpp"
#include "Recording/NoteEventRecorder.hpp"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(CutScoreBuffer_HandleSaberSwingRatingCounterDidFinish, &CutScoreBuffer::HandleSaberSwingRatingCounterDidFinish, void, CutScoreBuffer* self, ISaberSwingRatingCounter* swingRatingCounter) {
    CutScoreBuffer_HandleSaberSwingRatingCounterDidFinish(self, swingRatingCounter);

    if(ReplayManager::replayState == ReplayState::RECORDING) {
        auto &cutTimes = ReplayManager::recorder.noteEventRecorder.cutTimes;

        for (auto eventIt = cutTimes.begin(); eventIt != cutTimes.end(); eventIt++) {
            auto const &cutTime = *eventIt;

            if(cutTime.second == self) {
                ReplayManager::recorder.noteEventRecorder.AddCutEvent(self, cutTime.first);

                cutTimes.erase(eventIt);

                return;
            }
        }
    }
}

MAKE_HOOK_MATCH(CutScoreBuffer_RefreshScores, &CutScoreBuffer::RefreshScores, void, CutScoreBuffer* self) {
    CutScoreBuffer_RefreshScores(self);

    self->beforeCutScore = 70.0f;
    self->afterCutScore = 100.0f;
}

MAKE_HOOK_MATCH(CutScoreBuffer_Init, &CutScoreBuffer::Init, bool, CutScoreBuffer* self, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo) {
    bool returnValue = CutScoreBuffer_Init(self, noteCutInfo);
    
    if(ReplayManager::replayState == ReplayState::RECORDING) {
        if(returnValue) {
            ReplayManager::recorder.noteEventRecorder.cutTimes.push_back(std::make_pair(SongUtils::GetSongTime(), self));
        } else {
            ReplayManager::recorder.noteEventRecorder.AddCutEvent(self, SongUtils::GetSongTime());
        }
    }

    return returnValue;
}

void CutScoreBufferHook(Logger& logger) {
    INSTALL_HOOK(logger, CutScoreBuffer_HandleSaberSwingRatingCounterDidFinish);
    INSTALL_HOOK(logger, CutScoreBuffer_Init);
    INSTALL_HOOK(logger, CutScoreBuffer_RefreshScores);
}

ReplayInstallHooks(CutScoreBufferHook);