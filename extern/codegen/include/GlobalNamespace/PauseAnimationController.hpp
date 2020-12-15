// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PauseAnimationController
  class PauseAnimationController : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Animator _animator
    // Offset: 0x18
    UnityEngine::Animator* animator;
    // private System.Action resumeFromPauseAnimationDidFinishEvent
    // Offset: 0x20
    System::Action* resumeFromPauseAnimationDidFinishEvent;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_resumeFromPauseAnimationDidFinishEvent(System.Action value)
    // Offset: 0xF05C5C
    void add_resumeFromPauseAnimationDidFinishEvent(System::Action* value);
    // public System.Void remove_resumeFromPauseAnimationDidFinishEvent(System.Action value)
    // Offset: 0xF05D00
    void remove_resumeFromPauseAnimationDidFinishEvent(System::Action* value);
    // protected System.Void Awake()
    // Offset: 0xF05DA4
    void Awake();
    // public System.Void StartEnterPauseAnimation()
    // Offset: 0xF05DE0
    void StartEnterPauseAnimation();
    // public System.Void StartResumeFromPauseAnimation()
    // Offset: 0xF05E60
    void StartResumeFromPauseAnimation();
    // public System.Void EnterPauseAnimationDidFinish()
    // Offset: 0xF05EE0
    void EnterPauseAnimationDidFinish();
    // public System.Void ResumeFromPauseAnimationDidFinish()
    // Offset: 0xF05F1C
    void ResumeFromPauseAnimationDidFinish();
    // public System.Void .ctor()
    // Offset: 0xF05F74
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PauseAnimationController* New_ctor();
  }; // PauseAnimationController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PauseAnimationController*, "", "PauseAnimationController");
#pragma pack(pop)