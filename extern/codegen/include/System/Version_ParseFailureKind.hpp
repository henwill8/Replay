// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Version
#include "System/Version.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.Version/ParseFailureKind
  struct Version::ParseFailureKind : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: ParseFailureKind
    constexpr ParseFailureKind(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Version/ParseFailureKind ArgumentNullException
    static constexpr const int ArgumentNullException = 0;
    // Get static field: static public System.Version/ParseFailureKind ArgumentNullException
    static System::Version::ParseFailureKind _get_ArgumentNullException();
    // Set static field: static public System.Version/ParseFailureKind ArgumentNullException
    static void _set_ArgumentNullException(System::Version::ParseFailureKind value);
    // static field const value: static public System.Version/ParseFailureKind ArgumentException
    static constexpr const int ArgumentException = 1;
    // Get static field: static public System.Version/ParseFailureKind ArgumentException
    static System::Version::ParseFailureKind _get_ArgumentException();
    // Set static field: static public System.Version/ParseFailureKind ArgumentException
    static void _set_ArgumentException(System::Version::ParseFailureKind value);
    // static field const value: static public System.Version/ParseFailureKind ArgumentOutOfRangeException
    static constexpr const int ArgumentOutOfRangeException = 2;
    // Get static field: static public System.Version/ParseFailureKind ArgumentOutOfRangeException
    static System::Version::ParseFailureKind _get_ArgumentOutOfRangeException();
    // Set static field: static public System.Version/ParseFailureKind ArgumentOutOfRangeException
    static void _set_ArgumentOutOfRangeException(System::Version::ParseFailureKind value);
    // static field const value: static public System.Version/ParseFailureKind FormatException
    static constexpr const int FormatException = 3;
    // Get static field: static public System.Version/ParseFailureKind FormatException
    static System::Version::ParseFailureKind _get_FormatException();
    // Set static field: static public System.Version/ParseFailureKind FormatException
    static void _set_FormatException(System::Version::ParseFailureKind value);
  }; // System.Version/ParseFailureKind
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Version::ParseFailureKind, "System", "Version/ParseFailureKind");
#pragma pack(pop)
