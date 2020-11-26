// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IK
  class IK;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.TwistRelaxer
  class TwistRelaxer : public UnityEngine::MonoBehaviour {
    public:
    // public RootMotion.FinalIK.IK ik
    // Offset: 0x18
    RootMotion::FinalIK::IK* ik;
    // public UnityEngine.Transform parent
    // Offset: 0x20
    UnityEngine::Transform* parent;
    // public UnityEngine.Transform child
    // Offset: 0x28
    UnityEngine::Transform* child;
    // public System.Single weight
    // Offset: 0x30
    float weight;
    // public System.Single parentChildCrossfade
    // Offset: 0x34
    float parentChildCrossfade;
    // public System.Single twistAngleOffset
    // Offset: 0x38
    float twistAngleOffset;
    // private UnityEngine.Vector3 twistAxis
    // Offset: 0x3C
    UnityEngine::Vector3 twistAxis;
    // private UnityEngine.Vector3 axis
    // Offset: 0x48
    UnityEngine::Vector3 axis;
    // private UnityEngine.Vector3 axisRelativeToParentDefault
    // Offset: 0x54
    UnityEngine::Vector3 axisRelativeToParentDefault;
    // private UnityEngine.Vector3 axisRelativeToChildDefault
    // Offset: 0x60
    UnityEngine::Vector3 axisRelativeToChildDefault;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Relax()
    // Offset: 0x15E9ED0
    void Relax();
    // private System.Void Start()
    // Offset: 0x15EA2B0
    void Start();
    // private System.Void OnPostUpdate()
    // Offset: 0x15EA75C
    void OnPostUpdate();
    // private System.Void LateUpdate()
    // Offset: 0x15EA7E4
    void LateUpdate();
    // private System.Void OnDestroy()
    // Offset: 0x15EA86C
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x15EA994
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TwistRelaxer* New_ctor();
  }; // RootMotion.FinalIK.TwistRelaxer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::TwistRelaxer*, "RootMotion.FinalIK", "TwistRelaxer");
#pragma pack(pop)
