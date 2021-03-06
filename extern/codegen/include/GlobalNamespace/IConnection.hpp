// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: DeliveryMethod
  struct DeliveryMethod;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IConnection
  // [] Offset: FFFFFFFF
  class IConnection {
    public:
    // Creating value type constructor for type: IConnection
    IConnection() noexcept {}
    // public System.String get_userId()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_userName();
    // public System.Boolean get_isConnectionOwner()
    // Offset: 0xFFFFFFFF
    bool get_isConnectionOwner();
    // public System.Void Send(LiteNetLib.Utils.NetDataWriter writer, LiteNetLib.DeliveryMethod deliveryMethod)
    // Offset: 0xFFFFFFFF
    void Send(LiteNetLib::Utils::NetDataWriter* writer, LiteNetLib::DeliveryMethod deliveryMethod);
    // public System.Void Disconnect()
    // Offset: 0xFFFFFFFF
    void Disconnect();
  }; // IConnection
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IConnection*, "", "IConnection");
