#include "static-defines.hpp"

#include "GlobalNamespace/NoteCutter.hpp"
#include "GlobalNamespace/Saber.hpp"
#include "ReplayManager.hpp"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(NoteCutter_Cut, &NoteCutter::Cut, void, NoteCutter* self, Saber* saber) {
    if(ReplayManager::replayState == ReplayState::REPLAYING) {
        return;
    }
    
    NoteCutter_Cut(self, saber);
}

void NoteCutterHook(Logger& logger) {
    INSTALL_HOOK(logger, NoteCutter_Cut);
}

ReplayInstallHooks(NoteCutterHook);