// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.ToggleWithCallbacks
#include "HMUI/ToggleWithCallbacks.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.SwitchView
  class SwitchView : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::SwitchView::AnimationType
    struct AnimationType;
    // Autogenerated type: HMUI.SwitchView/AnimationType
    struct AnimationType : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: AnimationType
      constexpr AnimationType(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HMUI.SwitchView/AnimationType OnOff
      static constexpr const int OnOff = 0;
      // Get static field: static public HMUI.SwitchView/AnimationType OnOff
      static HMUI::SwitchView::AnimationType _get_OnOff();
      // Set static field: static public HMUI.SwitchView/AnimationType OnOff
      static void _set_OnOff(HMUI::SwitchView::AnimationType value);
      // static field const value: static public HMUI.SwitchView/AnimationType SelectedState
      static constexpr const int SelectedState = 1;
      // Get static field: static public HMUI.SwitchView/AnimationType SelectedState
      static HMUI::SwitchView::AnimationType _get_SelectedState();
      // Set static field: static public HMUI.SwitchView/AnimationType SelectedState
      static void _set_SelectedState(HMUI::SwitchView::AnimationType value);
    }; // HMUI.SwitchView/AnimationType
    // private HMUI.SwitchView/AnimationType _animationType
    // Offset: 0x18
    HMUI::SwitchView::AnimationType animationType;
    // private UnityEngine.AnimationClip _normalAnimationClip
    // Offset: 0x20
    UnityEngine::AnimationClip* normalAnimationClip;
    // private UnityEngine.AnimationClip _highlightedAnimationClip
    // Offset: 0x28
    UnityEngine::AnimationClip* highlightedAnimationClip;
    // private UnityEngine.AnimationClip _pressedAnimationClip
    // Offset: 0x30
    UnityEngine::AnimationClip* pressedAnimationClip;
    // private UnityEngine.AnimationClip _disabledAnimationClip
    // Offset: 0x38
    UnityEngine::AnimationClip* disabledAnimationClip;
    // private UnityEngine.AnimationClip _onAnimationClip
    // Offset: 0x40
    UnityEngine::AnimationClip* onAnimationClip;
    // private UnityEngine.AnimationClip _offAnimationClip
    // Offset: 0x48
    UnityEngine::AnimationClip* offAnimationClip;
    // private UnityEngine.AnimationClip _selectedAnimationClip
    // Offset: 0x50
    UnityEngine::AnimationClip* selectedAnimationClip;
    // private UnityEngine.AnimationClip _selectedAndHighlightedAnimationClip
    // Offset: 0x58
    UnityEngine::AnimationClip* selectedAndHighlightedAnimationClip;
    // private HMUI.ToggleWithCallbacks _toggle
    // Offset: 0x60
    HMUI::ToggleWithCallbacks* toggle;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x1086B0C
    void Awake();
    // protected System.Void Start()
    // Offset: 0x1086B6C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1086E2C
    void OnDestroy();
    // private System.Void HandleOnValueChanged(System.Boolean value)
    // Offset: 0x1086FC0
    void HandleOnValueChanged(bool value);
    // private System.Void HandleStateDidChange(HMUI.ToggleWithCallbacks/SelectionState value)
    // Offset: 0x1086FC4
    void HandleStateDidChange(HMUI::ToggleWithCallbacks::SelectionState value);
    // private System.Void RefreshVisuals()
    // Offset: 0x1086D08
    void RefreshVisuals();
    // public System.Void .ctor()
    // Offset: 0x1087028
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SwitchView* New_ctor();
  }; // HMUI.SwitchView
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::SwitchView*, "HMUI", "SwitchView");
DEFINE_IL2CPP_ARG_TYPE(HMUI::SwitchView::AnimationType, "HMUI", "SwitchView/AnimationType");
#pragma pack(pop)
