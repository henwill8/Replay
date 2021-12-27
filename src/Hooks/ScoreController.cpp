#include "static-defines.hpp"

#include "GlobalNamespace/ScoreController.hpp"
#include "Utils/SongUtils.hpp"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(ScoreController_Start, &ScoreController::Start, void, ScoreController* self) {
    ScoreController_Start(self);

    SongUtils::scoreController = self;
}

void ScoreControllerHook(Logger& logger) {
    INSTALL_HOOK(logger, ScoreController_Start);
}

ReplayInstallHooks(ScoreControllerHook);