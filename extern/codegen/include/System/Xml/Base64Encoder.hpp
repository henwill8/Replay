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
  // Autogenerated type: System.Xml.Base64Encoder
  class Base64Encoder : public ::Il2CppObject {
    public:
    // private System.Byte[] leftOverBytes
    // Offset: 0x10
    ::Array<uint8_t>* leftOverBytes;
    // private System.Int32 leftOverBytesCount
    // Offset: 0x18
    int leftOverBytesCount;
    // private System.Char[] charsLine
    // Offset: 0x20
    ::Array<::Il2CppChar>* charsLine;
    // System.Void WriteChars(System.Char[] chars, System.Int32 index, System.Int32 count)
    // Offset: 0xFFFFFFFF
    void WriteChars(::Array<::Il2CppChar>* chars, int index, int count);
    // System.Void Encode(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x14DE8B8
    void Encode(::Array<uint8_t>* buffer, int index, int count);
    // System.Void Flush()
    // Offset: 0x14DEC00
    void Flush();
    // System.Void .ctor()
    // Offset: 0x14DE84C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Base64Encoder* New_ctor();
  }; // System.Xml.Base64Encoder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Base64Encoder*, "System.Xml", "Base64Encoder");
#pragma pack(pop)