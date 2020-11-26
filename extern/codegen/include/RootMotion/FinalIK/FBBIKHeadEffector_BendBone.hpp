// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.FBBIKHeadEffector
#include "RootMotion/FinalIK/FBBIKHeadEffector.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.FBBIKHeadEffector/BendBone
  class FBBIKHeadEffector::BendBone : public ::Il2CppObject {
    public:
    // public UnityEngine.Transform transform
    // Offset: 0x10
    UnityEngine::Transform* transform;
    // public System.Single weight
    // Offset: 0x18
    float weight;
    // private UnityEngine.Quaternion defaultLocalRotation
    // Offset: 0x1C
    UnityEngine::Quaternion defaultLocalRotation;
    // public System.Void .ctor(UnityEngine.Transform transform, System.Single weight)
    // Offset: 0x1751EC0
    static FBBIKHeadEffector::BendBone* New_ctor(UnityEngine::Transform* transform, float weight);
    // public System.Void StoreDefaultLocalState()
    // Offset: 0x174F500
    void StoreDefaultLocalState();
    // public System.Void FixTransforms()
    // Offset: 0x174F904
    void FixTransforms();
    // public System.Void .ctor()
    // Offset: 0x1751E40
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FBBIKHeadEffector::BendBone* New_ctor();
  }; // RootMotion.FinalIK.FBBIKHeadEffector/BendBone
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::FBBIKHeadEffector::BendBone*, "RootMotion.FinalIK", "FBBIKHeadEffector/BendBone");
#pragma pack(pop)
