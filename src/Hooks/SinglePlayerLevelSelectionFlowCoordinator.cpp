#include "static-defines.hpp"

#include "GlobalNamespace/SinglePlayerLevelSelectionFlowCoordinator.hpp"
#include "Polyglot/Localization.hpp"
#include "UI/UIManager.hpp"
#include "HMUI/ViewController.hpp"
#include "HMUI/ViewController_AnimationType.hpp"
#include "HMUI/ViewController_AnimationDirection.hpp"

using namespace GlobalNamespace;
using namespace Replay::UI;
using namespace HMUI;

MAKE_HOOK_MATCH(SinglePlayerLevelSelectionFlowCoordinator_LevelSelectionFlowCoordinatorTopViewControllerWillChange, &SinglePlayerLevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorTopViewControllerWillChange, void, SinglePlayerLevelSelectionFlowCoordinator* self, ViewController* oldViewController, ViewController* newViewController, ViewController::AnimationType animationType) {
    if(newViewController == UIManager::replayViewController) {
        self->SetLeftScreenViewController(nullptr, animationType);
        self->SetRightScreenViewController(nullptr, animationType);
        self->SetBottomScreenViewController(nullptr, animationType);
        self->SetTitle(Polyglot::Localization::Get(il2cpp_utils::newcsstr("REPLAY")), animationType);
        self->set_showBackButton(true);
        return;
    }
    
    SinglePlayerLevelSelectionFlowCoordinator_LevelSelectionFlowCoordinatorTopViewControllerWillChange(self, oldViewController, newViewController, animationType);
}

MAKE_HOOK_MATCH(SinglePlayerLevelSelectionFlowCoordinator_BackButtonWasPressed, &SinglePlayerLevelSelectionFlowCoordinator::BackButtonWasPressed, void, SinglePlayerLevelSelectionFlowCoordinator* self, ViewController* topViewController) {
    if(topViewController == UIManager::replayViewController) {
        self->DismissViewController(UIManager::replayViewController, ViewController::AnimationDirection::Horizontal, nullptr, false);
        return;
    }
    
    SinglePlayerLevelSelectionFlowCoordinator_BackButtonWasPressed(self, topViewController);
}

void SinglePlayerLevelSelectionFlowCoordinatorHook(Logger& logger) {
    INSTALL_HOOK(logger, SinglePlayerLevelSelectionFlowCoordinator_LevelSelectionFlowCoordinatorTopViewControllerWillChange);
    INSTALL_HOOK(logger, SinglePlayerLevelSelectionFlowCoordinator_BackButtonWasPressed);
}

ReplayInstallHooks(SinglePlayerLevelSelectionFlowCoordinatorHook);