// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
#include "UnityEngine/Networking/PlayerConnection/PlayerEditorConnectionEvents.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
// Completed includes
// Type namespace: UnityEngine.Networking.PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Autogenerated type: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
  class PlayerEditorConnectionEvents::ConnectionChangeEvent : public UnityEngine::Events::UnityEvent_1<int> {
    public:
    // public System.Void .ctor()
    // Offset: 0x172F140
    // Implemented from: UnityEngine.Events.UnityEvent`1
    // Base method: System.Void UnityEvent_1::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    static PlayerEditorConnectionEvents::ConnectionChangeEvent* New_ctor();
  }; // UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::ConnectionChangeEvent*, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents/ConnectionChangeEvent");
#pragma pack(pop)
