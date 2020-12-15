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
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: IPlatformUserModel
  class IPlatformUserModel;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TextPageScrollView
  class TextPageScrollView;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: ServerManager
  class ServerManager;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OnlineServicesInfoViewController
  class OnlineServicesInfoViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::OnlineServicesInfoViewController::$GetServerStatus$d__8
    struct $GetServerStatus$d__8;
    // private HMUI.TextPageScrollView _textPageScrollView
    // Offset: 0x70
    HMUI::TextPageScrollView* textPageScrollView;
    // private BeatmapLevelSO _testBeatmapLevel
    // Offset: 0x78
    GlobalNamespace::BeatmapLevelSO* testBeatmapLevel;
    // private BeatmapCharacteristicSO _testBeatmapCharacteristic
    // Offset: 0x80
    GlobalNamespace::BeatmapCharacteristicSO* testBeatmapCharacteristic;
    // private UnityEngine.UI.Button _refreshButton
    // Offset: 0x88
    UnityEngine::UI::Button* refreshButton;
    // private readonly OnlineServices.ServerManager _serverManager
    // Offset: 0x90
    OnlineServices::ServerManager* serverManager;
    // private readonly IPlatformUserModel _platformUserModel
    // Offset: 0x98
    GlobalNamespace::IPlatformUserModel* platformUserModel;
    // private System.Text.StringBuilder _sb
    // Offset: 0xA0
    System::Text::StringBuilder* sb;
    // private System.Void GetServerStatus()
    // Offset: 0xF001D4
    void GetServerStatus();
    // private System.Void AppendLine(System.String line)
    // Offset: 0xF002A4
    void AppendLine(::Il2CppString* line);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0xF00120
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0xF002FC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OnlineServicesInfoViewController* New_ctor();
  }; // OnlineServicesInfoViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OnlineServicesInfoViewController*, "", "OnlineServicesInfoViewController");
#pragma pack(pop)