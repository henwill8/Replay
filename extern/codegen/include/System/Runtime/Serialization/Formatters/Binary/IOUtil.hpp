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
  // Forward declaring type: MessageEnum
  struct MessageEnum;
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.IOUtil
  class IOUtil : public ::Il2CppObject {
    public:
    // static System.Boolean FlagTest(System.Runtime.Serialization.Formatters.Binary.MessageEnum flag, System.Runtime.Serialization.Formatters.Binary.MessageEnum target)
    // Offset: 0x12F1C70
    static bool FlagTest(System::Runtime::Serialization::Formatters::Binary::MessageEnum flag, System::Runtime::Serialization::Formatters::Binary::MessageEnum target);
    // static System.Void WriteStringWithCode(System.String value, System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x12F1C7C
    static void WriteStringWithCode(::Il2CppString* value, System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // static System.Void WriteWithCode(System.Type type, System.Object value, System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x12F1D38
    static void WriteWithCode(System::Type* type, ::Il2CppObject* value, System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
  }; // System.Runtime.Serialization.Formatters.Binary.IOUtil
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::IOUtil*, "System.Runtime.Serialization.Formatters.Binary", "IOUtil");
#pragma pack(pop)
