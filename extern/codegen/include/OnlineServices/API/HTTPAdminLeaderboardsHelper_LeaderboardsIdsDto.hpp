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
  // Autogenerated type: OnlineServices.API.HTTPAdminLeaderboardsHelper/LeaderboardsIdsDto
  class HTTPAdminLeaderboardsHelper::LeaderboardsIdsDto : public ::Il2CppObject {
    public:
    // public System.String[] leaderboardsIds
    // Offset: 0x10
    ::Array<::Il2CppString*>* leaderboardsIds;
    // Creating conversion operator: operator ::Array<::Il2CppString*>*
    constexpr operator ::Array<::Il2CppString*>*() const noexcept {
      return leaderboardsIds;
    }
    // public System.Void .ctor()
    // Offset: 0xEFA3B4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static HTTPAdminLeaderboardsHelper::LeaderboardsIdsDto* New_ctor();
  }; // OnlineServices.API.HTTPAdminLeaderboardsHelper/LeaderboardsIdsDto
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsIdsDto*, "OnlineServices.API", "HTTPAdminLeaderboardsHelper/LeaderboardsIdsDto");
#pragma pack(pop)
