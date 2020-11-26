// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Including type: UnityEngine.EventSystems.IPointerClickHandler
#include "UnityEngine/EventSystems/IPointerClickHandler.hpp"
// Including type: UnityEngine.EventSystems.ISubmitHandler
#include "UnityEngine/EventSystems/ISubmitHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerEnterHandler
#include "UnityEngine/EventSystems/IPointerEnterHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerExitHandler
#include "UnityEngine/EventSystems/IPointerExitHandler.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: Interactable
  class Interactable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionToggle
  class MissionToggle : public UnityEngine::EventSystems::UIBehaviour/*, public UnityEngine::EventSystems::IPointerClickHandler, public UnityEngine::EventSystems::ISubmitHandler, public UnityEngine::EventSystems::IPointerEnterHandler, public UnityEngine::EventSystems::IPointerExitHandler*/ {
    public:
    // private Signal _missionToggleWasPressedSignal
    // Offset: 0x18
    GlobalNamespace::Signal* missionToggleWasPressedSignal;
    // private TMPro.TextMeshProUGUI _text
    // Offset: 0x20
    TMPro::TextMeshProUGUI* text;
    // private UnityEngine.UI.Image _lockedImage
    // Offset: 0x28
    UnityEngine::UI::Image* lockedImage;
    // private UnityEngine.UI.Image _clearedImage
    // Offset: 0x30
    UnityEngine::UI::Image* clearedImage;
    // private UnityEngine.UI.Image _bgImage
    // Offset: 0x38
    UnityEngine::UI::Image* bgImage;
    // private UnityEngine.UI.Image _strokeImage
    // Offset: 0x40
    UnityEngine::UI::Image* strokeImage;
    // private HMUI.Interactable _vrInteractable
    // Offset: 0x48
    HMUI::Interactable* vrInteractable;
    // private UnityEngine.Color _disabledColor
    // Offset: 0x50
    UnityEngine::Color disabledColor;
    // private UnityEngine.Color _normalColor
    // Offset: 0x60
    UnityEngine::Color normalColor;
    // private UnityEngine.Color _invertColor
    // Offset: 0x70
    UnityEngine::Color invertColor;
    // private UnityEngine.Color _highlightColor
    // Offset: 0x80
    UnityEngine::Color highlightColor;
    // private System.Action`1<MissionToggle> selectionDidChangeEvent
    // Offset: 0x90
    System::Action_1<GlobalNamespace::MissionToggle*>* selectionDidChangeEvent;
    // private System.Boolean _selected
    // Offset: 0x98
    bool selected;
    // private System.Boolean _highlighted
    // Offset: 0x99
    bool highlighted;
    // private System.Boolean _interactable
    // Offset: 0x9A
    bool interactable;
    // private System.Boolean _missionCleared
    // Offset: 0x9B
    bool missionCleared;
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
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_selectionDidChangeEvent(System.Action`1<MissionToggle> value)
    // Offset: 0x101D008
    void add_selectionDidChangeEvent(System::Action_1<GlobalNamespace::MissionToggle*>* value);
    // public System.Void remove_selectionDidChangeEvent(System.Action`1<MissionToggle> value)
    // Offset: 0x101D1F0
    void remove_selectionDidChangeEvent(System::Action_1<GlobalNamespace::MissionToggle*>* value);
    // public System.Void set_missionCleared(System.Boolean value)
    // Offset: 0x1021BA0
    void set_missionCleared(bool value);
    // public System.Boolean get_selected()
    // Offset: 0x1021BAC
    bool get_selected();
    // public System.Void set_selected(System.Boolean value)
    // Offset: 0x101CEF0
    void set_selected(bool value);
    // public System.Boolean get_interactable()
    // Offset: 0x1021BB4
    bool get_interactable();
    // public System.Void set_interactable(System.Boolean value)
    // Offset: 0x101D0AC
    void set_interactable(bool value);
    // public System.Boolean get_highlighted()
    // Offset: 0x1021EAC
    bool get_highlighted();
    // public System.Void ChangeSelection(System.Boolean value, System.Boolean callSelectionDidChange, System.Boolean ignoreCurrentValue)
    // Offset: 0x101D328
    void ChangeSelection(bool value, bool callSelectionDidChange, bool ignoreCurrentValue);
    // public System.Void ChangeHighlight(System.Boolean value, System.Boolean ignoreCurrentValue)
    // Offset: 0x1021EDC
    void ChangeHighlight(bool value, bool ignoreCurrentValue);
    // public System.Void SetText(System.String text)
    // Offset: 0x101D294
    void SetText(::Il2CppString* text);
    // private System.Void InternalToggle()
    // Offset: 0x1021F04
    void InternalToggle();
    // private System.Void RefreshUI()
    // Offset: 0x1021BBC
    void RefreshUI();
    // protected override System.Void Start()
    // Offset: 0x1021EB4
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Start()
    void Start();
    // public System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1021F40
    // Implemented from: UnityEngine.EventSystems.IPointerClickHandler
    // Base method: System.Void IPointerClickHandler::OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerClick(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x1022004
    // Implemented from: UnityEngine.EventSystems.ISubmitHandler
    // Base method: System.Void ISubmitHandler::OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    void OnSubmit(UnityEngine::EventSystems::BaseEventData* eventData);
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x10220AC
    // Implemented from: UnityEngine.EventSystems.IPointerEnterHandler
    // Base method: System.Void IPointerEnterHandler::OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerEnter(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x10220CC
    // Implemented from: UnityEngine.EventSystems.IPointerExitHandler
    // Base method: System.Void IPointerExitHandler::OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerExit(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void .ctor()
    // Offset: 0x10220E8
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissionToggle* New_ctor();
  }; // MissionToggle
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionToggle*, "", "MissionToggle");
#pragma pack(pop)
