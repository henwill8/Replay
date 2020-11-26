// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.ToggleGroup
  class ToggleGroup : public UnityEngine::EventSystems::UIBehaviour {
    public:
    // Nested type: UnityEngine::UI::ToggleGroup::$$c
    class $$c;
    // private System.Boolean m_AllowSwitchOff
    // Offset: 0x18
    bool m_AllowSwitchOff;
    // protected System.Collections.Generic.List`1<UnityEngine.UI.Toggle> m_Toggles
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::UI::Toggle*>* m_Toggles;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_allowSwitchOff()
    // Offset: 0x19BD948
    bool get_allowSwitchOff();
    // public System.Void set_allowSwitchOff(System.Boolean value)
    // Offset: 0x19BD950
    void set_allowSwitchOff(bool value);
    // private System.Void ValidateToggleIsInGroup(UnityEngine.UI.Toggle toggle)
    // Offset: 0x19BDA00
    void ValidateToggleIsInGroup(UnityEngine::UI::Toggle* toggle);
    // public System.Void NotifyToggleOn(UnityEngine.UI.Toggle toggle, System.Boolean sendCallback)
    // Offset: 0x19BD62C
    void NotifyToggleOn(UnityEngine::UI::Toggle* toggle, bool sendCallback);
    // public System.Void UnregisterToggle(UnityEngine.UI.Toggle toggle)
    // Offset: 0x19BD4FC
    void UnregisterToggle(UnityEngine::UI::Toggle* toggle);
    // public System.Void RegisterToggle(UnityEngine.UI.Toggle toggle)
    // Offset: 0x19BD594
    void RegisterToggle(UnityEngine::UI::Toggle* toggle);
    // public System.Void EnsureValidState()
    // Offset: 0x19BD16C
    void EnsureValidState();
    // public System.Boolean AnyTogglesOn()
    // Offset: 0x19BD778
    bool AnyTogglesOn();
    // public System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle> ActiveToggles()
    // Offset: 0x19BDB54
    System::Collections::Generic::IEnumerable_1<UnityEngine::UI::Toggle*>* ActiveToggles();
    // public System.Void SetAllTogglesOff(System.Boolean sendCallback)
    // Offset: 0x19BDC4C
    void SetAllTogglesOff(bool sendCallback);
    // protected System.Void .ctor()
    // Offset: 0x19BD95C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ToggleGroup* New_ctor();
    // protected override System.Void Start()
    // Offset: 0x19BD9D8
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Start()
    void Start();
  }; // UnityEngine.UI.ToggleGroup
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ToggleGroup*, "UnityEngine.UI", "ToggleGroup");
#pragma pack(pop)
