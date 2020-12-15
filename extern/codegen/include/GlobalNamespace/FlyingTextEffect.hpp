// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: FlyingObjectEffect
#include "GlobalNamespace/FlyingObjectEffect.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FlyingTextEffect
  class FlyingTextEffect : public GlobalNamespace::FlyingObjectEffect {
    public:
    // Nested type: GlobalNamespace::FlyingTextEffect::Pool
    class Pool;
    // private TMPro.TextMeshPro _text
    // Offset: 0x80
    TMPro::TextMeshPro* text;
    // private UnityEngine.AnimationCurve _fadeAnimationCurve
    // Offset: 0x88
    UnityEngine::AnimationCurve* fadeAnimationCurve;
    // protected UnityEngine.Color _color
    // Offset: 0x90
    UnityEngine::Color color;
    // public System.Void InitAndPresent(System.String text, System.Single duration, UnityEngine.Vector3 targetPos, UnityEngine.Quaternion rotation, UnityEngine.Color color, System.Single fontSize, System.Boolean shake)
    // Offset: 0x1A15E58
    void InitAndPresent(::Il2CppString* text, float duration, UnityEngine::Vector3 targetPos, UnityEngine::Quaternion rotation, UnityEngine::Color color, float fontSize, bool shake);
    // protected override System.Void ManualUpdate(System.Single t)
    // Offset: 0x1A15ECC
    // Implemented from: FlyingObjectEffect
    // Base method: System.Void FlyingObjectEffect::ManualUpdate(System.Single t)
    void ManualUpdate(float t);
    // public System.Void .ctor()
    // Offset: 0x1A15F48
    // Implemented from: FlyingObjectEffect
    // Base method: System.Void FlyingObjectEffect::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FlyingTextEffect* New_ctor();
  }; // FlyingTextEffect
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingTextEffect*, "", "FlyingTextEffect");
#pragma pack(pop)