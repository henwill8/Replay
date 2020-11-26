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
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ViewController
  class ViewController;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SettingsFlowCoordinator
  class SettingsFlowCoordinator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ServerSettingsController
  class ServerSettingsController : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Button _serverSettingsButton
    // Offset: 0x18
    UnityEngine::UI::Button* serverSettingsButton;
    // private HMUI.ViewController _serverSettingsViewController
    // Offset: 0x20
    HMUI::ViewController* serverSettingsViewController;
    // private System.Int32 _numberOfClicksRequired
    // Offset: 0x28
    int numberOfClicksRequired;
    // private readonly SettingsFlowCoordinator _settingsFlowCoordinator
    // Offset: 0x30
    GlobalNamespace::SettingsFlowCoordinator* settingsFlowCoordinator;
    // private System.Int32 _currentNumberOfClicks
    // Offset: 0x38
    int currentNumberOfClicks;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnEnable()
    // Offset: 0xFCBE88
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0xFCBF1C
    void OnDisable();
    // private System.Void SecretServerSettingsButtonPressed()
    // Offset: 0xFCBFB0
    void SecretServerSettingsButtonPressed();
    // public System.Void .ctor()
    // Offset: 0xFCBFF4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ServerSettingsController* New_ctor();
  }; // ServerSettingsController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ServerSettingsController*, "", "ServerSettingsController");
#pragma pack(pop)
