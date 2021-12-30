#include "static-defines.hpp"

#include "GlobalNamespace/PauseController.hpp"
#include "Utils/SongUtils.hpp"
#include "ReplayManager.hpp"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(PauseController_HandlePauseMenuManagerDidPressMenuButton, &PauseController::HandlePauseMenuManagerDidPressMenuButton, void, PauseController* self) {
    PauseController_HandlePauseMenuManagerDidPressMenuButton(self);

    SongUtils::inSong = false;
}

MAKE_HOOK_MATCH(PauseController_HandlePauseMenuManagerDidPressRestartButton, &PauseController::HandlePauseMenuManagerDidPressRestartButton, void, PauseController* self) {
    PauseController_HandlePauseMenuManagerDidPressRestartButton(self);

    ReplayManager::temporaryState = ReplayManager::replayState; // To keep replay state when restarting through pause menu (doesn't press replay button)
}

void PauseControllerHook(Logger& logger) {
    INSTALL_HOOK(logger, PauseController_HandlePauseMenuManagerDidPressMenuButton);
    INSTALL_HOOK(logger, PauseController_HandlePauseMenuManagerDidPressRestartButton);
}

ReplayInstallHooks(PauseControllerHook);