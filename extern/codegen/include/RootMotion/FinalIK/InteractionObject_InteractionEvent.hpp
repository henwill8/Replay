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
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.InteractionObject/InteractionEvent
  // [] Offset: FFFFFFFF
  class InteractionObject::InteractionEvent : public ::Il2CppObject {
    public:
    // [TooltipAttribute] Offset: 0xD2C040
    // public System.Single time
    // Size: 0x4
    // Offset: 0x10
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xD2C078
    // public System.Boolean pause
    // Size: 0x1
    // Offset: 0x14
    bool pause;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0xD2C0B0
    // public System.Boolean pickUp
    // Size: 0x1
    // Offset: 0x15
    bool pickUp;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: pickUp and: animations
    char __padding2[0x2] = {};
    // [TooltipAttribute] Offset: 0xD2C0E8
    // public RootMotion.FinalIK.InteractionObject/AnimatorEvent[] animations
    // Size: 0x8
    // Offset: 0x18
    ::Array<RootMotion::FinalIK::InteractionObject::AnimatorEvent*>* animations;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::InteractionObject::AnimatorEvent*>*) == 0x8);
    // [TooltipAttribute] Offset: 0xD2C120
    // public RootMotion.FinalIK.InteractionObject/Message[] messages
    // Size: 0x8
    // Offset: 0x20
    ::Array<RootMotion::FinalIK::InteractionObject::Message*>* messages;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::InteractionObject::Message*>*) == 0x8);
    // [TooltipAttribute] Offset: 0xD2C158
    // public UnityEngine.Events.UnityEvent unityEvent
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Events::UnityEvent* unityEvent;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::UnityEvent*) == 0x8);
    // Creating value type constructor for type: InteractionEvent
    InteractionEvent(float time_ = {}, bool pause_ = {}, bool pickUp_ = {}, ::Array<RootMotion::FinalIK::InteractionObject::AnimatorEvent*>* animations_ = {}, ::Array<RootMotion::FinalIK::InteractionObject::Message*>* messages_ = {}, UnityEngine::Events::UnityEvent* unityEvent_ = {}) noexcept : time{time_}, pause{pause_}, pickUp{pickUp_}, animations{animations_}, messages{messages_}, unityEvent{unityEvent_} {}
    // public System.Void Activate(UnityEngine.Transform t)
    // Offset: 0x1C35540
    void Activate(UnityEngine::Transform* t);
    // public System.Void .ctor()
    // Offset: 0x1C375B8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionObject::InteractionEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::InteractionObject::InteractionEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionObject::InteractionEvent*, creationType>()));
    }
  }; // RootMotion.FinalIK.InteractionObject/InteractionEvent
  #pragma pack(pop)
  static check_size<sizeof(InteractionObject::InteractionEvent), 40 + sizeof(UnityEngine::Events::UnityEvent*)> __RootMotion_FinalIK_InteractionObject_InteractionEventSizeCheck;
  static_assert(sizeof(InteractionObject::InteractionEvent) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionObject::InteractionEvent*, "RootMotion.FinalIK", "InteractionObject/InteractionEvent");
