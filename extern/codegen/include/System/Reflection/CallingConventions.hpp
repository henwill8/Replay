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
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.CallingConventions
  struct CallingConventions : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: CallingConventions
    constexpr CallingConventions(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Reflection.CallingConventions Standard
    static constexpr const int Standard = 1;
    // Get static field: static public System.Reflection.CallingConventions Standard
    static System::Reflection::CallingConventions _get_Standard();
    // Set static field: static public System.Reflection.CallingConventions Standard
    static void _set_Standard(System::Reflection::CallingConventions value);
    // static field const value: static public System.Reflection.CallingConventions VarArgs
    static constexpr const int VarArgs = 2;
    // Get static field: static public System.Reflection.CallingConventions VarArgs
    static System::Reflection::CallingConventions _get_VarArgs();
    // Set static field: static public System.Reflection.CallingConventions VarArgs
    static void _set_VarArgs(System::Reflection::CallingConventions value);
    // static field const value: static public System.Reflection.CallingConventions Any
    static constexpr const int Any = 3;
    // Get static field: static public System.Reflection.CallingConventions Any
    static System::Reflection::CallingConventions _get_Any();
    // Set static field: static public System.Reflection.CallingConventions Any
    static void _set_Any(System::Reflection::CallingConventions value);
    // static field const value: static public System.Reflection.CallingConventions HasThis
    static constexpr const int HasThis = 32;
    // Get static field: static public System.Reflection.CallingConventions HasThis
    static System::Reflection::CallingConventions _get_HasThis();
    // Set static field: static public System.Reflection.CallingConventions HasThis
    static void _set_HasThis(System::Reflection::CallingConventions value);
    // static field const value: static public System.Reflection.CallingConventions ExplicitThis
    static constexpr const int ExplicitThis = 64;
    // Get static field: static public System.Reflection.CallingConventions ExplicitThis
    static System::Reflection::CallingConventions _get_ExplicitThis();
    // Set static field: static public System.Reflection.CallingConventions ExplicitThis
    static void _set_ExplicitThis(System::Reflection::CallingConventions value);
  }; // System.Reflection.CallingConventions
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::CallingConventions, "System.Reflection", "CallingConventions");
#pragma pack(pop)
