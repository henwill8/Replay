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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSO
  class ColorSO;
  // Forward declaring type: CoreGameHUDController
  class CoreGameHUDController;
  // Forward declaring type: MultiplayerPositionHUDController
  class MultiplayerPositionHUDController;
  // Forward declaring type: LightsAnimator
  class LightsAnimator;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
  // Forward declaring type: Tween`1<T>
  template<typename T>
  class Tween_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerLocalActivePlayerIntroAnimator
  class MultiplayerLocalActivePlayerIntroAnimator : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::$AnimateCoroutine$d__17
    class $AnimateCoroutine$d__17;
    // private ColorSO _activeLightsColor
    // Offset: 0x18
    GlobalNamespace::ColorSO* activeLightsColor;
    // private ColorSO _offLightsColor
    // Offset: 0x20
    GlobalNamespace::ColorSO* offLightsColor;
    // private CoreGameHUDController _coreGameHUDController
    // Offset: 0x28
    GlobalNamespace::CoreGameHUDController* coreGameHUDController;
    // private MultiplayerPositionHUDController _multiplayerPositionHUDController
    // Offset: 0x30
    GlobalNamespace::MultiplayerPositionHUDController* multiplayerPositionHUDController;
    // private LightsAnimator[] _lightsAnimators
    // Offset: 0x38
    ::Array<GlobalNamespace::LightsAnimator*>* lightsAnimators;
    // private UnityEngine.Vector3 _leftGeometryStartPosition
    // Offset: 0x40
    UnityEngine::Vector3 leftGeometryStartPosition;
    // private UnityEngine.Vector3 _leftGeometryTargetPosition
    // Offset: 0x4C
    UnityEngine::Vector3 leftGeometryTargetPosition;
    // private UnityEngine.Vector3 _rightGeometryStartPosition
    // Offset: 0x58
    UnityEngine::Vector3 rightGeometryStartPosition;
    // private UnityEngine.Vector3 _rightGeometryTargetPosition
    // Offset: 0x64
    UnityEngine::Vector3 rightGeometryTargetPosition;
    // private UnityEngine.Transform _leftGeometryTransform
    // Offset: 0x70
    UnityEngine::Transform* leftGeometryTransform;
    // private UnityEngine.Transform _rightGeometryTransform
    // Offset: 0x78
    UnityEngine::Transform* rightGeometryTransform;
    // private readonly Tweening.TweeningManager _tweeningManager
    // Offset: 0x80
    Tweening::TweeningManager* tweeningManager;
    // private Tweening.Tween`1<System.Single> _fadeInHUDTween
    // Offset: 0x88
    Tweening::Tween_1<float>* fadeInHUDTween;
    // private Tweening.Tween`1<UnityEngine.Vector3> _leftGeometryPositionTween
    // Offset: 0x90
    Tweening::Tween_1<UnityEngine::Vector3>* leftGeometryPositionTween;
    // private Tweening.Tween`1<UnityEngine.Vector3> _rightGeometryPositionTween
    // Offset: 0x98
    Tweening::Tween_1<UnityEngine::Vector3>* rightGeometryPositionTween;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnDestroy()
    // Offset: 0xF70498
    void OnDestroy();
    // public System.Void SetBeforeIntroValues()
    // Offset: 0xF70530
    void SetBeforeIntroValues();
    // public System.Collections.IEnumerator AnimateCoroutine(System.Single animationDurationMultiplier, System.Int32 order)
    // Offset: 0xF70614
    System::Collections::IEnumerator* AnimateCoroutine(float animationDurationMultiplier, int order);
    // public System.Void TransitionToAfterIntroAnimationState()
    // Offset: 0xF706CC
    void TransitionToAfterIntroAnimationState();
    // private System.Void <AnimateCoroutine>b__17_0(UnityEngine.Vector3 val)
    // Offset: 0xF708C4
    void $AnimateCoroutine$b__17_0(UnityEngine::Vector3 val);
    // private System.Void <AnimateCoroutine>b__17_1(UnityEngine.Vector3 val)
    // Offset: 0xF708E0
    void $AnimateCoroutine$b__17_1(UnityEngine::Vector3 val);
    // private System.Void <AnimateCoroutine>b__17_2(System.Single f)
    // Offset: 0xF708FC
    void $AnimateCoroutine$b__17_2(float f);
    // public System.Void .ctor()
    // Offset: 0xF707C4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerLocalActivePlayerIntroAnimator* New_ctor();
  }; // MultiplayerLocalActivePlayerIntroAnimator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*, "", "MultiplayerLocalActivePlayerIntroAnimator");
#pragma pack(pop)
