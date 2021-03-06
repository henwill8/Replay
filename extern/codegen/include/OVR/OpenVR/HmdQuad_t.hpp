// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.HmdVector3_t
#include "OVR/OpenVR/HmdVector3_t.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.HmdQuad_t
  // [] Offset: FFFFFFFF
  struct HmdQuad_t/*, public System::ValueType*/ {
    public:
    // public OVR.OpenVR.HmdVector3_t vCorners0
    // Size: 0xC
    // Offset: 0x0
    OVR::OpenVR::HmdVector3_t vCorners0;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::HmdVector3_t) == 0xC);
    // public OVR.OpenVR.HmdVector3_t vCorners1
    // Size: 0xC
    // Offset: 0xC
    OVR::OpenVR::HmdVector3_t vCorners1;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::HmdVector3_t) == 0xC);
    // public OVR.OpenVR.HmdVector3_t vCorners2
    // Size: 0xC
    // Offset: 0x18
    OVR::OpenVR::HmdVector3_t vCorners2;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::HmdVector3_t) == 0xC);
    // public OVR.OpenVR.HmdVector3_t vCorners3
    // Size: 0xC
    // Offset: 0x24
    OVR::OpenVR::HmdVector3_t vCorners3;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::HmdVector3_t) == 0xC);
    // Creating value type constructor for type: HmdQuad_t
    constexpr HmdQuad_t(OVR::OpenVR::HmdVector3_t vCorners0_ = {}, OVR::OpenVR::HmdVector3_t vCorners1_ = {}, OVR::OpenVR::HmdVector3_t vCorners2_ = {}, OVR::OpenVR::HmdVector3_t vCorners3_ = {}) noexcept : vCorners0{vCorners0_}, vCorners1{vCorners1_}, vCorners2{vCorners2_}, vCorners3{vCorners3_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // OVR.OpenVR.HmdQuad_t
  #pragma pack(pop)
  static check_size<sizeof(HmdQuad_t), 36 + sizeof(OVR::OpenVR::HmdVector3_t)> __OVR_OpenVR_HmdQuad_tSizeCheck;
  static_assert(sizeof(HmdQuad_t) == 0x30);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::HmdQuad_t, "OVR.OpenVR", "HmdQuad_t");
