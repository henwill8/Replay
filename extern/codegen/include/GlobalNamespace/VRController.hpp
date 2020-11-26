// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.XR.XRNode
#include "UnityEngine/XR/XRNode.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRControllerTransformOffset
  class VRControllerTransformOffset;
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
  // Forward declaring type: VRControllersInputManager
  class VRControllersInputManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VRController
  class VRController : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.XR.XRNode _node
    // Offset: 0x18
    UnityEngine::XR::XRNode node;
    // private System.Int32 _nodeIdx
    // Offset: 0x1C
    int nodeIdx;
    // private VRControllerTransformOffset _transformOffset
    // Offset: 0x20
    GlobalNamespace::VRControllerTransformOffset* transformOffset;
    // private IVRPlatformHelper _vrPlatformHelper
    // Offset: 0x28
    GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // private VRControllersInputManager _vrControllersInputManager
    // Offset: 0x30
    GlobalNamespace::VRControllersInputManager* vrControllersInputManager;
    // private UnityEngine.Vector3 _lastTrackedPosition
    // Offset: 0x38
    UnityEngine::Vector3 lastTrackedPosition;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.XR.XRNode get_node()
    // Offset: 0x19D0488
    UnityEngine::XR::XRNode get_node();
    // public System.Void set_node(UnityEngine.XR.XRNode value)
    // Offset: 0x19D0490
    void set_node(UnityEngine::XR::XRNode value);
    // public System.Int32 get_nodeIdx()
    // Offset: 0x19D0498
    int get_nodeIdx();
    // public System.Void set_nodeIdx(System.Int32 value)
    // Offset: 0x19D04A0
    void set_nodeIdx(int value);
    // public UnityEngine.Vector3 get_position()
    // Offset: 0x19D04A8
    UnityEngine::Vector3 get_position();
    // public UnityEngine.Quaternion get_rotation()
    // Offset: 0x19D04CC
    UnityEngine::Quaternion get_rotation();
    // public UnityEngine.Vector3 get_forward()
    // Offset: 0x19D04F0
    UnityEngine::Vector3 get_forward();
    // public System.Single get_triggerValue()
    // Offset: 0x19D0514
    float get_triggerValue();
    // public System.Single get_verticalAxisValue()
    // Offset: 0x19D06B8
    float get_verticalAxisValue();
    // public System.Single get_horizontalAxisValue()
    // Offset: 0x19D0750
    float get_horizontalAxisValue();
    // public System.Boolean get_active()
    // Offset: 0x19D07E8
    bool get_active();
    // protected System.Void Update()
    // Offset: 0x19D080C
    void Update();
    // public System.Void .ctor()
    // Offset: 0x19D0BB8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static VRController* New_ctor();
  }; // VRController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRController*, "", "VRController");
#pragma pack(pop)
