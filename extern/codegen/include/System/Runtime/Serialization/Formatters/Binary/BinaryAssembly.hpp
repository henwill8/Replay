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
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryAssembly
  class BinaryAssembly : public ::Il2CppObject {
    public:
    // System.Int32 assemId
    // Offset: 0x10
    int assemId;
    // System.String assemblyString
    // Offset: 0x18
    ::Il2CppString* assemblyString;
    // System.Void Set(System.Int32 assemId, System.String assemblyString)
    // Offset: 0x13408D0
    void Set(int assemId, ::Il2CppString* assemblyString);
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x13408E0
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0x1340934
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // public System.Void Dump()
    // Offset: 0x1340984
    void Dump();
    // System.Void .ctor()
    // Offset: 0x13408C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BinaryAssembly* New_ctor();
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryAssembly
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryAssembly*, "System.Runtime.Serialization.Formatters.Binary", "BinaryAssembly");
#pragma pack(pop)