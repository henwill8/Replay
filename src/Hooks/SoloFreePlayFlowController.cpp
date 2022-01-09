#include "static-defines.hpp"

#include "GlobalNamespace/SoloFreePlayFlowCoordinator.hpp"
#include "GlobalNamespace/SinglePlayerLevelSelectionFlowCoordinator.hpp"
#include "UI/UIManager.hpp"

using namespace GlobalNamespace;
using namespace Replay::UI;

MAKE_HOOK_MATCH(SoloFreePlayFlowCoordinator_SinglePlayerLevelSelectionFlowCoordinatorDidActivate, &SoloFreePlayFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate, void, SoloFreePlayFlowCoordinator* self, bool firstActivation, bool addedToHierarchy) {
    SoloFreePlayFlowCoordinator_SinglePlayerLevelSelectionFlowCoordinatorDidActivate(self, firstActivation, addedToHierarchy);

    UIManager::singlePlayerFlowCoordinator = reinterpret_cast<SinglePlayerLevelSelectionFlowCoordinator*>(self);
}

void SoloFreePlayFlowCoordinatorHook(Logger& logger) {
    INSTALL_HOOK(logger, SoloFreePlayFlowCoordinator_SinglePlayerLevelSelectionFlowCoordinatorDidActivate);
}

ReplayInstallHooks(SoloFreePlayFlowCoordinatorHook);