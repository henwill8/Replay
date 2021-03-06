// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.SolverManager
#include "RootMotion/SolverManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: Finger
  class Finger;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.FingerRig
  // [] Offset: FFFFFFFF
  class FingerRig : public RootMotion::SolverManager {
    public:
    // Writing base type padding for base size: 0x33 to desired offset: 0x34
    char ___base_padding[0x1] = {};
    // [TooltipAttribute] Offset: 0xD27674
    // [RangeAttribute] Offset: 0xD27674
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x34
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public RootMotion.FinalIK.Finger[] fingers
    // Size: 0x8
    // Offset: 0x38
    ::Array<RootMotion::FinalIK::Finger*>* fingers;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::Finger*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD276C8
    // private System.Boolean <initiated>k__BackingField
    // Size: 0x1
    // Offset: 0x40
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: FingerRig
    FingerRig(float weight_ = {}, ::Array<RootMotion::FinalIK::Finger*>* fingers_ = {}, bool initiated_ = {}) noexcept : weight{weight_}, fingers{fingers_}, initiated{initiated_} {}
    // public System.Boolean get_initiated()
    // Offset: 0x1AEADD4
    bool get_initiated();
    // private System.Void set_initiated(System.Boolean value)
    // Offset: 0x1AEADDC
    void set_initiated(bool value);
    // public System.Boolean IsValid(ref System.String errorMessage)
    // Offset: 0x1AEADE8
    bool IsValid(::Il2CppString*& errorMessage);
    // public System.Void AutoDetect()
    // Offset: 0x1AEAE74
    void AutoDetect();
    // public System.Void AddFinger(UnityEngine.Transform bone1, UnityEngine.Transform bone2, UnityEngine.Transform bone3, UnityEngine.Transform tip, UnityEngine.Transform target)
    // Offset: 0x1AEB1E4
    void AddFinger(UnityEngine::Transform* bone1, UnityEngine::Transform* bone2, UnityEngine::Transform* bone3, UnityEngine::Transform* tip, UnityEngine::Transform* target);
    // public System.Void RemoveFinger(System.Int32 index)
    // Offset: 0x1AEB3A4
    void RemoveFinger(int index);
    // private System.Void AddChildrenRecursive(UnityEngine.Transform parent, ref UnityEngine.Transform[] array)
    // Offset: 0x1AEB0D4
    void AddChildrenRecursive(UnityEngine::Transform* parent, ::Array<UnityEngine::Transform*>*& array);
    // public System.Void UpdateFingerSolvers()
    // Offset: 0x1AEB5F0
    void UpdateFingerSolvers();
    // public System.Void FixFingerTransforms()
    // Offset: 0x1AEB66C
    void FixFingerTransforms();
    // public System.Void StoreDefaultLocalState()
    // Offset: 0x1AEB6E4
    void StoreDefaultLocalState();
    // protected override System.Void InitiateSolver()
    // Offset: 0x1AEB528
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::InitiateSolver()
    void InitiateSolver();
    // protected override System.Void UpdateSolver()
    // Offset: 0x1AEB750
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::UpdateSolver()
    void UpdateSolver();
    // protected override System.Void FixTransforms()
    // Offset: 0x1AEB754
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::FixTransforms()
    void FixTransforms();
    // public System.Void .ctor()
    // Offset: 0x1AEB768
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FingerRig* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::FingerRig::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FingerRig*, creationType>()));
    }
  }; // RootMotion.FinalIK.FingerRig
  #pragma pack(pop)
  static check_size<sizeof(FingerRig), 64 + sizeof(bool)> __RootMotion_FinalIK_FingerRigSizeCheck;
  static_assert(sizeof(FingerRig) == 0x41);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::FingerRig*, "RootMotion.FinalIK", "FingerRig");
