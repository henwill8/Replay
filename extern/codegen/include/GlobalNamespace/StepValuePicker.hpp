// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: StepValuePicker
  class StepValuePicker : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Button _decButton
    // Offset: 0x18
    UnityEngine::UI::Button* decButton;
    // private UnityEngine.UI.Button _incButton
    // Offset: 0x20
    UnityEngine::UI::Button* incButton;
    // private TMPro.TextMeshProUGUI _valueText
    // Offset: 0x28
    TMPro::TextMeshProUGUI* valueText;
    // private System.Action decButtonWasPressedEvent
    // Offset: 0x30
    System::Action* decButtonWasPressedEvent;
    // private System.Action incButtonWasPressedEvent
    // Offset: 0x38
    System::Action* incButtonWasPressedEvent;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_decButtonWasPressedEvent(System.Action value)
    // Offset: 0xF47778
    void add_decButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_decButtonWasPressedEvent(System.Action value)
    // Offset: 0xF4781C
    void remove_decButtonWasPressedEvent(System::Action* value);
    // public System.Void add_incButtonWasPressedEvent(System.Action value)
    // Offset: 0xF478C0
    void add_incButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_incButtonWasPressedEvent(System.Action value)
    // Offset: 0xF47964
    void remove_incButtonWasPressedEvent(System::Action* value);
    // public System.String get_text()
    // Offset: 0xF47A08
    ::Il2CppString* get_text();
    // public System.Void set_text(System.String value)
    // Offset: 0xF47A24
    void set_text(::Il2CppString* value);
    // public System.Void set_decButtonInteractable(System.Boolean value)
    // Offset: 0xF47A40
    void set_decButtonInteractable(bool value);
    // public System.Void set_incButtonInteractable(System.Boolean value)
    // Offset: 0xF47A60
    void set_incButtonInteractable(bool value);
    // protected System.Void OnEnable()
    // Offset: 0xF47A80
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0xF47B58
    void OnDisable();
    // private System.Void IncButtonPressed()
    // Offset: 0xF47C30
    void IncButtonPressed();
    // private System.Void DecButtonPressed()
    // Offset: 0xF47C44
    void DecButtonPressed();
    // public System.Void .ctor()
    // Offset: 0xF47C58
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static StepValuePicker* New_ctor();
  }; // StepValuePicker
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StepValuePicker*, "", "StepValuePicker");
#pragma pack(pop)
