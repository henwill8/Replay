#include "static-defines.hpp"

#include "GlobalNamespace/NoteController.hpp"
#include "GlobalNamespace/NoteCutInfo.hpp"
#include "ReplayManager.hpp"
#include "Replaying/NoteEventReplayer.hpp"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(NoteController_Init, &NoteController::Init, void, GlobalNamespace::NoteController* self, NoteData* noteData, float worldRotation, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, float endRotation, float uniformScale) {
    NoteController_Init(self, noteData, worldRotation, moveStartPos, moveEndPos, jumpEndPos, moveDuration, jumpDuration, jumpGravity, endRotation, uniformScale);

    if(ReplayManager::replayState == ReplayState::REPLAYING) {
        int noteHash = Replay::ReplayUtils::GetNoteHash(self);
        for(int i = 0; i < ReplayManager::replayer.noteEventReplayer.cutEvents.size(); i++) {
            if(noteHash == ReplayManager::replayer.noteEventReplayer.cutEvents[i].noteHash) {
                ActiveNoteCutEvent activeEvent{self, ReplayManager::replayer.noteEventReplayer.cutEvents[i]};

                ReplayManager::replayer.noteEventReplayer.activeCutEvents.push_back(activeEvent);

                ReplayManager::replayer.noteEventReplayer.cutEvents.erase(ReplayManager::replayer.noteEventReplayer.cutEvents.begin() + i);

                break;
            }
        }

        for(int i = 0; i < ReplayManager::replayer.noteEventReplayer.missEvents.size(); i++) {
            if(noteHash == ReplayManager::replayer.noteEventReplayer.missEvents[i].noteHash) {
                ActiveNoteMissEvent activeEvent{self, ReplayManager::replayer.noteEventReplayer.missEvents[i]};

                ReplayManager::replayer.noteEventReplayer.activeMissEvents.push_back(activeEvent);

                ReplayManager::replayer.noteEventReplayer.missEvents.erase(ReplayManager::replayer.noteEventReplayer.missEvents.begin() + i);

                break;
            }
        }
    }
}

MAKE_HOOK_MATCH(NoteController_SendNoteWasCutEvent, &NoteController::SendNoteWasCutEvent, void, NoteController* self, ByRef<NoteCutInfo> noteCutInfo) {
    NoteController_SendNoteWasCutEvent(self, noteCutInfo);

    if(ReplayManager::replayState == ReplayState::RECORDING) {
        ReplayManager::recorder.noteEventRecorder.AddCutEvent(self, noteCutInfo);
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
    // INSTALL_HOOK(logger, NoteController_SendNoteWasCutEvent);
    INSTALL_HOOK(logger, NoteController_SendNoteWasMissedEvent);
}

ReplayInstallHooks(NoteControllerHook);