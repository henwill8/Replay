// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/OVRP_1_21_0
  class OVRPlugin::OVRP_1_21_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Result ovrp_GetTiledMultiResSupported(out OVRPlugin/Bool foveationSupported)
    // Offset: 0x12DC120
    static GlobalNamespace::OVRPlugin::Result ovrp_GetTiledMultiResSupported(GlobalNamespace::OVRPlugin::Bool& foveationSupported);
    // static public OVRPlugin/Result ovrp_GetTiledMultiResLevel(out OVRPlugin/FixedFoveatedRenderingLevel level)
    // Offset: 0x12DC1A0
    static GlobalNamespace::OVRPlugin::Result ovrp_GetTiledMultiResLevel(GlobalNamespace::OVRPlugin::FixedFoveatedRenderingLevel& level);
    // static public OVRPlugin/Result ovrp_SetTiledMultiResLevel(OVRPlugin/FixedFoveatedRenderingLevel level)
    // Offset: 0x12DC220
    static GlobalNamespace::OVRPlugin::Result ovrp_SetTiledMultiResLevel(GlobalNamespace::OVRPlugin::FixedFoveatedRenderingLevel level);
    // static public OVRPlugin/Result ovrp_GetGPUUtilSupported(out OVRPlugin/Bool gpuUtilSupported)
    // Offset: 0x12DC2A0
    static GlobalNamespace::OVRPlugin::Result ovrp_GetGPUUtilSupported(GlobalNamespace::OVRPlugin::Bool& gpuUtilSupported);
    // static public OVRPlugin/Result ovrp_GetGPUUtilLevel(out System.Single gpuUtil)
    // Offset: 0x12DC320
    static GlobalNamespace::OVRPlugin::Result ovrp_GetGPUUtilLevel(float& gpuUtil);
    // static public OVRPlugin/Result ovrp_GetSystemDisplayFrequency2(out System.Single systemDisplayFrequency)
    // Offset: 0x12DC3A0
    static GlobalNamespace::OVRPlugin::Result ovrp_GetSystemDisplayFrequency2(float& systemDisplayFrequency);
    // static public OVRPlugin/Result ovrp_GetSystemDisplayAvailableFrequencies(System.IntPtr systemDisplayAvailableFrequencies, ref System.Int32 numFrequencies)
    // Offset: 0x12DC420
    static GlobalNamespace::OVRPlugin::Result ovrp_GetSystemDisplayAvailableFrequencies(System::IntPtr systemDisplayAvailableFrequencies, int& numFrequencies);
    // static public OVRPlugin/Result ovrp_SetSystemDisplayFrequency(System.Single requestedFrequency)
    // Offset: 0x12DC4B0
    static GlobalNamespace::OVRPlugin::Result ovrp_SetSystemDisplayFrequency(float requestedFrequency);
    // static public OVRPlugin/Result ovrp_GetAppAsymmetricFov(out OVRPlugin/Bool useAsymmetricFov)
    // Offset: 0x12DC538
    static GlobalNamespace::OVRPlugin::Result ovrp_GetAppAsymmetricFov(GlobalNamespace::OVRPlugin::Bool& useAsymmetricFov);
    // static private System.Void .cctor()
    // Offset: 0x12DC5B8
    static void _cctor();
  }; // OVRPlugin/OVRP_1_21_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_21_0*, "", "OVRPlugin/OVRP_1_21_0");
#pragma pack(pop)
