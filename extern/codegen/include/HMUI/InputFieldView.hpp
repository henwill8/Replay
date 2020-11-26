// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Selectable
#include "UnityEngine/UI/Selectable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
  // Forward declaring type: ImageView
  class ImageView;
  // Skipping declaration: SelectionState because it is already included!
  // Forward declaring type: UIKeyboard
  class UIKeyboard;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: YieldInstruction
  class YieldInstruction;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.InputFieldView
  class InputFieldView : public UnityEngine::UI::Selectable {
    public:
    // Nested type: HMUI::InputFieldView::SelectionState
    struct SelectionState;
    // Nested type: HMUI::InputFieldView::InputFieldChanged
    class InputFieldChanged;
    // Nested type: HMUI::InputFieldView::$BlinkingCaretCoroutine$d__43
    class $BlinkingCaretCoroutine$d__43;
    // Autogenerated type: HMUI.InputFieldView/SelectionState
    struct SelectionState : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: SelectionState
      constexpr SelectionState(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HMUI.InputFieldView/SelectionState Normal
      static constexpr const int Normal = 0;
      // Get static field: static public HMUI.InputFieldView/SelectionState Normal
      static HMUI::InputFieldView::SelectionState _get_Normal();
      // Set static field: static public HMUI.InputFieldView/SelectionState Normal
      static void _set_Normal(HMUI::InputFieldView::SelectionState value);
      // static field const value: static public HMUI.InputFieldView/SelectionState Highlighted
      static constexpr const int Highlighted = 1;
      // Get static field: static public HMUI.InputFieldView/SelectionState Highlighted
      static HMUI::InputFieldView::SelectionState _get_Highlighted();
      // Set static field: static public HMUI.InputFieldView/SelectionState Highlighted
      static void _set_Highlighted(HMUI::InputFieldView::SelectionState value);
      // static field const value: static public HMUI.InputFieldView/SelectionState Pressed
      static constexpr const int Pressed = 2;
      // Get static field: static public HMUI.InputFieldView/SelectionState Pressed
      static HMUI::InputFieldView::SelectionState _get_Pressed();
      // Set static field: static public HMUI.InputFieldView/SelectionState Pressed
      static void _set_Pressed(HMUI::InputFieldView::SelectionState value);
      // static field const value: static public HMUI.InputFieldView/SelectionState Disabled
      static constexpr const int Disabled = 3;
      // Get static field: static public HMUI.InputFieldView/SelectionState Disabled
      static HMUI::InputFieldView::SelectionState _get_Disabled();
      // Set static field: static public HMUI.InputFieldView/SelectionState Disabled
      static void _set_Disabled(HMUI::InputFieldView::SelectionState value);
      // static field const value: static public HMUI.InputFieldView/SelectionState Selected
      static constexpr const int Selected = 4;
      // Get static field: static public HMUI.InputFieldView/SelectionState Selected
      static HMUI::InputFieldView::SelectionState _get_Selected();
      // Set static field: static public HMUI.InputFieldView/SelectionState Selected
      static void _set_Selected(HMUI::InputFieldView::SelectionState value);
    }; // HMUI.InputFieldView/SelectionState
    // private TMPro.TextMeshProUGUI _textView
    // Offset: 0xF0
    TMPro::TextMeshProUGUI* textView;
    // private UnityEngine.CanvasGroup _textViewCanvasGroup
    // Offset: 0xF8
    UnityEngine::CanvasGroup* textViewCanvasGroup;
    // private HMUI.ImageView _blinkingCaret
    // Offset: 0x100
    HMUI::ImageView* blinkingCaret;
    // private UnityEngine.GameObject _placeholderText
    // Offset: 0x108
    UnityEngine::GameObject* placeholderText;
    // private UnityEngine.UI.Button _clearSearchButton
    // Offset: 0x110
    UnityEngine::UI::Button* clearSearchButton;
    // private System.Boolean _useGlobalKeyboard
    // Offset: 0x118
    bool useGlobalKeyboard;
    // private UnityEngine.Vector3 _keyboardPositionOffset
    // Offset: 0x11C
    UnityEngine::Vector3 keyboardPositionOffset;
    // private System.Boolean _useUppercase
    // Offset: 0x128
    bool useUppercase;
    // private System.Int32 _textLengthLimit
    // Offset: 0x12C
    int textLengthLimit;
    // private System.Single _caretOffset
    // Offset: 0x130
    float caretOffset;
    // private System.Action`1<HMUI.InputFieldView/SelectionState> selectionStateDidChangeEvent
    // Offset: 0x138
    System::Action_1<HMUI::InputFieldView::SelectionState>* selectionStateDidChangeEvent;
    // private HMUI.InputFieldView/SelectionState _selectionState
    // Offset: 0x140
    HMUI::InputFieldView::SelectionState selectionState;
    // private System.String _text
    // Offset: 0x148
    ::Il2CppString* text;
    // private System.Boolean _hasKeyboardAssigned
    // Offset: 0x150
    bool hasKeyboardAssigned;
    // private HMUI.ButtonBinder _buttonBinder
    // Offset: 0x158
    HMUI::ButtonBinder* buttonBinder;
    // private HMUI.InputFieldView/InputFieldChanged _onValueChanged
    // Offset: 0x160
    HMUI::InputFieldView::InputFieldChanged* onValueChanged;
    // private readonly UnityEngine.YieldInstruction _blinkWaitYieldInstruction
    // Offset: 0x168
    UnityEngine::YieldInstruction* blinkWaitYieldInstruction;
    // static field const value: static private System.Single kBlinkingRate
    static constexpr const float kBlinkingRate = 0.4;
    // Get static field: static private System.Single kBlinkingRate
    static float _get_kBlinkingRate();
    // Set static field: static private System.Single kBlinkingRate
    static void _set_kBlinkingRate(float value);
    // public HMUI.InputFieldView/SelectionState get_selectionState()
    // Offset: 0x107945C
    HMUI::InputFieldView::SelectionState get_selectionState();
    // public UnityEngine.Vector3 get_keyboardPositionOffset()
    // Offset: 0x1079464
    UnityEngine::Vector3 get_keyboardPositionOffset();
    // public System.Void add_selectionStateDidChangeEvent(System.Action`1<HMUI.InputFieldView/SelectionState> value)
    // Offset: 0x1079474
    void add_selectionStateDidChangeEvent(System::Action_1<HMUI::InputFieldView::SelectionState>* value);
    // public System.Void remove_selectionStateDidChangeEvent(System.Action`1<HMUI.InputFieldView/SelectionState> value)
    // Offset: 0x107951C
    void remove_selectionStateDidChangeEvent(System::Action_1<HMUI::InputFieldView::SelectionState>* value);
    // public HMUI.InputFieldView/InputFieldChanged get_onValueChanged()
    // Offset: 0x10795C4
    HMUI::InputFieldView::InputFieldChanged* get_onValueChanged();
    // public System.Void set_onValueChanged(HMUI.InputFieldView/InputFieldChanged value)
    // Offset: 0x10795CC
    void set_onValueChanged(HMUI::InputFieldView::InputFieldChanged* value);
    // public System.Boolean get_useGlobalKeyboard()
    // Offset: 0x10795DC
    bool get_useGlobalKeyboard();
    // public System.String get_text()
    // Offset: 0x10795E4
    ::Il2CppString* get_text();
    // private System.Void set_text(System.String value)
    // Offset: 0x10795EC
    void set_text(::Il2CppString* value);
    // public System.Void ActivateKeyboard(HMUI.UIKeyboard keyboard)
    // Offset: 0x1079938
    void ActivateKeyboard(HMUI::UIKeyboard* keyboard);
    // public System.Void DeactivateKeyboard(HMUI.UIKeyboard keyboard)
    // Offset: 0x1079B60
    void DeactivateKeyboard(HMUI::UIKeyboard* keyboard);
    // public System.Void SetText(System.String value)
    // Offset: 0x1079D20
    void SetText(::Il2CppString* value);
    // public System.Void ClearInput()
    // Offset: 0x1079D44
    void ClearInput();
    // private System.Void KeyboardKeyPressed(System.Char letter)
    // Offset: 0x1079D9C
    void KeyboardKeyPressed(::Il2CppChar letter);
    // private System.Void KeyboardDeletePressed()
    // Offset: 0x1079EC8
    void KeyboardDeletePressed();
    // private System.Collections.IEnumerator BlinkingCaretCoroutine()
    // Offset: 0x1079AE4
    System::Collections::IEnumerator* BlinkingCaretCoroutine();
    // private System.Void UpdateCaretPosition()
    // Offset: 0x1079654
    void UpdateCaretPosition();
    // private System.Void UpdatePlaceholder()
    // Offset: 0x1079764
    void UpdatePlaceholder();
    // private System.Void UpdateClearButton()
    // Offset: 0x1079CE0
    void UpdateClearButton();
    // private System.Void <Awake>b__34_0()
    // Offset: 0x107A140
    void $Awake$b__34_0();
    // protected override System.Void Awake()
    // Offset: 0x10797A0
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::Awake()
    void Awake();
    // protected override System.Void OnDestroy()
    // Offset: 0x1079888
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDestroy()
    void OnDestroy();
    // protected override System.Void DoStateTransition(UnityEngine.UI.Selectable/SelectionState state, System.Boolean instant)
    // Offset: 0x107989C
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::DoStateTransition(UnityEngine.UI.Selectable/SelectionState state, System.Boolean instant)
    void DoStateTransition(UnityEngine::UI::Selectable::SelectionState state, bool instant);
    // public System.Void .ctor()
    // Offset: 0x1079FCC
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static InputFieldView* New_ctor();
  }; // HMUI.InputFieldView
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::InputFieldView*, "HMUI", "InputFieldView");
DEFINE_IL2CPP_ARG_TYPE(HMUI::InputFieldView::SelectionState, "HMUI", "InputFieldView/SelectionState");
#pragma pack(pop)
