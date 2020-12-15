// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.IMasterServerUnreliableMessage
#include "MasterServer/IMasterServerUnreliableMessage.hpp"
// Including type: MasterServer.IUserServerToClientMessage
#include "MasterServer/IUserServerToClientMessage.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Skipping declaration: Result because it is already included!
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Autogenerated type: MasterServer.BroadcastServerHeartbeatResponse
  class BroadcastServerHeartbeatResponse : public ::Il2CppObject/*, public MasterServer::IMasterServerUnreliableMessage, public MasterServer::IUserServerToClientMessage*/ {
    public:
    // Nested type: MasterServer::BroadcastServerHeartbeatResponse::Result
    struct Result;
    // Autogenerated type: MasterServer.BroadcastServerHeartbeatResponse/Result
    struct Result : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: Result
      constexpr Result(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MasterServer.BroadcastServerHeartbeatResponse/Result Success
      static constexpr const int Success = 0;
      // Get static field: static public MasterServer.BroadcastServerHeartbeatResponse/Result Success
      static MasterServer::BroadcastServerHeartbeatResponse::Result _get_Success();
      // Set static field: static public MasterServer.BroadcastServerHeartbeatResponse/Result Success
      static void _set_Success(MasterServer::BroadcastServerHeartbeatResponse::Result value);
      // static field const value: static public MasterServer.BroadcastServerHeartbeatResponse/Result ServerDoesNotExist
      static constexpr const int ServerDoesNotExist = 1;
      // Get static field: static public MasterServer.BroadcastServerHeartbeatResponse/Result ServerDoesNotExist
      static MasterServer::BroadcastServerHeartbeatResponse::Result _get_ServerDoesNotExist();
      // Set static field: static public MasterServer.BroadcastServerHeartbeatResponse/Result ServerDoesNotExist
      static void _set_ServerDoesNotExist(MasterServer::BroadcastServerHeartbeatResponse::Result value);
      // static field const value: static public MasterServer.BroadcastServerHeartbeatResponse/Result UnknownError
      static constexpr const int UnknownError = 2;
      // Get static field: static public MasterServer.BroadcastServerHeartbeatResponse/Result UnknownError
      static MasterServer::BroadcastServerHeartbeatResponse::Result _get_UnknownError();
      // Set static field: static public MasterServer.BroadcastServerHeartbeatResponse/Result UnknownError
      static void _set_UnknownError(MasterServer::BroadcastServerHeartbeatResponse::Result value);
    }; // MasterServer.BroadcastServerHeartbeatResponse/Result
    // public MasterServer.BroadcastServerHeartbeatResponse/Result result
    // Offset: 0x10
    MasterServer::BroadcastServerHeartbeatResponse::Result result;
    // Creating interface conversion operator: operator MasterServer::IMasterServerUnreliableMessage
    operator MasterServer::IMasterServerUnreliableMessage() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerUnreliableMessage*>(this);
    }
    // Creating interface conversion operator: operator MasterServer::IUserServerToClientMessage
    operator MasterServer::IUserServerToClientMessage() noexcept {
      return *reinterpret_cast<MasterServer::IUserServerToClientMessage*>(this);
    }
    // Creating conversion operator: operator MasterServer::BroadcastServerHeartbeatResponse::Result
    constexpr operator MasterServer::BroadcastServerHeartbeatResponse::Result() const noexcept {
      return result;
    }
    // static public PacketPool`1<MasterServer.BroadcastServerHeartbeatResponse> get_pool()
    // Offset: 0x1AD3350
    static GlobalNamespace::PacketPool_1<MasterServer::BroadcastServerHeartbeatResponse*>* get_pool();
    // public MasterServer.BroadcastServerHeartbeatResponse Init(MasterServer.BroadcastServerHeartbeatResponse/Result result)
    // Offset: 0x1AD3398
    MasterServer::BroadcastServerHeartbeatResponse* Init(MasterServer::BroadcastServerHeartbeatResponse::Result result);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1AD33A0
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1AD33C4
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x1AD33FC
    // Implemented from: IPoolablePacket
    // Base method: System.Void IPoolablePacket::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x1AD3458
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BroadcastServerHeartbeatResponse* New_ctor();
  }; // MasterServer.BroadcastServerHeartbeatResponse
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::BroadcastServerHeartbeatResponse*, "MasterServer", "BroadcastServerHeartbeatResponse");
DEFINE_IL2CPP_ARG_TYPE(MasterServer::BroadcastServerHeartbeatResponse::Result, "MasterServer", "BroadcastServerHeartbeatResponse/Result");
#pragma pack(pop)