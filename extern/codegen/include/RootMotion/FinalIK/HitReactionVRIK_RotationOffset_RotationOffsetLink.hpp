// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.HitReactionVRIK/RotationOffset
#include "RootMotion/FinalIK/HitReactionVRIK_RotationOffset.hpp"
// Including type: RootMotion.FinalIK.IKSolverVR/RotationOffset
#include "RootMotion/FinalIK/IKSolverVR_RotationOffset.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: VRIK
  class VRIK;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.HitReactionVRIK/RotationOffset/RotationOffsetLink
  class HitReactionVRIK::RotationOffset::RotationOffsetLink : public ::Il2CppObject {
    public:
    // public RootMotion.FinalIK.IKSolverVR/RotationOffset rotationOffset
    // Offset: 0x10
    RootMotion::FinalIK::IKSolverVR::RotationOffset rotationOffset;
    // public System.Single weight
    // Offset: 0x14
    float weight;
    // private UnityEngine.Quaternion lastValue
    // Offset: 0x18
    UnityEngine::Quaternion lastValue;
    // private UnityEngine.Quaternion current
    // Offset: 0x28
    UnityEngine::Quaternion current;
    // public System.Void Apply(RootMotion.FinalIK.VRIK ik, UnityEngine.Quaternion offset, System.Single crossFader)
    // Offset: 0x1707760
    void Apply(RootMotion::FinalIK::VRIK* ik, UnityEngine::Quaternion offset, float crossFader);
    // public System.Void CrossFadeStart()
    // Offset: 0x1707434
    void CrossFadeStart();
    // public System.Void .ctor()
    // Offset: 0x170789C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static HitReactionVRIK::RotationOffset::RotationOffsetLink* New_ctor();
  }; // RootMotion.FinalIK.HitReactionVRIK/RotationOffset/RotationOffsetLink
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::HitReactionVRIK::RotationOffset::RotationOffsetLink*, "RootMotion.FinalIK", "HitReactionVRIK/RotationOffset/RotationOffsetLink");
#pragma pack(pop)
