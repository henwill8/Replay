// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
// Including type: RootMotion.FinalIK.IKSolver/Point
#include "RootMotion/FinalIK/IKSolver_Point.hpp"
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
  // Autogenerated type: RootMotion.FinalIK.IKSolver/Node
  class IKSolver::Node : public RootMotion::FinalIK::IKSolver::Point {
    public:
    // public System.Single length
    // Offset: 0x54
    float length;
    // public System.Single effectorPositionWeight
    // Offset: 0x58
    float effectorPositionWeight;
    // public System.Single effectorRotationWeight
    // Offset: 0x5C
    float effectorRotationWeight;
    // public UnityEngine.Vector3 offset
    // Offset: 0x60
    UnityEngine::Vector3 offset;
    // public System.Void .ctor(UnityEngine.Transform transform)
    // Offset: 0x1710A98
    static IKSolver::Node* New_ctor(UnityEngine::Transform* transform);
    // public System.Void .ctor(UnityEngine.Transform transform, System.Single weight)
    // Offset: 0x1710AC8
    static IKSolver::Node* New_ctor(UnityEngine::Transform* transform, float weight);
    // public System.Void .ctor()
    // Offset: 0x1710A94
    // Implemented from: RootMotion.FinalIK.IKSolver/Point
    // Base method: System.Void Point::.ctor()
    // Base method: System.Void Object::.ctor()
    static IKSolver::Node* New_ctor();
  }; // RootMotion.FinalIK.IKSolver/Node
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolver::Node*, "RootMotion.FinalIK", "IKSolver/Node");
#pragma pack(pop)