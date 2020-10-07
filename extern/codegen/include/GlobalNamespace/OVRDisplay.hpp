// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPose
#include "GlobalNamespace/OVRPose.hpp"
// Including type: OVRManager/TrackingOrigin
#include "GlobalNamespace/OVRManager.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRNode
  struct XRNode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRDisplay
  class OVRDisplay : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::OVRDisplay::EyeFov
    struct EyeFov;
    // Nested type: GlobalNamespace::OVRDisplay::EyeRenderDesc
    struct EyeRenderDesc;
    // Nested type: GlobalNamespace::OVRDisplay::LatencyData
    struct LatencyData;
    // private System.Boolean needsConfigureTexture
    // Offset: 0x10
    bool needsConfigureTexture;
    // private OVRDisplay/EyeRenderDesc[] eyeDescs
    // Offset: 0x18
    ::Array<GlobalNamespace::OVRDisplay::EyeRenderDesc>* eyeDescs;
    // private System.Boolean recenterRequested
    // Offset: 0x20
    bool recenterRequested;
    // private System.Int32 recenterRequestedFrameCount
    // Offset: 0x24
    int recenterRequestedFrameCount;
    // private OVRPose previousRelativeTrackingSpacePose
    // Offset: 0x28
    GlobalNamespace::OVRPose previousRelativeTrackingSpacePose;
    // private OVRManager/TrackingOrigin previousTrackingOrigin
    // Offset: 0x44
    GlobalNamespace::OVRManager::TrackingOrigin previousTrackingOrigin;
    // private System.Action RecenteredPose
    // Offset: 0x48
    System::Action* RecenteredPose;
    // public System.Void Update()
    // Offset: 0xCD01B4
    void Update();
    // public System.Void add_RecenteredPose(System.Action value)
    // Offset: 0xCD04A0
    void add_RecenteredPose(System::Action* value);
    // public System.Void remove_RecenteredPose(System.Action value)
    // Offset: 0xCD0544
    void remove_RecenteredPose(System::Action* value);
    // public System.Void RecenterPose()
    // Offset: 0xCD05E8
    void RecenterPose();
    // public UnityEngine.Vector3 get_acceleration()
    // Offset: 0xCD0664
    UnityEngine::Vector3 get_acceleration();
    // public UnityEngine.Vector3 get_angularAcceleration()
    // Offset: 0xCD0790
    UnityEngine::Vector3 get_angularAcceleration();
    // public UnityEngine.Vector3 get_velocity()
    // Offset: 0xCD08BC
    UnityEngine::Vector3 get_velocity();
    // public UnityEngine.Vector3 get_angularVelocity()
    // Offset: 0xCD09E8
    UnityEngine::Vector3 get_angularVelocity();
    // public OVRDisplay/EyeRenderDesc GetEyeRenderDesc(UnityEngine.XR.XRNode eye)
    // Offset: 0xCCFF7C
    GlobalNamespace::OVRDisplay::EyeRenderDesc GetEyeRenderDesc(UnityEngine::XR::XRNode eye);
    // public OVRDisplay/LatencyData get_latency()
    // Offset: 0xCD0B14
    GlobalNamespace::OVRDisplay::LatencyData get_latency();
    // public System.Single get_appFramerate()
    // Offset: 0xCD0CE0
    float get_appFramerate();
    // public System.Int32 get_recommendedMSAALevel()
    // Offset: 0xCD0D7C
    int get_recommendedMSAALevel();
    // public System.Single[] get_displayFrequenciesAvailable()
    // Offset: 0xCD0DE8
    ::Array<float>* get_displayFrequenciesAvailable();
    // public System.Single get_displayFrequency()
    // Offset: 0xCD0E48
    float get_displayFrequency();
    // public System.Void set_displayFrequency(System.Single value)
    // Offset: 0xCD0EA8
    void set_displayFrequency(float value);
    // private System.Void UpdateTextures()
    // Offset: 0xCD0188
    void UpdateTextures();
    // private System.Void ConfigureEyeDesc(UnityEngine.XR.XRNode eye)
    // Offset: 0xCD0F18
    void ConfigureEyeDesc(UnityEngine::XR::XRNode eye);
    // public System.Void .ctor()
    // Offset: 0xCCFFD8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OVRDisplay* New_ctor();
  }; // OVRDisplay
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRDisplay*, "", "OVRDisplay");
#pragma pack(pop)
