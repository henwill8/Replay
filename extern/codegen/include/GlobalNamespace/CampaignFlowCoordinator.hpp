// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.FlowCoordinator
#include "HMUI/FlowCoordinator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MenuLightsPresetSO
  class MenuLightsPresetSO;
  // Forward declaring type: MenuTransitionsHelper
  class MenuTransitionsHelper;
  // Forward declaring type: MenuLightsManager
  class MenuLightsManager;
  // Forward declaring type: MissionSelectionNavigationController
  class MissionSelectionNavigationController;
  // Forward declaring type: MissionResultsViewController
  class MissionResultsViewController;
  // Forward declaring type: GameplaySetupViewController
  class GameplaySetupViewController;
  // Forward declaring type: MissionHelpViewController
  class MissionHelpViewController;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: CampaignProgressModel
  class CampaignProgressModel;
  // Forward declaring type: MissionLevelScenesTransitionSetupDataSO
  class MissionLevelScenesTransitionSetupDataSO;
  // Forward declaring type: MissionCompletionResults
  class MissionCompletionResults;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CampaignFlowCoordinator
  class CampaignFlowCoordinator : public HMUI::FlowCoordinator {
    public:
    // Nested type: GlobalNamespace::CampaignFlowCoordinator::$$c__DisplayClass20_0
    class $$c__DisplayClass20_0;
    // Nested type: GlobalNamespace::CampaignFlowCoordinator::$$c__DisplayClass22_0
    class $$c__DisplayClass22_0;
    // private MenuLightsPresetSO _defaultLightsPreset
    // Offset: 0xA8
    GlobalNamespace::MenuLightsPresetSO* defaultLightsPreset;
    // private MenuLightsPresetSO _resultsClearedLightsPreset
    // Offset: 0xB0
    GlobalNamespace::MenuLightsPresetSO* resultsClearedLightsPreset;
    // private MenuLightsPresetSO _resultsFailedLightsPreset
    // Offset: 0xB8
    GlobalNamespace::MenuLightsPresetSO* resultsFailedLightsPreset;
    // private MenuLightsPresetSO _newObjectiveLightsPreset
    // Offset: 0xC0
    GlobalNamespace::MenuLightsPresetSO* newObjectiveLightsPreset;
    // private readonly MenuTransitionsHelper _menuTransitionsHelper
    // Offset: 0xC8
    GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper;
    // private readonly MenuLightsManager _menuLightsManager
    // Offset: 0xD0
    GlobalNamespace::MenuLightsManager* menuLightsManager;
    // private readonly MissionSelectionNavigationController _missionSelectionNavigationController
    // Offset: 0xD8
    GlobalNamespace::MissionSelectionNavigationController* missionSelectionNavigationController;
    // private readonly MissionResultsViewController _missionResultsViewController
    // Offset: 0xE0
    GlobalNamespace::MissionResultsViewController* missionResultsViewController;
    // private readonly GameplaySetupViewController _gameplaySetupViewController
    // Offset: 0xE8
    GlobalNamespace::GameplaySetupViewController* gameplaySetupViewController;
    // private readonly MissionHelpViewController _missionHelpViewController
    // Offset: 0xF0
    GlobalNamespace::MissionHelpViewController* missionHelpViewController;
    // private readonly PlayerDataModel _playerDataModel
    // Offset: 0xF8
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // private readonly CampaignProgressModel _campaignProgressModel
    // Offset: 0x100
    GlobalNamespace::CampaignProgressModel* campaignProgressModel;
    // private System.Action`1<CampaignFlowCoordinator> didFinishEvent
    // Offset: 0x108
    System::Action_1<GlobalNamespace::CampaignFlowCoordinator*>* didFinishEvent;
    // private System.Boolean _showCredits
    // Offset: 0x110
    bool showCredits;
    // public System.Void add_didFinishEvent(System.Action`1<CampaignFlowCoordinator> value)
    // Offset: 0x1A32780
    void add_didFinishEvent(System::Action_1<GlobalNamespace::CampaignFlowCoordinator*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<CampaignFlowCoordinator> value)
    // Offset: 0x1A32828
    void remove_didFinishEvent(System::Action_1<GlobalNamespace::CampaignFlowCoordinator*>* value);
    // private System.Void HandleMissionSelectionNavigationControllerDidPressPlayButton(MissionSelectionNavigationController viewController)
    // Offset: 0x1A32D6C
    void HandleMissionSelectionNavigationControllerDidPressPlayButton(GlobalNamespace::MissionSelectionNavigationController* viewController);
    // private System.Void HandleMissionHelpViewControllerDidFinish(MissionHelpViewController viewController)
    // Offset: 0x1A33024
    void HandleMissionHelpViewControllerDidFinish(GlobalNamespace::MissionHelpViewController* viewController);
    // private System.Void HandleMissionResultsViewControllerContinueButtonPressed(MissionResultsViewController viewController)
    // Offset: 0x1A330F0
    void HandleMissionResultsViewControllerContinueButtonPressed(GlobalNamespace::MissionResultsViewController* viewController);
    // private System.Void HandleMissionResultsViewControllerRetryButtonPressed(MissionResultsViewController viewController)
    // Offset: 0x1A3319C
    void HandleMissionResultsViewControllerRetryButtonPressed(GlobalNamespace::MissionResultsViewController* viewController);
    // private System.Void StartLevel(System.Action beforeSceneSwitchCallback)
    // Offset: 0x1A32EA8
    void StartLevel(System::Action* beforeSceneSwitchCallback);
    // private System.Void HandleMissionLevelSceneDidFinish(MissionLevelScenesTransitionSetupDataSO missionLevelScenesTransitionSetupData, MissionCompletionResults missionCompletionResults)
    // Offset: 0x1A33268
    void HandleMissionLevelSceneDidFinish(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData, GlobalNamespace::MissionCompletionResults* missionCompletionResults);
    // private System.Void <HandleMissionResultsViewControllerContinueButtonPressed>b__21_0()
    // Offset: 0x1A33500
    void $HandleMissionResultsViewControllerContinueButtonPressed$b__21_0();
    // private System.Void <HandleMissionResultsViewControllerContinueButtonPressed>b__21_1(System.Boolean presented)
    // Offset: 0x1A33594
    void $HandleMissionResultsViewControllerContinueButtonPressed$b__21_1(bool presented);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1A328D0
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x1A32AE4
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected override System.Void TopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, HMUI.ViewController/AnimationType animationType)
    // Offset: 0x1A32C70
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::TopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, HMUI.ViewController/AnimationType animationType)
    void TopViewControllerWillChange(HMUI::ViewController* oldViewController, HMUI::ViewController* newViewController, HMUI::ViewController::AnimationType animationType);
    // protected override System.Void BackButtonWasPressed(HMUI.ViewController topViewController)
    // Offset: 0x1A3344C
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::BackButtonWasPressed(HMUI.ViewController topViewController)
    void BackButtonWasPressed(HMUI::ViewController* topViewController);
    // public System.Void .ctor()
    // Offset: 0x1A334F8
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static CampaignFlowCoordinator* New_ctor();
  }; // CampaignFlowCoordinator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CampaignFlowCoordinator*, "", "CampaignFlowCoordinator");
#pragma pack(pop)