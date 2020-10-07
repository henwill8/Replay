// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.KeyValuePairType
  struct KeyValuePairType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: KeyValuePairType
    constexpr KeyValuePairType(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Oculus.Platform.KeyValuePairType String
    static constexpr const int String = 0;
    // Get static field: static public Oculus.Platform.KeyValuePairType String
    static Oculus::Platform::KeyValuePairType _get_String();
    // Set static field: static public Oculus.Platform.KeyValuePairType String
    static void _set_String(Oculus::Platform::KeyValuePairType value);
    // static field const value: static public Oculus.Platform.KeyValuePairType Int
    static constexpr const int Int = 1;
    // Get static field: static public Oculus.Platform.KeyValuePairType Int
    static Oculus::Platform::KeyValuePairType _get_Int();
    // Set static field: static public Oculus.Platform.KeyValuePairType Int
    static void _set_Int(Oculus::Platform::KeyValuePairType value);
    // static field const value: static public Oculus.Platform.KeyValuePairType Double
    static constexpr const int Double = 2;
    // Get static field: static public Oculus.Platform.KeyValuePairType Double
    static Oculus::Platform::KeyValuePairType _get_Double();
    // Set static field: static public Oculus.Platform.KeyValuePairType Double
    static void _set_Double(Oculus::Platform::KeyValuePairType value);
    // static field const value: static public Oculus.Platform.KeyValuePairType Unknown
    static constexpr const int Unknown = 3;
    // Get static field: static public Oculus.Platform.KeyValuePairType Unknown
    static Oculus::Platform::KeyValuePairType _get_Unknown();
    // Set static field: static public Oculus.Platform.KeyValuePairType Unknown
    static void _set_Unknown(Oculus::Platform::KeyValuePairType value);
  }; // Oculus.Platform.KeyValuePairType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::KeyValuePairType, "Oculus.Platform", "KeyValuePairType");
#pragma pack(pop)
