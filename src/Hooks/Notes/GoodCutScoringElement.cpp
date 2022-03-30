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
        self->cutScoreBuffer->HandleSaberSwingRatingCounterDidFinish(reinterpret_cast<ISaberSwingRatingCounter*>(self->cutScoreBuffer->saberSwingRatingCounter));
        self->set_isFinished(true);
    }
}

void GoodCutScoringElementHook(Logger& logger) {
    INSTALL_HOOK(logger, GoodCutScoringElement_Init);
}

ReplayInstallHooks(GoodCutScoringElementHook);