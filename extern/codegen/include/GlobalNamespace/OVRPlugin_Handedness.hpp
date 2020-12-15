// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/Handedness
  struct OVRPlugin::Handedness : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: Handedness
    constexpr Handedness(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/Handedness Unsupported
    static constexpr const int Unsupported = 0;
    // Get static field: static public OVRPlugin/Handedness Unsupported
    static GlobalNamespace::OVRPlugin::Handedness _get_Unsupported();
    // Set static field: static public OVRPlugin/Handedness Unsupported
    static void _set_Unsupported(GlobalNamespace::OVRPlugin::Handedness value);
    // static field const value: static public OVRPlugin/Handedness LeftHanded
    static constexpr const int LeftHanded = 1;
    // Get static field: static public OVRPlugin/Handedness LeftHanded
    static GlobalNamespace::OVRPlugin::Handedness _get_LeftHanded();
    // Set static field: static public OVRPlugin/Handedness LeftHanded
    static void _set_LeftHanded(GlobalNamespace::OVRPlugin::Handedness value);
    // static field const value: static public OVRPlugin/Handedness RightHanded
    static constexpr const int RightHanded = 2;
    // Get static field: static public OVRPlugin/Handedness RightHanded
    static GlobalNamespace::OVRPlugin::Handedness _get_RightHanded();
    // Set static field: static public OVRPlugin/Handedness RightHanded
    static void _set_RightHanded(GlobalNamespace::OVRPlugin::Handedness value);
  }; // OVRPlugin/Handedness
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Handedness, "", "OVRPlugin/Handedness");
#pragma pack(pop)