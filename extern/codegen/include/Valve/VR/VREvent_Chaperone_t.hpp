// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VREvent_Chaperone_t
  // [] Offset: FFFFFFFF
  struct VREvent_Chaperone_t/*, public System::ValueType*/ {
    public:
    // public System.UInt64 m_nPreviousUniverse
    // Size: 0x8
    // Offset: 0x0
    uint64_t m_nPreviousUniverse;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 m_nCurrentUniverse
    // Size: 0x8
    // Offset: 0x8
    uint64_t m_nCurrentUniverse;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Creating value type constructor for type: VREvent_Chaperone_t
    constexpr VREvent_Chaperone_t(uint64_t m_nPreviousUniverse_ = {}, uint64_t m_nCurrentUniverse_ = {}) noexcept : m_nPreviousUniverse{m_nPreviousUniverse_}, m_nCurrentUniverse{m_nCurrentUniverse_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // Valve.VR.VREvent_Chaperone_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_Chaperone_t), 8 + sizeof(uint64_t)> __Valve_VR_VREvent_Chaperone_tSizeCheck;
  static_assert(sizeof(VREvent_Chaperone_t) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VREvent_Chaperone_t, "Valve.VR", "VREvent_Chaperone_t");
