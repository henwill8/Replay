// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServerConnectionManager
#include "GlobalNamespace/MasterServerConnectionManager.hpp"
// Including type: IConnectionInitParams`1
#include "GlobalNamespace/IConnectionInitParams_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MasterServerEndPoint
  class MasterServerEndPoint;
  // Forward declaring type: IAuthenticationTokenProvider
  class IAuthenticationTokenProvider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MasterServerConnectionManager/MasterServerConnectionManagerParamsBase
  class MasterServerConnectionManager::MasterServerConnectionManagerParamsBase : public ::Il2CppObject/*, public GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::MasterServerConnectionManager*>*/ {
    public:
    // public MasterServerEndPoint masterServerEndPoint
    // Offset: 0x10
    GlobalNamespace::MasterServerEndPoint* masterServerEndPoint;
    // public IAuthenticationTokenProvider authenticationTokenProvider
    // Offset: 0x18
    GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider;
    // public System.String userId
    // Offset: 0x20
    ::Il2CppString* userId;
    // public System.String userName
    // Offset: 0x28
    ::Il2CppString* userName;
    // Creating interface conversion operator: operator GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::MasterServerConnectionManager*>
    operator GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::MasterServerConnectionManager*>() noexcept {
      return *reinterpret_cast<GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::MasterServerConnectionManager*>*>(this);
    }
    // protected System.Void .ctor()
    // Offset: 0x1AE71DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MasterServerConnectionManager::MasterServerConnectionManagerParamsBase* New_ctor();
  }; // MasterServerConnectionManager/MasterServerConnectionManagerParamsBase
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MasterServerConnectionManager::MasterServerConnectionManagerParamsBase*, "", "MasterServerConnectionManager/MasterServerConnectionManagerParamsBase");
#pragma pack(pop)
