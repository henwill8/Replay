// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
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
  // Forward declaring type: EaseType
  struct EaseType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerCenterTextAnimator
  class MultiplayerCenterTextAnimator : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshPro _text
    // Offset: 0x18
    TMPro::TextMeshPro* text;
    // private UnityEngine.Transform _scalingTarget
    // Offset: 0x20
    UnityEngine::Transform* scalingTarget;
    // private readonly Tweening.TweeningManager _tweeningManager
    // Offset: 0x28
    Tweening::TweeningManager* tweeningManager;
    // private Tweening.Tween`1<System.Single> _fadeInTween
    // Offset: 0x30
    Tweening::Tween_1<float>* fadeInTween;
    // private Tweening.Tween`1<System.Single> _fadeOutTween
    // Offset: 0x38
    Tweening::Tween_1<float>* fadeOutTween;
    // private Tweening.Tween`1<System.Single> _fontSizeTween
    // Offset: 0x40
    Tweening::Tween_1<float>* fontSizeTween;
    // private Tweening.Tween`1<UnityEngine.Color> _colorTween
    // Offset: 0x48
    Tweening::Tween_1<UnityEngine::Color>* colorTween;
    // private Tweening.Tween`1<UnityEngine.Vector3> _offsetTween
    // Offset: 0x50
    Tweening::Tween_1<UnityEngine::Vector3>* offsetTween;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0xFA79D0
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0xFA7DB0
    void OnDestroy();
    // public System.Void AnimateTextColor(UnityEngine.Color color, System.Single duration, Tweening.EaseType easeType)
    // Offset: 0xFA7E48
    void AnimateTextColor(UnityEngine::Color color, float duration, Tweening::EaseType easeType);
    // public System.Void AnimateFontSize(System.Single fontSize, System.Single duration, Tweening.EaseType easeType)
    // Offset: 0xFA7EF8
    void AnimateFontSize(float fontSize, float duration, Tweening::EaseType easeType);
    // public System.Void AnimatePositionOffsetSize(UnityEngine.Vector3 offset, System.Single duration, Tweening.EaseType easeType)
    // Offset: 0xFA7F5C
    void AnimatePositionOffsetSize(UnityEngine::Vector3 offset, float duration, Tweening::EaseType easeType);
    // public System.Void AnimateEnabled(System.Boolean isEnabled, System.Single duration, Tweening.EaseType easeType)
    // Offset: 0xFA8000
    void AnimateEnabled(bool isEnabled, float duration, Tweening::EaseType easeType);
    // public System.Void SetText(System.String text)
    // Offset: 0xFA817C
    void SetText(::Il2CppString* text);
    // private System.Void <Awake>b__8_0(System.Single val)
    // Offset: 0xFA81A0
    void $Awake$b__8_0(float val);
    // private System.Void <Awake>b__8_1(System.Single val)
    // Offset: 0xFA8234
    void $Awake$b__8_1(float val);
    // private System.Void <Awake>b__8_5()
    // Offset: 0xFA82C8
    void $Awake$b__8_5();
    // private System.Void <Awake>b__8_2(System.Single val)
    // Offset: 0xFA82F8
    void $Awake$b__8_2(float val);
    // private System.Void <Awake>b__8_3(UnityEngine.Color val)
    // Offset: 0xFA8314
    void $Awake$b__8_3(UnityEngine::Color val);
    // private System.Void <Awake>b__8_4(UnityEngine.Vector3 val)
    // Offset: 0xFA8338
    void $Awake$b__8_4(UnityEngine::Vector3 val);
    // public System.Void .ctor()
    // Offset: 0xFA8198
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerCenterTextAnimator* New_ctor();
  }; // MultiplayerCenterTextAnimator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerCenterTextAnimator*, "", "MultiplayerCenterTextAnimator");
#pragma pack(pop)