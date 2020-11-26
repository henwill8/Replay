// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.UI.CoroutineTween.ITweenValue
#include "UnityEngine/UI/CoroutineTween/ITweenValue.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI::CoroutineTween
namespace UnityEngine::UI::CoroutineTween {
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
  // Autogenerated type: UnityEngine.UI.CoroutineTween.FloatTween
  struct FloatTween : public System::ValueType/*, public UnityEngine::UI::CoroutineTween::ITweenValue*/ {
    public:
    // Nested type: UnityEngine::UI::CoroutineTween::FloatTween::FloatTweenCallback
    class FloatTweenCallback;
    // private UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback m_Target
    // Offset: 0x0
    UnityEngine::UI::CoroutineTween::FloatTween::FloatTweenCallback* m_Target;
    // private System.Single m_StartValue
    // Offset: 0x8
    float m_StartValue;
    // private System.Single m_TargetValue
    // Offset: 0xC
    float m_TargetValue;
    // private System.Single m_Duration
    // Offset: 0x10
    float m_Duration;
    // private System.Boolean m_IgnoreTimeScale
    // Offset: 0x14
    bool m_IgnoreTimeScale;
    // Creating value type constructor for type: FloatTween
    constexpr FloatTween(UnityEngine::UI::CoroutineTween::FloatTween::FloatTweenCallback* m_Target_ = {}, float m_StartValue_ = {}, float m_TargetValue_ = {}, float m_Duration_ = {}, bool m_IgnoreTimeScale_ = {}) noexcept : m_Target{m_Target_}, m_StartValue{m_StartValue_}, m_TargetValue{m_TargetValue_}, m_Duration{m_Duration_}, m_IgnoreTimeScale{m_IgnoreTimeScale_} {}
    // Creating interface conversion operator: operator UnityEngine::UI::CoroutineTween::ITweenValue
    operator UnityEngine::UI::CoroutineTween::ITweenValue() noexcept {
      return *reinterpret_cast<UnityEngine::UI::CoroutineTween::ITweenValue*>(this);
    }
    // public System.Single get_startValue()
    // Offset: 0xC9435C
    float get_startValue();
    // public System.Void set_startValue(System.Single value)
    // Offset: 0xC94364
    void set_startValue(float value);
    // public System.Single get_targetValue()
    // Offset: 0xC9436C
    float get_targetValue();
    // public System.Void set_targetValue(System.Single value)
    // Offset: 0xC94374
    void set_targetValue(float value);
    // public System.Void set_duration(System.Single value)
    // Offset: 0xC94384
    void set_duration(float value);
    // public System.Void set_ignoreTimeScale(System.Boolean value)
    // Offset: 0xC94394
    void set_ignoreTimeScale(bool value);
    // public System.Void AddOnChangedCallback(UnityEngine.Events.UnityAction`1<System.Single> callback)
    // Offset: 0xC943A8
    void AddOnChangedCallback(UnityEngine::Events::UnityAction_1<float>* callback);
    // public System.Boolean GetIgnoreTimescale()
    // Offset: 0xC943B0
    bool GetIgnoreTimescale();
    // public System.Single GetDuration()
    // Offset: 0xC943B8
    float GetDuration();
    // public System.Single get_duration()
    // Offset: 0xC9437C
    // Implemented from: UnityEngine.UI.CoroutineTween.ITweenValue
    // Base method: System.Single ITweenValue::get_duration()
    float get_duration();
    // public System.Boolean get_ignoreTimeScale()
    // Offset: 0xC9438C
    // Implemented from: UnityEngine.UI.CoroutineTween.ITweenValue
    // Base method: System.Boolean ITweenValue::get_ignoreTimeScale()
    bool get_ignoreTimeScale();
    // public System.Void TweenValue(System.Single floatPercentage)
    // Offset: 0xC943A0
    // Implemented from: UnityEngine.UI.CoroutineTween.ITweenValue
    // Base method: System.Void ITweenValue::TweenValue(System.Single floatPercentage)
    void TweenValue(float floatPercentage);
    // public System.Boolean ValidTarget()
    // Offset: 0xC943C0
    // Implemented from: UnityEngine.UI.CoroutineTween.ITweenValue
    // Base method: System.Boolean ITweenValue::ValidTarget()
    bool ValidTarget();
  }; // UnityEngine.UI.CoroutineTween.FloatTween
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::CoroutineTween::FloatTween, "UnityEngine.UI.CoroutineTween", "FloatTween");
#pragma pack(pop)
