// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolverFullBody
#include "RootMotion/FinalIK/IKSolverFullBody.hpp"
// Including type: RootMotion.BipedLimbOrientations
#include "RootMotion/BipedLimbOrientations.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKEffector
  class IKEffector;
  // Forward declaring type: FBIKChain
  class FBIKChain;
  // Forward declaring type: IKMappingLimb
  class IKMappingLimb;
  // Forward declaring type: IKMappingBone
  class IKMappingBone;
  // Forward declaring type: FullBodyBipedChain
  struct FullBodyBipedChain;
  // Forward declaring type: FullBodyBipedEffector
  struct FullBodyBipedEffector;
  // Forward declaring type: IKMappingSpine
  class IKMappingSpine;
  // Forward declaring type: IKConstraintBend
  class IKConstraintBend;
}
// Forward declaring namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: BipedReferences
  class BipedReferences;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xFC
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverFullBodyBiped
  // [] Offset: FFFFFFFF
  class IKSolverFullBodyBiped : public RootMotion::FinalIK::IKSolverFullBody {
    public:
    // public UnityEngine.Transform rootNode
    // Size: 0x8
    // Offset: 0xD0
    UnityEngine::Transform* rootNode;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [RangeAttribute] Offset: 0xD28C44
    // public System.Single spineStiffness
    // Size: 0x4
    // Offset: 0xD8
    float spineStiffness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xD28C5C
    // public System.Single pullBodyVertical
    // Size: 0x4
    // Offset: 0xDC
    float pullBodyVertical;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xD28C74
    // public System.Single pullBodyHorizontal
    // Size: 0x4
    // Offset: 0xE0
    float pullBodyHorizontal;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD28C8C
    // private UnityEngine.Vector3 <pullBodyOffset>k__BackingField
    // Size: 0xC
    // Offset: 0xE4
    UnityEngine::Vector3 pullBodyOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 offset
    // Size: 0xC
    // Offset: 0xF0
    UnityEngine::Vector3 offset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: IKSolverFullBodyBiped
    IKSolverFullBodyBiped(UnityEngine::Transform* rootNode_ = {}, float spineStiffness_ = {}, float pullBodyVertical_ = {}, float pullBodyHorizontal_ = {}, UnityEngine::Vector3 pullBodyOffset_ = {}, UnityEngine::Vector3 offset_ = {}) noexcept : rootNode{rootNode_}, spineStiffness{spineStiffness_}, pullBodyVertical{pullBodyVertical_}, pullBodyHorizontal{pullBodyHorizontal_}, pullBodyOffset{pullBodyOffset_}, offset{offset_} {}
    // public RootMotion.FinalIK.IKEffector get_bodyEffector()
    // Offset: 0x1ADA050
    RootMotion::FinalIK::IKEffector* get_bodyEffector();
    // public RootMotion.FinalIK.IKEffector get_leftShoulderEffector()
    // Offset: 0x1ADA198
    RootMotion::FinalIK::IKEffector* get_leftShoulderEffector();
    // public RootMotion.FinalIK.IKEffector get_rightShoulderEffector()
    // Offset: 0x1ADA1A0
    RootMotion::FinalIK::IKEffector* get_rightShoulderEffector();
    // public RootMotion.FinalIK.IKEffector get_leftThighEffector()
    // Offset: 0x1ADA1A8
    RootMotion::FinalIK::IKEffector* get_leftThighEffector();
    // public RootMotion.FinalIK.IKEffector get_rightThighEffector()
    // Offset: 0x1ADA1B0
    RootMotion::FinalIK::IKEffector* get_rightThighEffector();
    // public RootMotion.FinalIK.IKEffector get_leftHandEffector()
    // Offset: 0x1ADA1B8
    RootMotion::FinalIK::IKEffector* get_leftHandEffector();
    // public RootMotion.FinalIK.IKEffector get_rightHandEffector()
    // Offset: 0x1ADA1C0
    RootMotion::FinalIK::IKEffector* get_rightHandEffector();
    // public RootMotion.FinalIK.IKEffector get_leftFootEffector()
    // Offset: 0x1ADA1C8
    RootMotion::FinalIK::IKEffector* get_leftFootEffector();
    // public RootMotion.FinalIK.IKEffector get_rightFootEffector()
    // Offset: 0x1ADA1D0
    RootMotion::FinalIK::IKEffector* get_rightFootEffector();
    // public RootMotion.FinalIK.FBIKChain get_leftArmChain()
    // Offset: 0x1ADA1D8
    RootMotion::FinalIK::FBIKChain* get_leftArmChain();
    // public RootMotion.FinalIK.FBIKChain get_rightArmChain()
    // Offset: 0x1ADA210
    RootMotion::FinalIK::FBIKChain* get_rightArmChain();
    // public RootMotion.FinalIK.FBIKChain get_leftLegChain()
    // Offset: 0x1ADA248
    RootMotion::FinalIK::FBIKChain* get_leftLegChain();
    // public RootMotion.FinalIK.FBIKChain get_rightLegChain()
    // Offset: 0x1ADA280
    RootMotion::FinalIK::FBIKChain* get_rightLegChain();
    // public RootMotion.FinalIK.IKMappingLimb get_leftArmMapping()
    // Offset: 0x1ADA2B8
    RootMotion::FinalIK::IKMappingLimb* get_leftArmMapping();
    // public RootMotion.FinalIK.IKMappingLimb get_rightArmMapping()
    // Offset: 0x1ADA2EC
    RootMotion::FinalIK::IKMappingLimb* get_rightArmMapping();
    // public RootMotion.FinalIK.IKMappingLimb get_leftLegMapping()
    // Offset: 0x1ADA324
    RootMotion::FinalIK::IKMappingLimb* get_leftLegMapping();
    // public RootMotion.FinalIK.IKMappingLimb get_rightLegMapping()
    // Offset: 0x1ADA35C
    RootMotion::FinalIK::IKMappingLimb* get_rightLegMapping();
    // public RootMotion.FinalIK.IKMappingBone get_headMapping()
    // Offset: 0x1ADA394
    RootMotion::FinalIK::IKMappingBone* get_headMapping();
    // public System.Void SetChainWeights(RootMotion.FinalIK.FullBodyBipedChain c, System.Single pull, System.Single reach)
    // Offset: 0x1ADA3C8
    void SetChainWeights(RootMotion::FinalIK::FullBodyBipedChain c, float pull, float reach);
    // public System.Void SetEffectorWeights(RootMotion.FinalIK.FullBodyBipedEffector effector, System.Single positionWeight, System.Single rotationWeight)
    // Offset: 0x1ADA4D4
    void SetEffectorWeights(RootMotion::FinalIK::FullBodyBipedEffector effector, float positionWeight, float rotationWeight);
    // public RootMotion.FinalIK.FBIKChain GetChain(RootMotion.FinalIK.FullBodyBipedChain c)
    // Offset: 0x1ADA41C
    RootMotion::FinalIK::FBIKChain* GetChain(RootMotion::FinalIK::FullBodyBipedChain c);
    // public RootMotion.FinalIK.FBIKChain GetChain(RootMotion.FinalIK.FullBodyBipedEffector effector)
    // Offset: 0x1ADA5B0
    RootMotion::FinalIK::FBIKChain* GetChain(RootMotion::FinalIK::FullBodyBipedEffector effector);
    // public RootMotion.FinalIK.IKEffector GetEffector(RootMotion.FinalIK.FullBodyBipedEffector effector)
    // Offset: 0x1ADA058
    RootMotion::FinalIK::IKEffector* GetEffector(RootMotion::FinalIK::FullBodyBipedEffector effector);
    // public RootMotion.FinalIK.IKEffector GetEndEffector(RootMotion.FinalIK.FullBodyBipedChain c)
    // Offset: 0x1ADA680
    RootMotion::FinalIK::IKEffector* GetEndEffector(RootMotion::FinalIK::FullBodyBipedChain c);
    // public RootMotion.FinalIK.IKMappingLimb GetLimbMapping(RootMotion.FinalIK.FullBodyBipedChain chain)
    // Offset: 0x1ADA738
    RootMotion::FinalIK::IKMappingLimb* GetLimbMapping(RootMotion::FinalIK::FullBodyBipedChain chain);
    // public RootMotion.FinalIK.IKMappingLimb GetLimbMapping(RootMotion.FinalIK.FullBodyBipedEffector effector)
    // Offset: 0x1ADA7EC
    RootMotion::FinalIK::IKMappingLimb* GetLimbMapping(RootMotion::FinalIK::FullBodyBipedEffector effector);
    // public RootMotion.FinalIK.IKMappingSpine GetSpineMapping()
    // Offset: 0x1ADA8A0
    RootMotion::FinalIK::IKMappingSpine* GetSpineMapping();
    // public RootMotion.FinalIK.IKMappingBone GetHeadMapping()
    // Offset: 0x1ADA8A8
    RootMotion::FinalIK::IKMappingBone* GetHeadMapping();
    // public RootMotion.FinalIK.IKConstraintBend GetBendConstraint(RootMotion.FinalIK.FullBodyBipedChain limb)
    // Offset: 0x1ADA8DC
    RootMotion::FinalIK::IKConstraintBend* GetBendConstraint(RootMotion::FinalIK::FullBodyBipedChain limb);
    // public System.Void SetToReferences(RootMotion.BipedReferences references, UnityEngine.Transform rootNode)
    // Offset: 0x1ADAB38
    void SetToReferences(RootMotion::BipedReferences* references, UnityEngine::Transform* rootNode);
    // static public UnityEngine.Transform DetectRootNodeBone(RootMotion.BipedReferences references)
    // Offset: 0x1ADBF38
    static UnityEngine::Transform* DetectRootNodeBone(RootMotion::BipedReferences* references);
    // public System.Void SetLimbOrientations(RootMotion.BipedLimbOrientations o)
    // Offset: 0x1ADC3CC
    void SetLimbOrientations(RootMotion::BipedLimbOrientations* o);
    // public UnityEngine.Vector3 get_pullBodyOffset()
    // Offset: 0x1ADC620
    UnityEngine::Vector3 get_pullBodyOffset();
    // private System.Void set_pullBodyOffset(UnityEngine.Vector3 value)
    // Offset: 0x1ADC62C
    void set_pullBodyOffset(UnityEngine::Vector3 value);
    // private System.Void SetLimbOrientation(RootMotion.FinalIK.FullBodyBipedChain chain, RootMotion.BipedLimbOrientations/LimbOrientation limbOrientation)
    // Offset: 0x1ADC42C
    void SetLimbOrientation(RootMotion::FinalIK::FullBodyBipedChain chain, RootMotion::BipedLimbOrientations::LimbOrientation* limbOrientation);
    // static private UnityEngine.Transform GetLeftClavicle(RootMotion.BipedReferences references)
    // Offset: 0x1ADC24C
    static UnityEngine::Transform* GetLeftClavicle(RootMotion::BipedReferences* references);
    // static private UnityEngine.Transform GetRightClavicle(RootMotion.BipedReferences references)
    // Offset: 0x1ADC30C
    static UnityEngine::Transform* GetRightClavicle(RootMotion::BipedReferences* references);
    // static private System.Boolean Contains(UnityEngine.Transform[] array, UnityEngine.Transform transform)
    // Offset: 0x1ADC638
    static bool Contains(::Array<UnityEngine::Transform*>* array, UnityEngine::Transform* transform);
    // private System.Void PullBody()
    // Offset: 0x1ADC85C
    void PullBody();
    // private UnityEngine.Vector3 GetBodyOffset()
    // Offset: 0x1ADC9EC
    UnityEngine::Vector3 GetBodyOffset();
    // private UnityEngine.Vector3 GetHandBodyPull(RootMotion.FinalIK.IKEffector effector, RootMotion.FinalIK.FBIKChain arm, UnityEngine.Vector3 offset)
    // Offset: 0x1ADCBEC
    UnityEngine::Vector3 GetHandBodyPull(RootMotion::FinalIK::IKEffector* effector, RootMotion::FinalIK::FBIKChain* arm, UnityEngine::Vector3 offset);
    // public override System.Boolean IsValid(ref System.String message)
    // Offset: 0x1ADA9A4
    // Implemented from: RootMotion.FinalIK.IKSolverFullBody
    // Base method: System.Boolean IKSolverFullBody::IsValid(ref System.String message)
    bool IsValid(::Il2CppString*& message);
    // protected override System.Void ReadPose()
    // Offset: 0x1ADC714
    // Implemented from: RootMotion.FinalIK.IKSolverFullBody
    // Base method: System.Void IKSolverFullBody::ReadPose()
    void ReadPose();
    // protected override System.Void ApplyBendConstraints()
    // Offset: 0x1ADCDEC
    // Implemented from: RootMotion.FinalIK.IKSolverFullBody
    // Base method: System.Void IKSolverFullBody::ApplyBendConstraints()
    void ApplyBendConstraints();
    // protected override System.Void WritePose()
    // Offset: 0x1ADD120
    // Implemented from: RootMotion.FinalIK.IKSolverFullBody
    // Base method: System.Void IKSolverFullBody::WritePose()
    void WritePose();
    // public System.Void .ctor()
    // Offset: 0x1ADD220
    // Implemented from: RootMotion.FinalIK.IKSolverFullBody
    // Base method: System.Void IKSolverFullBody::.ctor()
    // Base method: System.Void IKSolver::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverFullBodyBiped* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverFullBodyBiped::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverFullBodyBiped*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolverFullBodyBiped
  #pragma pack(pop)
  static check_size<sizeof(IKSolverFullBodyBiped), 240 + sizeof(UnityEngine::Vector3)> __RootMotion_FinalIK_IKSolverFullBodyBipedSizeCheck;
  static_assert(sizeof(IKSolverFullBodyBiped) == 0xFC);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverFullBodyBiped*, "RootMotion.FinalIK", "IKSolverFullBodyBiped");
