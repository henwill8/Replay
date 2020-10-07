// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.BitStack
  class BitStack : public ::Il2CppObject {
    public:
    // private System.UInt32[] bitStack
    // Offset: 0x10
    ::Array<uint>* bitStack;
    // private System.Int32 stackPos
    // Offset: 0x18
    int stackPos;
    // private System.UInt32 curr
    // Offset: 0x1C
    uint curr;
    // public System.Void PushBit(System.Boolean bit)
    // Offset: 0x1198E98
    void PushBit(bool bit);
    // public System.Boolean PopBit()
    // Offset: 0x1198FF4
    bool PopBit();
    // public System.Boolean PeekBit()
    // Offset: 0x1199078
    bool PeekBit();
    // private System.Void PushCurr()
    // Offset: 0x1198ED4
    void PushCurr();
    // private System.Void PopCurr()
    // Offset: 0x1199028
    void PopCurr();
    // public System.Void .ctor()
    // Offset: 0x1198E6C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BitStack* New_ctor();
  }; // System.Xml.BitStack
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::BitStack*, "System.Xml", "BitStack");
#pragma pack(pop)
