// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.IntersectionMaskRectangle_t
#include "OVR/OpenVR/IntersectionMaskRectangle_t.hpp"
// Including type: OVR.OpenVR.IntersectionMaskCircle_t
#include "OVR/OpenVR/IntersectionMaskCircle_t.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.VROverlayIntersectionMaskPrimitive_Data_t
  struct VROverlayIntersectionMaskPrimitive_Data_t : public System::ValueType {
    public:
    // public OVR.OpenVR.IntersectionMaskRectangle_t m_Rectangle
    // Offset: 0x0
    OVR::OpenVR::IntersectionMaskRectangle_t m_Rectangle;
    // public OVR.OpenVR.IntersectionMaskCircle_t m_Circle
    // Offset: 0x0
    OVR::OpenVR::IntersectionMaskCircle_t m_Circle;
    // Creating value type constructor for type: VROverlayIntersectionMaskPrimitive_Data_t
    constexpr VROverlayIntersectionMaskPrimitive_Data_t(OVR::OpenVR::IntersectionMaskRectangle_t m_Rectangle_ = {}, OVR::OpenVR::IntersectionMaskCircle_t m_Circle_ = {}) noexcept : m_Rectangle{m_Rectangle_}, m_Circle{m_Circle_} {}
  }; // OVR.OpenVR.VROverlayIntersectionMaskPrimitive_Data_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t, "OVR.OpenVR", "VROverlayIntersectionMaskPrimitive_Data_t");
#pragma pack(pop)
