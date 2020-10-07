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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LoadingControl
  class LoadingControl;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: ServerManager
  class ServerManager;
  // Forward declaring type: PlatformServicesAvailabilityInfo
  class PlatformServicesAvailabilityInfo;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: IconSegmentedControl
  class IconSegmentedControl;
  // Forward declaring type: TextSegmentedControl
  class TextSegmentedControl;
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
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CentralLeaderboardViewController
  class CentralLeaderboardViewController : public GlobalNamespace::LeaderboardViewController {
    public:
    // Nested type: GlobalNamespace::CentralLeaderboardViewController::LeaderboardPanel
    class LeaderboardPanel;
    // Nested type: GlobalNamespace::CentralLeaderboardViewController::ScoreScopeInfo
    class ScoreScopeInfo;
    // Nested type: GlobalNamespace::CentralLeaderboardViewController::$$c
    class $$c;
    // Nested type: GlobalNamespace::CentralLeaderboardViewController::$RefreshDelayed$d__27
    class $RefreshDelayed$d__27;
    // Nested type: GlobalNamespace::CentralLeaderboardViewController::$LoadScoresAsync$d__28
    struct $LoadScoresAsync$d__28;
    // private LeaderboardTableView _leaderboardTableView
    // Offset: 0x68
    GlobalNamespace::LeaderboardTableView* leaderboardTableView;
    // private HMUI.IconSegmentedControl _scopeSegmentedControl
    // Offset: 0x70
    HMUI::IconSegmentedControl* scopeSegmentedControl;
    // private LoadingControl _loadingControl
    // Offset: 0x78
    GlobalNamespace::LoadingControl* loadingControl;
    // private HMUI.TextSegmentedControl _leaderboardTypeSegmentedControl
    // Offset: 0x80
    HMUI::TextSegmentedControl* leaderboardTypeSegmentedControl;
    // private UnityEngine.Sprite _globalLeaderboardIcon
    // Offset: 0x88
    UnityEngine::Sprite* globalLeaderboardIcon;
    // private UnityEngine.Sprite _friendsLeaderboardIcon
    // Offset: 0x90
    UnityEngine::Sprite* friendsLeaderboardIcon;
    // private System.Collections.Generic.List`1<LeaderboardTableView/ScoreData> _scores
    // Offset: 0x98
    System::Collections::Generic::List_1<GlobalNamespace::LeaderboardTableView::ScoreData*>* scores;
    // private OnlineServices.ServerManager _serverManager
    // Offset: 0xA0
    OnlineServices::ServerManager* serverManager;
    // private IDifficultyBeatmap _difficultyBeatmap
    // Offset: 0xA8
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Offset: 0xB0
    System::Threading::CancellationTokenSource* cancellationTokenSource;
    // private CentralLeaderboardViewController/LeaderboardPanel[] _leaderboardPanels
    // Offset: 0xB8
    ::Array<GlobalNamespace::CentralLeaderboardViewController::LeaderboardPanel*>* leaderboardPanels;
    // private CentralLeaderboardViewController/ScoreScopeInfo[] _scoreScopeInfos
    // Offset: 0xC0
    ::Array<GlobalNamespace::CentralLeaderboardViewController::ScoreScopeInfo*>* scoreScopeInfos;
    // private System.Boolean _includeScoreWithModifiers
    // Offset: 0xC8
    bool includeScoreWithModifiers;
    // private System.Boolean get__hasScoresData()
    // Offset: 0xB7E5F0
    bool get__hasScoresData();
    // private System.Void HandleDidPressRefreshButton()
    // Offset: 0xB7F398
    void HandleDidPressRefreshButton();
    // private System.Void HandlelatformServicesAvailabilityInfoChanged(OnlineServices.PlatformServicesAvailabilityInfo availabilityInfo)
    // Offset: 0xB7F3A4
    void HandlelatformServicesAvailabilityInfoChanged(OnlineServices::PlatformServicesAvailabilityInfo* availabilityInfo);
    // private System.Void HanldeLeaderboardTypeSegmentedControlDidSelectCell(HMUI.SegmentedControl control, System.Int32 index)
    // Offset: 0xB7F3CC
    void HanldeLeaderboardTypeSegmentedControlDidSelectCell(HMUI::SegmentedControl* control, int index);
    // private System.Void HandleScopeSegmentedControlDidSelectCell(HMUI.SegmentedControl segmentedControl, System.Int32 cellNumber)
    // Offset: 0xB7F41C
    void HandleScopeSegmentedControlDidSelectCell(HMUI::SegmentedControl* segmentedControl, int cellNumber);
    // private System.Void HandleScoreForLeaderboardDidUpload(System.String leaderboardId)
    // Offset: 0xB7F428
    void HandleScoreForLeaderboardDidUpload(::Il2CppString* leaderboardId);
    // private System.Void Refresh(System.Boolean showLoadingIndicator, System.Boolean clear)
    // Offset: 0xB7E714
    void Refresh(bool showLoadingIndicator, bool clear);
    // private System.Collections.IEnumerator RefreshDelayed(System.Boolean showLoadingIndicator, System.Boolean clear)
    // Offset: 0xB7F488
    System::Collections::IEnumerator* RefreshDelayed(bool showLoadingIndicator, bool clear);
    // private System.Void LoadScoresAsync()
    // Offset: 0xB7F550
    void LoadScoresAsync();
    // private System.Void ClearContent()
    // Offset: 0xB7E6A4
    void ClearContent();
    // public override System.Void SetData(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0xB7E64C
    // Implemented from: LeaderboardViewController
    // Base method: System.Void LeaderboardViewController::SetData(IDifficultyBeatmap difficultyBeatmap)
    void SetData(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // protected override System.Void DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    // Offset: 0xB7E8A4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    void DidActivate(bool firstActivation, HMUI::ViewController::ActivationType activationType);
    // protected override System.Void DidDeactivate(HMUI.ViewController/DeactivationType deactivationType)
    // Offset: 0xB7EF8C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(HMUI.ViewController/DeactivationType deactivationType)
    void DidDeactivate(HMUI::ViewController::DeactivationType deactivationType);
    // protected override System.Void OnDestroy()
    // Offset: 0xB7F150
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0xB7F620
    // Implemented from: LeaderboardViewController
    // Base method: System.Void LeaderboardViewController::.ctor()
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static CentralLeaderboardViewController* New_ctor();
  }; // CentralLeaderboardViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CentralLeaderboardViewController*, "", "CentralLeaderboardViewController");
#pragma pack(pop)
