// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.HitReactionVRIK/PositionOffset
#include "RootMotion/FinalIK/HitReactionVRIK_PositionOffset.hpp"
// Including type: RootMotion.FinalIK.IKSolverVR/PositionOffset
#include "RootMotion/FinalIK/IKSolverVR_PositionOffset.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
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
  // Autogenerated type: RootMotion.FinalIK.HitReactionVRIK/PositionOffset/PositionOffsetLink
  class HitReactionVRIK::PositionOffset::PositionOffsetLink : public ::Il2CppObject {
    public:
    // public RootMotion.FinalIK.IKSolverVR/PositionOffset positionOffset
    // Offset: 0x10
    RootMotion::FinalIK::IKSolverVR::PositionOffset positionOffset;
    // public System.Single weight
    // Offset: 0x14
    float weight;
    // private UnityEngine.Vector3 lastValue
    // Offset: 0x18
    UnityEngine::Vector3 lastValue;
    // private UnityEngine.Vector3 current
    // Offset: 0x24
    UnityEngine::Vector3 current;
    // public System.Void Apply(RootMotion.FinalIK.VRIK ik, UnityEngine.Vector3 offset, System.Single crossFader)
    // Offset: 0x17071C8
    void Apply(RootMotion::FinalIK::VRIK* ik, UnityEngine::Vector3 offset, float crossFader);
    // public System.Void CrossFadeStart()
    // Offset: 0x1706F84
    void CrossFadeStart();
    // public System.Void .ctor()
    // Offset: 0x17072E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static HitReactionVRIK::PositionOffset::PositionOffsetLink* New_ctor();
  }; // RootMotion.FinalIK.HitReactionVRIK/PositionOffset/PositionOffsetLink
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink*, "RootMotion.FinalIK", "HitReactionVRIK/PositionOffset/PositionOffsetLink");
#pragma pack(pop)
