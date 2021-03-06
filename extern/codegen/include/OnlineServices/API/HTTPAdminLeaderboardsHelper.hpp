// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OnlineServices::API
namespace OnlineServices::API {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: UriBuilder
  class UriBuilder;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OnlineServices.API.HTTPAdminLeaderboardsHelper
  // [] Offset: FFFFFFFF
  class HTTPAdminLeaderboardsHelper : public ::Il2CppObject {
    public:
    // Nested type: OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsIdsDto
    class LeaderboardsIdsDto;
    // Nested type: OnlineServices::API::HTTPAdminLeaderboardsHelper::ServerStatusResultDto
    class ServerStatusResultDto;
    // Nested type: OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoDto
    class LeaderboardsInfoDto;
    // Nested type: OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoResultDto
    class LeaderboardsInfoResultDto;
    // Nested type: OnlineServices::API::HTTPAdminLeaderboardsHelper::$ServerStatus$d__7
    struct $ServerStatus$d__7;
    // Nested type: OnlineServices::API::HTTPAdminLeaderboardsHelper::$LeaderboardsExist$d__8
    struct $LeaderboardsExist$d__8;
    // Nested type: OnlineServices::API::HTTPAdminLeaderboardsHelper::$CreateOrUpdateLeaderboards$d__9
    struct $CreateOrUpdateLeaderboards$d__9;
    // Nested type: OnlineServices::API::HTTPAdminLeaderboardsHelper::$SendWebRequestAsync$d__10
    struct $SendWebRequestAsync$d__10;
    // Nested type: OnlineServices::API::HTTPAdminLeaderboardsHelper::$SendAndWaitAsync$d__11
    struct $SendAndWaitAsync$d__11;
    // private System.String _secret
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* secret;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.UriBuilder _uriBuilder
    // Size: 0x8
    // Offset: 0x18
    System::UriBuilder* uriBuilder;
    // Field size check
    static_assert(sizeof(System::UriBuilder*) == 0x8);
    // Creating value type constructor for type: HTTPAdminLeaderboardsHelper
    HTTPAdminLeaderboardsHelper(::Il2CppString* secret_ = {}, System::UriBuilder* uriBuilder_ = {}) noexcept : secret{secret_}, uriBuilder{uriBuilder_} {}
    // public System.Void .ctor(System.String uri, System.String secret)
    // Offset: 0xF14EB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HTTPAdminLeaderboardsHelper* New_ctor(::Il2CppString* uri, ::Il2CppString* secret) {
      static auto ___internal__logger = ::Logger::get().WithContext("OnlineServices::API::HTTPAdminLeaderboardsHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HTTPAdminLeaderboardsHelper*, creationType>(uri, secret)));
    }
    // public System.Threading.Tasks.Task`1<System.String> ServerStatus(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xF14F48
    System::Threading::Tasks::Task_1<::Il2CppString*>* ServerStatus(System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<OnlineServices.API.HTTPAdminLeaderboardsHelper/LeaderboardsInfoResultDto> LeaderboardsExist(System.String[] leaderboardIds, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xF15098
    System::Threading::Tasks::Task_1<OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoResultDto*>* LeaderboardsExist(::Array<::Il2CppString*>* leaderboardIds, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<System.Boolean> CreateOrUpdateLeaderboards(System.String[] leaderboardIds, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xF151FC
    System::Threading::Tasks::Task_1<bool>* CreateOrUpdateLeaderboards(::Array<::Il2CppString*>* leaderboardIds, System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task`1<System.String> SendWebRequestAsync(System.String uri, System.String method, System.String bodyData, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xF15360
    System::Threading::Tasks::Task_1<::Il2CppString*>* SendWebRequestAsync(::Il2CppString* uri, ::Il2CppString* method, ::Il2CppString* bodyData, System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task SendAndWaitAsync(UnityEngine.Networking.UnityWebRequest webRequest, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xF154E4
    System::Threading::Tasks::Task* SendAndWaitAsync(UnityEngine::Networking::UnityWebRequest* webRequest, System::Threading::CancellationToken cancellationToken);
  }; // OnlineServices.API.HTTPAdminLeaderboardsHelper
  #pragma pack(pop)
  static check_size<sizeof(HTTPAdminLeaderboardsHelper), 24 + sizeof(System::UriBuilder*)> __OnlineServices_API_HTTPAdminLeaderboardsHelperSizeCheck;
  static_assert(sizeof(HTTPAdminLeaderboardsHelper) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPAdminLeaderboardsHelper*, "OnlineServices.API", "HTTPAdminLeaderboardsHelper");
