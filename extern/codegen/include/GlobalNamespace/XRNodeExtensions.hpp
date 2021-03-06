// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: XRNodeExtensions
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class XRNodeExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: XRNodeExtensions
    XRNodeExtensions() noexcept {}
    // static public OVRPlugin/Node OculusNode(UnityEngine.XR.XRNode node)
    // Offset: 0x22A00D0
    static GlobalNamespace::OVRPlugin::Node OculusNode(UnityEngine::XR::XRNode node);
    // static public System.Int32 PSMoveDeviceIndex(UnityEngine.XR.XRNode node)
    // Offset: 0x22A01A0
    static int PSMoveDeviceIndex(UnityEngine::XR::XRNode node);
  }; // XRNodeExtensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::XRNodeExtensions*, "", "XRNodeExtensions");
