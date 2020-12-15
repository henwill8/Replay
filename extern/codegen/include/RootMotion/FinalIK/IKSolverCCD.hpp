// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolverHeuristic
#include "RootMotion/FinalIK/IKSolverHeuristic.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.IKSolverCCD
  class IKSolverCCD : public RootMotion::FinalIK::IKSolverHeuristic {
    public:
    // public RootMotion.FinalIK.IKSolver/IterationDelegate OnPreIteration
    // Offset: 0x88
    RootMotion::FinalIK::IKSolver::IterationDelegate* OnPreIteration;
    // Creating conversion operator: operator RootMotion::FinalIK::IKSolver::IterationDelegate*
    constexpr operator RootMotion::FinalIK::IKSolver::IterationDelegate*() const noexcept {
      return OnPreIteration;
    }
    // public System.Void FadeOutBoneWeights()
    // Offset: 0x16E19A8
    void FadeOutBoneWeights();
    // protected System.Void Solve(UnityEngine.Vector3 targetPosition)
    // Offset: 0x16E27B8
    void Solve(UnityEngine::Vector3 targetPosition);
    // protected override System.Void OnInitiate()
    // Offset: 0x16E1A58
    // Implemented from: RootMotion.FinalIK.IKSolverHeuristic
    // Base method: System.Void IKSolverHeuristic::OnInitiate()
    void OnInitiate();
    // protected override System.Void OnUpdate()
    // Offset: 0x16E2058
    // Implemented from: RootMotion.FinalIK.IKSolverHeuristic
    // Base method: System.Void IKSolverHeuristic::OnUpdate()
    void OnUpdate();
    // public System.Void .ctor()
    // Offset: 0x16E2F1C
    // Implemented from: RootMotion.FinalIK.IKSolverHeuristic
    // Base method: System.Void IKSolverHeuristic::.ctor()
    // Base method: System.Void IKSolver::.ctor()
    // Base method: System.Void Object::.ctor()
    static IKSolverCCD* New_ctor();
  }; // RootMotion.FinalIK.IKSolverCCD
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverCCD*, "RootMotion.FinalIK", "IKSolverCCD");
#pragma pack(pop)