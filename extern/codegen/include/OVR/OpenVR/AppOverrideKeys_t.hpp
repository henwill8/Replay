// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.AppOverrideKeys_t
  struct AppOverrideKeys_t : public System::ValueType {
    public:
    // public System.IntPtr pchKey
    // Offset: 0x0
    System::IntPtr pchKey;
    // public System.IntPtr pchValue
    // Offset: 0x8
    System::IntPtr pchValue;
    // Creating value type constructor for type: AppOverrideKeys_t
    constexpr AppOverrideKeys_t(System::IntPtr pchKey_ = {}, System::IntPtr pchValue_ = {}) noexcept : pchKey{pchKey_}, pchValue{pchValue_} {}
  }; // OVR.OpenVR.AppOverrideKeys_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::AppOverrideKeys_t, "OVR.OpenVR", "AppOverrideKeys_t");
#pragma pack(pop)
