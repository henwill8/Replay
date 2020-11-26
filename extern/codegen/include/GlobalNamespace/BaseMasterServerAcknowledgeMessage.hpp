// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerResponse
#include "GlobalNamespace/BaseMasterServerResponse.hpp"
// Including type: MasterServer.IMasterServerAcknowledgeMessage
#include "MasterServer/IMasterServerAcknowledgeMessage.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BaseMasterServerAcknowledgeMessage
  class BaseMasterServerAcknowledgeMessage : public GlobalNamespace::BaseMasterServerResponse/*, public MasterServer::IMasterServerAcknowledgeMessage*/ {
    public:
    // private System.Boolean <messageHandled>k__BackingField
    // Offset: 0x14
    bool messageHandled;
    // Creating interface conversion operator: operator MasterServer::IMasterServerAcknowledgeMessage
    operator MasterServer::IMasterServerAcknowledgeMessage() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerAcknowledgeMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // private System.Void set_messageHandled(System.Boolean value)
    // Offset: 0x1B43504
    void set_messageHandled(bool value);
    // public BaseMasterServerAcknowledgeMessage Init(System.Boolean messageHandled)
    // Offset: 0x1B43510
    GlobalNamespace::BaseMasterServerAcknowledgeMessage* Init(bool messageHandled);
    // public override System.Byte get_resultCode()
    // Offset: 0x1B43494
    // Implemented from: BaseMasterServerResponse
    // Base method: System.Byte BaseMasterServerResponse::get_resultCode()
    uint8_t get_resultCode();
    // public override System.String get_resultCodeString()
    // Offset: 0x1B4349C
    // Implemented from: BaseMasterServerResponse
    // Base method: System.String BaseMasterServerResponse::get_resultCodeString()
    ::Il2CppString* get_resultCodeString();
    // public System.Boolean get_messageHandled()
    // Offset: 0x1B434FC
    // Implemented from: MasterServer.IMasterServerAcknowledgeMessage
    // Base method: System.Boolean IMasterServerAcknowledgeMessage::get_messageHandled()
    bool get_messageHandled();
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1B4351C
    // Implemented from: BaseMasterServerResponse
    // Base method: System.Void BaseMasterServerResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1B43584
    // Implemented from: BaseMasterServerResponse
    // Base method: System.Void BaseMasterServerResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // protected System.Void .ctor()
    // Offset: 0x1B43604
    // Implemented from: BaseMasterServerResponse
    // Base method: System.Void BaseMasterServerResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    static BaseMasterServerAcknowledgeMessage* New_ctor();
  }; // BaseMasterServerAcknowledgeMessage
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseMasterServerAcknowledgeMessage*, "", "BaseMasterServerAcknowledgeMessage");
#pragma pack(pop)
