// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.API.HTTPAdminLeaderboardsHelper
#include "OnlineServices/API/HTTPAdminLeaderboardsHelper.hpp"
// Completed includes
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Autogenerated type: OnlineServices.API.HTTPAdminLeaderboardsHelper/LeaderboardsInfoResultDto
  class HTTPAdminLeaderboardsHelper::LeaderboardsInfoResultDto : public ::Il2CppObject {
    public:
    // public OnlineServices.API.HTTPAdminLeaderboardsHelper/LeaderboardsInfoDto[] leaderboardsInfos
    // Offset: 0x10
    ::Array<OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoDto*>* leaderboardsInfos;
    // Creating conversion operator: operator ::Array<OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoDto*>*
    constexpr operator ::Array<OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoDto*>*() const noexcept {
      return leaderboardsInfos;
    }
    // public System.Void .ctor()
    // Offset: 0xEFA3C4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static HTTPAdminLeaderboardsHelper::LeaderboardsInfoResultDto* New_ctor();
  }; // OnlineServices.API.HTTPAdminLeaderboardsHelper/LeaderboardsInfoResultDto
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoResultDto*, "OnlineServices.API", "HTTPAdminLeaderboardsHelper/LeaderboardsInfoResultDto");
#pragma pack(pop)