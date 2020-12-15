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
  // Forward declaring type: Toggle
  class Toggle;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SwitchSettingsController
  class SwitchSettingsController : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Toggle _toggle
    // Offset: 0x18
    UnityEngine::UI::Toggle* toggle;
    // private System.Boolean _on
    // Offset: 0x20
    bool on;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Boolean GetInitValue()
    // Offset: 0xFFFFFFFF
    bool GetInitValue();
    // protected System.Void ApplyValue(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void ApplyValue(bool value);
    // protected System.Void Awake()
    // Offset: 0xF4982C
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0xF498D0
    void OnDestroy();
    // protected System.Void OnEnable()
    // Offset: 0xF49974
    void OnEnable();
    // private System.Void RefreshUI()
    // Offset: 0xF499BC
    void RefreshUI();
    // private System.Void HandleToggleValueDidChange(System.Boolean value)
    // Offset: 0xF499E0
    void HandleToggleValueDidChange(bool value);
    // protected System.Void .ctor()
    // Offset: 0xF499F0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SwitchSettingsController* New_ctor();
  }; // SwitchSettingsController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SwitchSettingsController*, "", "SwitchSettingsController");
#pragma pack(pop)