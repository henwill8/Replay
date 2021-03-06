// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.ToggleWithCallbacks
#include "HMUI/ToggleWithCallbacks.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.SwitchView
  // [] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: D17CD4
  // [RequireComponent] Offset: D17CD4
  class SwitchView : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::SwitchView::AnimationType
    struct AnimationType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: HMUI.SwitchView/AnimationType
    // [] Offset: FFFFFFFF
    struct AnimationType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: AnimationType
      constexpr AnimationType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
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
    #pragma pack(pop)
    static check_size<sizeof(SwitchView::AnimationType), 0 + sizeof(int)> __HMUI_SwitchView_AnimationTypeSizeCheck;
    static_assert(sizeof(SwitchView::AnimationType) == 0x4);
    // private HMUI.SwitchView/AnimationType _animationType
    // Size: 0x4
    // Offset: 0x18
    HMUI::SwitchView::AnimationType animationType;
    // Field size check
    static_assert(sizeof(HMUI::SwitchView::AnimationType) == 0x4);
    // Padding between fields: animationType and: normalAnimationClip
    char __padding0[0x4] = {};
    // private UnityEngine.AnimationClip _normalAnimationClip
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::AnimationClip* normalAnimationClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // private UnityEngine.AnimationClip _highlightedAnimationClip
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::AnimationClip* highlightedAnimationClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // private UnityEngine.AnimationClip _pressedAnimationClip
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::AnimationClip* pressedAnimationClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // private UnityEngine.AnimationClip _disabledAnimationClip
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::AnimationClip* disabledAnimationClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // [SpaceAttribute] Offset: 0xD199E8
    // [DrawIfAttribute] Offset: 0xD199E8
    // [NullAllowed] Offset: 0xD199E8
    // private UnityEngine.AnimationClip _onAnimationClip
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::AnimationClip* onAnimationClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // [DrawIfAttribute] Offset: 0xD19AE4
    // [NullAllowed] Offset: 0xD19AE4
    // private UnityEngine.AnimationClip _offAnimationClip
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::AnimationClip* offAnimationClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // [DrawIfAttribute] Offset: 0xD19BD0
    // [NullAllowed] Offset: 0xD19BD0
    // private UnityEngine.AnimationClip _selectedAnimationClip
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::AnimationClip* selectedAnimationClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // [DrawIfAttribute] Offset: 0xD19CC8
    // [NullAllowed] Offset: 0xD19CC8
    // private UnityEngine.AnimationClip _selectedAndHighlightedAnimationClip
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::AnimationClip* selectedAndHighlightedAnimationClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationClip*) == 0x8);
    // private HMUI.ToggleWithCallbacks _toggle
    // Size: 0x8
    // Offset: 0x60
    HMUI::ToggleWithCallbacks* toggle;
    // Field size check
    static_assert(sizeof(HMUI::ToggleWithCallbacks*) == 0x8);
    // Creating value type constructor for type: SwitchView
    SwitchView(HMUI::SwitchView::AnimationType animationType_ = {}, UnityEngine::AnimationClip* normalAnimationClip_ = {}, UnityEngine::AnimationClip* highlightedAnimationClip_ = {}, UnityEngine::AnimationClip* pressedAnimationClip_ = {}, UnityEngine::AnimationClip* disabledAnimationClip_ = {}, UnityEngine::AnimationClip* onAnimationClip_ = {}, UnityEngine::AnimationClip* offAnimationClip_ = {}, UnityEngine::AnimationClip* selectedAnimationClip_ = {}, UnityEngine::AnimationClip* selectedAndHighlightedAnimationClip_ = {}, HMUI::ToggleWithCallbacks* toggle_ = {}) noexcept : animationType{animationType_}, normalAnimationClip{normalAnimationClip_}, highlightedAnimationClip{highlightedAnimationClip_}, pressedAnimationClip{pressedAnimationClip_}, disabledAnimationClip{disabledAnimationClip_}, onAnimationClip{onAnimationClip_}, offAnimationClip{offAnimationClip_}, selectedAnimationClip{selectedAnimationClip_}, selectedAndHighlightedAnimationClip{selectedAndHighlightedAnimationClip_}, toggle{toggle_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x11C2614
    void Awake();
    // protected System.Void Start()
    // Offset: 0x11C2674
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x11C2934
    void OnDestroy();
    // private System.Void HandleOnValueChanged(System.Boolean value)
    // Offset: 0x11C2AC8
    void HandleOnValueChanged(bool value);
    // private System.Void HandleStateDidChange(HMUI.ToggleWithCallbacks/SelectionState value)
    // Offset: 0x11C2ACC
    void HandleStateDidChange(HMUI::ToggleWithCallbacks::SelectionState value);
    // private System.Void RefreshVisuals()
    // Offset: 0x11C2810
    void RefreshVisuals();
    // public System.Void .ctor()
    // Offset: 0x11C2B30
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SwitchView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::SwitchView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SwitchView*, creationType>()));
    }
  }; // HMUI.SwitchView
  #pragma pack(pop)
  static check_size<sizeof(SwitchView), 96 + sizeof(HMUI::ToggleWithCallbacks*)> __HMUI_SwitchViewSizeCheck;
  static_assert(sizeof(SwitchView) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::SwitchView*, "HMUI", "SwitchView");
DEFINE_IL2CPP_ARG_TYPE(HMUI::SwitchView::AnimationType, "HMUI", "SwitchView/AnimationType");
