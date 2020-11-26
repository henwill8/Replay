// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ITimeProvider
#include "GlobalNamespace/ITimeProvider.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SyncTimeProvider
  class SyncTimeProvider : public ::Il2CppObject/*, public GlobalNamespace::ITimeProvider*/ {
    public:
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Offset: 0x10
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Creating interface conversion operator: operator GlobalNamespace::ITimeProvider
    operator GlobalNamespace::ITimeProvider() noexcept {
      return *reinterpret_cast<GlobalNamespace::ITimeProvider*>(this);
    }
    // Creating conversion operator: operator GlobalNamespace::IMultiplayerSessionManager*
    constexpr operator GlobalNamespace::IMultiplayerSessionManager*() const noexcept {
      return multiplayerSessionManager;
    }
    // public System.Single get_time()
    // Offset: 0xF499F8
    // Implemented from: ITimeProvider
    // Base method: System.Single ITimeProvider::get_time()
    float get_time();
    // public System.Void .ctor()
    // Offset: 0xF49AAC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SyncTimeProvider* New_ctor();
  }; // SyncTimeProvider
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SyncTimeProvider*, "", "SyncTimeProvider");
#pragma pack(pop)
