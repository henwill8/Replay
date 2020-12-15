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
  // Forward declaring type: Vector3SO
  class Vector3SO;
  // Forward declaring type: FloatSO
  class FloatSO;
  // Forward declaring type: StepValuePicker
  class StepValuePicker;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: RoomAdjustSettingsViewController
  class RoomAdjustSettingsViewController : public HMUI::ViewController {
    public:
    // private Vector3SO _roomCenter
    // Offset: 0x70
    GlobalNamespace::Vector3SO* roomCenter;
    // private FloatSO _roomRotation
    // Offset: 0x78
    GlobalNamespace::FloatSO* roomRotation;
    // private StepValuePicker _xStepValuePicker
    // Offset: 0x80
    GlobalNamespace::StepValuePicker* xStepValuePicker;
    // private StepValuePicker _yStepValuePicker
    // Offset: 0x88
    GlobalNamespace::StepValuePicker* yStepValuePicker;
    // private StepValuePicker _zStepValuePicker
    // Offset: 0x90
    GlobalNamespace::StepValuePicker* zStepValuePicker;
    // private StepValuePicker _rotStepValuePicker
    // Offset: 0x98
    GlobalNamespace::StepValuePicker* rotStepValuePicker;
    // private UnityEngine.UI.Button _resetButton
    // Offset: 0xA0
    UnityEngine::UI::Button* resetButton;
    // static field const value: static private System.Single kHorizontalMoveStep
    static constexpr const float kHorizontalMoveStep = 0.1;
    // Get static field: static private System.Single kHorizontalMoveStep
    static float _get_kHorizontalMoveStep();
    // Set static field: static private System.Single kHorizontalMoveStep
    static void _set_kHorizontalMoveStep(float value);
    // static field const value: static private System.Single kVerticalMoveStep
    static constexpr const float kVerticalMoveStep = 0.05;
    // Get static field: static private System.Single kVerticalMoveStep
    static float _get_kVerticalMoveStep();
    // Set static field: static private System.Single kVerticalMoveStep
    static void _set_kVerticalMoveStep(float value);
    // static field const value: static private System.Single kRotationStep
    static constexpr const float kRotationStep = 5;
    // Get static field: static private System.Single kRotationStep
    static float _get_kRotationStep();
    // Set static field: static private System.Single kRotationStep
    static void _set_kRotationStep(float value);
    // private System.Void Move(UnityEngine.Vector3 move)
    // Offset: 0xF362B0
    void Move(UnityEngine::Vector3 move);
    // private System.Void Rotate(System.Single rotation)
    // Offset: 0xF36380
    void Rotate(float rotation);
    // private System.Void ResetRoom()
    // Offset: 0xF363F4
    void ResetRoom();
    // private System.Void RefreshTexts()
    // Offset: 0xF36134
    void RefreshTexts();
    // private System.Void <DidActivate>b__10_0()
    // Offset: 0xF364B0
    void $DidActivate$b__10_0();
    // private System.Void <DidActivate>b__10_1()
    // Offset: 0xF36508
    void $DidActivate$b__10_1();
    // private System.Void <DidActivate>b__10_2()
    // Offset: 0xF36560
    void $DidActivate$b__10_2();
    // private System.Void <DidActivate>b__10_3()
    // Offset: 0xF365B8
    void $DidActivate$b__10_3();
    // private System.Void <DidActivate>b__10_4()
    // Offset: 0xF36610
    void $DidActivate$b__10_4();
    // private System.Void <DidActivate>b__10_5()
    // Offset: 0xF36668
    void $DidActivate$b__10_5();
    // private System.Void <DidActivate>b__10_6()
    // Offset: 0xF366C0
    void $DidActivate$b__10_6();
    // private System.Void <DidActivate>b__10_7()
    // Offset: 0xF366C8
    void $DidActivate$b__10_7();
    // private System.Void <DidActivate>b__10_8()
    // Offset: 0xF366D0
    void $DidActivate$b__10_8();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0xF35EB0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0xF364A8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static RoomAdjustSettingsViewController* New_ctor();
  }; // RoomAdjustSettingsViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RoomAdjustSettingsViewController*, "", "RoomAdjustSettingsViewController");
#pragma pack(pop)