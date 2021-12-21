#include "static-defines.hpp"

#include "GlobalNamespace/NoteController.hpp"
#include "GlobalNamespace/NoteCutInfo.hpp"
#include "ReplayManager.hpp"

using namespace GlobalNamespace;
using namespace Replay;

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
    INSTALL_HOOK(logger, NoteController_SendNoteWasCutEvent);
    INSTALL_HOOK(logger, NoteController_SendNoteWasMissedEvent);
}

ReplayInstallHooks(NoteControllerHook);