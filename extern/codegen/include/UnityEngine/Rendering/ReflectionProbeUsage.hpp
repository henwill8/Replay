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
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Autogenerated type: UnityEngine.Rendering.ReflectionProbeUsage
  struct ReflectionProbeUsage : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: ReflectionProbeUsage
    constexpr ReflectionProbeUsage(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.ReflectionProbeUsage Off
    static constexpr const int Off = 0;
    // Get static field: static public UnityEngine.Rendering.ReflectionProbeUsage Off
    static UnityEngine::Rendering::ReflectionProbeUsage _get_Off();
    // Set static field: static public UnityEngine.Rendering.ReflectionProbeUsage Off
    static void _set_Off(UnityEngine::Rendering::ReflectionProbeUsage value);
    // static field const value: static public UnityEngine.Rendering.ReflectionProbeUsage BlendProbes
    static constexpr const int BlendProbes = 1;
    // Get static field: static public UnityEngine.Rendering.ReflectionProbeUsage BlendProbes
    static UnityEngine::Rendering::ReflectionProbeUsage _get_BlendProbes();
    // Set static field: static public UnityEngine.Rendering.ReflectionProbeUsage BlendProbes
    static void _set_BlendProbes(UnityEngine::Rendering::ReflectionProbeUsage value);
    // static field const value: static public UnityEngine.Rendering.ReflectionProbeUsage BlendProbesAndSkybox
    static constexpr const int BlendProbesAndSkybox = 2;
    // Get static field: static public UnityEngine.Rendering.ReflectionProbeUsage BlendProbesAndSkybox
    static UnityEngine::Rendering::ReflectionProbeUsage _get_BlendProbesAndSkybox();
    // Set static field: static public UnityEngine.Rendering.ReflectionProbeUsage BlendProbesAndSkybox
    static void _set_BlendProbesAndSkybox(UnityEngine::Rendering::ReflectionProbeUsage value);
    // static field const value: static public UnityEngine.Rendering.ReflectionProbeUsage Simple
    static constexpr const int Simple = 3;
    // Get static field: static public UnityEngine.Rendering.ReflectionProbeUsage Simple
    static UnityEngine::Rendering::ReflectionProbeUsage _get_Simple();
    // Set static field: static public UnityEngine.Rendering.ReflectionProbeUsage Simple
    static void _set_Simple(UnityEngine::Rendering::ReflectionProbeUsage value);
  }; // UnityEngine.Rendering.ReflectionProbeUsage
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::ReflectionProbeUsage, "UnityEngine.Rendering", "ReflectionProbeUsage");
#pragma pack(pop)
