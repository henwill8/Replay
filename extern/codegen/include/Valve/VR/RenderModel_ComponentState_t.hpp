// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.HmdMatrix34_t
#include "Valve/VR/HmdMatrix34_t.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x64
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.RenderModel_ComponentState_t
  // [] Offset: FFFFFFFF
  struct RenderModel_ComponentState_t/*, public System::ValueType*/ {
    public:
    // public Valve.VR.HmdMatrix34_t mTrackingToComponentRenderModel
    // Size: 0x30
    // Offset: 0x0
    Valve::VR::HmdMatrix34_t mTrackingToComponentRenderModel;
    // Field size check
    static_assert(sizeof(Valve::VR::HmdMatrix34_t) == 0x30);
    // public Valve.VR.HmdMatrix34_t mTrackingToComponentLocal
    // Size: 0x30
    // Offset: 0x30
    Valve::VR::HmdMatrix34_t mTrackingToComponentLocal;
    // Field size check
    static_assert(sizeof(Valve::VR::HmdMatrix34_t) == 0x30);
    // public System.UInt32 uProperties
    // Size: 0x4
    // Offset: 0x60
    uint uProperties;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: RenderModel_ComponentState_t
    constexpr RenderModel_ComponentState_t(Valve::VR::HmdMatrix34_t mTrackingToComponentRenderModel_ = {}, Valve::VR::HmdMatrix34_t mTrackingToComponentLocal_ = {}, uint uProperties_ = {}) noexcept : mTrackingToComponentRenderModel{mTrackingToComponentRenderModel_}, mTrackingToComponentLocal{mTrackingToComponentLocal_}, uProperties{uProperties_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // Valve.VR.RenderModel_ComponentState_t
  #pragma pack(pop)
  static check_size<sizeof(RenderModel_ComponentState_t), 96 + sizeof(uint)> __Valve_VR_RenderModel_ComponentState_tSizeCheck;
  static_assert(sizeof(RenderModel_ComponentState_t) == 0x64);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::RenderModel_ComponentState_t, "Valve.VR", "RenderModel_ComponentState_t");
