// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.Poser
#include "RootMotion/FinalIK/Poser.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.HandPoser
  class HandPoser : public RootMotion::FinalIK::Poser {
    public:
    // protected UnityEngine.Transform[] children
    // Offset: 0x50
    ::Array<UnityEngine::Transform*>* children;
    // private UnityEngine.Transform _poseRoot
    // Offset: 0x58
    UnityEngine::Transform* poseRoot;
    // private UnityEngine.Transform[] poseChildren
    // Offset: 0x60
    ::Array<UnityEngine::Transform*>* poseChildren;
    // private UnityEngine.Vector3[] defaultLocalPositions
    // Offset: 0x68
    ::Array<UnityEngine::Vector3>* defaultLocalPositions;
    // private UnityEngine.Quaternion[] defaultLocalRotations
    // Offset: 0x70
    ::Array<UnityEngine::Quaternion>* defaultLocalRotations;
    // protected System.Void StoreDefaultState()
    // Offset: 0x1704F68
    void StoreDefaultState();
    // public override System.Void AutoMapping()
    // Offset: 0x1704E38
    // Implemented from: RootMotion.FinalIK.Poser
    // Base method: System.Void Poser::AutoMapping()
    void AutoMapping();
    // protected override System.Void InitiatePoser()
    // Offset: 0x1704F00
    // Implemented from: RootMotion.FinalIK.Poser
    // Base method: System.Void Poser::InitiatePoser()
    void InitiatePoser();
    // protected override System.Void FixPoserTransforms()
    // Offset: 0x17050E4
    // Implemented from: RootMotion.FinalIK.Poser
    // Base method: System.Void Poser::FixPoserTransforms()
    void FixPoserTransforms();
    // protected override System.Void UpdatePoser()
    // Offset: 0x17051E0
    // Implemented from: RootMotion.FinalIK.Poser
    // Base method: System.Void Poser::UpdatePoser()
    void UpdatePoser();
    // public System.Void .ctor()
    // Offset: 0x1705590
    // Implemented from: RootMotion.FinalIK.Poser
    // Base method: System.Void Poser::.ctor()
    // Base method: System.Void SolverManager::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static HandPoser* New_ctor();
  }; // RootMotion.FinalIK.HandPoser
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::HandPoser*, "RootMotion.FinalIK", "HandPoser");
#pragma pack(pop)