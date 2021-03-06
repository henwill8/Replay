// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: FlyingObjectEffect
#include "GlobalNamespace/FlyingObjectEffect.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteCutInfo
  class NoteCutInfo;
  // Forward declaring type: ISaberSwingRatingCounter
  class ISaberSwingRatingCounter;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: FlyingScoreEffect
  // [] Offset: FFFFFFFF
  class FlyingScoreEffect : public GlobalNamespace::FlyingObjectEffect {
    public:
    // Writing base type padding for base size: 0x7D to desired offset: 0x80
    char ___base_padding[0x3] = {};
    // Nested type: GlobalNamespace::FlyingScoreEffect::Pool
    class Pool;
    // private UnityEngine.AnimationCurve _fadeAnimationCurve
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::AnimationCurve* fadeAnimationCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.SpriteRenderer _maxCutDistanceScoreIndicator
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::SpriteRenderer* maxCutDistanceScoreIndicator;
    // Field size check
    static_assert(sizeof(UnityEngine::SpriteRenderer*) == 0x8);
    // private TMPro.TextMeshPro _text
    // Size: 0x8
    // Offset: 0x90
    TMPro::TextMeshPro* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshPro*) == 0x8);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x98
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Single _colorAMultiplier
    // Size: 0x4
    // Offset: 0xA8
    float colorAMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: colorAMultiplier and: noteCutInfo
    char __padding4[0x4] = {};
    // private NoteCutInfo _noteCutInfo
    // Size: 0x8
    // Offset: 0xB0
    GlobalNamespace::NoteCutInfo* noteCutInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteCutInfo*) == 0x8);
    // Creating value type constructor for type: FlyingScoreEffect
    FlyingScoreEffect(UnityEngine::AnimationCurve* fadeAnimationCurve_ = {}, UnityEngine::SpriteRenderer* maxCutDistanceScoreIndicator_ = {}, TMPro::TextMeshPro* text_ = {}, UnityEngine::Color color_ = {}, float colorAMultiplier_ = {}, GlobalNamespace::NoteCutInfo* noteCutInfo_ = {}) noexcept : fadeAnimationCurve{fadeAnimationCurve_}, maxCutDistanceScoreIndicator{maxCutDistanceScoreIndicator_}, text{text_}, color{color_}, colorAMultiplier{colorAMultiplier_}, noteCutInfo{noteCutInfo_} {}
    // public System.Void InitAndPresent(NoteCutInfo noteCutInfo, System.Int32 multiplier, System.Single duration, UnityEngine.Vector3 targetPos, UnityEngine.Quaternion rotation, UnityEngine.Color color)
    // Offset: 0xF2EFB8
    void InitAndPresent(GlobalNamespace::NoteCutInfo* noteCutInfo, int multiplier, float duration, UnityEngine::Vector3 targetPos, UnityEngine::Quaternion rotation, UnityEngine::Color color);
    // protected System.Void OnDisable()
    // Offset: 0xF2F1EC
    void OnDisable();
    // private System.Void HandleSaberSwingRatingCounterDidChangeEvent(ISaberSwingRatingCounter saberSwingRatingCounter, System.Single rating)
    // Offset: 0xF2F398
    void HandleSaberSwingRatingCounterDidChangeEvent(GlobalNamespace::ISaberSwingRatingCounter* saberSwingRatingCounter, float rating);
    // private System.String GetScoreText(System.Int32 score)
    // Offset: 0xF2F1C4
    ::Il2CppString* GetScoreText(int score);
    // protected override System.Void ManualUpdate(System.Single t)
    // Offset: 0xF2F2EC
    // Implemented from: FlyingObjectEffect
    // Base method: System.Void FlyingObjectEffect::ManualUpdate(System.Single t)
    void ManualUpdate(float t);
    // public System.Void .ctor()
    // Offset: 0xF2F434
    // Implemented from: FlyingObjectEffect
    // Base method: System.Void FlyingObjectEffect::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlyingScoreEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FlyingScoreEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlyingScoreEffect*, creationType>()));
    }
  }; // FlyingScoreEffect
  #pragma pack(pop)
  static check_size<sizeof(FlyingScoreEffect), 176 + sizeof(GlobalNamespace::NoteCutInfo*)> __GlobalNamespace_FlyingScoreEffectSizeCheck;
  static_assert(sizeof(FlyingScoreEffect) == 0xB8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingScoreEffect*, "", "FlyingScoreEffect");
