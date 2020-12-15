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
  // Autogenerated type: OVRPlugin/RecenterFlags
  struct OVRPlugin::RecenterFlags : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: RecenterFlags
    constexpr RecenterFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/RecenterFlags Default
    static constexpr const int Default = 0;
    // Get static field: static public OVRPlugin/RecenterFlags Default
    static GlobalNamespace::OVRPlugin::RecenterFlags _get_Default();
    // Set static field: static public OVRPlugin/RecenterFlags Default
    static void _set_Default(GlobalNamespace::OVRPlugin::RecenterFlags value);
    // static field const value: static public OVRPlugin/RecenterFlags Controllers
    static constexpr const int Controllers = 1073741824;
    // Get static field: static public OVRPlugin/RecenterFlags Controllers
    static GlobalNamespace::OVRPlugin::RecenterFlags _get_Controllers();
    // Set static field: static public OVRPlugin/RecenterFlags Controllers
    static void _set_Controllers(GlobalNamespace::OVRPlugin::RecenterFlags value);
    // static field const value: static public OVRPlugin/RecenterFlags IgnoreAll
    static constexpr const int IgnoreAll = -2147483648;
    // Get static field: static public OVRPlugin/RecenterFlags IgnoreAll
    static GlobalNamespace::OVRPlugin::RecenterFlags _get_IgnoreAll();
    // Set static field: static public OVRPlugin/RecenterFlags IgnoreAll
    static void _set_IgnoreAll(GlobalNamespace::OVRPlugin::RecenterFlags value);
    // static field const value: static public OVRPlugin/RecenterFlags Count
    static constexpr const int Count = -2147483647;
    // Get static field: static public OVRPlugin/RecenterFlags Count
    static GlobalNamespace::OVRPlugin::RecenterFlags _get_Count();
    // Set static field: static public OVRPlugin/RecenterFlags Count
    static void _set_Count(GlobalNamespace::OVRPlugin::RecenterFlags value);
  }; // OVRPlugin/RecenterFlags
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::RecenterFlags, "", "OVRPlugin/RecenterFlags");
#pragma pack(pop)