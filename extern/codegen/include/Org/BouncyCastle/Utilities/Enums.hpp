// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.Enums
  // [] Offset: FFFFFFFF
  class Enums : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Enums
    Enums() noexcept {}
    // static System.Enum GetEnumValue(System.Type enumType, System.String s)
    // Offset: 0x1E5CDF8
    static System::Enum* GetEnumValue(System::Type* enumType, ::Il2CppString* s);
    // static System.Array GetEnumValues(System.Type enumType)
    // Offset: 0x1E5CFF0
    static System::Array* GetEnumValues(System::Type* enumType);
    // static System.Enum GetArbitraryValue(System.Type enumType)
    // Offset: 0x1E5D0C0
    static System::Enum* GetArbitraryValue(System::Type* enumType);
    // static System.Boolean IsEnumType(System.Type t)
    // Offset: 0x1E5CFD0
    static bool IsEnumType(System::Type* t);
  }; // Org.BouncyCastle.Utilities.Enums
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Enums*, "Org.BouncyCastle.Utilities", "Enums");
