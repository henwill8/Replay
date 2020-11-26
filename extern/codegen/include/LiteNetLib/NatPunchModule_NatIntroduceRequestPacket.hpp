// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.NatPunchModule
#include "LiteNetLib/NatPunchModule.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Autogenerated type: LiteNetLib.NatPunchModule/NatIntroduceRequestPacket
  class NatPunchModule::NatIntroduceRequestPacket : public ::Il2CppObject {
    public:
    // private System.Net.IPEndPoint <Internal>k__BackingField
    // Offset: 0x10
    System::Net::IPEndPoint* Internal;
    // private System.String <Token>k__BackingField
    // Offset: 0x18
    ::Il2CppString* Token;
    // public System.Net.IPEndPoint get_Internal()
    // Offset: 0x1DC5EAC
    System::Net::IPEndPoint* get_Internal();
    // public System.Void set_Internal(System.Net.IPEndPoint value)
    // Offset: 0x1DC5EB4
    void set_Internal(System::Net::IPEndPoint* value);
    // public System.String get_Token()
    // Offset: 0x1DC5EBC
    ::Il2CppString* get_Token();
    // public System.Void set_Token(System.String value)
    // Offset: 0x1DC5EC4
    void set_Token(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x1DC56B8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static NatPunchModule::NatIntroduceRequestPacket* New_ctor();
  }; // LiteNetLib.NatPunchModule/NatIntroduceRequestPacket
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NatPunchModule::NatIntroduceRequestPacket*, "LiteNetLib", "NatPunchModule/NatIntroduceRequestPacket");
#pragma pack(pop)
