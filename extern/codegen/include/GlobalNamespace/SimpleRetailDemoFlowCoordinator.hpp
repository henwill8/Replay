// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.FlowCoordinator
#include "HMUI/FlowCoordinator.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
// Including type: SimpleRetailDemoViewController
#include "GlobalNamespace/SimpleRetailDemoViewController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MenuTransitionsHelper
  class MenuTransitionsHelper;
  // Forward declaring type: MenuLightsPresetSO
  class MenuLightsPresetSO;
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: HowToPlayViewController
  class HowToPlayViewController;
  // Forward declaring type: ResultsViewController
  class ResultsViewController;
  // Forward declaring type: MenuLightsManager
  class MenuLightsManager;
  // Forward declaring type: FadeInOutController
  class FadeInOutController;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SimpleRetailDemoFlowCoordinator
  class SimpleRetailDemoFlowCoordinator : public HMUI::FlowCoordinator {
    public:
    // Nested type: GlobalNamespace::SimpleRetailDemoFlowCoordinator::$QuitApplicationCoroutine$d__22
    class $QuitApplicationCoroutine$d__22;
    // Nested type: GlobalNamespace::SimpleRetailDemoFlowCoordinator::$$c__DisplayClass23_0
    class $$c__DisplayClass23_0;
    // private MenuTransitionsHelper _menuTransitionsHelper
    // Offset: 0xA8
    GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper;
    // private MenuLightsPresetSO _defaultLightsPreset
    // Offset: 0xB0
    GlobalNamespace::MenuLightsPresetSO* defaultLightsPreset;
    // private BeatmapLevelSO _demoLevel1
    // Offset: 0xB8
    GlobalNamespace::BeatmapLevelSO* demoLevel1;
    // private BeatmapCharacteristicSO _demoLevel1Characteristic
    // Offset: 0xC0
    GlobalNamespace::BeatmapCharacteristicSO* demoLevel1Characteristic;
    // private BeatmapDifficulty _demoLevel1Difficulty
    // Offset: 0xC8
    GlobalNamespace::BeatmapDifficulty demoLevel1Difficulty;
    // private BeatmapLevelSO _demoLevel2
    // Offset: 0xD0
    GlobalNamespace::BeatmapLevelSO* demoLevel2;
    // private BeatmapCharacteristicSO _demoLevel2Characteristic
    // Offset: 0xD8
    GlobalNamespace::BeatmapCharacteristicSO* demoLevel2Characteristic;
    // private BeatmapDifficulty _demoLevel2Difficulty
    // Offset: 0xE0
    GlobalNamespace::BeatmapDifficulty demoLevel2Difficulty;
    // private SimpleRetailDemoViewController _simpleDemoViewController
    // Offset: 0xE8
    GlobalNamespace::SimpleRetailDemoViewController* simpleDemoViewController;
    // private HowToPlayViewController _howToPlayViewController
    // Offset: 0xF0
    GlobalNamespace::HowToPlayViewController* howToPlayViewController;
    // private ResultsViewController _resultsViewController
    // Offset: 0xF8
    GlobalNamespace::ResultsViewController* resultsViewController;
    // private MenuLightsManager _menuLightsManager
    // Offset: 0x100
    GlobalNamespace::MenuLightsManager* menuLightsManager;
    // private FadeInOutController _fadeInOut
    // Offset: 0x108
    GlobalNamespace::FadeInOutController* fadeInOut;
    // private IDifficultyBeatmap _level1DifficultyBeatmap
    // Offset: 0x110
    GlobalNamespace::IDifficultyBeatmap* level1DifficultyBeatmap;
    // private IDifficultyBeatmap _level2DifficultyBeatmap
    // Offset: 0x118
    GlobalNamespace::IDifficultyBeatmap* level2DifficultyBeatmap;
    // private IDifficultyBeatmap _selectedLevelDifficultyBeatmap
    // Offset: 0x120
    GlobalNamespace::IDifficultyBeatmap* selectedLevelDifficultyBeatmap;
    // private System.Boolean _quittingApplication
    // Offset: 0x128
    bool quittingApplication;
    // private readonly GameplayModifiers _gameplayModifiers
    // Offset: 0x130
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // private System.Void HandleSimpleDemoViewControllerDidFinish(SimpleRetailDemoViewController viewController, SimpleRetailDemoViewController/MenuButton menuButton)
    // Offset: 0xFCF8C4
    void HandleSimpleDemoViewControllerDidFinish(GlobalNamespace::SimpleRetailDemoViewController* viewController, GlobalNamespace::SimpleRetailDemoViewController::MenuButton menuButton);
    // private System.Void HandleResultsViewControllerContinueButtonPressed(ResultsViewController resultsViewController)
    // Offset: 0xFCFA8C
    void HandleResultsViewControllerContinueButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController);
    // private System.Collections.IEnumerator QuitApplicationCoroutine()
    // Offset: 0xFCFACC
    System::Collections::IEnumerator* QuitApplicationCoroutine();
    // private System.Void HandleResultsViewControllerRestartButtonPressed(ResultsViewController resultsViewController)
    // Offset: 0xFCFB74
    void HandleResultsViewControllerRestartButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController);
    // private System.Void StartLevel(System.Action beforeSceneSwitchCallback)
    // Offset: 0xFCF96C
    void StartLevel(System::Action* beforeSceneSwitchCallback);
    // private System.Void HandleLevelDidFinish(StandardLevelScenesTransitionSetupDataSO standardLevelSceneSetupData, LevelCompletionResults levelCompletionResults)
    // Offset: 0xFCFC40
    void HandleLevelDidFinish(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelSceneSetupData, GlobalNamespace::LevelCompletionResults* levelCompletionResults);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0xFCF484
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0xFCF700
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0xFCFCDC
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SimpleRetailDemoFlowCoordinator* New_ctor();
  }; // SimpleRetailDemoFlowCoordinator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleRetailDemoFlowCoordinator*, "", "SimpleRetailDemoFlowCoordinator");
#pragma pack(pop)