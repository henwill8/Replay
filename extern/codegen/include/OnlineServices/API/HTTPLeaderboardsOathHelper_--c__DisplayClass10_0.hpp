// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.API.HTTPLeaderboardsOathHelper
#include "OnlineServices/API/HTTPLeaderboardsOathHelper.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
  // Autogenerated type: OnlineServices.API.HTTPLeaderboardsOathHelper/<>c__DisplayClass10_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D31C30
  class HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.Networking.UnityWebRequest webRequest
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Networking::UnityWebRequest* webRequest;
    // Field size check
    static_assert(sizeof(UnityEngine::Networking::UnityWebRequest*) == 0x8);
    // public OnlineServices.API.HTTPLeaderboardsOathHelper <>4__this
    // Size: 0x8
    // Offset: 0x18
    OnlineServices::API::HTTPLeaderboardsOathHelper* $$4__this;
    // Field size check
    static_assert(sizeof(OnlineServices::API::HTTPLeaderboardsOathHelper*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass10_0
    $$c__DisplayClass10_0(UnityEngine::Networking::UnityWebRequest* webRequest_ = {}, OnlineServices::API::HTTPLeaderboardsOathHelper* $$4__this_ = {}) noexcept : webRequest{webRequest_}, $$4__this{$$4__this_} {}
    // public System.Void .ctor()
    // Offset: 0xF17CF0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0*, creationType>()));
    }
  }; // OnlineServices.API.HTTPLeaderboardsOathHelper/<>c__DisplayClass10_0
  #pragma pack(pop)
  static check_size<sizeof(HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0), 24 + sizeof(OnlineServices::API::HTTPLeaderboardsOathHelper*)> __OnlineServices_API_HTTPLeaderboardsOathHelper_$$c__DisplayClass10_0SizeCheck;
  static_assert(sizeof(HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0*, "OnlineServices.API", "HTTPLeaderboardsOathHelper/<>c__DisplayClass10_0");
