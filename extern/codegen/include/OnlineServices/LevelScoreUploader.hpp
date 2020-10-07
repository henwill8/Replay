// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: PlatformOnlineServicesAvailabilityModel
  class PlatformOnlineServicesAvailabilityModel;
  // Forward declaring type: LevelScoreResultsData
  struct LevelScoreResultsData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HTTPLeaderboardsModel
  class HTTPLeaderboardsModel;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: OnlineServices
namespace OnlineServices {
  // Autogenerated type: OnlineServices.LevelScoreUploader
  class LevelScoreUploader : public ::Il2CppObject {
    public:
    // Nested type: OnlineServices::LevelScoreUploader::LevelScoreResultsDataUploadInfo
    class LevelScoreResultsDataUploadInfo;
    // Nested type: OnlineServices::LevelScoreUploader::$SendLevelScoreResultAsync$d__13
    struct $SendLevelScoreResultAsync$d__13;
    // private System.Action`1<System.String> scoreForLeaderboardDidUploadEvent
    // Offset: 0x10
    System::Action_1<::Il2CppString*>* scoreForLeaderboardDidUploadEvent;
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Offset: 0x18
    System::Threading::CancellationTokenSource* cancellationTokenSource;
    // private HTTPLeaderboardsModel _leaderboardsModel
    // Offset: 0x20
    GlobalNamespace::HTTPLeaderboardsModel* leaderboardsModel;
    // private System.Collections.Generic.List`1<OnlineServices.LevelScoreUploader/LevelScoreResultsDataUploadInfo> _unsuccessfullySentLevelScoreResultsDataUploadInfos
    // Offset: 0x28
    System::Collections::Generic::List_1<OnlineServices::LevelScoreUploader::LevelScoreResultsDataUploadInfo*>* unsuccessfullySentLevelScoreResultsDataUploadInfos;
    // private System.Collections.Generic.List`1<OnlineServices.LevelScoreUploader/LevelScoreResultsDataUploadInfo> _levelScoreResultsDataUploadInfos
    // Offset: 0x30
    System::Collections::Generic::List_1<OnlineServices::LevelScoreUploader::LevelScoreResultsDataUploadInfo*>* levelScoreResultsDataUploadInfos;
    // private OnlineServices.PlatformOnlineServicesAvailabilityModel _platformOnlineServicesAvailabilityModel
    // Offset: 0x38
    OnlineServices::PlatformOnlineServicesAvailabilityModel* platformOnlineServicesAvailabilityModel;
    // static field const value: static private System.Int32 kMaxUploadAttempts
    static constexpr const int kMaxUploadAttempts = 3;
    // Get static field: static private System.Int32 kMaxUploadAttempts
    static int _get_kMaxUploadAttempts();
    // Set static field: static private System.Int32 kMaxUploadAttempts
    static void _set_kMaxUploadAttempts(int value);
    // public System.Void add_scoreForLeaderboardDidUploadEvent(System.Action`1<System.String> value)
    // Offset: 0xBCD978
    void add_scoreForLeaderboardDidUploadEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_scoreForLeaderboardDidUploadEvent(System.Action`1<System.String> value)
    // Offset: 0xBCDA1C
    void remove_scoreForLeaderboardDidUploadEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void .ctor(HTTPLeaderboardsModel leaderboardsModel, OnlineServices.PlatformOnlineServicesAvailabilityModel platformOnlineServicesAvailabilityModel)
    // Offset: 0xBCDAC0
    static LevelScoreUploader* New_ctor(GlobalNamespace::HTTPLeaderboardsModel* leaderboardsModel, OnlineServices::PlatformOnlineServicesAvailabilityModel* platformOnlineServicesAvailabilityModel);
    // public System.Void SendLevelScoreResult(OnlineServices.LevelScoreResultsData levelScoreResultsData)
    // Offset: 0xBCDB98
    void SendLevelScoreResult(OnlineServices::LevelScoreResultsData levelScoreResultsData);
    // public System.Void TrySendPreviouslyUnsuccessfullySentResults()
    // Offset: 0xBCDD88
    void TrySendPreviouslyUnsuccessfullySentResults();
    // private System.Void SendLevelScoreResultAsync()
    // Offset: 0xBCDCB8
    void SendLevelScoreResultAsync();
    // private System.Void AddUnsuccessfullySentResults()
    // Offset: 0xBCDDAC
    void AddUnsuccessfullySentResults();
    // protected System.Void OnDestroy()
    // Offset: 0xBCDE20
    void OnDestroy();
  }; // OnlineServices.LevelScoreUploader
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::LevelScoreUploader*, "OnlineServices", "LevelScoreUploader");
#pragma pack(pop)
