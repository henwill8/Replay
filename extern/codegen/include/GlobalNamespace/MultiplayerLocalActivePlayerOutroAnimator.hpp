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
  // Forward declaring type: LightsAnimator
  class LightsAnimator;
  // Forward declaring type: CoreGameHUDController
  class CoreGameHUDController;
  // Forward declaring type: MultiplayerPositionHUDController
  class MultiplayerPositionHUDController;
  // Forward declaring type: MultiplayerLocalPlayerOutroAudio
  class MultiplayerLocalPlayerOutroAudio;
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
  // Forward declaring type: Tween
  class Tween;
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
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalActivePlayerOutroAnimator
  // [] Offset: FFFFFFFF
  class MultiplayerLocalActivePlayerOutroAnimator : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerLocalActivePlayerOutroAnimator::$AnimateCoroutine$d__14
    class $AnimateCoroutine$d__14;
    // protected ColorSO _offLightsColor
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ColorSO* offLightsColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xD3B624
    // protected LightsAnimator[] _lightsAnimators
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::LightsAnimator*>* lightsAnimators;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::LightsAnimator*>*) == 0x8);
    // [SpaceAttribute] Offset: 0xD3B65C
    // protected CoreGameHUDController _coreGameHUDController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::CoreGameHUDController* coreGameHUDController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CoreGameHUDController*) == 0x8);
    // protected MultiplayerPositionHUDController _multiplayerPositionHUDController
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MultiplayerPositionHUDController* multiplayerPositionHUDController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerPositionHUDController*) == 0x8);
    // private MultiplayerLocalPlayerOutroAudio _outroAudio
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MultiplayerLocalPlayerOutroAudio* outroAudio;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLocalPlayerOutroAudio*) == 0x8);
    // [SpaceAttribute] Offset: 0xD3B6B4
    // private UnityEngine.Vector3 _leftGeometryTargetPosition
    // Size: 0xC
    // Offset: 0x40
    UnityEngine::Vector3 leftGeometryTargetPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _rightGeometryTargetPosition
    // Size: 0xC
    // Offset: 0x4C
    UnityEngine::Vector3 rightGeometryTargetPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Transform _leftGeometryTransform
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::Transform* leftGeometryTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _rightGeometryTransform
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::Transform* rightGeometryTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [InjectAttribute] Offset: 0xD3B71C
    // private readonly Tweening.TweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x68
    Tweening::TweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(Tweening::TweeningManager*) == 0x8);
    // private Tweening.Tween _fadeHUDTween
    // Size: 0x8
    // Offset: 0x70
    Tweening::Tween* fadeHUDTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween*) == 0x8);
    // private Tweening.Tween`1<UnityEngine.Vector3> _leftGeometryPositionTween
    // Size: 0x8
    // Offset: 0x78
    Tweening::Tween_1<UnityEngine::Vector3>* leftGeometryPositionTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<UnityEngine::Vector3>*) == 0x8);
    // private Tweening.Tween`1<UnityEngine.Vector3> _rightGeometryPositionTween
    // Size: 0x8
    // Offset: 0x80
    Tweening::Tween_1<UnityEngine::Vector3>* rightGeometryPositionTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<UnityEngine::Vector3>*) == 0x8);
    // Creating value type constructor for type: MultiplayerLocalActivePlayerOutroAnimator
    MultiplayerLocalActivePlayerOutroAnimator(GlobalNamespace::ColorSO* offLightsColor_ = {}, ::Array<GlobalNamespace::LightsAnimator*>* lightsAnimators_ = {}, GlobalNamespace::CoreGameHUDController* coreGameHUDController_ = {}, GlobalNamespace::MultiplayerPositionHUDController* multiplayerPositionHUDController_ = {}, GlobalNamespace::MultiplayerLocalPlayerOutroAudio* outroAudio_ = {}, UnityEngine::Vector3 leftGeometryTargetPosition_ = {}, UnityEngine::Vector3 rightGeometryTargetPosition_ = {}, UnityEngine::Transform* leftGeometryTransform_ = {}, UnityEngine::Transform* rightGeometryTransform_ = {}, Tweening::TweeningManager* tweeningManager_ = {}, Tweening::Tween* fadeHUDTween_ = {}, Tweening::Tween_1<UnityEngine::Vector3>* leftGeometryPositionTween_ = {}, Tweening::Tween_1<UnityEngine::Vector3>* rightGeometryPositionTween_ = {}) noexcept : offLightsColor{offLightsColor_}, lightsAnimators{lightsAnimators_}, coreGameHUDController{coreGameHUDController_}, multiplayerPositionHUDController{multiplayerPositionHUDController_}, outroAudio{outroAudio_}, leftGeometryTargetPosition{leftGeometryTargetPosition_}, rightGeometryTargetPosition{rightGeometryTargetPosition_}, leftGeometryTransform{leftGeometryTransform_}, rightGeometryTransform{rightGeometryTransform_}, tweeningManager{tweeningManager_}, fadeHUDTween{fadeHUDTween_}, leftGeometryPositionTween{leftGeometryPositionTween_}, rightGeometryPositionTween{rightGeometryPositionTween_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnDestroy()
    // Offset: 0xFE3108
    void OnDestroy();
    // public System.Collections.IEnumerator AnimateCoroutine()
    // Offset: 0xFE31A0
    System::Collections::IEnumerator* AnimateCoroutine();
    // public System.Void PlayOutroMusicSample(System.Single maxDuration, System.Single volume)
    // Offset: 0xFE3248
    void PlayOutroMusicSample(float maxDuration, float volume);
    // private System.Void <AnimateCoroutine>b__14_0(System.Single f)
    // Offset: 0xFE334C
    void $AnimateCoroutine$b__14_0(float f);
    // private System.Void <AnimateCoroutine>b__14_1(UnityEngine.Vector3 val)
    // Offset: 0xFE33A0
    void $AnimateCoroutine$b__14_1(UnityEngine::Vector3 val);
    // private System.Void <AnimateCoroutine>b__14_2(UnityEngine.Vector3 val)
    // Offset: 0xFE33BC
    void $AnimateCoroutine$b__14_2(UnityEngine::Vector3 val);
    // public System.Void .ctor()
    // Offset: 0xFE32AC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalActivePlayerOutroAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalActivePlayerOutroAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalActivePlayerOutroAnimator*, creationType>()));
    }
  }; // MultiplayerLocalActivePlayerOutroAnimator
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalActivePlayerOutroAnimator), 128 + sizeof(Tweening::Tween_1<UnityEngine::Vector3>*)> __GlobalNamespace_MultiplayerLocalActivePlayerOutroAnimatorSizeCheck;
  static_assert(sizeof(MultiplayerLocalActivePlayerOutroAnimator) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalActivePlayerOutroAnimator*, "", "MultiplayerLocalActivePlayerOutroAnimator");
