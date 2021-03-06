// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
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
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: ScaleAnimator
  // [] Offset: FFFFFFFF
  class ScaleAnimator : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _displayedScale
    // Size: 0x4
    // Offset: 0x18
    float displayedScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: displayedScale and: targetTransform
    char __padding0[0x4] = {};
    // private UnityEngine.Transform _targetTransform
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* targetTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [InjectAttribute] Offset: 0xD3C8E0
    // private readonly Tweening.TweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x28
    Tweening::TweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(Tweening::TweeningManager*) == 0x8);
    // private Tweening.Tween`1<System.Single> _scaleUpTween
    // Size: 0x8
    // Offset: 0x30
    Tweening::Tween_1<float>* scaleUpTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<float>*) == 0x8);
    // private Tweening.Tween`1<System.Single> _scaleDownTween
    // Size: 0x8
    // Offset: 0x38
    Tweening::Tween_1<float>* scaleDownTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<float>*) == 0x8);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x40
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ScaleAnimator
    ScaleAnimator(float displayedScale_ = {}, UnityEngine::Transform* targetTransform_ = {}, Tweening::TweeningManager* tweeningManager_ = {}, Tweening::Tween_1<float>* scaleUpTween_ = {}, Tweening::Tween_1<float>* scaleDownTween_ = {}, bool initialized_ = {}) noexcept : displayedScale{displayedScale_}, targetTransform{targetTransform_}, tweeningManager{tweeningManager_}, scaleUpTween{scaleUpTween_}, scaleDownTween{scaleDownTween_}, initialized{initialized_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnDestroy()
    // Offset: 0x108B4CC
    void OnDestroy();
    // private System.Void InitIfNeeded()
    // Offset: 0x108B564
    void InitIfNeeded();
    // public System.Void SetPositionAndRotation(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x108B7B0
    void SetPositionAndRotation(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation);
    // public System.Void HideInstant()
    // Offset: 0x108B82C
    void HideInstant();
    // public System.Void ShowInstant()
    // Offset: 0x108B8F0
    void ShowInstant();
    // public System.Void Animate(System.Boolean show, System.Single duration, Tweening.EaseType easeType, System.Single delay)
    // Offset: 0x108B998
    void Animate(bool show, float duration, Tweening::EaseType easeType, float delay);
    // private System.Void <InitIfNeeded>b__7_0(System.Single val)
    // Offset: 0x108BAD4
    void $InitIfNeeded$b__7_0(float val);
    // private System.Void <InitIfNeeded>b__7_2()
    // Offset: 0x108BB30
    void $InitIfNeeded$b__7_2();
    // private System.Void <InitIfNeeded>b__7_1(System.Single val)
    // Offset: 0x108BB60
    void $InitIfNeeded$b__7_1(float val);
    // private System.Void <InitIfNeeded>b__7_3()
    // Offset: 0x108BBBC
    void $InitIfNeeded$b__7_3();
    // public System.Void .ctor()
    // Offset: 0x108BAC4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScaleAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ScaleAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScaleAnimator*, creationType>()));
    }
  }; // ScaleAnimator
  #pragma pack(pop)
  static check_size<sizeof(ScaleAnimator), 64 + sizeof(bool)> __GlobalNamespace_ScaleAnimatorSizeCheck;
  static_assert(sizeof(ScaleAnimator) == 0x41);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScaleAnimator*, "", "ScaleAnimator");
