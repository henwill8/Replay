// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/Sizef
  struct OVRPlugin::Sizef : public System::ValueType {
    public:
    // public System.Single w
    // Offset: 0x0
    float w;
    // public System.Single h
    // Offset: 0x4
    float h;
    // Creating value type constructor for type: Sizef
    constexpr Sizef(float w_ = {}, float h_ = {}) noexcept : w{w_}, h{h_} {}
    // Get static field: static public readonly OVRPlugin/Sizef zero
    static GlobalNamespace::OVRPlugin::Sizef _get_zero();
    // Set static field: static public readonly OVRPlugin/Sizef zero
    static void _set_zero(GlobalNamespace::OVRPlugin::Sizef value);
    // static private System.Void .cctor()
    // Offset: 0x12E0910
    static void _cctor();
  }; // OVRPlugin/Sizef
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Sizef, "", "OVRPlugin/Sizef");
#pragma pack(pop)