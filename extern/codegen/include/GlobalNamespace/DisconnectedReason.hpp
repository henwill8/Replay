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
  // Autogenerated type: DisconnectedReason
  // [] Offset: FFFFFFFF
  struct DisconnectedReason/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DisconnectedReason
    constexpr DisconnectedReason(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public DisconnectedReason Unknown
    static constexpr const int Unknown = 1;
    // Get static field: static public DisconnectedReason Unknown
    static GlobalNamespace::DisconnectedReason _get_Unknown();
    // Set static field: static public DisconnectedReason Unknown
    static void _set_Unknown(GlobalNamespace::DisconnectedReason value);
    // static field const value: static public DisconnectedReason UserInitiated
    static constexpr const int UserInitiated = 2;
    // Get static field: static public DisconnectedReason UserInitiated
    static GlobalNamespace::DisconnectedReason _get_UserInitiated();
    // Set static field: static public DisconnectedReason UserInitiated
    static void _set_UserInitiated(GlobalNamespace::DisconnectedReason value);
    // static field const value: static public DisconnectedReason Timeout
    static constexpr const int Timeout = 3;
    // Get static field: static public DisconnectedReason Timeout
    static GlobalNamespace::DisconnectedReason _get_Timeout();
    // Set static field: static public DisconnectedReason Timeout
    static void _set_Timeout(GlobalNamespace::DisconnectedReason value);
    // static field const value: static public DisconnectedReason Kicked
    static constexpr const int Kicked = 4;
    // Get static field: static public DisconnectedReason Kicked
    static GlobalNamespace::DisconnectedReason _get_Kicked();
    // Set static field: static public DisconnectedReason Kicked
    static void _set_Kicked(GlobalNamespace::DisconnectedReason value);
    // static field const value: static public DisconnectedReason ServerAtCapacity
    static constexpr const int ServerAtCapacity = 5;
    // Get static field: static public DisconnectedReason ServerAtCapacity
    static GlobalNamespace::DisconnectedReason _get_ServerAtCapacity();
    // Set static field: static public DisconnectedReason ServerAtCapacity
    static void _set_ServerAtCapacity(GlobalNamespace::DisconnectedReason value);
    // static field const value: static public DisconnectedReason ServerShutDown
    static constexpr const int ServerShutDown = 6;
    // Get static field: static public DisconnectedReason ServerShutDown
    static GlobalNamespace::DisconnectedReason _get_ServerShutDown();
    // Set static field: static public DisconnectedReason ServerShutDown
    static void _set_ServerShutDown(GlobalNamespace::DisconnectedReason value);
    // static field const value: static public DisconnectedReason MasterServerUnreachable
    static constexpr const int MasterServerUnreachable = 7;
    // Get static field: static public DisconnectedReason MasterServerUnreachable
    static GlobalNamespace::DisconnectedReason _get_MasterServerUnreachable();
    // Set static field: static public DisconnectedReason MasterServerUnreachable
    static void _set_MasterServerUnreachable(GlobalNamespace::DisconnectedReason value);
    // static field const value: static public DisconnectedReason ClientShutDown
    static constexpr const int ClientShutDown = 8;
    // Get static field: static public DisconnectedReason ClientShutDown
    static GlobalNamespace::DisconnectedReason _get_ClientShutDown();
    // Set static field: static public DisconnectedReason ClientShutDown
    static void _set_ClientShutDown(GlobalNamespace::DisconnectedReason value);
    // static field const value: static public DisconnectedReason NetworkDisconnected
    static constexpr const int NetworkDisconnected = 9;
    // Get static field: static public DisconnectedReason NetworkDisconnected
    static GlobalNamespace::DisconnectedReason _get_NetworkDisconnected();
    // Set static field: static public DisconnectedReason NetworkDisconnected
    static void _set_NetworkDisconnected(GlobalNamespace::DisconnectedReason value);
  }; // DisconnectedReason
  #pragma pack(pop)
  static check_size<sizeof(DisconnectedReason), 0 + sizeof(int)> __GlobalNamespace_DisconnectedReasonSizeCheck;
  static_assert(sizeof(DisconnectedReason) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DisconnectedReason, "", "DisconnectedReason");
