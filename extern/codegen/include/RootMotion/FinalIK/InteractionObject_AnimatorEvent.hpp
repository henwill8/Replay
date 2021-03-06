// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.InteractionObject
#include "RootMotion/FinalIK/InteractionObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
  // Forward declaring type: Animation
  class Animation;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.InteractionObject/AnimatorEvent
  // [] Offset: FFFFFFFF
  class InteractionObject::AnimatorEvent : public ::Il2CppObject {
    public:
    // [TooltipAttribute] Offset: 0xD2C200
    // public UnityEngine.Animator animator
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(UnityEngine::Animator*) == 0x8);
    // [TooltipAttribute] Offset: 0xD2C238
    // public UnityEngine.Animation animation
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Animation* animation;
    // Field size check
    static_assert(sizeof(UnityEngine::Animation*) == 0x8);
    // [TooltipAttribute] Offset: 0xD2C270
    // public System.String animationState
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* animationState;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [TooltipAttribute] Offset: 0xD2C2A8
    // public System.Single crossfadeTime
    // Size: 0x4
    // Offset: 0x28
    float crossfadeTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xD2C2E0
    // public System.Int32 layer
    // Size: 0x4
    // Offset: 0x2C
    int layer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [TooltipAttribute] Offset: 0xD2C318
    // public System.Boolean resetNormalizedTime
    // Size: 0x1
    // Offset: 0x30
    bool resetNormalizedTime;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: AnimatorEvent
    AnimatorEvent(UnityEngine::Animator* animator_ = {}, UnityEngine::Animation* animation_ = {}, ::Il2CppString* animationState_ = {}, float crossfadeTime_ = {}, int layer_ = {}, bool resetNormalizedTime_ = {}) noexcept : animator{animator_}, animation{animation_}, animationState{animationState_}, crossfadeTime{crossfadeTime_}, layer{layer_}, resetNormalizedTime{resetNormalizedTime_} {}
    // static field const value: static private System.String empty
    static constexpr const char* empty = "";
    // Get static field: static private System.String empty
    static ::Il2CppString* _get_empty();
    // Set static field: static private System.String empty
    static void _set_empty(::Il2CppString* value);
    // public System.Void Activate(System.Boolean pickUp)
    // Offset: 0x1C37228
    void Activate(bool pickUp);
    // private System.Void Activate(UnityEngine.Animator animator)
    // Offset: 0x1C3731C
    void Activate(UnityEngine::Animator* animator);
    // private System.Void Activate(UnityEngine.Animation animation)
    // Offset: 0x1C373D4
    void Activate(UnityEngine::Animation* animation);
    // public System.Void .ctor()
    // Offset: 0x1C374B4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionObject::AnimatorEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::InteractionObject::AnimatorEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionObject::AnimatorEvent*, creationType>()));
    }
  }; // RootMotion.FinalIK.InteractionObject/AnimatorEvent
  #pragma pack(pop)
  static check_size<sizeof(InteractionObject::AnimatorEvent), 48 + sizeof(bool)> __RootMotion_FinalIK_InteractionObject_AnimatorEventSizeCheck;
  static_assert(sizeof(InteractionObject::AnimatorEvent) == 0x31);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionObject::AnimatorEvent*, "RootMotion.FinalIK", "InteractionObject/AnimatorEvent");
