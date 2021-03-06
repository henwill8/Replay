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
  // Forward declaring type: UIKeyboard
  class UIKeyboard;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x51
  #pragma pack(push, 1)
  // Autogenerated type: VRTextEntryController
  // [] Offset: FFFFFFFF
  class VRTextEntryController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23
    class $BlinkCursor$d__23;
    // private UIKeyboard _uiKeyboard
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::UIKeyboard* uiKeyboard;
    // Field size check
    static_assert(sizeof(GlobalNamespace::UIKeyboard*) == 0x8);
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x20
    TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _cursorText
    // Size: 0x8
    // Offset: 0x28
    TMPro::TextMeshProUGUI* cursorText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private System.Int32 _maxLength
    // Size: 0x4
    // Offset: 0x30
    int maxLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _allowBlank
    // Size: 0x1
    // Offset: 0x34
    bool allowBlank;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: allowBlank and: textDidChangeEvent
    char __padding4[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD3F620
    // private System.Action`1<System.String> textDidChangeEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_1<::Il2CppString*>* textDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppString*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3F630
    // private System.Action okButtonWasPressedEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action* okButtonWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3F640
    // private System.Action cancelButtonWasPressedEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action* cancelButtonWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Boolean _stopBlinkingCursor
    // Size: 0x1
    // Offset: 0x50
    bool stopBlinkingCursor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: VRTextEntryController
    VRTextEntryController(GlobalNamespace::UIKeyboard* uiKeyboard_ = {}, TMPro::TextMeshProUGUI* text_ = {}, TMPro::TextMeshProUGUI* cursorText_ = {}, int maxLength_ = {}, bool allowBlank_ = {}, System::Action_1<::Il2CppString*>* textDidChangeEvent_ = {}, System::Action* okButtonWasPressedEvent_ = {}, System::Action* cancelButtonWasPressedEvent_ = {}, bool stopBlinkingCursor_ = {}) noexcept : uiKeyboard{uiKeyboard_}, text{text_}, cursorText{cursorText_}, maxLength{maxLength_}, allowBlank{allowBlank_}, textDidChangeEvent{textDidChangeEvent_}, okButtonWasPressedEvent{okButtonWasPressedEvent_}, cancelButtonWasPressedEvent{cancelButtonWasPressedEvent_}, stopBlinkingCursor{stopBlinkingCursor_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_textDidChangeEvent(System.Action`1<System.String> value)
    // Offset: 0x171F03C
    void add_textDidChangeEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_textDidChangeEvent(System.Action`1<System.String> value)
    // Offset: 0x171F0E0
    void remove_textDidChangeEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void add_okButtonWasPressedEvent(System.Action value)
    // Offset: 0x171F184
    void add_okButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_okButtonWasPressedEvent(System.Action value)
    // Offset: 0x171F228
    void remove_okButtonWasPressedEvent(System::Action* value);
    // public System.Void add_cancelButtonWasPressedEvent(System.Action value)
    // Offset: 0x171F2CC
    void add_cancelButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_cancelButtonWasPressedEvent(System.Action value)
    // Offset: 0x171F370
    void remove_cancelButtonWasPressedEvent(System::Action* value);
    // public System.Void set_hideCancelButton(System.Boolean value)
    // Offset: 0x171F414
    void set_hideCancelButton(bool value);
    // public System.String get_text()
    // Offset: 0x171F434
    ::Il2CppString* get_text();
    // public System.Void set_text(System.String value)
    // Offset: 0x171F450
    void set_text(::Il2CppString* value);
    // protected System.Void Awake()
    // Offset: 0x171F518
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x171F67C
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x171F728
    void OnDisable();
    // private System.Collections.IEnumerator BlinkCursor()
    // Offset: 0x171F6AC
    System::Collections::IEnumerator* BlinkCursor();
    // private System.Void HandleUIKeyboardTextKeyWasPressed(System.Char key)
    // Offset: 0x171F760
    void HandleUIKeyboardTextKeyWasPressed(::Il2CppChar key);
    // private System.Void HandleUIKeyboardDeleteButtonWasPressed()
    // Offset: 0x171F840
    void HandleUIKeyboardDeleteButtonWasPressed();
    // private System.Void <Awake>b__20_0()
    // Offset: 0x171F928
    void $Awake$b__20_0();
    // private System.Void <Awake>b__20_1()
    // Offset: 0x171F93C
    void $Awake$b__20_1();
    // public System.Void .ctor()
    // Offset: 0x171F918
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRTextEntryController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRTextEntryController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRTextEntryController*, creationType>()));
    }
  }; // VRTextEntryController
  #pragma pack(pop)
  static check_size<sizeof(VRTextEntryController), 80 + sizeof(bool)> __GlobalNamespace_VRTextEntryControllerSizeCheck;
  static_assert(sizeof(VRTextEntryController) == 0x51);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRTextEntryController*, "", "VRTextEntryController");
