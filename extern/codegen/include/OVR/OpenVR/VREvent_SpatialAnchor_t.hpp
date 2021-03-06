// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.VREvent_SpatialAnchor_t
  // [] Offset: FFFFFFFF
  struct VREvent_SpatialAnchor_t/*, public System::ValueType*/ {
    public:
    // public System.UInt32 unHandle
    // Size: 0x4
    // Offset: 0x0
    uint unHandle;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: VREvent_SpatialAnchor_t
    constexpr VREvent_SpatialAnchor_t(uint unHandle_ = {}) noexcept : unHandle{unHandle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return unHandle;
    }
  }; // OVR.OpenVR.VREvent_SpatialAnchor_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_SpatialAnchor_t), 0 + sizeof(uint)> __OVR_OpenVR_VREvent_SpatialAnchor_tSizeCheck;
  static_assert(sizeof(VREvent_SpatialAnchor_t) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_SpatialAnchor_t, "OVR.OpenVR", "VREvent_SpatialAnchor_t");
