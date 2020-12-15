// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRTextEntryController
  class VRTextEntryController;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: EnterTextViewController
  class EnterTextViewController : public HMUI::ViewController {
    public:
    // private VRTextEntryController _textEntryController
    // Offset: 0x70
    GlobalNamespace::VRTextEntryController* textEntryController;
    // private TMPro.TextMeshProUGUI _titleText
    // Offset: 0x78
    TMPro::TextMeshProUGUI* titleText;
    // private UnityEngine.UI.Button _okButton
    // Offset: 0x80
    UnityEngine::UI::Button* okButton;
    // private System.Action`2<EnterTextViewController,System.String> didFinishEvent
    // Offset: 0x88
    System::Action_2<GlobalNamespace::EnterTextViewController*, ::Il2CppString*>* didFinishEvent;
    // public System.Void add_didFinishEvent(System.Action`2<EnterTextViewController,System.String> value)
    // Offset: 0x1A605C8
    void add_didFinishEvent(System::Action_2<GlobalNamespace::EnterTextViewController*, ::Il2CppString*>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<EnterTextViewController,System.String> value)
    // Offset: 0x1A6066C
    void remove_didFinishEvent(System::Action_2<GlobalNamespace::EnterTextViewController*, ::Il2CppString*>* value);
    // public System.Void Init(System.String titleText)
    // Offset: 0x1A60710
    void Init(::Il2CppString* titleText);
    // public System.Void OkButtonPressed()
    // Offset: 0x1A60808
    void OkButtonPressed();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1A6072C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0x1A608A8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static EnterTextViewController* New_ctor();
  }; // EnterTextViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnterTextViewController*, "", "EnterTextViewController");
#pragma pack(pop)