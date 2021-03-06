// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.HitReactionVRIK/PositionOffset
#include "RootMotion/FinalIK/HitReactionVRIK_PositionOffset.hpp"
// Including type: RootMotion.FinalIK.IKSolverVR/PositionOffset
#include "RootMotion/FinalIK/IKSolverVR_PositionOffset.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.HitReactionVRIK/PositionOffset/PositionOffsetLink
  // [] Offset: FFFFFFFF
  class HitReactionVRIK::PositionOffset::PositionOffsetLink : public ::Il2CppObject {
    public:
    // [TooltipAttribute] Offset: 0xD2DA38
    // public RootMotion.FinalIK.IKSolverVR/PositionOffset positionOffset
    // Size: 0x4
    // Offset: 0x10
    RootMotion::FinalIK::IKSolverVR::PositionOffset positionOffset;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverVR::PositionOffset) == 0x4);
    // [TooltipAttribute] Offset: 0xD2DA70
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x14
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 lastValue
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 lastValue;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 current
    // Size: 0xC
    // Offset: 0x24
    UnityEngine::Vector3 current;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: PositionOffsetLink
    PositionOffsetLink(RootMotion::FinalIK::IKSolverVR::PositionOffset positionOffset_ = {}, float weight_ = {}, UnityEngine::Vector3 lastValue_ = {}, UnityEngine::Vector3 current_ = {}) noexcept : positionOffset{positionOffset_}, weight{weight_}, lastValue{lastValue_}, current{current_} {}
    // public System.Void Apply(RootMotion.FinalIK.VRIK ik, UnityEngine.Vector3 offset, System.Single crossFader)
    // Offset: 0x1AF9040
    void Apply(RootMotion::FinalIK::VRIK* ik, UnityEngine::Vector3 offset, float crossFader);
    // public System.Void CrossFadeStart()
    // Offset: 0x1AF8DFC
    void CrossFadeStart();
    // public System.Void .ctor()
    // Offset: 0x1AF915C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HitReactionVRIK::PositionOffset::PositionOffsetLink* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HitReactionVRIK::PositionOffset::PositionOffsetLink*, creationType>()));
    }
  }; // RootMotion.FinalIK.HitReactionVRIK/PositionOffset/PositionOffsetLink
  #pragma pack(pop)
  static check_size<sizeof(HitReactionVRIK::PositionOffset::PositionOffsetLink), 36 + sizeof(UnityEngine::Vector3)> __RootMotion_FinalIK_HitReactionVRIK_PositionOffset_PositionOffsetLinkSizeCheck;
  static_assert(sizeof(HitReactionVRIK::PositionOffset::PositionOffsetLink) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink*, "RootMotion.FinalIK", "HitReactionVRIK/PositionOffset/PositionOffsetLink");
