// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SinglePlayerLevelSelectionFlowCoordinator
#include "GlobalNamespace/SinglePlayerLevelSelectionFlowCoordinator.hpp"
// Including type: HowToPlayViewController
#include "GlobalNamespace/HowToPlayViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LocalLeaderboardsModel
  class LocalLeaderboardsModel;
  // Forward declaring type: MenuLightsPresetSO
  class MenuLightsPresetSO;
  // Forward declaring type: TabBarViewController
  class TabBarViewController;
  // Forward declaring type: LeaderboardViewController
  class LeaderboardViewController;
  // Forward declaring type: MenuLightsManager
  class MenuLightsManager;
  // Forward declaring type: ResultsViewController
  class ResultsViewController;
  // Forward declaring type: LocalLeaderboardViewController
  class LocalLeaderboardViewController;
  // Forward declaring type: EnterPlayerGuestNameViewController
  class EnterPlayerGuestNameViewController;
  // Forward declaring type: MenuTransitionsHelper
  class MenuTransitionsHelper;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: ViewController because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x160
  #pragma pack(push, 1)
  // Autogenerated type: ArcadeFlowCoordinator
  // [] Offset: FFFFFFFF
  class ArcadeFlowCoordinator : public GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator {
    public:
    // Nested type: GlobalNamespace::ArcadeFlowCoordinator::$$c__DisplayClass22_0
    class $$c__DisplayClass22_0;
    // Nested type: GlobalNamespace::ArcadeFlowCoordinator::$$c__DisplayClass26_0
    class $$c__DisplayClass26_0;
    // private LocalLeaderboardsModel _localLeaderboardsModel
    // Size: 0x8
    // Offset: 0x110
    GlobalNamespace::LocalLeaderboardsModel* localLeaderboardsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalLeaderboardsModel*) == 0x8);
    // [SpaceAttribute] Offset: 0xD3F820
    // private MenuLightsPresetSO _defaultLightsPreset
    // Size: 0x8
    // Offset: 0x118
    GlobalNamespace::MenuLightsPresetSO* defaultLightsPreset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // private MenuLightsPresetSO _resultsLightsPreset
    // Size: 0x8
    // Offset: 0x120
    GlobalNamespace::MenuLightsPresetSO* resultsLightsPreset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // [InjectAttribute] Offset: 0xD3F868
    // private TabBarViewController _tabBarViewController
    // Size: 0x8
    // Offset: 0x128
    GlobalNamespace::TabBarViewController* tabBarViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TabBarViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xD3F878
    // private HowToPlayViewController _howToPlayViewController
    // Size: 0x8
    // Offset: 0x130
    GlobalNamespace::HowToPlayViewController* howToPlayViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HowToPlayViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xD3F888
    // private MenuLightsManager _menuLightsManager
    // Size: 0x8
    // Offset: 0x138
    GlobalNamespace::MenuLightsManager* menuLightsManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsManager*) == 0x8);
    // [InjectAttribute] Offset: 0xD3F898
    // private ResultsViewController _resultsViewController
    // Size: 0x8
    // Offset: 0x140
    GlobalNamespace::ResultsViewController* resultsViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ResultsViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xD3F8A8
    // private LocalLeaderboardViewController _localLeaderboardViewController
    // Size: 0x8
    // Offset: 0x148
    GlobalNamespace::LocalLeaderboardViewController* localLeaderboardViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalLeaderboardViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xD3F8B8
    // private EnterPlayerGuestNameViewController _enterNameViewController
    // Size: 0x8
    // Offset: 0x150
    GlobalNamespace::EnterPlayerGuestNameViewController* enterNameViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnterPlayerGuestNameViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xD3F8C8
    // private readonly MenuTransitionsHelper _menuTransitionsHelper
    // Size: 0x8
    // Offset: 0x158
    GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuTransitionsHelper*) == 0x8);
    // Creating value type constructor for type: ArcadeFlowCoordinator
    ArcadeFlowCoordinator(GlobalNamespace::LocalLeaderboardsModel* localLeaderboardsModel_ = {}, GlobalNamespace::MenuLightsPresetSO* defaultLightsPreset_ = {}, GlobalNamespace::MenuLightsPresetSO* resultsLightsPreset_ = {}, GlobalNamespace::TabBarViewController* tabBarViewController_ = {}, GlobalNamespace::HowToPlayViewController* howToPlayViewController_ = {}, GlobalNamespace::MenuLightsManager* menuLightsManager_ = {}, GlobalNamespace::ResultsViewController* resultsViewController_ = {}, GlobalNamespace::LocalLeaderboardViewController* localLeaderboardViewController_ = {}, GlobalNamespace::EnterPlayerGuestNameViewController* enterNameViewController_ = {}, GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper_ = {}) noexcept : localLeaderboardsModel{localLeaderboardsModel_}, defaultLightsPreset{defaultLightsPreset_}, resultsLightsPreset{resultsLightsPreset_}, tabBarViewController{tabBarViewController_}, howToPlayViewController{howToPlayViewController_}, menuLightsManager{menuLightsManager_}, resultsViewController{resultsViewController_}, localLeaderboardViewController{localLeaderboardViewController_}, enterNameViewController{enterNameViewController_}, menuTransitionsHelper{menuTransitionsHelper_} {}
    // private System.Boolean WillScoreGoToLeaderboard(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, System.Boolean practice)
    // Offset: 0x102F0D0
    bool WillScoreGoToLeaderboard(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, bool practice);
    // private System.Boolean ProcessScore(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, System.Boolean practice, System.String playerName)
    // Offset: 0x102F13C
    bool ProcessScore(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, bool practice, ::Il2CppString* playerName);
    // private System.Void HandleResultsViewControllerContinueButtonPressed(ResultsViewController resultsViewController)
    // Offset: 0x102F20C
    void HandleResultsViewControllerContinueButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController);
    // private System.Void HandleResultsViewControllerRestartButtonPressed(ResultsViewController resultsViewController)
    // Offset: 0x102F254
    void HandleResultsViewControllerRestartButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController);
    // private System.Void HandleHowToPlayViewControllerDidFinish(HowToPlayViewController/HowToPlayOptions howToPlayOptions)
    // Offset: 0x102F334
    void HandleHowToPlayViewControllerDidFinish(GlobalNamespace::HowToPlayViewController::HowToPlayOptions howToPlayOptions);
    // private System.Void HandleHowToPlayTabSelected()
    // Offset: 0x102F35C
    void HandleHowToPlayTabSelected();
    // private System.Void <SinglePlayerLevelSelectionFlowCoordinatorDidActivate>b__20_0()
    // Offset: 0x102F414
    void $SinglePlayerLevelSelectionFlowCoordinatorDidActivate$b__20_0();
    // private System.Void <HandleHowToPlayTabSelected>b__28_0()
    // Offset: 0x102F424
    void $HandleHowToPlayTabSelected$b__28_0();
    // protected override System.String get_gameMode()
    // Offset: 0x102E988
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.String SinglePlayerLevelSelectionFlowCoordinator::get_gameMode()
    ::Il2CppString* get_gameMode();
    // protected override LeaderboardViewController get_leaderboardViewController()
    // Offset: 0x102E9D0
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: LeaderboardViewController SinglePlayerLevelSelectionFlowCoordinator::get_leaderboardViewController()
    GlobalNamespace::LeaderboardViewController* get_leaderboardViewController();
    // protected override HMUI.ViewController get_initialTopScreenViewController()
    // Offset: 0x102E9D8
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: HMUI.ViewController SinglePlayerLevelSelectionFlowCoordinator::get_initialTopScreenViewController()
    HMUI::ViewController* get_initialTopScreenViewController();
    // protected override System.Boolean get_showPlayerStatsInDetailView()
    // Offset: 0x102E9E0
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_showPlayerStatsInDetailView()
    bool get_showPlayerStatsInDetailView();
    // protected override System.Boolean get_hidePacksIfOneOrNone()
    // Offset: 0x102E9E8
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_hidePacksIfOneOrNone()
    bool get_hidePacksIfOneOrNone();
    // protected override System.Void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    // Offset: 0x102E9F0
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);
    // protected override System.Void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(System.Boolean removedFromHierarchy)
    // Offset: 0x102ED04
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(System.Boolean removedFromHierarchy)
    void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);
    // protected override System.Void ProcessLevelCompletionResultsAfterLevelDidFinish(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    // Offset: 0x102EEFC
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    void ProcessLevelCompletionResultsAfterLevelDidFinish(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);
    // public System.Void .ctor()
    // Offset: 0x102F40C
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::.ctor()
    // Base method: System.Void LevelSelectionFlowCoordinator::.ctor()
    // Base method: System.Void FlowCoordinator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArcadeFlowCoordinator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ArcadeFlowCoordinator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArcadeFlowCoordinator*, creationType>()));
    }
  }; // ArcadeFlowCoordinator
  #pragma pack(pop)
  static check_size<sizeof(ArcadeFlowCoordinator), 344 + sizeof(GlobalNamespace::MenuTransitionsHelper*)> __GlobalNamespace_ArcadeFlowCoordinatorSizeCheck;
  static_assert(sizeof(ArcadeFlowCoordinator) == 0x160);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ArcadeFlowCoordinator*, "", "ArcadeFlowCoordinator");
