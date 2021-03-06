// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x75
  #pragma pack(push, 1)
  // Autogenerated type: VisualMetronome
  // [] Offset: FFFFFFFF
  class VisualMetronome : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // private System.Single _leftPadding
    // Size: 0x4
    // Offset: 0x20
    float leftPadding;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rightPadding
    // Size: 0x4
    // Offset: 0x24
    float rightPadding;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.RectTransform _ticker
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::RectTransform* ticker;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.RectTransform _movingTicker
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::RectTransform* movingTicker;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.UI.Image _tickerImage
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::UI::Image* tickerImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _movingTickerImage
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::UI::Image* movingTickerImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private System.Single _metronomeInterval
    // Size: 0x4
    // Offset: 0x48
    float metronomeInterval;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector2 _normalTickerSize
    // Size: 0x8
    // Offset: 0x4C
    UnityEngine::Vector2 normalTickerSize;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 _tickTickerSize0
    // Size: 0x8
    // Offset: 0x54
    UnityEngine::Vector2 tickTickerSize0;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 _tickTickerSize1
    // Size: 0x8
    // Offset: 0x5C
    UnityEngine::Vector2 tickTickerSize1;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private System.Single _smooth
    // Size: 0x4
    // Offset: 0x64
    float smooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _prevAudioTime
    // Size: 0x4
    // Offset: 0x68
    float prevAudioTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _zeroOffset
    // Size: 0x4
    // Offset: 0x6C
    float zeroOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _direction
    // Size: 0x4
    // Offset: 0x70
    float direction;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _dontTickThisFrame
    // Size: 0x1
    // Offset: 0x74
    bool dontTickThisFrame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: VisualMetronome
    VisualMetronome(UnityEngine::AudioSource* audioSource_ = {}, float leftPadding_ = {}, float rightPadding_ = {}, UnityEngine::RectTransform* ticker_ = {}, UnityEngine::RectTransform* movingTicker_ = {}, UnityEngine::UI::Image* tickerImage_ = {}, UnityEngine::UI::Image* movingTickerImage_ = {}, float metronomeInterval_ = {}, UnityEngine::Vector2 normalTickerSize_ = {}, UnityEngine::Vector2 tickTickerSize0_ = {}, UnityEngine::Vector2 tickTickerSize1_ = {}, float smooth_ = {}, float prevAudioTime_ = {}, float zeroOffset_ = {}, float direction_ = {}, bool dontTickThisFrame_ = {}) noexcept : audioSource{audioSource_}, leftPadding{leftPadding_}, rightPadding{rightPadding_}, ticker{ticker_}, movingTicker{movingTicker_}, tickerImage{tickerImage_}, movingTickerImage{movingTickerImage_}, metronomeInterval{metronomeInterval_}, normalTickerSize{normalTickerSize_}, tickTickerSize0{tickTickerSize0_}, tickTickerSize1{tickTickerSize1_}, smooth{smooth_}, prevAudioTime{prevAudioTime_}, zeroOffset{zeroOffset_}, direction{direction_}, dontTickThisFrame{dontTickThisFrame_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void set_tickerColor(UnityEngine.Color value)
    // Offset: 0x1721B68
    void set_tickerColor(UnityEngine::Color value);
    // public System.Void set_movingTickerColor(UnityEngine.Color value)
    // Offset: 0x1721B8C
    void set_movingTickerColor(UnityEngine::Color value);
    // public System.Void set_zeroOffset(System.Single value)
    // Offset: 0x1721BB0
    void set_zeroOffset(float value);
    // public System.Single get_zeroOffset()
    // Offset: 0x1721BC0
    float get_zeroOffset();
    // protected System.Void Awake()
    // Offset: 0x1721BC8
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x1721CD8
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1721D2C
    void OnDisable();
    // protected System.Void Update()
    // Offset: 0x1721D80
    void Update();
    // private System.Void SetMovingTickerNormalizedPosition(System.Single t)
    // Offset: 0x1721F44
    void SetMovingTickerNormalizedPosition(float t);
    // public System.Void .ctor()
    // Offset: 0x1722028
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VisualMetronome* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VisualMetronome::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VisualMetronome*, creationType>()));
    }
  }; // VisualMetronome
  #pragma pack(pop)
  static check_size<sizeof(VisualMetronome), 116 + sizeof(bool)> __GlobalNamespace_VisualMetronomeSizeCheck;
  static_assert(sizeof(VisualMetronome) == 0x75);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VisualMetronome*, "", "VisualMetronome");
