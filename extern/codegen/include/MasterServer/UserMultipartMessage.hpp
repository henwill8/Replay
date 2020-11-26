// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.BaseMasterServerMultipartMessage
#include "MasterServer/BaseMasterServerMultipartMessage.hpp"
// Including type: MasterServer.IUserMessage
#include "MasterServer/IUserMessage.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Autogenerated type: MasterServer.UserMultipartMessage
  class UserMultipartMessage : public MasterServer::BaseMasterServerMultipartMessage/*, public MasterServer::IUserMessage*/ {
    public:
    // Creating interface conversion operator: operator MasterServer::IUserMessage
    operator MasterServer::IUserMessage() noexcept {
      return *reinterpret_cast<MasterServer::IUserMessage*>(this);
    }
    // static public PacketPool`1<MasterServer.UserMultipartMessage> get_pool()
    // Offset: 0x1AD8DE4
    static GlobalNamespace::PacketPool_1<MasterServer::UserMultipartMessage*>* get_pool();
    // public override System.Void Release()
    // Offset: 0x1AE4A64
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x1AE4AC0
    // Implemented from: MasterServer.BaseMasterServerMultipartMessage
    // Base method: System.Void BaseMasterServerMultipartMessage::.ctor()
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    static UserMultipartMessage* New_ctor();
  }; // MasterServer.UserMultipartMessage
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::UserMultipartMessage*, "MasterServer", "UserMultipartMessage");
#pragma pack(pop)
