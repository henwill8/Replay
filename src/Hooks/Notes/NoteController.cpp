#include "static-defines.hpp"

#include "GlobalNamespace/NoteController.hpp"
#include "GlobalNamespace/NoteCutInfo.hpp"
#include "ReplayManager.hpp"
#include "Replaying/NoteEventReplayer.hpp"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(NoteController_Init, &NoteController::Init, void, GlobalNamespace::NoteController* self, NoteData* noteData, float worldRotation, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, float endRotation, float uniformScale, bool rotateTowardsPlayer, bool useRandomRotation) {
    NoteController_Init(self, noteData, worldRotation, moveStartPos, moveEndPos, jumpEndPos, moveDuration, jumpDuration, jumpGravity, endRotation, uniformScale, rotateTowardsPlayer, useRandomRotation);

    if(ReplayManager::replayState == ReplayState::REPLAYING) {
        ReplayManager::replayer.noteEventReplayer.AddActiveEvents(self);
    }
}

MAKE_HOOK_MATCH(NoteController_SendNoteWasCutEvent, &NoteController::SendNoteWasCutEvent, void, NoteController* self, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo) {
    NoteController_SendNoteWasCutEvent(self, noteCutInfo);

    if(ReplayManager::replayState == ReplayState::RECORDING && !noteCutInfo->get_allIsOK()) {
        ReplayManager::recorder.noteEventRecorder.AddCutEvent(noteCutInfo.heldRef, SongUtils::GetSongTime());
    }
}

MAKE_HOOK_MATCH(NoteController_SendNoteWasMissedEvent, &NoteController::SendNoteWasMissedEvent, void, NoteController* self) {
    NoteController_SendNoteWasMissedEvent(self);

    if(ReplayManager::replayState == ReplayState::RECORDING) {
        ReplayManager::recorder.noteEventRecorder.AddMissEvent(self);
    }
}

void NoteControllerHook(Logger& logger) {
    INSTALL_HOOK(logger, NoteController_Init);
    INSTALL_HOOK(logger, NoteController_SendNoteWasCutEvent);
    INSTALL_HOOK(logger, NoteController_SendNoteWasMissedEvent);
}

ReplayInstallHooks(NoteControllerHook);