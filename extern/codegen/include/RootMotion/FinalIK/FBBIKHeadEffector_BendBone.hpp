// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.FBBIKHeadEffector
#include "RootMotion/FinalIK/FBBIKHeadEffector.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
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
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.FBBIKHeadEffector/BendBone
  // [] Offset: FFFFFFFF
  class FBBIKHeadEffector::BendBone : public ::Il2CppObject {
    public:
    // [TooltipAttribute] Offset: 0xD2AC3C
    // public UnityEngine.Transform transform
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xD2AC74
    // [RangeAttribute] Offset: 0xD2AC74
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x18
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Quaternion defaultLocalRotation
    // Size: 0x10
    // Offset: 0x1C
    UnityEngine::Quaternion defaultLocalRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: BendBone
    BendBone(UnityEngine::Transform* transform_ = {}, float weight_ = {}, UnityEngine::Quaternion defaultLocalRotation_ = {}) noexcept : transform{transform_}, weight{weight_}, defaultLocalRotation{defaultLocalRotation_} {}
    // public System.Void .ctor(UnityEngine.Transform transform, System.Single weight)
    // Offset: 0x1B578F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FBBIKHeadEffector::BendBone* New_ctor(UnityEngine::Transform* transform, float weight) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::FBBIKHeadEffector::BendBone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FBBIKHeadEffector::BendBone*, creationType>(transform, weight)));
    }
    // public System.Void StoreDefaultLocalState()
    // Offset: 0x1B54F34
    void StoreDefaultLocalState();
    // public System.Void FixTransforms()
    // Offset: 0x1B55338
    void FixTransforms();
    // public System.Void .ctor()
    // Offset: 0x1B57874
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FBBIKHeadEffector::BendBone* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::FBBIKHeadEffector::BendBone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FBBIKHeadEffector::BendBone*, creationType>()));
    }
  }; // RootMotion.FinalIK.FBBIKHeadEffector/BendBone
  #pragma pack(pop)
  static check_size<sizeof(FBBIKHeadEffector::BendBone), 28 + sizeof(UnityEngine::Quaternion)> __RootMotion_FinalIK_FBBIKHeadEffector_BendBoneSizeCheck;
  static_assert(sizeof(FBBIKHeadEffector::BendBone) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::FBBIKHeadEffector::BendBone*, "RootMotion.FinalIK", "FBBIKHeadEffector/BendBone");
