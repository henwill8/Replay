// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Enum
  class Enum;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Utilities
namespace Org::BouncyCastle::Utilities {
  // Autogenerated type: Org.BouncyCastle.Utilities.Enums
  class Enums : public ::Il2CppObject {
    public:
    // static System.Enum GetEnumValue(System.Type enumType, System.String s)
    // Offset: 0x18BE930
    static System::Enum* GetEnumValue(System::Type* enumType, ::Il2CppString* s);
    // static System.Array GetEnumValues(System.Type enumType)
    // Offset: 0x18BEB28
    static System::Array* GetEnumValues(System::Type* enumType);
    // static System.Enum GetArbitraryValue(System.Type enumType)
    // Offset: 0x18BEBF8
    static System::Enum* GetArbitraryValue(System::Type* enumType);
    // static System.Boolean IsEnumType(System.Type t)
    // Offset: 0x18BEB08
    static bool IsEnumType(System::Type* t);
  }; // Org.BouncyCastle.Utilities.Enums
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Enums*, "Org.BouncyCastle.Utilities", "Enums");
#pragma pack(pop)
