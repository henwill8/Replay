#include "static-defines.hpp"

#include "GlobalNamespace/CutScoreBuffer.hpp"
#include "GlobalNamespace/NoteCutInfo.hpp"
#include "GlobalNamespace/NoteData.hpp"
#include "GlobalNamespace/GoodCutScoringElement.hpp"
#include "ReplayManager.hpp"
#include "Recording/NoteEventRecorder.hpp"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(GoodCutScoringElement_Init, &GoodCutScoringElement::Init, void, GoodCutScoringElement* self, NoteCutInfo noteCutInfo) {
    GoodCutScoringElement_Init(self, noteCutInfo);

    if(ReplayManager::replayState == ReplayState::REPLAYING) {
        self->cutScoreBuffer->saberSwingRatingCounter->Finish();

        float beforeCutScore = 0.0f;
        float afterCutScore = 0.0f;

        auto noteHash = Replay::ReplayUtils::GetNoteHash(noteCutInfo.noteData);

        for (auto eventIt = ReplayManager::replayer.noteEventReplayer.swingRatings.begin(); eventIt != ReplayManager::replayer.noteEventReplayer.swingRatings.end(); eventIt++) {
            auto const &swingRating = *eventIt;

            if(noteHash == swingRating.noteHash) {
                beforeCutScore = swingRating.swingRating.beforeCutRating;
                afterCutScore = swingRating.swingRating.afterCutRating;

                ReplayManager::replayer.noteEventReplayer.swingRatings.erase(eventIt);

                break;
            }
        }

        self->cutScoreBuffer->afterCutScore = beforeCutScore;
        self->cutScoreBuffer->beforeCutScore = afterCutScore;
    }
}

void GoodCutScoringElementHook(Logger& logger) {
    INSTALL_HOOK(logger, GoodCutScoringElement_Init);
}

ReplayInstallHooks(GoodCutScoringElementHook);