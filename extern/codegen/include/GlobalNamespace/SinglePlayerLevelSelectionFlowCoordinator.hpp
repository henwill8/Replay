// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LevelSelectionFlowCoordinator
#include "GlobalNamespace/LevelSelectionFlowCoordinator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: PracticeViewController
  class PracticeViewController;
  // Forward declaring type: GameplaySetupViewController
  class GameplaySetupViewController;
  // Forward declaring type: MenuTransitionsHelper
  class MenuTransitionsHelper;
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
  // Forward declaring type: AppStaticSettingsSO
  class AppStaticSettingsSO;
  // Forward declaring type: SimpleDialogPromptViewController
  class SimpleDialogPromptViewController;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: LeaderboardViewController
  class LeaderboardViewController;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
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
  // Size: 0x110
  #pragma pack(push, 1)
  // Autogenerated type: SinglePlayerLevelSelectionFlowCoordinator
  // [] Offset: FFFFFFFF
  class SinglePlayerLevelSelectionFlowCoordinator : public GlobalNamespace::LevelSelectionFlowCoordinator {
    public:
    // Nested type: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0
    class $$c__DisplayClass37_0;
    // private BeatmapCharacteristicSO _degree360BeatmapCharacteristic
    // Size: 0x8
    // Offset: 0xD0
    GlobalNamespace::BeatmapCharacteristicSO* degree360BeatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // [InjectAttribute] Offset: 0xD404A8
    // private readonly PracticeViewController _practiceViewController
    // Size: 0x8
    // Offset: 0xD8
    GlobalNamespace::PracticeViewController* practiceViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PracticeViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xD404B8
    // private readonly GameplaySetupViewController _gameplaySetupViewController
    // Size: 0x8
    // Offset: 0xE0
    GlobalNamespace::GameplaySetupViewController* gameplaySetupViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplaySetupViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xD404C8
    // private readonly MenuTransitionsHelper _menuTransitionsHelper
    // Size: 0x8
    // Offset: 0xE8
    GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuTransitionsHelper*) == 0x8);
    // [InjectAttribute] Offset: 0xD404D8
    // private readonly IVRPlatformHelper _vrPlatformHelper
    // Size: 0x8
    // Offset: 0xF0
    GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // [InjectAttribute] Offset: 0xD404E8
    // private readonly AppStaticSettingsSO _appStaticSettings
    // Size: 0x8
    // Offset: 0xF8
    GlobalNamespace::AppStaticSettingsSO* appStaticSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AppStaticSettingsSO*) == 0x8);
    // [InjectAttribute] Offset: 0xD404F8
    // private readonly SimpleDialogPromptViewController _simpleDialogPromptViewController
    // Size: 0x8
    // Offset: 0x100
    GlobalNamespace::SimpleDialogPromptViewController* simpleDialogPromptViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SimpleDialogPromptViewController*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD40508
    // private System.Action`1<SinglePlayerLevelSelectionFlowCoordinator> didFinishEvent
    // Size: 0x8
    // Offset: 0x108
    System::Action_1<GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>*) == 0x8);
    // Creating value type constructor for type: SinglePlayerLevelSelectionFlowCoordinator
    SinglePlayerLevelSelectionFlowCoordinator(GlobalNamespace::BeatmapCharacteristicSO* degree360BeatmapCharacteristic_ = {}, GlobalNamespace::PracticeViewController* practiceViewController_ = {}, GlobalNamespace::GameplaySetupViewController* gameplaySetupViewController_ = {}, GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper_ = {}, GlobalNamespace::IVRPlatformHelper* vrPlatformHelper_ = {}, GlobalNamespace::AppStaticSettingsSO* appStaticSettings_ = {}, GlobalNamespace::SimpleDialogPromptViewController* simpleDialogPromptViewController_ = {}, System::Action_1<GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>* didFinishEvent_ = {}) noexcept : degree360BeatmapCharacteristic{degree360BeatmapCharacteristic_}, practiceViewController{practiceViewController_}, gameplaySetupViewController{gameplaySetupViewController_}, menuTransitionsHelper{menuTransitionsHelper_}, vrPlatformHelper{vrPlatformHelper_}, appStaticSettings{appStaticSettings_}, simpleDialogPromptViewController{simpleDialogPromptViewController_}, didFinishEvent{didFinishEvent_} {}
    // protected System.String get_gameMode()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_gameMode();
    // protected System.Boolean get_isInPracticeView()
    // Offset: 0xF6BBF8
    bool get_isInPracticeView();
    // protected PlayerSpecificSettings get_playerSettings()
    // Offset: 0xF6EA38
    GlobalNamespace::PlayerSpecificSettings* get_playerSettings();
    // private GameplayModifiers get_gameplayModifiers()
    // Offset: 0xF6EA70
    GlobalNamespace::GameplayModifiers* get_gameplayModifiers();
    // protected System.Boolean get_hideGameplaySetup()
    // Offset: 0xF6EA8C
    bool get_hideGameplaySetup();
    // protected LeaderboardViewController get_leaderboardViewController()
    // Offset: 0xF6EA94
    GlobalNamespace::LeaderboardViewController* get_leaderboardViewController();
    // protected System.Void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    // Offset: 0xF6EAE0
    void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);
    // protected System.Void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(System.Boolean removedFromHierarchy)
    // Offset: 0xF6EAE4
    void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);
    // protected System.Void ProcessLevelCompletionResultsAfterLevelDidFinish(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    // Offset: 0xF6EAE8
    void ProcessLevelCompletionResultsAfterLevelDidFinish(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);
    // public System.Void add_didFinishEvent(System.Action`1<SinglePlayerLevelSelectionFlowCoordinator> value)
    // Offset: 0xF6EAEC
    void add_didFinishEvent(System::Action_1<GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<SinglePlayerLevelSelectionFlowCoordinator> value)
    // Offset: 0xF6EB94
    void remove_didFinishEvent(System::Action_1<GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>* value);
    // private System.Void StartLevelOrShow360Prompt(System.Action beforeSceneSwitchCallback, System.Boolean practice)
    // Offset: 0xF6EFE0
    void StartLevelOrShow360Prompt(System::Action* beforeSceneSwitchCallback, bool practice);
    // public System.Void StartLevel(System.Action beforeSceneSwitchCallback, System.Boolean practice)
    // Offset: 0xF6B970
    void StartLevel(System::Action* beforeSceneSwitchCallback, bool practice);
    // private System.Void HandlePracticeViewControllerDidPressPlayButton()
    // Offset: 0xF6F670
    void HandlePracticeViewControllerDidPressPlayButton();
    // private System.Void HandleStandardLevelDidFinish(StandardLevelScenesTransitionSetupDataSO standardLevelScenesTransitionSetupData, LevelCompletionResults levelCompletionResults)
    // Offset: 0xF6F67C
    void HandleStandardLevelDidFinish(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData, GlobalNamespace::LevelCompletionResults* levelCompletionResults);
    // protected System.Void SetupGameplaySetupViewController(System.Boolean showModifiers, System.Boolean showEnvironmentOverrideSettings, System.Boolean showColorSchemesSettings)
    // Offset: 0xF6B2D0
    void SetupGameplaySetupViewController(bool showModifiers, bool showEnvironmentOverrideSettings, bool showColorSchemesSettings);
    // protected System.Boolean HandleBasicLevelCompletionResults(LevelCompletionResults levelCompletionResults, System.Boolean practice)
    // Offset: 0xF6B6C4
    bool HandleBasicLevelCompletionResults(GlobalNamespace::LevelCompletionResults* levelCompletionResults, bool practice);
    // protected System.Void DismissPracticeViewController(System.Action finishedCallback, System.Boolean immediately)
    // Offset: 0xF6BC7C
    void DismissPracticeViewController(System::Action* finishedCallback, bool immediately);
    // protected override System.Boolean get_enableCustomLevels()
    // Offset: 0xF6EA54
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_enableCustomLevels()
    bool get_enableCustomLevels();
    // protected override HMUI.ViewController get_initialTopScreenViewController()
    // Offset: 0xF6EA9C
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: HMUI.ViewController LevelSelectionFlowCoordinator::get_initialTopScreenViewController()
    HMUI::ViewController* get_initialTopScreenViewController();
    // protected override HMUI.ViewController get_initialLeftScreenViewController()
    // Offset: 0xF6EAA4
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: HMUI.ViewController LevelSelectionFlowCoordinator::get_initialLeftScreenViewController()
    HMUI::ViewController* get_initialLeftScreenViewController();
    // protected override System.Void LevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    // Offset: 0xF6EC3C
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    void LevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);
    // protected override System.Void LevelSelectionFlowCoordinatorDidDeactivate(System.Boolean removedFromHierarchy)
    // Offset: 0xF6ECF8
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidDeactivate(System.Boolean removedFromHierarchy)
    void LevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);
    // protected override System.Void LevelSelectionFlowCoordinatorTopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, HMUI.ViewController/AnimationType animationType)
    // Offset: 0xF6EDA4
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorTopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, HMUI.ViewController/AnimationType animationType)
    void LevelSelectionFlowCoordinatorTopViewControllerWillChange(HMUI::ViewController* oldViewController, HMUI::ViewController* newViewController, HMUI::ViewController::AnimationType animationType);
    // protected override System.Void ActionButtonWasPressed()
    // Offset: 0xF6EFD4
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::ActionButtonWasPressed()
    void ActionButtonWasPressed();
    // protected override System.Void PracticeButtonWasPressed()
    // Offset: 0xF6F374
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::PracticeButtonWasPressed()
    void PracticeButtonWasPressed();
    // protected override System.Void SelectionDidChange(IBeatmapLevelPack pack, IDifficultyBeatmap beatmap)
    // Offset: 0xF6F5E4
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::SelectionDidChange(IBeatmapLevelPack pack, IDifficultyBeatmap beatmap)
    void SelectionDidChange(GlobalNamespace::IBeatmapLevelPack* pack, GlobalNamespace::IDifficultyBeatmap* beatmap);
    // protected override System.Void BackButtonWasPressed(HMUI.ViewController topViewController)
    // Offset: 0xF6F724
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::BackButtonWasPressed(HMUI.ViewController topViewController)
    void BackButtonWasPressed(HMUI::ViewController* topViewController);
    // protected System.Void .ctor()
    // Offset: 0xF6BD54
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::.ctor()
    // Base method: System.Void FlowCoordinator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SinglePlayerLevelSelectionFlowCoordinator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SinglePlayerLevelSelectionFlowCoordinator*, creationType>()));
    }
  }; // SinglePlayerLevelSelectionFlowCoordinator
  #pragma pack(pop)
  static check_size<sizeof(SinglePlayerLevelSelectionFlowCoordinator), 264 + sizeof(System::Action_1<GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>*)> __GlobalNamespace_SinglePlayerLevelSelectionFlowCoordinatorSizeCheck;
  static_assert(sizeof(SinglePlayerLevelSelectionFlowCoordinator) == 0x110);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*, "", "SinglePlayerLevelSelectionFlowCoordinator");
