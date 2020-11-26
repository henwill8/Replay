// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.ToggleBinder
  class ToggleBinder : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.List`1<System.Tuple`2<UnityEngine.UI.Toggle,UnityEngine.Events.UnityAction`1<System.Boolean>>> _bindings
    // Offset: 0x10
    System::Collections::Generic::List_1<System::Tuple_2<UnityEngine::UI::Toggle*, UnityEngine::Events::UnityAction_1<bool>*>*>* bindings;
    // private System.Boolean _enabled
    // Offset: 0x18
    bool enabled;
    // public System.Void .ctor(System.Collections.Generic.List`1<System.Tuple`2<UnityEngine.UI.Toggle,System.Action`1<System.Boolean>>> bindingData)
    // Offset: 0x108C96C
    static ToggleBinder* New_ctor(System::Collections::Generic::List_1<System::Tuple_2<UnityEngine::UI::Toggle*, System::Action_1<bool>*>*>* bindingData);
    // private System.Void Init()
    // Offset: 0x108C8FC
    void Init();
    // public System.Void AddBindings(System.Collections.Generic.List`1<System.Tuple`2<UnityEngine.UI.Toggle,System.Action`1<System.Boolean>>> bindingData)
    // Offset: 0x108C9AC
    void AddBindings(System::Collections::Generic::List_1<System::Tuple_2<UnityEngine::UI::Toggle*, System::Action_1<bool>*>*>* bindingData);
    // public System.Void AddBinding(UnityEngine.UI.Toggle toggle, System.Action`1<System.Boolean> action)
    // Offset: 0x108CAB4
    void AddBinding(UnityEngine::UI::Toggle* toggle, System::Action_1<bool>* action);
    // public System.Void ClearBindings()
    // Offset: 0x108CB74
    void ClearBindings();
    // public System.Void Disable()
    // Offset: 0x108CD0C
    void Disable();
    // public System.Void Enable()
    // Offset: 0x108CE94
    void Enable();
    // public System.Void .ctor()
    // Offset: 0x108C8CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ToggleBinder* New_ctor();
  }; // HMUI.ToggleBinder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::ToggleBinder*, "HMUI", "ToggleBinder");
#pragma pack(pop)
