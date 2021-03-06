// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: LookAtIK
  class LookAtIK;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x95
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.LookAtController
  // [] Offset: FFFFFFFF
  class LookAtController : public UnityEngine::MonoBehaviour {
    public:
    // public RootMotion.FinalIK.LookAtIK ik
    // Size: 0x8
    // Offset: 0x18
    RootMotion::FinalIK::LookAtIK* ik;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::LookAtIK*) == 0x8);
    // [HeaderAttribute] Offset: 0xD2A178
    // [TooltipAttribute] Offset: 0xD2A178
    // public UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [RangeAttribute] Offset: 0xD2A1D8
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x28
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 offset
    // Size: 0xC
    // Offset: 0x2C
    UnityEngine::Vector3 offset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [TooltipAttribute] Offset: 0xD2A1F0
    // public System.Single targetSwitchSmoothTime
    // Size: 0x4
    // Offset: 0x38
    float targetSwitchSmoothTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xD2A228
    // public System.Single weightSmoothTime
    // Size: 0x4
    // Offset: 0x3C
    float weightSmoothTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0xD2A260
    // [TooltipAttribute] Offset: 0xD2A260
    // public System.Boolean smoothTurnTowardsTarget
    // Size: 0x1
    // Offset: 0x40
    bool smoothTurnTowardsTarget;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: smoothTurnTowardsTarget and: maxRadiansDelta
    char __padding6[0x3] = {};
    // [TooltipAttribute] Offset: 0xD2A2C0
    // public System.Single maxRadiansDelta
    // Size: 0x4
    // Offset: 0x44
    float maxRadiansDelta;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xD2A2F8
    // public System.Single maxMagnitudeDelta
    // Size: 0x4
    // Offset: 0x48
    float maxMagnitudeDelta;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xD2A330
    // public System.Single slerpSpeed
    // Size: 0x4
    // Offset: 0x4C
    float slerpSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xD2A368
    // public UnityEngine.Vector3 pivotOffsetFromRoot
    // Size: 0xC
    // Offset: 0x50
    UnityEngine::Vector3 pivotOffsetFromRoot;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [TooltipAttribute] Offset: 0xD2A3A0
    // public System.Single minDistance
    // Size: 0x4
    // Offset: 0x5C
    float minDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0xD2A3D8
    // [TooltipAttribute] Offset: 0xD2A3D8
    // [RangeAttribute] Offset: 0xD2A3D8
    // public System.Single maxRootAngle
    // Size: 0x4
    // Offset: 0x60
    float maxRootAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: maxRootAngle and: lastTarget
    char __padding12[0x4] = {};
    // private UnityEngine.Transform lastTarget
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::Transform* lastTarget;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private System.Single switchWeight
    // Size: 0x4
    // Offset: 0x70
    float switchWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single switchWeightV
    // Size: 0x4
    // Offset: 0x74
    float switchWeightV;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single weightV
    // Size: 0x4
    // Offset: 0x78
    float weightV;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 lastPosition
    // Size: 0xC
    // Offset: 0x7C
    UnityEngine::Vector3 lastPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 dir
    // Size: 0xC
    // Offset: 0x88
    UnityEngine::Vector3 dir;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Boolean lastSmoothTowardsTarget
    // Size: 0x1
    // Offset: 0x94
    bool lastSmoothTowardsTarget;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: LookAtController
    LookAtController(RootMotion::FinalIK::LookAtIK* ik_ = {}, UnityEngine::Transform* target_ = {}, float weight_ = {}, UnityEngine::Vector3 offset_ = {}, float targetSwitchSmoothTime_ = {}, float weightSmoothTime_ = {}, bool smoothTurnTowardsTarget_ = {}, float maxRadiansDelta_ = {}, float maxMagnitudeDelta_ = {}, float slerpSpeed_ = {}, UnityEngine::Vector3 pivotOffsetFromRoot_ = {}, float minDistance_ = {}, float maxRootAngle_ = {}, UnityEngine::Transform* lastTarget_ = {}, float switchWeight_ = {}, float switchWeightV_ = {}, float weightV_ = {}, UnityEngine::Vector3 lastPosition_ = {}, UnityEngine::Vector3 dir_ = {}, bool lastSmoothTowardsTarget_ = {}) noexcept : ik{ik_}, target{target_}, weight{weight_}, offset{offset_}, targetSwitchSmoothTime{targetSwitchSmoothTime_}, weightSmoothTime{weightSmoothTime_}, smoothTurnTowardsTarget{smoothTurnTowardsTarget_}, maxRadiansDelta{maxRadiansDelta_}, maxMagnitudeDelta{maxMagnitudeDelta_}, slerpSpeed{slerpSpeed_}, pivotOffsetFromRoot{pivotOffsetFromRoot_}, minDistance{minDistance_}, maxRootAngle{maxRootAngle_}, lastTarget{lastTarget_}, switchWeight{switchWeight_}, switchWeightV{switchWeightV_}, weightV{weightV_}, lastPosition{lastPosition_}, dir{dir_}, lastSmoothTowardsTarget{lastSmoothTowardsTarget_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Start()
    // Offset: 0x1960BB4
    void Start();
    // private System.Void LateUpdate()
    // Offset: 0x1960DE8
    void LateUpdate();
    // private UnityEngine.Vector3 get_pivot()
    // Offset: 0x1960C9C
    UnityEngine::Vector3 get_pivot();
    // private System.Void ApplyMinDistance()
    // Offset: 0x19614A8
    void ApplyMinDistance();
    // private System.Void RootRotation()
    // Offset: 0x1961644
    void RootRotation();
    // public System.Void .ctor()
    // Offset: 0x1961960
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LookAtController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::LookAtController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LookAtController*, creationType>()));
    }
  }; // RootMotion.FinalIK.LookAtController
  #pragma pack(pop)
  static check_size<sizeof(LookAtController), 148 + sizeof(bool)> __RootMotion_FinalIK_LookAtControllerSizeCheck;
  static_assert(sizeof(LookAtController) == 0x95);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::LookAtController*, "RootMotion.FinalIK", "LookAtController");
