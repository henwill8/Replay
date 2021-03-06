// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerUnavailableReason
  // [] Offset: FFFFFFFF
  struct MultiplayerUnavailableReason/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MultiplayerUnavailableReason
    constexpr MultiplayerUnavailableReason(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public MultiplayerUnavailableReason NetworkUnreachable
    static constexpr const int NetworkUnreachable = 1;
    // Get static field: static public MultiplayerUnavailableReason NetworkUnreachable
    static GlobalNamespace::MultiplayerUnavailableReason _get_NetworkUnreachable();
    // Set static field: static public MultiplayerUnavailableReason NetworkUnreachable
    static void _set_NetworkUnreachable(GlobalNamespace::MultiplayerUnavailableReason value);
    // static field const value: static public MultiplayerUnavailableReason UpdateRequired
    static constexpr const int UpdateRequired = 2;
    // Get static field: static public MultiplayerUnavailableReason UpdateRequired
    static GlobalNamespace::MultiplayerUnavailableReason _get_UpdateRequired();
    // Set static field: static public MultiplayerUnavailableReason UpdateRequired
    static void _set_UpdateRequired(GlobalNamespace::MultiplayerUnavailableReason value);
    // static field const value: static public MultiplayerUnavailableReason ServerOffline
    static constexpr const int ServerOffline = 3;
    // Get static field: static public MultiplayerUnavailableReason ServerOffline
    static GlobalNamespace::MultiplayerUnavailableReason _get_ServerOffline();
    // Set static field: static public MultiplayerUnavailableReason ServerOffline
    static void _set_ServerOffline(GlobalNamespace::MultiplayerUnavailableReason value);
    // static field const value: static public MultiplayerUnavailableReason MaintenanceMode
    static constexpr const int MaintenanceMode = 4;
    // Get static field: static public MultiplayerUnavailableReason MaintenanceMode
    static GlobalNamespace::MultiplayerUnavailableReason _get_MaintenanceMode();
    // Set static field: static public MultiplayerUnavailableReason MaintenanceMode
    static void _set_MaintenanceMode(GlobalNamespace::MultiplayerUnavailableReason value);
  }; // MultiplayerUnavailableReason
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerUnavailableReason), 0 + sizeof(int)> __GlobalNamespace_MultiplayerUnavailableReasonSizeCheck;
  static_assert(sizeof(MultiplayerUnavailableReason) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerUnavailableReason, "", "MultiplayerUnavailableReason");
