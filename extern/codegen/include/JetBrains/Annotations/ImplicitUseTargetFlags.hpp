// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.ImplicitUseTargetFlags
  // [] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct ImplicitUseTargetFlags/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ImplicitUseTargetFlags
    constexpr ImplicitUseTargetFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public JetBrains.Annotations.ImplicitUseTargetFlags Default
    static constexpr const int Default = 1;
    // Get static field: static public JetBrains.Annotations.ImplicitUseTargetFlags Default
    static JetBrains::Annotations::ImplicitUseTargetFlags _get_Default();
    // Set static field: static public JetBrains.Annotations.ImplicitUseTargetFlags Default
    static void _set_Default(JetBrains::Annotations::ImplicitUseTargetFlags value);
    // static field const value: static public JetBrains.Annotations.ImplicitUseTargetFlags Itself
    static constexpr const int Itself = 1;
    // Get static field: static public JetBrains.Annotations.ImplicitUseTargetFlags Itself
    static JetBrains::Annotations::ImplicitUseTargetFlags _get_Itself();
    // Set static field: static public JetBrains.Annotations.ImplicitUseTargetFlags Itself
    static void _set_Itself(JetBrains::Annotations::ImplicitUseTargetFlags value);
    // static field const value: static public JetBrains.Annotations.ImplicitUseTargetFlags Members
    static constexpr const int Members = 2;
    // Get static field: static public JetBrains.Annotations.ImplicitUseTargetFlags Members
    static JetBrains::Annotations::ImplicitUseTargetFlags _get_Members();
    // Set static field: static public JetBrains.Annotations.ImplicitUseTargetFlags Members
    static void _set_Members(JetBrains::Annotations::ImplicitUseTargetFlags value);
    // static field const value: static public JetBrains.Annotations.ImplicitUseTargetFlags WithMembers
    static constexpr const int WithMembers = 3;
    // Get static field: static public JetBrains.Annotations.ImplicitUseTargetFlags WithMembers
    static JetBrains::Annotations::ImplicitUseTargetFlags _get_WithMembers();
    // Set static field: static public JetBrains.Annotations.ImplicitUseTargetFlags WithMembers
    static void _set_WithMembers(JetBrains::Annotations::ImplicitUseTargetFlags value);
  }; // JetBrains.Annotations.ImplicitUseTargetFlags
  #pragma pack(pop)
  static check_size<sizeof(ImplicitUseTargetFlags), 0 + sizeof(int)> __JetBrains_Annotations_ImplicitUseTargetFlagsSizeCheck;
  static_assert(sizeof(ImplicitUseTargetFlags) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::ImplicitUseTargetFlags, "JetBrains.Annotations", "ImplicitUseTargetFlags");
