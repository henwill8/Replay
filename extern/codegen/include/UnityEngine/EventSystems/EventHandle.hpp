// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.EventHandle
  // [] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct EventHandle/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EventHandle
    constexpr EventHandle(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.EventSystems.EventHandle Unused
    static constexpr const int Unused = 0;
    // Get static field: static public UnityEngine.EventSystems.EventHandle Unused
    static UnityEngine::EventSystems::EventHandle _get_Unused();
    // Set static field: static public UnityEngine.EventSystems.EventHandle Unused
    static void _set_Unused(UnityEngine::EventSystems::EventHandle value);
    // static field const value: static public UnityEngine.EventSystems.EventHandle Used
    static constexpr const int Used = 1;
    // Get static field: static public UnityEngine.EventSystems.EventHandle Used
    static UnityEngine::EventSystems::EventHandle _get_Used();
    // Set static field: static public UnityEngine.EventSystems.EventHandle Used
    static void _set_Used(UnityEngine::EventSystems::EventHandle value);
  }; // UnityEngine.EventSystems.EventHandle
  #pragma pack(pop)
  static check_size<sizeof(EventHandle), 0 + sizeof(int)> __UnityEngine_EventSystems_EventHandleSizeCheck;
  static_assert(sizeof(EventHandle) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::EventHandle, "UnityEngine.EventSystems", "EventHandle");
