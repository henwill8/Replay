// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.EColorSpace
  struct EColorSpace : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: EColorSpace
    constexpr EColorSpace(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EColorSpace Auto
    static constexpr const int Auto = 0;
    // Get static field: static public OVR.OpenVR.EColorSpace Auto
    static OVR::OpenVR::EColorSpace _get_Auto();
    // Set static field: static public OVR.OpenVR.EColorSpace Auto
    static void _set_Auto(OVR::OpenVR::EColorSpace value);
    // static field const value: static public OVR.OpenVR.EColorSpace Gamma
    static constexpr const int Gamma = 1;
    // Get static field: static public OVR.OpenVR.EColorSpace Gamma
    static OVR::OpenVR::EColorSpace _get_Gamma();
    // Set static field: static public OVR.OpenVR.EColorSpace Gamma
    static void _set_Gamma(OVR::OpenVR::EColorSpace value);
    // static field const value: static public OVR.OpenVR.EColorSpace Linear
    static constexpr const int Linear = 2;
    // Get static field: static public OVR.OpenVR.EColorSpace Linear
    static OVR::OpenVR::EColorSpace _get_Linear();
    // Set static field: static public OVR.OpenVR.EColorSpace Linear
    static void _set_Linear(OVR::OpenVR::EColorSpace value);
  }; // OVR.OpenVR.EColorSpace
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EColorSpace, "OVR.OpenVR", "EColorSpace");
#pragma pack(pop)
