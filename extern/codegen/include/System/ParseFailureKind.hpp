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
// Type namespace: System
namespace System {
  // Autogenerated type: System.ParseFailureKind
  struct ParseFailureKind : public System::Enum {
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
    // static field const value: static public System.ParseFailureKind None
    static constexpr const int None = 0;
    // Get static field: static public System.ParseFailureKind None
    static System::ParseFailureKind _get_None();
    // Set static field: static public System.ParseFailureKind None
    static void _set_None(System::ParseFailureKind value);
    // static field const value: static public System.ParseFailureKind ArgumentNull
    static constexpr const int ArgumentNull = 1;
    // Get static field: static public System.ParseFailureKind ArgumentNull
    static System::ParseFailureKind _get_ArgumentNull();
    // Set static field: static public System.ParseFailureKind ArgumentNull
    static void _set_ArgumentNull(System::ParseFailureKind value);
    // static field const value: static public System.ParseFailureKind Format
    static constexpr const int Format = 2;
    // Get static field: static public System.ParseFailureKind Format
    static System::ParseFailureKind _get_Format();
    // Set static field: static public System.ParseFailureKind Format
    static void _set_Format(System::ParseFailureKind value);
    // static field const value: static public System.ParseFailureKind FormatWithParameter
    static constexpr const int FormatWithParameter = 3;
    // Get static field: static public System.ParseFailureKind FormatWithParameter
    static System::ParseFailureKind _get_FormatWithParameter();
    // Set static field: static public System.ParseFailureKind FormatWithParameter
    static void _set_FormatWithParameter(System::ParseFailureKind value);
    // static field const value: static public System.ParseFailureKind FormatBadDateTimeCalendar
    static constexpr const int FormatBadDateTimeCalendar = 4;
    // Get static field: static public System.ParseFailureKind FormatBadDateTimeCalendar
    static System::ParseFailureKind _get_FormatBadDateTimeCalendar();
    // Set static field: static public System.ParseFailureKind FormatBadDateTimeCalendar
    static void _set_FormatBadDateTimeCalendar(System::ParseFailureKind value);
  }; // System.ParseFailureKind
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ParseFailureKind, "System", "ParseFailureKind");
#pragma pack(pop)
