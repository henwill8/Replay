// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
#include "UnityEngine/Networking/PlayerConnection/PlayerEditorConnectionEvents.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
// Completed includes
// Type namespace: UnityEngine.Networking.PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Autogenerated type: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass8_0
  class PlayerEditorConnectionEvents::$$c__DisplayClass8_0 : public ::Il2CppObject {
    public:
    // public System.Guid messageId
    // Offset: 0x10
    System::Guid messageId;
    // Creating conversion operator: operator System::Guid
    constexpr operator System::Guid() const noexcept {
      return messageId;
    }
    // System.Boolean <UnregisterManagedCallback>b__0(UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers x)
    // Offset: 0x172F2F8
    bool $UnregisterManagedCallback$b__0(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers* x);
    // public System.Void .ctor()
    // Offset: 0x172F138
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlayerEditorConnectionEvents::$$c__DisplayClass8_0* New_ctor();
  }; // UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass8_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::$$c__DisplayClass8_0*, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents/<>c__DisplayClass8_0");
#pragma pack(pop)
