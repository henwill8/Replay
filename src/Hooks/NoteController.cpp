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
        auto noteHash = Replay::ReplayUtils::GetNoteHash(self);
        auto& replayMissEvents = ReplayManager::replayer.noteEventReplayer.missEvents;
        auto& replayCutEvents = ReplayManager::replayer.noteEventReplayer.cutEvents;
        auto& replayActiveMissEvents = ReplayManager::replayer.noteEventReplayer.activeMissEvents;

        for (auto eventIt = replayCutEvents.begin(); eventIt != replayCutEvents.end(); eventIt++) {
            auto const &noteCutEvent = *eventIt;

            if(noteHash == noteCutEvent.noteHash) {
                ReplayManager::replayer.noteEventReplayer.activeCutEvents.emplace_back(self, noteCutEvent);

                ReplayManager::replayer.noteEventReplayer.cutEvents.erase(eventIt);

                break;
            }

        }

        for (auto eventIt = replayMissEvents.begin(); eventIt != replayMissEvents.end(); eventIt++) {
            auto const &noteMissEvent = *eventIt;
            if(noteHash == noteMissEvent.noteHash) {
                replayActiveMissEvents.emplace_back(self, noteMissEvent);

                replayMissEvents.erase(eventIt);

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