// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: OVR.OpenVR.ETextureType
#include "OVR/OpenVR/ETextureType.hpp"
// Including type: OVR.OpenVR.EColorSpace
#include "OVR/OpenVR/EColorSpace.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.Texture_t
  struct Texture_t : public System::ValueType {
    public:
    // public System.IntPtr handle
    // Offset: 0x0
    System::IntPtr handle;
    // public OVR.OpenVR.ETextureType eType
    // Offset: 0x8
    OVR::OpenVR::ETextureType eType;
    // public OVR.OpenVR.EColorSpace eColorSpace
    // Offset: 0xC
    OVR::OpenVR::EColorSpace eColorSpace;
    // Creating value type constructor for type: Texture_t
    constexpr Texture_t(System::IntPtr handle_ = {}, OVR::OpenVR::ETextureType eType_ = {}, OVR::OpenVR::EColorSpace eColorSpace_ = {}) noexcept : handle{handle_}, eType{eType_}, eColorSpace{eColorSpace_} {}
  }; // OVR.OpenVR.Texture_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::Texture_t, "OVR.OpenVR", "Texture_t");
#pragma pack(pop)