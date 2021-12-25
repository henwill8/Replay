#include "static-defines.hpp"

#include "GlobalNamespace/BombNoteController.hpp"
#include "ReplayManager.hpp"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(BombNoteController_NoteDidPassMissedMarker, &BombNoteController::NoteDidPassMissedMarker, void, BombNoteController* self) {
    if(ReplayManager::replayState == ReplayState::REPLAYING) {
        return;
    }
    
    BombNoteController_NoteDidPassMissedMarker(self);
}

void BombNoteControllerHook(Logger& logger) {
    INSTALL_HOOK(logger, BombNoteController_NoteDidPassMissedMarker);
}

ReplayInstallHooks(BombNoteControllerHook);