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
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.ControllerCommand
  struct ControllerCommand : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: ControllerCommand
    constexpr ControllerCommand(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Diagnostics.Tracing.ControllerCommand Update
    static constexpr const int Update = 0;
    // Get static field: static public System.Diagnostics.Tracing.ControllerCommand Update
    static System::Diagnostics::Tracing::ControllerCommand _get_Update();
    // Set static field: static public System.Diagnostics.Tracing.ControllerCommand Update
    static void _set_Update(System::Diagnostics::Tracing::ControllerCommand value);
    // static field const value: static public System.Diagnostics.Tracing.ControllerCommand SendManifest
    static constexpr const int SendManifest = -1;
    // Get static field: static public System.Diagnostics.Tracing.ControllerCommand SendManifest
    static System::Diagnostics::Tracing::ControllerCommand _get_SendManifest();
    // Set static field: static public System.Diagnostics.Tracing.ControllerCommand SendManifest
    static void _set_SendManifest(System::Diagnostics::Tracing::ControllerCommand value);
    // static field const value: static public System.Diagnostics.Tracing.ControllerCommand Enable
    static constexpr const int Enable = -2;
    // Get static field: static public System.Diagnostics.Tracing.ControllerCommand Enable
    static System::Diagnostics::Tracing::ControllerCommand _get_Enable();
    // Set static field: static public System.Diagnostics.Tracing.ControllerCommand Enable
    static void _set_Enable(System::Diagnostics::Tracing::ControllerCommand value);
    // static field const value: static public System.Diagnostics.Tracing.ControllerCommand Disable
    static constexpr const int Disable = -3;
    // Get static field: static public System.Diagnostics.Tracing.ControllerCommand Disable
    static System::Diagnostics::Tracing::ControllerCommand _get_Disable();
    // Set static field: static public System.Diagnostics.Tracing.ControllerCommand Disable
    static void _set_Disable(System::Diagnostics::Tracing::ControllerCommand value);
  }; // System.Diagnostics.Tracing.ControllerCommand
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::ControllerCommand, "System.Diagnostics.Tracing", "ControllerCommand");
#pragma pack(pop)