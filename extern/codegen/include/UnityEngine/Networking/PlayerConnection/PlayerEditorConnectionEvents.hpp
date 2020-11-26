// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking::PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Forward declaring type: MessageEventArgs
  class MessageEventArgs;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent`1<T0>
  template<typename T0>
  class UnityEvent_1;
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Networking.PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Autogenerated type: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
  class PlayerEditorConnectionEvents : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageEvent
    class MessageEvent;
    // Nested type: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::ConnectionChangeEvent
    class ConnectionChangeEvent;
    // Nested type: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers
    class MessageTypeSubscribers;
    // Nested type: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Nested type: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::$$c__DisplayClass7_0
    class $$c__DisplayClass7_0;
    // Nested type: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::$$c__DisplayClass8_0
    class $$c__DisplayClass8_0;
    // public System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers> messageTypeSubscribers
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers*>* messageTypeSubscribers;
    // public UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent connectionEvent
    // Offset: 0x18
    UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::ConnectionChangeEvent* connectionEvent;
    // public UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent disconnectionEvent
    // Offset: 0x20
    UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::ConnectionChangeEvent* disconnectionEvent;
    // public System.Void InvokeMessageIdSubscribers(System.Guid messageId, System.Byte[] data, System.Int32 playerId)
    // Offset: 0x172E814
    void InvokeMessageIdSubscribers(System::Guid messageId, ::Array<uint8_t>* data, int playerId);
    // public UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs> AddAndCreate(System.Guid messageId)
    // Offset: 0x172DAA4
    UnityEngine::Events::UnityEvent_1<UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* AddAndCreate(System::Guid messageId);
    // public System.Void UnregisterManagedCallback(System.Guid messageId, UnityEngine.Events.UnityAction`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs> callback)
    // Offset: 0x172DDAC
    void UnregisterManagedCallback(System::Guid messageId, UnityEngine::Events::UnityAction_1<UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* callback);
    // public System.Void .ctor()
    // Offset: 0x172EDB0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlayerEditorConnectionEvents* New_ctor();
  }; // UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents*, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents");
#pragma pack(pop)
