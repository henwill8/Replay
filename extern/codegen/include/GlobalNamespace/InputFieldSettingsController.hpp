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
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: InputFieldView
  class InputFieldView;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StringSO
  class StringSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: InputFieldSettingsController
  class InputFieldSettingsController : public UnityEngine::MonoBehaviour {
    public:
    // private HMUI.InputFieldView _inputFieldView
    // Offset: 0x18
    HMUI::InputFieldView* inputFieldView;
    // protected StringSO _settingsValue
    // Offset: 0x20
    GlobalNamespace::StringSO* settingsValue;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0xF1B2F8
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0xF1B398
    void OnDestroy();
    // protected System.Void OnEnable()
    // Offset: 0xF1B438
    void OnEnable();
    // protected System.Void HandleInputFieldDidChange(HMUI.InputFieldView inputFieldView)
    // Offset: 0xF1B494
    void HandleInputFieldDidChange(HMUI::InputFieldView* inputFieldView);
    // public System.Void .ctor()
    // Offset: 0xF1B500
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static InputFieldSettingsController* New_ctor();
  }; // InputFieldSettingsController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::InputFieldSettingsController*, "", "InputFieldSettingsController");
#pragma pack(pop)