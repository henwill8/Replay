// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/MeshConstants
  // [] Offset: FFFFFFFF
  struct OVRPlugin::MeshConstants/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MeshConstants
    constexpr MeshConstants(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/MeshConstants MaxVertices
    static constexpr const int MaxVertices = 3000;
    // Get static field: static public OVRPlugin/MeshConstants MaxVertices
    static GlobalNamespace::OVRPlugin::MeshConstants _get_MaxVertices();
    // Set static field: static public OVRPlugin/MeshConstants MaxVertices
    static void _set_MaxVertices(GlobalNamespace::OVRPlugin::MeshConstants value);
    // static field const value: static public OVRPlugin/MeshConstants MaxIndices
    static constexpr const int MaxIndices = 18000;
    // Get static field: static public OVRPlugin/MeshConstants MaxIndices
    static GlobalNamespace::OVRPlugin::MeshConstants _get_MaxIndices();
    // Set static field: static public OVRPlugin/MeshConstants MaxIndices
    static void _set_MaxIndices(GlobalNamespace::OVRPlugin::MeshConstants value);
  }; // OVRPlugin/MeshConstants
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::MeshConstants), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_MeshConstantsSizeCheck;
  static_assert(sizeof(OVRPlugin::MeshConstants) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::MeshConstants, "", "OVRPlugin/MeshConstants");
