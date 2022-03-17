#include "static-defines.hpp"

#include "GlobalNamespace/SaberSwingRatingCounter.hpp"
#include "GlobalNamespace/BladeMovementDataElement.hpp"
#include "Recording/NoteEventRecorder.hpp"
#include "Recording/ReplayRecorder.hpp"
#include "ReplayManager.hpp"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(SaberSwingRatingCounter_ProcessNewData, &SaberSwingRatingCounter::ProcessNewData, void, SaberSwingRatingCounter* self, BladeMovementDataElement newData, BladeMovementDataElement prevData, bool prevDataAreValid) {
    if(ReplayManager::replayState == ReplayState::REPLAYING) {
        self->Finish();
        return;
    }
    
    SaberSwingRatingCounter_ProcessNewData(self, newData, prevData, prevDataAreValid);
}

void SaberSwingRatingCounterHook(Logger& logger) {
    INSTALL_HOOK(logger, SaberSwingRatingCounter_ProcessNewData);
}

ReplayInstallHooks(SaberSwingRatingCounterHook);