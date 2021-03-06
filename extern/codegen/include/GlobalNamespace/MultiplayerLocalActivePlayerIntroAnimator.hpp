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
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalActivePlayerIntroAnimator
  // [] Offset: FFFFFFFF
  class MultiplayerLocalActivePlayerIntroAnimator : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::$AnimateCoroutine$d__17
    class $AnimateCoroutine$d__17;
    // private ColorSO _activeLightsColor
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ColorSO* activeLightsColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _offLightsColor
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ColorSO* offLightsColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xD3B4FC
    // private CoreGameHUDController _coreGameHUDController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::CoreGameHUDController* coreGameHUDController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CoreGameHUDController*) == 0x8);
    // private MultiplayerPositionHUDController _multiplayerPositionHUDController
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MultiplayerPositionHUDController* multiplayerPositionHUDController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerPositionHUDController*) == 0x8);
    // [SpaceAttribute] Offset: 0xD3B544
    // private LightsAnimator[] _lightsAnimators
    // Size: 0x8
    // Offset: 0x38
    ::Array<GlobalNamespace::LightsAnimator*>* lightsAnimators;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::LightsAnimator*>*) == 0x8);
    // [SpaceAttribute] Offset: 0xD3B57C
    // private UnityEngine.Vector3 _leftGeometryStartPosition
    // Size: 0xC
    // Offset: 0x40
    UnityEngine::Vector3 leftGeometryStartPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _leftGeometryTargetPosition
    // Size: 0xC
    // Offset: 0x4C
    UnityEngine::Vector3 leftGeometryTargetPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _rightGeometryStartPosition
    // Size: 0xC
    // Offset: 0x58
    UnityEngine::Vector3 rightGeometryStartPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _rightGeometryTargetPosition
    // Size: 0xC
    // Offset: 0x64
    UnityEngine::Vector3 rightGeometryTargetPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Transform _leftGeometryTransform
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::Transform* leftGeometryTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _rightGeometryTransform
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::Transform* rightGeometryTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [InjectAttribute] Offset: 0xD3B604
    // private readonly Tweening.TweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x80
    Tweening::TweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(Tweening::TweeningManager*) == 0x8);
    // private Tweening.Tween`1<System.Single> _fadeInHUDTween
    // Size: 0x8
    // Offset: 0x88
    Tweening::Tween_1<float>* fadeInHUDTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<float>*) == 0x8);
    // private Tweening.Tween`1<UnityEngine.Vector3> _leftGeometryPositionTween
    // Size: 0x8
    // Offset: 0x90
    Tweening::Tween_1<UnityEngine::Vector3>* leftGeometryPositionTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<UnityEngine::Vector3>*) == 0x8);
    // private Tweening.Tween`1<UnityEngine.Vector3> _rightGeometryPositionTween
    // Size: 0x8
    // Offset: 0x98
    Tweening::Tween_1<UnityEngine::Vector3>* rightGeometryPositionTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<UnityEngine::Vector3>*) == 0x8);
    // Creating value type constructor for type: MultiplayerLocalActivePlayerIntroAnimator
    MultiplayerLocalActivePlayerIntroAnimator(GlobalNamespace::ColorSO* activeLightsColor_ = {}, GlobalNamespace::ColorSO* offLightsColor_ = {}, GlobalNamespace::CoreGameHUDController* coreGameHUDController_ = {}, GlobalNamespace::MultiplayerPositionHUDController* multiplayerPositionHUDController_ = {}, ::Array<GlobalNamespace::LightsAnimator*>* lightsAnimators_ = {}, UnityEngine::Vector3 leftGeometryStartPosition_ = {}, UnityEngine::Vector3 leftGeometryTargetPosition_ = {}, UnityEngine::Vector3 rightGeometryStartPosition_ = {}, UnityEngine::Vector3 rightGeometryTargetPosition_ = {}, UnityEngine::Transform* leftGeometryTransform_ = {}, UnityEngine::Transform* rightGeometryTransform_ = {}, Tweening::TweeningManager* tweeningManager_ = {}, Tweening::Tween_1<float>* fadeInHUDTween_ = {}, Tweening::Tween_1<UnityEngine::Vector3>* leftGeometryPositionTween_ = {}, Tweening::Tween_1<UnityEngine::Vector3>* rightGeometryPositionTween_ = {}) noexcept : activeLightsColor{activeLightsColor_}, offLightsColor{offLightsColor_}, coreGameHUDController{coreGameHUDController_}, multiplayerPositionHUDController{multiplayerPositionHUDController_}, lightsAnimators{lightsAnimators_}, leftGeometryStartPosition{leftGeometryStartPosition_}, leftGeometryTargetPosition{leftGeometryTargetPosition_}, rightGeometryStartPosition{rightGeometryStartPosition_}, rightGeometryTargetPosition{rightGeometryTargetPosition_}, leftGeometryTransform{leftGeometryTransform_}, rightGeometryTransform{rightGeometryTransform_}, tweeningManager{tweeningManager_}, fadeInHUDTween{fadeInHUDTween_}, leftGeometryPositionTween{leftGeometryPositionTween_}, rightGeometryPositionTween{rightGeometryPositionTween_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnDestroy()
    // Offset: 0xFE2828
    void OnDestroy();
    // public System.Void SetBeforeIntroValues()
    // Offset: 0xFE28C0
    void SetBeforeIntroValues();
    // public System.Collections.IEnumerator AnimateCoroutine(System.Single animationDurationMultiplier, System.Int32 order)
    // Offset: 0xFE29A4
    System::Collections::IEnumerator* AnimateCoroutine(float animationDurationMultiplier, int order);
    // public System.Void TransitionToAfterIntroAnimationState()
    // Offset: 0xFE2A5C
    void TransitionToAfterIntroAnimationState();
    // private System.Void <AnimateCoroutine>b__17_0(UnityEngine.Vector3 val)
    // Offset: 0xFE2C54
    void $AnimateCoroutine$b__17_0(UnityEngine::Vector3 val);
    // private System.Void <AnimateCoroutine>b__17_1(UnityEngine.Vector3 val)
    // Offset: 0xFE2C70
    void $AnimateCoroutine$b__17_1(UnityEngine::Vector3 val);
    // private System.Void <AnimateCoroutine>b__17_2(System.Single f)
    // Offset: 0xFE2C8C
    void $AnimateCoroutine$b__17_2(float f);
    // public System.Void .ctor()
    // Offset: 0xFE2B54
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalActivePlayerIntroAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalActivePlayerIntroAnimator*, creationType>()));
    }
  }; // MultiplayerLocalActivePlayerIntroAnimator
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalActivePlayerIntroAnimator), 152 + sizeof(Tweening::Tween_1<UnityEngine::Vector3>*)> __GlobalNamespace_MultiplayerLocalActivePlayerIntroAnimatorSizeCheck;
  static_assert(sizeof(MultiplayerLocalActivePlayerIntroAnimator) == 0xA0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*, "", "MultiplayerLocalActivePlayerIntroAnimator");
