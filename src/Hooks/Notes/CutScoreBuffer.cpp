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
        ReplayManager::recorder.noteEventRecorder.AddCutEvent(self);
    }
}

void CutScoreBufferHook(Logger& logger) {
    INSTALL_HOOK(logger, CutScoreBuffer_HandleSaberSwingRatingCounterDidFinish);
}

ReplayInstallHooks(CutScoreBufferHook);