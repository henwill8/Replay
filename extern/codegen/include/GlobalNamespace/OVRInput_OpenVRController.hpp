// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRInput/OpenVRController
  struct OVRInput::OpenVRController : public System::Enum {
    public:
    // public System.UInt64 value__
    // Offset: 0x0
    uint64_t value;
    // Creating value type constructor for type: OpenVRController
    constexpr OpenVRController(uint64_t value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return value;
    }
    // static field const value: static public OVRInput/OpenVRController Unknown
    static constexpr const uint64_t Unknown = 0u;
    // Get static field: static public OVRInput/OpenVRController Unknown
    static GlobalNamespace::OVRInput::OpenVRController _get_Unknown();
    // Set static field: static public OVRInput/OpenVRController Unknown
    static void _set_Unknown(GlobalNamespace::OVRInput::OpenVRController value);
    // static field const value: static public OVRInput/OpenVRController OculusTouch
    static constexpr const uint64_t OculusTouch = 1u;
    // Get static field: static public OVRInput/OpenVRController OculusTouch
    static GlobalNamespace::OVRInput::OpenVRController _get_OculusTouch();
    // Set static field: static public OVRInput/OpenVRController OculusTouch
    static void _set_OculusTouch(GlobalNamespace::OVRInput::OpenVRController value);
    // static field const value: static public OVRInput/OpenVRController ViveController
    static constexpr const uint64_t ViveController = 2u;
    // Get static field: static public OVRInput/OpenVRController ViveController
    static GlobalNamespace::OVRInput::OpenVRController _get_ViveController();
    // Set static field: static public OVRInput/OpenVRController ViveController
    static void _set_ViveController(GlobalNamespace::OVRInput::OpenVRController value);
    // static field const value: static public OVRInput/OpenVRController WindowsMRController
    static constexpr const uint64_t WindowsMRController = 3u;
    // Get static field: static public OVRInput/OpenVRController WindowsMRController
    static GlobalNamespace::OVRInput::OpenVRController _get_WindowsMRController();
    // Set static field: static public OVRInput/OpenVRController WindowsMRController
    static void _set_WindowsMRController(GlobalNamespace::OVRInput::OpenVRController value);
  }; // OVRInput/OpenVRController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::OpenVRController, "", "OVRInput/OpenVRController");
#pragma pack(pop)
