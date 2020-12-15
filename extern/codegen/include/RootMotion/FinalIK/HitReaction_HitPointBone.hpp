// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.HitReaction
#include "RootMotion/FinalIK/HitReaction.hpp"
// Including type: RootMotion.FinalIK.HitReaction/HitPoint
#include "RootMotion/FinalIK/HitReaction_HitPoint.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBodyBiped
  class IKSolverFullBodyBiped;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Rigidbody
  class Rigidbody;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.HitReaction/HitPointBone
  class HitReaction::HitPointBone : public RootMotion::FinalIK::HitReaction::HitPoint {
    public:
    // Nested type: RootMotion::FinalIK::HitReaction::HitPointBone::BoneLink
    class BoneLink;
    // public UnityEngine.AnimationCurve aroundCenterOfMass
    // Offset: 0x50
    UnityEngine::AnimationCurve* aroundCenterOfMass;
    // public RootMotion.FinalIK.HitReaction/HitPointBone/BoneLink[] boneLinks
    // Offset: 0x58
    ::Array<RootMotion::FinalIK::HitReaction::HitPointBone::BoneLink*>* boneLinks;
    // private UnityEngine.Rigidbody rigidbody
    // Offset: 0x60
    UnityEngine::Rigidbody* rigidbody;
    // protected override System.Single GetLength()
    // Offset: 0x1705C60
    // Implemented from: RootMotion.FinalIK.HitReaction/HitPoint
    // Base method: System.Single HitPoint::GetLength()
    float GetLength();
    // protected override System.Void CrossFadeStart()
    // Offset: 0x1705D04
    // Implemented from: RootMotion.FinalIK.HitReaction/HitPoint
    // Base method: System.Void HitPoint::CrossFadeStart()
    void CrossFadeStart();
    // protected override System.Void OnApply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single weight)
    // Offset: 0x1705D74
    // Implemented from: RootMotion.FinalIK.HitReaction/HitPoint
    // Base method: System.Void HitPoint::OnApply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single weight)
    void OnApply(RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float weight);
    // public System.Void .ctor()
    // Offset: 0x170613C
    // Implemented from: RootMotion.FinalIK.HitReaction/HitPoint
    // Base method: System.Void HitPoint::.ctor()
    // Base method: System.Void Object::.ctor()
    static HitReaction::HitPointBone* New_ctor();
  }; // RootMotion.FinalIK.HitReaction/HitPointBone
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::HitReaction::HitPointBone*, "RootMotion.FinalIK", "HitReaction/HitPointBone");
#pragma pack(pop)