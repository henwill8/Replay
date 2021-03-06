// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.UI.CoroutineTween.ITweenValue
#include "UnityEngine/UI/CoroutineTween/ITweenValue.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI::CoroutineTween
namespace UnityEngine::UI::CoroutineTween {
  // Skipping declaration: ColorTweenMode because it is already included!
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UI.CoroutineTween
namespace UnityEngine::UI::CoroutineTween {
  // Size: 0x31
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UI.CoroutineTween.ColorTween
  // [] Offset: FFFFFFFF
  struct ColorTween/*, public System::ValueType, public UnityEngine::UI::CoroutineTween::ITweenValue*/ {
    public:
    // Nested type: UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode
    struct ColorTweenMode;
    // Nested type: UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenCallback
    class ColorTweenCallback;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode
    // [] Offset: FFFFFFFF
    struct ColorTweenMode/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: ColorTweenMode
      constexpr ColorTweenMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode All
      static constexpr const int All = 0;
      // Get static field: static public UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode All
      static UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode _get_All();
      // Set static field: static public UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode All
      static void _set_All(UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode value);
      // static field const value: static public UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode RGB
      static constexpr const int RGB = 1;
      // Get static field: static public UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode RGB
      static UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode _get_RGB();
      // Set static field: static public UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode RGB
      static void _set_RGB(UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode value);
      // static field const value: static public UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode Alpha
      static constexpr const int Alpha = 2;
      // Get static field: static public UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode Alpha
      static UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode _get_Alpha();
      // Set static field: static public UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode Alpha
      static void _set_Alpha(UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode value);
    }; // UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode
    #pragma pack(pop)
    static check_size<sizeof(ColorTween::ColorTweenMode), 0 + sizeof(int)> __UnityEngine_UI_CoroutineTween_ColorTween_ColorTweenModeSizeCheck;
    static_assert(sizeof(ColorTween::ColorTweenMode) == 0x4);
    // private UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenCallback m_Target
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenCallback* m_Target;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenCallback*) == 0x8);
    // private UnityEngine.Color m_StartColor
    // Size: 0x10
    // Offset: 0x8
    UnityEngine::Color m_StartColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color m_TargetColor
    // Size: 0x10
    // Offset: 0x18
    UnityEngine::Color m_TargetColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode m_TweenMode
    // Size: 0x4
    // Offset: 0x28
    UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode m_TweenMode;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode) == 0x4);
    // private System.Single m_Duration
    // Size: 0x4
    // Offset: 0x2C
    float m_Duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_IgnoreTimeScale
    // Size: 0x1
    // Offset: 0x30
    bool m_IgnoreTimeScale;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ColorTween
    constexpr ColorTween(UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenCallback* m_Target_ = {}, UnityEngine::Color m_StartColor_ = {}, UnityEngine::Color m_TargetColor_ = {}, UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode m_TweenMode_ = {}, float m_Duration_ = {}, bool m_IgnoreTimeScale_ = {}) noexcept : m_Target{m_Target_}, m_StartColor{m_StartColor_}, m_TargetColor{m_TargetColor_}, m_TweenMode{m_TweenMode_}, m_Duration{m_Duration_}, m_IgnoreTimeScale{m_IgnoreTimeScale_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::UI::CoroutineTween::ITweenValue
    operator UnityEngine::UI::CoroutineTween::ITweenValue() noexcept {
      return *reinterpret_cast<UnityEngine::UI::CoroutineTween::ITweenValue*>(this);
    }
    // public UnityEngine.Color get_startColor()
    // Offset: 0xDF91FC
    UnityEngine::Color get_startColor();
    // public System.Void set_startColor(UnityEngine.Color value)
    // Offset: 0xDF9208
    void set_startColor(UnityEngine::Color value);
    // public UnityEngine.Color get_targetColor()
    // Offset: 0xDF9214
    UnityEngine::Color get_targetColor();
    // public System.Void set_targetColor(UnityEngine.Color value)
    // Offset: 0xDF9220
    void set_targetColor(UnityEngine::Color value);
    // public UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode get_tweenMode()
    // Offset: 0xDF922C
    UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode get_tweenMode();
    // public System.Void set_tweenMode(UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode value)
    // Offset: 0xDF9234
    void set_tweenMode(UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode value);
    // public System.Void set_duration(System.Single value)
    // Offset: 0xDF9244
    void set_duration(float value);
    // public System.Void set_ignoreTimeScale(System.Boolean value)
    // Offset: 0xDF9254
    void set_ignoreTimeScale(bool value);
    // public System.Void AddOnChangedCallback(UnityEngine.Events.UnityAction`1<UnityEngine.Color> callback)
    // Offset: 0xDF9268
    void AddOnChangedCallback(UnityEngine::Events::UnityAction_1<UnityEngine::Color>* callback);
    // public System.Boolean GetIgnoreTimescale()
    // Offset: 0xDF9270
    bool GetIgnoreTimescale();
    // public System.Single GetDuration()
    // Offset: 0xDF9278
    float GetDuration();
    // public System.Single get_duration()
    // Offset: 0xDF923C
    // Implemented from: UnityEngine.UI.CoroutineTween.ITweenValue
    // Base method: System.Single ITweenValue::get_duration()
    float get_duration();
    // public System.Boolean get_ignoreTimeScale()
    // Offset: 0xDF924C
    // Implemented from: UnityEngine.UI.CoroutineTween.ITweenValue
    // Base method: System.Boolean ITweenValue::get_ignoreTimeScale()
    bool get_ignoreTimeScale();
    // public System.Void TweenValue(System.Single floatPercentage)
    // Offset: 0xDF9260
    // Implemented from: UnityEngine.UI.CoroutineTween.ITweenValue
    // Base method: System.Void ITweenValue::TweenValue(System.Single floatPercentage)
    void TweenValue(float floatPercentage);
    // public System.Boolean ValidTarget()
    // Offset: 0xDF9280
    // Implemented from: UnityEngine.UI.CoroutineTween.ITweenValue
    // Base method: System.Boolean ITweenValue::ValidTarget()
    bool ValidTarget();
  }; // UnityEngine.UI.CoroutineTween.ColorTween
  #pragma pack(pop)
  static check_size<sizeof(ColorTween), 48 + sizeof(bool)> __UnityEngine_UI_CoroutineTween_ColorTweenSizeCheck;
  static_assert(sizeof(ColorTween) == 0x31);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::CoroutineTween::ColorTween, "UnityEngine.UI.CoroutineTween", "ColorTween");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode, "UnityEngine.UI.CoroutineTween", "ColorTween/ColorTweenMode");
