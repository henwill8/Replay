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
  // Autogenerated type: OVRPlugin/Bool
  struct OVRPlugin::Bool : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: Bool
    constexpr Bool(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/Bool False
    static constexpr const int False = 0;
    // Get static field: static public OVRPlugin/Bool False
    static GlobalNamespace::OVRPlugin::Bool _get_False();
    // Set static field: static public OVRPlugin/Bool False
    static void _set_False(GlobalNamespace::OVRPlugin::Bool value);
    // static field const value: static public OVRPlugin/Bool True
    static constexpr const int True = 1;
    // Get static field: static public OVRPlugin/Bool True
    static GlobalNamespace::OVRPlugin::Bool _get_True();
    // Set static field: static public OVRPlugin/Bool True
    static void _set_True(GlobalNamespace::OVRPlugin::Bool value);
  }; // OVRPlugin/Bool
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Bool, "", "OVRPlugin/Bool");
#pragma pack(pop)
