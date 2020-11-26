// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LeaderboardViewController
#include "GlobalNamespace/LeaderboardViewController.hpp"
// Including type: LeaderboardTableView
#include "GlobalNamespace/LeaderboardTableView.hpp"
// Including type: PlatformLeaderboardsModel
#include "GlobalNamespace/PlatformLeaderboardsModel.hpp"
// Including type: PlatformLeaderboardsModel/ScoresScope
#include "GlobalNamespace/PlatformLeaderboardsModel_ScoresScope.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: LoadingControl
  class LoadingControl;
  // Forward declaring type: LevelStatsView
  class LevelStatsView;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: HMAsyncRequest
  class HMAsyncRequest;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: IconSegmentedControl
  class IconSegmentedControl;
  // Forward declaring type: SegmentedControl
  class SegmentedControl;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlatformLeaderboardViewController
  class PlatformLeaderboardViewController : public GlobalNamespace::LeaderboardViewController {
    public:
    // Nested type: GlobalNamespace::PlatformLeaderboardViewController::$RefreshDelayed$d__31
    class $RefreshDelayed$d__31;
    // private LeaderboardTableView _leaderboardTableView
    // Offset: 0x70
    GlobalNamespace::LeaderboardTableView* leaderboardTableView;
    // private HMUI.IconSegmentedControl _scopeSegmentedControl
    // Offset: 0x78
    HMUI::IconSegmentedControl* scopeSegmentedControl;
    // private LoadingControl _loadingControl
    // Offset: 0x80
    GlobalNamespace::LoadingControl* loadingControl;
    // private UnityEngine.Sprite _globalLeaderboardIcon
    // Offset: 0x88
    UnityEngine::Sprite* globalLeaderboardIcon;
    // private UnityEngine.Sprite _aroundPlayerLeaderboardIcon
    // Offset: 0x90
    UnityEngine::Sprite* aroundPlayerLeaderboardIcon;
    // private UnityEngine.Sprite _friendsLeaderboardIcon
    // Offset: 0x98
    UnityEngine::Sprite* friendsLeaderboardIcon;
    // private LevelStatsView _levelStatsView
    // Offset: 0xA0
    GlobalNamespace::LevelStatsView* levelStatsView;
    // private readonly PlatformLeaderboardsModel _leaderboardsModel
    // Offset: 0xA8
    GlobalNamespace::PlatformLeaderboardsModel* leaderboardsModel;
    // private readonly PlayerDataModel _playerDataModel
    // Offset: 0xB0
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // private HMAsyncRequest _getScoresAsyncRequest
    // Offset: 0xB8
    GlobalNamespace::HMAsyncRequest* getScoresAsyncRequest;
    // private System.Int32[] _playerScorePos
    // Offset: 0xC0
    ::Array<int>* playerScorePos;
    // private System.Collections.Generic.List`1<LeaderboardTableView/ScoreData> _scores
    // Offset: 0xC8
    System::Collections::Generic::List_1<GlobalNamespace::LeaderboardTableView::ScoreData*>* scores;
    // private IDifficultyBeatmap _difficultyBeatmap
    // Offset: 0xD0
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // private System.Boolean _refreshIsNeeded
    // Offset: 0xD8
    bool refreshIsNeeded;
    // private System.Boolean _hasScoresData
    // Offset: 0xD9
    bool hasScoresData;
    // private PlatformLeaderboardsModel/ScoresScope[] _scoreScopes
    // Offset: 0xE0
    ::Array<GlobalNamespace::PlatformLeaderboardsModel::ScoresScope>* scoreScopes;
    // Get static field: static private PlatformLeaderboardsModel/ScoresScope _scoresScope
    static GlobalNamespace::PlatformLeaderboardsModel::ScoresScope _get__scoresScope();
    // Set static field: static private PlatformLeaderboardsModel/ScoresScope _scoresScope
    static void _set__scoresScope(GlobalNamespace::PlatformLeaderboardsModel::ScoresScope value);
    // public PlatformLeaderboardsModel get_leaderboardsModel()
    // Offset: 0xF08C18
    GlobalNamespace::PlatformLeaderboardsModel* get_leaderboardsModel();
    // private System.Int32 ScoreScopeToScoreScopeIndex(PlatformLeaderboardsModel/ScoresScope scoresScope)
    // Offset: 0xF09314
    int ScoreScopeToScoreScopeIndex(GlobalNamespace::PlatformLeaderboardsModel::ScoresScope scoresScope);
    // private PlatformLeaderboardsModel/ScoresScope ScopeScopeIndexToScoreScope(System.Int32 scoreScopeIndex)
    // Offset: 0xF097F8
    GlobalNamespace::PlatformLeaderboardsModel::ScoresScope ScopeScopeIndexToScoreScope(int scoreScopeIndex);
    // private System.Void HandleDidPressRefreshButton()
    // Offset: 0xF09844
    void HandleDidPressRefreshButton();
    // private System.Void HandleLeaderboardsResultsReturned(PlatformLeaderboardsModel/GetScoresResult result, PlatformLeaderboardsModel/LeaderboardScore[] scores, System.Int32 playerScoreIndex)
    // Offset: 0xF09850
    void HandleLeaderboardsResultsReturned(GlobalNamespace::PlatformLeaderboardsModel::GetScoresResult result, ::Array<GlobalNamespace::PlatformLeaderboardsModel::LeaderboardScore*>* scores, int playerScoreIndex);
    // private System.Void HandleScopeSegmentedControlDidSelectCell(HMUI.SegmentedControl segmentedControl, System.Int32 cellNumber)
    // Offset: 0xF09A70
    void HandleScopeSegmentedControlDidSelectCell(HMUI::SegmentedControl* segmentedControl, int cellNumber);
    // private System.Void HandlePlatformLeaderboardsModelAllScoresDidUpload()
    // Offset: 0xF09B08
    void HandlePlatformLeaderboardsModelAllScoresDidUpload();
    // private System.Void Refresh(System.Boolean showLoadingIndicator, System.Boolean clear)
    // Offset: 0xF08C88
    void Refresh(bool showLoadingIndicator, bool clear);
    // private System.Collections.IEnumerator RefreshDelayed(System.Boolean showLoadingIndicator, System.Boolean clear)
    // Offset: 0xF09BE4
    System::Collections::IEnumerator* RefreshDelayed(bool showLoadingIndicator, bool clear);
    // private System.Void ClearContent()
    // Offset: 0xF09B14
    void ClearContent();
    // public override System.Void SetData(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0xF08C20
    // Implemented from: LeaderboardViewController
    // Base method: System.Void LeaderboardViewController::SetData(IDifficultyBeatmap difficultyBeatmap)
    void SetData(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public override System.Void RefreshLevelStats()
    // Offset: 0xF08E48
    // Implemented from: LeaderboardViewController
    // Base method: System.Void LeaderboardViewController::RefreshLevelStats()
    void RefreshLevelStats();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0xF08E7C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0xF09480
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected override System.Void OnDestroy()
    // Offset: 0xF09638
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0xF09CAC
    // Implemented from: LeaderboardViewController
    // Base method: System.Void LeaderboardViewController::.ctor()
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PlatformLeaderboardViewController* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0xF09D2C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // PlatformLeaderboardViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformLeaderboardViewController*, "", "PlatformLeaderboardViewController");
#pragma pack(pop)
