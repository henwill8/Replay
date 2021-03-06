// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.OffsetModifier
#include "RootMotion/FinalIK/OffsetModifier.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: OffsetPose
  class OffsetPose;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.BodyTilt
  // [] Offset: FFFFFFFF
  class BodyTilt : public RootMotion::FinalIK::OffsetModifier {
    public:
    // [TooltipAttribute] Offset: 0xD29F48
    // public System.Single tiltSpeed
    // Size: 0x4
    // Offset: 0x2C
    float tiltSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xD29F80
    // public System.Single tiltSensitivity
    // Size: 0x4
    // Offset: 0x30
    float tiltSensitivity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: tiltSensitivity and: poseLeft
    char __padding1[0x4] = {};
    // [TooltipAttribute] Offset: 0xD29FB8
    // public RootMotion.FinalIK.OffsetPose poseLeft
    // Size: 0x8
    // Offset: 0x38
    RootMotion::FinalIK::OffsetPose* poseLeft;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::OffsetPose*) == 0x8);
    // [TooltipAttribute] Offset: 0xD29FF0
    // public RootMotion.FinalIK.OffsetPose poseRight
    // Size: 0x8
    // Offset: 0x40
    RootMotion::FinalIK::OffsetPose* poseRight;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::OffsetPose*) == 0x8);
    // private System.Single tiltAngle
    // Size: 0x4
    // Offset: 0x48
    float tiltAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 lastForward
    // Size: 0xC
    // Offset: 0x4C
    UnityEngine::Vector3 lastForward;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: BodyTilt
    BodyTilt(float tiltSpeed_ = {}, float tiltSensitivity_ = {}, RootMotion::FinalIK::OffsetPose* poseLeft_ = {}, RootMotion::FinalIK::OffsetPose* poseRight_ = {}, float tiltAngle_ = {}, UnityEngine::Vector3 lastForward_ = {}) noexcept : tiltSpeed{tiltSpeed_}, tiltSensitivity{tiltSensitivity_}, poseLeft{poseLeft_}, poseRight{poseRight_}, tiltAngle{tiltAngle_}, lastForward{lastForward_} {}
    // protected override System.Void Start()
    // Offset: 0x1B52678
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::Start()
    void Start();
    // protected override System.Void OnModifyOffset()
    // Offset: 0x1B526C0
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::OnModifyOffset()
    void OnModifyOffset();
    // public System.Void .ctor()
    // Offset: 0x1B528F0
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BodyTilt* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::BodyTilt::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BodyTilt*, creationType>()));
    }
  }; // RootMotion.FinalIK.BodyTilt
  #pragma pack(pop)
  static check_size<sizeof(BodyTilt), 76 + sizeof(UnityEngine::Vector3)> __RootMotion_FinalIK_BodyTiltSizeCheck;
  static_assert(sizeof(BodyTilt) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::BodyTilt*, "RootMotion.FinalIK", "BodyTilt");
