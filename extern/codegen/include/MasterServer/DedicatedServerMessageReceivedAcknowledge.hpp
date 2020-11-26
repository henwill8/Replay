// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerAcknowledgeMessage
#include "GlobalNamespace/BaseMasterServerAcknowledgeMessage.hpp"
// Including type: MasterServer.IDedicatedServerMessage
#include "MasterServer/IDedicatedServerMessage.hpp"
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
  // Autogenerated type: MasterServer.DedicatedServerMessageReceivedAcknowledge
  class DedicatedServerMessageReceivedAcknowledge : public GlobalNamespace::BaseMasterServerAcknowledgeMessage/*, public MasterServer::IDedicatedServerMessage*/ {
    public:
    // Creating interface conversion operator: operator MasterServer::IDedicatedServerMessage
    operator MasterServer::IDedicatedServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IDedicatedServerMessage*>(this);
    }
    // static public PacketPool`1<MasterServer.DedicatedServerMessageReceivedAcknowledge> get_pool()
    // Offset: 0x1AD52A8
    static GlobalNamespace::PacketPool_1<MasterServer::DedicatedServerMessageReceivedAcknowledge*>* get_pool();
    // public override System.Void Release()
    // Offset: 0x1AD52F0
    // Implemented from: BaseMasterServerResponse
    // Base method: System.Void BaseMasterServerResponse::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x1AD534C
    // Implemented from: BaseMasterServerAcknowledgeMessage
    // Base method: System.Void BaseMasterServerAcknowledgeMessage::.ctor()
    // Base method: System.Void BaseMasterServerResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    static DedicatedServerMessageReceivedAcknowledge* New_ctor();
  }; // MasterServer.DedicatedServerMessageReceivedAcknowledge
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::DedicatedServerMessageReceivedAcknowledge*, "MasterServer", "DedicatedServerMessageReceivedAcknowledge");
#pragma pack(pop)
