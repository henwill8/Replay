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
  // Autogenerated type: PlayerNetworkFailReason
  // [] Offset: FFFFFFFF
  struct PlayerNetworkFailReason/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PlayerNetworkFailReason
    constexpr PlayerNetworkFailReason(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public PlayerNetworkFailReason StartupFail
    static constexpr const int StartupFail = 0;
    // Get static field: static public PlayerNetworkFailReason StartupFail
    static GlobalNamespace::PlayerNetworkFailReason _get_StartupFail();
    // Set static field: static public PlayerNetworkFailReason StartupFail
    static void _set_StartupFail(GlobalNamespace::PlayerNetworkFailReason value);
    // static field const value: static public PlayerNetworkFailReason HostEndedLevel
    static constexpr const int HostEndedLevel = 1;
    // Get static field: static public PlayerNetworkFailReason HostEndedLevel
    static GlobalNamespace::PlayerNetworkFailReason _get_HostEndedLevel();
    // Set static field: static public PlayerNetworkFailReason HostEndedLevel
    static void _set_HostEndedLevel(GlobalNamespace::PlayerNetworkFailReason value);
    // static field const value: static public PlayerNetworkFailReason PlayerQuit
    static constexpr const int PlayerQuit = 2;
    // Get static field: static public PlayerNetworkFailReason PlayerQuit
    static GlobalNamespace::PlayerNetworkFailReason _get_PlayerQuit();
    // Set static field: static public PlayerNetworkFailReason PlayerQuit
    static void _set_PlayerQuit(GlobalNamespace::PlayerNetworkFailReason value);
  }; // PlayerNetworkFailReason
  #pragma pack(pop)
  static check_size<sizeof(PlayerNetworkFailReason), 0 + sizeof(int)> __GlobalNamespace_PlayerNetworkFailReasonSizeCheck;
  static_assert(sizeof(PlayerNetworkFailReason) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerNetworkFailReason, "", "PlayerNetworkFailReason");
