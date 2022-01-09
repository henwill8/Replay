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

void PauseControllerHook(Logger& logger) {
    INSTALL_HOOK(logger, PauseController_HandlePauseMenuManagerDidPressMenuButton);
}

ReplayInstallHooks(PauseControllerHook);