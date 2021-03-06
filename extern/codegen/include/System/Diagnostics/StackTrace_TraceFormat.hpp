// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.StackTrace
#include "System/Diagnostics/StackTrace.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.StackTrace/TraceFormat
  // [] Offset: FFFFFFFF
  struct StackTrace::TraceFormat/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TraceFormat
    constexpr TraceFormat(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Diagnostics.StackTrace/TraceFormat Normal
    static constexpr const int Normal = 0;
    // Get static field: static public System.Diagnostics.StackTrace/TraceFormat Normal
    static System::Diagnostics::StackTrace::TraceFormat _get_Normal();
    // Set static field: static public System.Diagnostics.StackTrace/TraceFormat Normal
    static void _set_Normal(System::Diagnostics::StackTrace::TraceFormat value);
    // static field const value: static public System.Diagnostics.StackTrace/TraceFormat TrailingNewLine
    static constexpr const int TrailingNewLine = 1;
    // Get static field: static public System.Diagnostics.StackTrace/TraceFormat TrailingNewLine
    static System::Diagnostics::StackTrace::TraceFormat _get_TrailingNewLine();
    // Set static field: static public System.Diagnostics.StackTrace/TraceFormat TrailingNewLine
    static void _set_TrailingNewLine(System::Diagnostics::StackTrace::TraceFormat value);
    // static field const value: static public System.Diagnostics.StackTrace/TraceFormat NoResourceLookup
    static constexpr const int NoResourceLookup = 2;
    // Get static field: static public System.Diagnostics.StackTrace/TraceFormat NoResourceLookup
    static System::Diagnostics::StackTrace::TraceFormat _get_NoResourceLookup();
    // Set static field: static public System.Diagnostics.StackTrace/TraceFormat NoResourceLookup
    static void _set_NoResourceLookup(System::Diagnostics::StackTrace::TraceFormat value);
  }; // System.Diagnostics.StackTrace/TraceFormat
  #pragma pack(pop)
  static check_size<sizeof(StackTrace::TraceFormat), 0 + sizeof(int)> __System_Diagnostics_StackTrace_TraceFormatSizeCheck;
  static_assert(sizeof(StackTrace::TraceFormat) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::StackTrace::TraceFormat, "System.Diagnostics", "StackTrace/TraceFormat");
