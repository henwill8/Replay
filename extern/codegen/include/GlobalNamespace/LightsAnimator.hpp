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
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
  // Forward declaring type: DirectionalLight
  class DirectionalLight;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
  // Forward declaring type: ColorTween
  class ColorTween;
  // Forward declaring type: EaseType
  struct EaseType;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LightsAnimator
  class LightsAnimator : public UnityEngine::MonoBehaviour {
    public:
    // private TubeBloomPrePassLight[] _lights
    // Offset: 0x18
    ::Array<GlobalNamespace::TubeBloomPrePassLight*>* lights;
    // private DirectionalLight[] _directionalLights
    // Offset: 0x20
    ::Array<GlobalNamespace::DirectionalLight*>* directionalLights;
    // private readonly Tweening.TweeningManager _tweeningManager
    // Offset: 0x28
    Tweening::TweeningManager* tweeningManager;
    // private Tweening.ColorTween _tween
    // Offset: 0x30
    Tweening::ColorTween* tween;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x1AC7F9C
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x1AC80C8
    void OnDestroy();
    // public System.Void AnimateToColor(UnityEngine.Color color, System.Single duration, Tweening.EaseType easeType)
    // Offset: 0x1AC8160
    void AnimateToColor(UnityEngine::Color color, float duration, Tweening::EaseType easeType);
    // public System.Void SetColor(UnityEngine.Color color)
    // Offset: 0x1AC8270
    void SetColor(UnityEngine::Color color);
    // private System.Void SetLightsColor(UnityEngine.Color color)
    // Offset: 0x1AC82D4
    void SetLightsColor(UnityEngine::Color color);
    // public System.Void SetLightsWidth(System.Single width)
    // Offset: 0x1AC83DC
    void SetLightsWidth(float width);
    // public System.Void .ctor()
    // Offset: 0x1AC8458
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LightsAnimator* New_ctor();
  }; // LightsAnimator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightsAnimator*, "", "LightsAnimator");
#pragma pack(pop)
