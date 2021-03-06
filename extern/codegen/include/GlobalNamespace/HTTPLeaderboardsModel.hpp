// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.ILeaderboardsModel
#include "OnlineServices/ILeaderboardsModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: OnlineServices::API
namespace OnlineServices::API {
  // Forward declaring type: IUserLoginDtoDataSource
  class IUserLoginDtoDataSource;
  // Forward declaring type: IApiLeaderboardsModel
  class IApiLeaderboardsModel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: GetLeaderboardFilterData
  struct GetLeaderboardFilterData;
  // Forward declaring type: LevelScoreResultsData
  struct LevelScoreResultsData;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: HTTPLeaderboardsModel
  // [] Offset: FFFFFFFF
  class HTTPLeaderboardsModel : public ::Il2CppObject/*, public OnlineServices::ILeaderboardsModel*/ {
    public:
    // Nested type: GlobalNamespace::HTTPLeaderboardsModel::$$c
    class $$c;
    // Nested type: GlobalNamespace::HTTPLeaderboardsModel::$GetLeaderboardEntriesAsync$d__10
    struct $GetLeaderboardEntriesAsync$d__10;
    // Nested type: GlobalNamespace::HTTPLeaderboardsModel::$SendLevelScoreResultAsync$d__11
    struct $SendLevelScoreResultAsync$d__11;
    // [InjectAttribute] Offset: 0xD36790
    // private readonly OnlineServices.API.IUserLoginDtoDataSource _userLoginDataSource
    // Size: 0x8
    // Offset: 0x10
    OnlineServices::API::IUserLoginDtoDataSource* userLoginDataSource;
    // Field size check
    static_assert(sizeof(OnlineServices::API::IUserLoginDtoDataSource*) == 0x8);
    // [InjectAttribute] Offset: 0xD367A0
    // private readonly OnlineServices.API.IApiLeaderboardsModel _apiLeaderboardsModel
    // Size: 0x8
    // Offset: 0x18
    OnlineServices::API::IApiLeaderboardsModel* apiLeaderboardsModel;
    // Field size check
    static_assert(sizeof(OnlineServices::API::IApiLeaderboardsModel*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD367B0
    // private System.Action`1<System.String> scoreForLeaderboardDidUploadEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action_1<::Il2CppString*>* scoreForLeaderboardDidUploadEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppString*>*) == 0x8);
    // private readonly System.String _guid
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* guid;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String[] _friendsUserIds
    // Size: 0x8
    // Offset: 0x30
    ::Array<::Il2CppString*>* friendsUserIds;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.String _platformUserId
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* platformUserId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: HTTPLeaderboardsModel
    HTTPLeaderboardsModel(OnlineServices::API::IUserLoginDtoDataSource* userLoginDataSource_ = {}, OnlineServices::API::IApiLeaderboardsModel* apiLeaderboardsModel_ = {}, System::Action_1<::Il2CppString*>* scoreForLeaderboardDidUploadEvent_ = {}, ::Il2CppString* guid_ = {}, ::Array<::Il2CppString*>* friendsUserIds_ = {}, ::Il2CppString* platformUserId_ = {}) noexcept : userLoginDataSource{userLoginDataSource_}, apiLeaderboardsModel{apiLeaderboardsModel_}, scoreForLeaderboardDidUploadEvent{scoreForLeaderboardDidUploadEvent_}, guid{guid_}, friendsUserIds{friendsUserIds_}, platformUserId{platformUserId_} {}
    // Creating interface conversion operator: operator OnlineServices::ILeaderboardsModel
    operator OnlineServices::ILeaderboardsModel() noexcept {
      return *reinterpret_cast<OnlineServices::ILeaderboardsModel*>(this);
    }
    // public System.Void add_scoreForLeaderboardDidUploadEvent(System.Action`1<System.String> value)
    // Offset: 0xFC86CC
    void add_scoreForLeaderboardDidUploadEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_scoreForLeaderboardDidUploadEvent(System.Action`1<System.String> value)
    // Offset: 0xFC8770
    void remove_scoreForLeaderboardDidUploadEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void LogoutAsync()
    // Offset: 0xFC8814
    void LogoutAsync();
    // public System.String GetLeaderboardId(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0xFC88C8
    // Implemented from: OnlineServices.ILeaderboardsModel
    // Base method: System.String ILeaderboardsModel::GetLeaderboardId(IDifficultyBeatmap difficultyBeatmap)
    ::Il2CppString* GetLeaderboardId(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Threading.Tasks.Task`1<OnlineServices.GetLeaderboardEntriesResult> GetLeaderboardEntriesAsync(OnlineServices.GetLeaderboardFilterData leaderboardFilterData, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFC8BA8
    // Implemented from: OnlineServices.ILeaderboardsModel
    // Base method: System.Threading.Tasks.Task`1<OnlineServices.GetLeaderboardEntriesResult> ILeaderboardsModel::GetLeaderboardEntriesAsync(OnlineServices.GetLeaderboardFilterData leaderboardFilterData, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<OnlineServices::GetLeaderboardEntriesResult>* GetLeaderboardEntriesAsync(OnlineServices::GetLeaderboardFilterData leaderboardFilterData, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<OnlineServices.SendLeaderboardEntryResult> SendLevelScoreResultAsync(OnlineServices.LevelScoreResultsData levelResultsData, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFC8D08
    // Implemented from: OnlineServices.ILeaderboardsModel
    // Base method: System.Threading.Tasks.Task`1<OnlineServices.SendLeaderboardEntryResult> ILeaderboardsModel::SendLevelScoreResultAsync(OnlineServices.LevelScoreResultsData levelResultsData, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<OnlineServices::SendLeaderboardEntryResult>* SendLevelScoreResultAsync(OnlineServices::LevelScoreResultsData levelResultsData, System::Threading::CancellationToken cancellationToken);
    // public System.Void .ctor()
    // Offset: 0xFC8E70
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HTTPLeaderboardsModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HTTPLeaderboardsModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HTTPLeaderboardsModel*, creationType>()));
    }
  }; // HTTPLeaderboardsModel
  #pragma pack(pop)
  static check_size<sizeof(HTTPLeaderboardsModel), 56 + sizeof(::Il2CppString*)> __GlobalNamespace_HTTPLeaderboardsModelSizeCheck;
  static_assert(sizeof(HTTPLeaderboardsModel) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HTTPLeaderboardsModel*, "", "HTTPLeaderboardsModel");
