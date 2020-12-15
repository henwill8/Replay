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
  // Forward declaring type: LoadingControl
  class LoadingControl;
  // Forward declaring type: KawaseBlurRendererSO
  class KawaseBlurRendererSO;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
  // Forward declaring type: EventBinder
  class EventBinder;
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ImageView
  class ImageView;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LevelPackDetailViewController
  class LevelPackDetailViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::LevelPackDetailViewController::ContentType
    struct ContentType;
    // Nested type: GlobalNamespace::LevelPackDetailViewController::$$c__DisplayClass14_0
    class $$c__DisplayClass14_0;
    // Nested type: GlobalNamespace::LevelPackDetailViewController::$RefreshAvailabilityAsync$d__17
    struct $RefreshAvailabilityAsync$d__17;
    // Nested type: GlobalNamespace::LevelPackDetailViewController::$OpenLevelPackProductStoreAsync$d__18
    struct $OpenLevelPackProductStoreAsync$d__18;
    // private UnityEngine.GameObject _detailWrapper
    // Offset: 0x70
    UnityEngine::GameObject* detailWrapper;
    // private HMUI.ImageView _packImage
    // Offset: 0x78
    HMUI::ImageView* packImage;
    // private UnityEngine.UI.Button _buyButton
    // Offset: 0x80
    UnityEngine::UI::Button* buyButton;
    // private UnityEngine.GameObject _buyContainer
    // Offset: 0x88
    UnityEngine::GameObject* buyContainer;
    // private LoadingControl _loadingControl
    // Offset: 0x90
    GlobalNamespace::LoadingControl* loadingControl;
    // private UnityEngine.GameObject _requireInternetContainer
    // Offset: 0x98
    UnityEngine::GameObject* requireInternetContainer;
    // private KawaseBlurRendererSO _kawaseBlurRenderer
    // Offset: 0xA0
    GlobalNamespace::KawaseBlurRendererSO* kawaseBlurRenderer;
    // private AdditionalContentModel _additionalContentModel
    // Offset: 0xA8
    GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // private EventBinder _eventBinder
    // Offset: 0xB0
    GlobalNamespace::EventBinder* eventBinder;
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Offset: 0xB8
    System::Threading::CancellationTokenSource* cancellationTokenSource;
    // private IBeatmapLevelPack _pack
    // Offset: 0xC0
    GlobalNamespace::IBeatmapLevelPack* pack;
    // private UnityEngine.Sprite _blurredPackArtwork
    // Offset: 0xC8
    UnityEngine::Sprite* blurredPackArtwork;
    // public System.Void SetData(IBeatmapLevelPack pack)
    // Offset: 0x1AC1FF0
    void SetData(GlobalNamespace::IBeatmapLevelPack* pack);
    // private System.Void RefreshAvailabilityAsync()
    // Offset: 0x1AC22C8
    void RefreshAvailabilityAsync();
    // private System.Void OpenLevelPackProductStoreAsync()
    // Offset: 0x1AC272C
    void OpenLevelPackProductStoreAsync();
    // private System.Void ShowContent(LevelPackDetailViewController/ContentType contentType, System.String errorText)
    // Offset: 0x1AC2808
    void ShowContent(GlobalNamespace::LevelPackDetailViewController::ContentType contentType, ::Il2CppString* errorText);
    // private System.Void HandleAdditionalContentModelDidInvalidateData()
    // Offset: 0x1AC2B90
    void HandleAdditionalContentModelDidInvalidateData();
    // private System.Void <DidActivate>b__14_0()
    // Offset: 0x1AC2C08
    void $DidActivate$b__14_0();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1AC23A4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x1AC2564
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected override System.Void OnDestroy()
    // Offset: 0x1AC2610
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x1AC2B94
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LevelPackDetailViewController* New_ctor();
  }; // LevelPackDetailViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelPackDetailViewController*, "", "LevelPackDetailViewController");
#pragma pack(pop)