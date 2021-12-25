#include "static-defines.hpp"

#include "GlobalNamespace/GameNoteController.hpp"
#include "ReplayManager.hpp"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(GameNoteController_NoteDidPassMissedMarker, &GameNoteController::NoteDidPassMissedMarker, void, GameNoteController* self) {
    if(ReplayManager::replayState == ReplayState::REPLAYING) {
        return;
    }
    
    GameNoteController_NoteDidPassMissedMarker(self);
}

void GameNoteControllerHook(Logger& logger) {
    INSTALL_HOOK(logger, GameNoteController_NoteDidPassMissedMarker);
}

ReplayInstallHooks(GameNoteControllerHook);