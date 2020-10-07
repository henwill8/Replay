// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.VREvent_Ipd_t
  struct VREvent_Ipd_t : public System::ValueType {
    public:
    // public System.Single ipdMeters
    // Offset: 0x0
    float ipdMeters;
    // Creating value type constructor for type: VREvent_Ipd_t
    constexpr VREvent_Ipd_t(float ipdMeters_ = {}) noexcept : ipdMeters{ipdMeters_} {}
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return ipdMeters;
    }
  }; // OVR.OpenVR.VREvent_Ipd_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_Ipd_t, "OVR.OpenVR", "VREvent_Ipd_t");
#pragma pack(pop)
