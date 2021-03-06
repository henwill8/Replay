// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.Interactable
#include "HMUI/Interactable.hpp"
// Including type: UnityEngine.EventSystems.IPointerClickHandler
#include "UnityEngine/EventSystems/IPointerClickHandler.hpp"
// Including type: UnityEngine.EventSystems.ISubmitHandler
#include "UnityEngine/EventSystems/ISubmitHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerEnterHandler
#include "UnityEngine/EventSystems/IPointerEnterHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerExitHandler
#include "UnityEngine/EventSystems/IPointerExitHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: TransitionType because it is already included!
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x3A
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.SelectableCell
  // [] Offset: FFFFFFFF
  // [RequireComponent] Offset: D17C70
  class SelectableCell : public HMUI::Interactable/*, public UnityEngine::EventSystems::IPointerClickHandler, public UnityEngine::EventSystems::ISubmitHandler, public UnityEngine::EventSystems::IPointerEnterHandler, public UnityEngine::EventSystems::IPointerExitHandler*/ {
    public:
    // Writing base type padding for base size: 0x19 to desired offset: 0x20
    char ___base_padding[0x7] = {};
    // Nested type: HMUI::SelectableCell::TransitionType
    struct TransitionType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: HMUI.SelectableCell/TransitionType
    // [] Offset: FFFFFFFF
    struct TransitionType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: TransitionType
      constexpr TransitionType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HMUI.SelectableCell/TransitionType Instant
      static constexpr const int Instant = 0;
      // Get static field: static public HMUI.SelectableCell/TransitionType Instant
      static HMUI::SelectableCell::TransitionType _get_Instant();
      // Set static field: static public HMUI.SelectableCell/TransitionType Instant
      static void _set_Instant(HMUI::SelectableCell::TransitionType value);
      // static field const value: static public HMUI.SelectableCell/TransitionType Animated
      static constexpr const int Animated = 1;
      // Get static field: static public HMUI.SelectableCell/TransitionType Animated
      static HMUI::SelectableCell::TransitionType _get_Animated();
      // Set static field: static public HMUI.SelectableCell/TransitionType Animated
      static void _set_Animated(HMUI::SelectableCell::TransitionType value);
    }; // HMUI.SelectableCell/TransitionType
    #pragma pack(pop)
    static check_size<sizeof(SelectableCell::TransitionType), 0 + sizeof(int)> __HMUI_SelectableCell_TransitionTypeSizeCheck;
    static_assert(sizeof(SelectableCell::TransitionType) == 0x4);
    // [SignalSenderAttribute] Offset: 0xD19878
    // private Signal _wasPressedSignal
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::Signal* wasPressedSignal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Signal*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD198B0
    // private System.Action`3<HMUI.SelectableCell,HMUI.SelectableCell/TransitionType,System.Object> selectionDidChangeEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_3<HMUI::SelectableCell*, HMUI::SelectableCell::TransitionType, ::Il2CppObject*>* selectionDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_3<HMUI::SelectableCell*, HMUI::SelectableCell::TransitionType, ::Il2CppObject*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD198C0
    // private System.Action`2<HMUI.SelectableCell,HMUI.SelectableCell/TransitionType> highlightDidChangeEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action_2<HMUI::SelectableCell*, HMUI::SelectableCell::TransitionType>* highlightDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<HMUI::SelectableCell*, HMUI::SelectableCell::TransitionType>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD198D0
    // private System.Boolean <highlighted>k__BackingField
    // Size: 0x1
    // Offset: 0x38
    bool highlighted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xD198E0
    // private System.Boolean <selected>k__BackingField
    // Size: 0x1
    // Offset: 0x39
    bool selected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SelectableCell
    SelectableCell(GlobalNamespace::Signal* wasPressedSignal_ = {}, System::Action_3<HMUI::SelectableCell*, HMUI::SelectableCell::TransitionType, ::Il2CppObject*>* selectionDidChangeEvent_ = {}, System::Action_2<HMUI::SelectableCell*, HMUI::SelectableCell::TransitionType>* highlightDidChangeEvent_ = {}, bool highlighted_ = {}, bool selected_ = {}) noexcept : wasPressedSignal{wasPressedSignal_}, selectionDidChangeEvent{selectionDidChangeEvent_}, highlightDidChangeEvent{highlightDidChangeEvent_}, highlighted{highlighted_}, selected{selected_} {}
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerClickHandler
    operator UnityEngine::EventSystems::IPointerClickHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerClickHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::ISubmitHandler
    operator UnityEngine::EventSystems::ISubmitHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::ISubmitHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerEnterHandler
    operator UnityEngine::EventSystems::IPointerEnterHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerEnterHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerExitHandler
    operator UnityEngine::EventSystems::IPointerExitHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerExitHandler*>(this);
    }
    // public System.Void add_selectionDidChangeEvent(System.Action`3<HMUI.SelectableCell,HMUI.SelectableCell/TransitionType,System.Object> value)
    // Offset: 0x11BF7BC
    void add_selectionDidChangeEvent(System::Action_3<HMUI::SelectableCell*, HMUI::SelectableCell::TransitionType, ::Il2CppObject*>* value);
    // public System.Void remove_selectionDidChangeEvent(System.Action`3<HMUI.SelectableCell,HMUI.SelectableCell/TransitionType,System.Object> value)
    // Offset: 0x11BF718
    void remove_selectionDidChangeEvent(System::Action_3<HMUI::SelectableCell*, HMUI::SelectableCell::TransitionType, ::Il2CppObject*>* value);
    // public System.Void add_highlightDidChangeEvent(System.Action`2<HMUI.SelectableCell,HMUI.SelectableCell/TransitionType> value)
    // Offset: 0x11BFCF8
    void add_highlightDidChangeEvent(System::Action_2<HMUI::SelectableCell*, HMUI::SelectableCell::TransitionType>* value);
    // public System.Void remove_highlightDidChangeEvent(System.Action`2<HMUI.SelectableCell,HMUI.SelectableCell/TransitionType> value)
    // Offset: 0x11BFD9C
    void remove_highlightDidChangeEvent(System::Action_2<HMUI::SelectableCell*, HMUI::SelectableCell::TransitionType>* value);
    // public System.Boolean get_highlighted()
    // Offset: 0x11BFE40
    bool get_highlighted();
    // private System.Void set_highlighted(System.Boolean value)
    // Offset: 0x11BFE48
    void set_highlighted(bool value);
    // public System.Boolean get_selected()
    // Offset: 0x11BFE54
    bool get_selected();
    // private System.Void set_selected(System.Boolean value)
    // Offset: 0x11BFE5C
    void set_selected(bool value);
    // protected System.Void Start()
    // Offset: 0x11BFE68
    void Start();
    // public System.Void SetSelected(System.Boolean value, HMUI.SelectableCell/TransitionType transitionType, System.Object changeOwner, System.Boolean ignoreCurrentValue)
    // Offset: 0x11BF860
    void SetSelected(bool value, HMUI::SelectableCell::TransitionType transitionType, ::Il2CppObject* changeOwner, bool ignoreCurrentValue);
    // public System.Void ClearHighlight(HMUI.SelectableCell/TransitionType transitionType)
    // Offset: 0x11BF928
    void ClearHighlight(HMUI::SelectableCell::TransitionType transitionType);
    // private System.Void SetHighlight(System.Boolean value, HMUI.SelectableCell/TransitionType transitionType, System.Boolean ignoreCurrentValue)
    // Offset: 0x11BFEA4
    void SetHighlight(bool value, HMUI::SelectableCell::TransitionType transitionType, bool ignoreCurrentValue);
    // protected System.Void InternalToggle()
    // Offset: 0xFFFFFFFF
    void InternalToggle();
    // protected System.Void SelectionDidChange(HMUI.SelectableCell/TransitionType transitionType)
    // Offset: 0x11BFF64
    void SelectionDidChange(HMUI::SelectableCell::TransitionType transitionType);
    // protected System.Void HighlightDidChange(HMUI.SelectableCell/TransitionType transitionType)
    // Offset: 0x11BFF68
    void HighlightDidChange(HMUI::SelectableCell::TransitionType transitionType);
    // public System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x11BFF6C
    // Implemented from: UnityEngine.EventSystems.IPointerClickHandler
    // Base method: System.Void IPointerClickHandler::OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerClick(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x11C0038
    // Implemented from: UnityEngine.EventSystems.ISubmitHandler
    // Base method: System.Void ISubmitHandler::OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    void OnSubmit(UnityEngine::EventSystems::BaseEventData* eventData);
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x11C00E8
    // Implemented from: UnityEngine.EventSystems.IPointerEnterHandler
    // Base method: System.Void IPointerEnterHandler::OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerEnter(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x11C00F8
    // Implemented from: UnityEngine.EventSystems.IPointerExitHandler
    // Base method: System.Void IPointerExitHandler::OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerExit(UnityEngine::EventSystems::PointerEventData* eventData);
    // protected System.Void .ctor()
    // Offset: 0x11BFCE8
    // Implemented from: HMUI.Interactable
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::SelectableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectableCell*, creationType>()));
    }
  }; // HMUI.SelectableCell
  #pragma pack(pop)
  static check_size<sizeof(SelectableCell), 57 + sizeof(bool)> __HMUI_SelectableCellSizeCheck;
  static_assert(sizeof(SelectableCell) == 0x3A);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::SelectableCell*, "HMUI", "SelectableCell");
DEFINE_IL2CPP_ARG_TYPE(HMUI::SelectableCell::TransitionType, "HMUI", "SelectableCell/TransitionType");
