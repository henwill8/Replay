// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IOpenVRHaptics
#include "GlobalNamespace/IOpenVRHaptics.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRNode
  struct XRNode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SimpleOpenVrOpenVrHaptics
  class SimpleOpenVrOpenVrHaptics : public ::Il2CppObject/*, public GlobalNamespace::IOpenVRHaptics*/ {
    public:
    // Creating interface conversion operator: operator GlobalNamespace::IOpenVRHaptics
    operator GlobalNamespace::IOpenVRHaptics() noexcept {
      return *reinterpret_cast<GlobalNamespace::IOpenVRHaptics*>(this);
    }
    // public System.Void TriggerHapticPulse(UnityEngine.XR.XRNode node, System.Single duration, System.Single strength, System.Single frequency)
    // Offset: 0x103E5E4
    // Implemented from: IOpenVRHaptics
    // Base method: System.Void IOpenVRHaptics::TriggerHapticPulse(UnityEngine.XR.XRNode node, System.Single duration, System.Single strength, System.Single frequency)
    void TriggerHapticPulse(UnityEngine::XR::XRNode node, float duration, float strength, float frequency);
    // public System.Void Destroy()
    // Offset: 0x103E6EC
    // Implemented from: IOpenVRHaptics
    // Base method: System.Void IOpenVRHaptics::Destroy()
    void Destroy();
    // public System.Void .ctor()
    // Offset: 0x103E6F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SimpleOpenVrOpenVrHaptics* New_ctor();
  }; // SimpleOpenVrOpenVrHaptics
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleOpenVrOpenVrHaptics*, "", "SimpleOpenVrOpenVrHaptics");
#pragma pack(pop)
