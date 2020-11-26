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
  // Forward declaring type: RectTransform
  class RectTransform;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerLobbyCenterScreenLayoutAnimator
  class MultiplayerLobbyCenterScreenLayoutAnimator : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.RectTransform _nextLevelTransform
    // Offset: 0x18
    UnityEngine::RectTransform* nextLevelTransform;
    // private UnityEngine.RectTransform _nextLevelBasePosition
    // Offset: 0x20
    UnityEngine::RectTransform* nextLevelBasePosition;
    // private UnityEngine.RectTransform _nextLevelCountdownPosition
    // Offset: 0x28
    UnityEngine::RectTransform* nextLevelCountdownPosition;
    // private System.Single _transitionDuration
    // Offset: 0x30
    float transitionDuration;
    // private readonly Tweening.TweeningManager _tweeningManager
    // Offset: 0x38
    Tweening::TweeningManager* tweeningManager;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void StartCountdown()
    // Offset: 0xFB9BA0
    void StartCountdown();
    // public System.Void StopCountdown(System.Boolean instant)
    // Offset: 0xFB9DCC
    void StopCountdown(bool instant);
    // private System.Void Move(UnityEngine.Vector3 from, UnityEngine.Vector3 to, System.Single duration)
    // Offset: 0xFB9CA0
    void Move(UnityEngine::Vector3 from, UnityEngine::Vector3 to, float duration);
    // private System.Void <Move>b__7_0(UnityEngine.Vector3 pos)
    // Offset: 0xFB9EFC
    void $Move$b__7_0(UnityEngine::Vector3 pos);
    // public System.Void .ctor()
    // Offset: 0xFB9EF4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerLobbyCenterScreenLayoutAnimator* New_ctor();
  }; // MultiplayerLobbyCenterScreenLayoutAnimator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*, "", "MultiplayerLobbyCenterScreenLayoutAnimator");
#pragma pack(pop)
