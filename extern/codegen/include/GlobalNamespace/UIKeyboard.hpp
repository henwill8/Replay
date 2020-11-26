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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TextMeshProButton
  class TextMeshProButton;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: UIKeyboard
  class UIKeyboard : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::UIKeyboard::$$c__DisplayClass21_0
    class $$c__DisplayClass21_0;
    // private TextMeshProButton _keyButtonPrefab
    // Offset: 0x18
    GlobalNamespace::TextMeshProButton* keyButtonPrefab;
    // private System.Action`1<System.Char> textKeyWasPressedEvent
    // Offset: 0x20
    System::Action_1<::Il2CppChar>* textKeyWasPressedEvent;
    // private System.Action deleteButtonWasPressedEvent
    // Offset: 0x28
    System::Action* deleteButtonWasPressedEvent;
    // private System.Action okButtonWasPressedEvent
    // Offset: 0x30
    System::Action* okButtonWasPressedEvent;
    // private System.Action cancelButtonWasPressedEvent
    // Offset: 0x38
    System::Action* cancelButtonWasPressedEvent;
    // private UnityEngine.UI.Button _okButton
    // Offset: 0x40
    UnityEngine::UI::Button* okButton;
    // private UnityEngine.UI.Button _cancelButton
    // Offset: 0x48
    UnityEngine::UI::Button* cancelButton;
    // private System.Boolean _okButtonInteractivity
    // Offset: 0x50
    bool okButtonInteractivity;
    // private System.Boolean _hideCancelButton
    // Offset: 0x51
    bool hideCancelButton;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_textKeyWasPressedEvent(System.Action`1<System.Char> value)
    // Offset: 0xFF57A8
    void add_textKeyWasPressedEvent(System::Action_1<::Il2CppChar>* value);
    // public System.Void remove_textKeyWasPressedEvent(System.Action`1<System.Char> value)
    // Offset: 0xFF584C
    void remove_textKeyWasPressedEvent(System::Action_1<::Il2CppChar>* value);
    // public System.Void add_deleteButtonWasPressedEvent(System.Action value)
    // Offset: 0xFF58F0
    void add_deleteButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_deleteButtonWasPressedEvent(System.Action value)
    // Offset: 0xFF5994
    void remove_deleteButtonWasPressedEvent(System::Action* value);
    // public System.Void add_okButtonWasPressedEvent(System.Action value)
    // Offset: 0xFF5A38
    void add_okButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_okButtonWasPressedEvent(System.Action value)
    // Offset: 0xFF5ADC
    void remove_okButtonWasPressedEvent(System::Action* value);
    // public System.Void add_cancelButtonWasPressedEvent(System.Action value)
    // Offset: 0xFF5B80
    void add_cancelButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_cancelButtonWasPressedEvent(System.Action value)
    // Offset: 0xFF5C24
    void remove_cancelButtonWasPressedEvent(System::Action* value);
    // public System.Void set_enableOkButtonInteractivity(System.Boolean value)
    // Offset: 0xFF5CC8
    void set_enableOkButtonInteractivity(bool value);
    // public System.Void set_hideCancelButton(System.Boolean value)
    // Offset: 0xFF5D78
    void set_hideCancelButton(bool value);
    // protected System.Void Awake()
    // Offset: 0xFF5E38
    void Awake();
    // private System.Void <Awake>b__21_0()
    // Offset: 0xFF6B30
    void $Awake$b__21_0();
    // private System.Void <Awake>b__21_1()
    // Offset: 0xFF6B44
    void $Awake$b__21_1();
    // private System.Void <Awake>b__21_2()
    // Offset: 0xFF6B60
    void $Awake$b__21_2();
    // private System.Void <Awake>b__21_3()
    // Offset: 0xFF6B7C
    void $Awake$b__21_3();
    // public System.Void .ctor()
    // Offset: 0xFF6B28
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static UIKeyboard* New_ctor();
  }; // UIKeyboard
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UIKeyboard*, "", "UIKeyboard");
#pragma pack(pop)
