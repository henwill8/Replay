// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryObjectString
  class BinaryObjectString : public ::Il2CppObject {
    public:
    // System.Int32 objectId
    // Offset: 0x10
    int objectId;
    // System.String value
    // Offset: 0x18
    ::Il2CppString* value;
    // System.Void Set(System.Int32 objectId, System.String value)
    // Offset: 0x13428D0
    void Set(int objectId, ::Il2CppString* value);
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x13428E0
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0x1342934
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // public System.Void Dump()
    // Offset: 0x1342984
    void Dump();
    // System.Void .ctor()
    // Offset: 0x13428C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BinaryObjectString* New_ctor();
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryObjectString
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*, "System.Runtime.Serialization.Formatters.Binary", "BinaryObjectString");
#pragma pack(pop)