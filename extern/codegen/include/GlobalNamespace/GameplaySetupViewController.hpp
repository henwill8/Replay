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
  // Forward declaring type: PlayerSettingsPanelController
  class PlayerSettingsPanelController;
  // Forward declaring type: GameplayModifiersPanelController
  class GameplayModifiersPanelController;
  // Forward declaring type: EnvironmentOverrideSettingsPanelController
  class EnvironmentOverrideSettingsPanelController;
  // Forward declaring type: ColorsOverrideSettingsPanelController
  class ColorsOverrideSettingsPanelController;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: OverrideEnvironmentSettings
  class OverrideEnvironmentSettings;
  // Forward declaring type: ColorSchemesSettings
  class ColorSchemesSettings;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TextSegmentedControl
  class TextSegmentedControl;
  // Forward declaring type: SegmentedControl
  class SegmentedControl;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameplaySetupViewController
  class GameplaySetupViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::GameplaySetupViewController::Panel
    class Panel;
    // private HMUI.TextSegmentedControl _selectionSegmentedControl
    // Offset: 0x70
    HMUI::TextSegmentedControl* selectionSegmentedControl;
    // private PlayerSettingsPanelController _playerSettingsPanelController
    // Offset: 0x78
    GlobalNamespace::PlayerSettingsPanelController* playerSettingsPanelController;
    // private GameplayModifiersPanelController _gameplayModifiersPanelController
    // Offset: 0x80
    GlobalNamespace::GameplayModifiersPanelController* gameplayModifiersPanelController;
    // private EnvironmentOverrideSettingsPanelController _environmentOverrideSettingsPanelController
    // Offset: 0x88
    GlobalNamespace::EnvironmentOverrideSettingsPanelController* environmentOverrideSettingsPanelController;
    // private ColorsOverrideSettingsPanelController _colorsOverrideSettingsPanelController
    // Offset: 0x90
    GlobalNamespace::ColorsOverrideSettingsPanelController* colorsOverrideSettingsPanelController;
    // private readonly PlayerDataModel _playerDataModel
    // Offset: 0x98
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // private System.Action didChangeGameplayModifiersEvent
    // Offset: 0xA0
    System::Action* didChangeGameplayModifiersEvent;
    // private System.Collections.Generic.List`1<GameplaySetupViewController/Panel> _panels
    // Offset: 0xA8
    System::Collections::Generic::List_1<GlobalNamespace::GameplaySetupViewController::Panel*>* panels;
    // private System.Int32 _activePanelIdx
    // Offset: 0xB0
    int activePanelIdx;
    // private System.Boolean _showModifiers
    // Offset: 0xB4
    bool showModifiers;
    // private System.Boolean _showEnvironmentOverrideSettings
    // Offset: 0xB5
    bool showEnvironmentOverrideSettings;
    // private System.Boolean _showColorSchemesSettings
    // Offset: 0xB6
    bool showColorSchemesSettings;
    // private System.Boolean _shouldRefreshContent
    // Offset: 0xB7
    bool shouldRefreshContent;
    // private System.Boolean _isInitialized
    // Offset: 0xB8
    bool isInitialized;
    // public System.Void add_didChangeGameplayModifiersEvent(System.Action value)
    // Offset: 0xF0FFF8
    void add_didChangeGameplayModifiersEvent(System::Action* value);
    // public System.Void remove_didChangeGameplayModifiersEvent(System.Action value)
    // Offset: 0xF1009C
    void remove_didChangeGameplayModifiersEvent(System::Action* value);
    // public PlayerSpecificSettings get_playerSettings()
    // Offset: 0xF10140
    GlobalNamespace::PlayerSpecificSettings* get_playerSettings();
    // public GameplayModifiers get_gameplayModifiers()
    // Offset: 0xF1015C
    GlobalNamespace::GameplayModifiers* get_gameplayModifiers();
    // public OverrideEnvironmentSettings get_environmentOverrideSettings()
    // Offset: 0xF10178
    GlobalNamespace::OverrideEnvironmentSettings* get_environmentOverrideSettings();
    // public ColorSchemesSettings get_colorSchemesSettings()
    // Offset: 0xF101A0
    GlobalNamespace::ColorSchemesSettings* get_colorSchemesSettings();
    // public System.Void Setup(System.Boolean showModifiers, System.Boolean showEnvironmentOverrideSettings, System.Boolean showColorSchemesSettings, System.Boolean multiplayer)
    // Offset: 0xF101C8
    void Setup(bool showModifiers, bool showEnvironmentOverrideSettings, bool showColorSchemesSettings, bool multiplayer);
    // private System.Void Init()
    // Offset: 0xF10260
    void Init();
    // protected System.Void OnDisable()
    // Offset: 0xF10908
    void OnDisable();
    // private System.Void HandleSelectionSegmentedControlDidSelectCell(HMUI.SegmentedControl segmentedControl, System.Int32 cellIdx)
    // Offset: 0xF109F0
    void HandleSelectionSegmentedControlDidSelectCell(HMUI::SegmentedControl* segmentedControl, int cellIdx);
    // private System.Void HandlePlayerSettingsPanelControllerDidChangePlayerSettings()
    // Offset: 0xF109F8
    void HandlePlayerSettingsPanelControllerDidChangePlayerSettings();
    // private System.Void HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers()
    // Offset: 0xF10A40
    void HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers();
    // private System.Void SetActivePanel(System.Int32 panelIdx)
    // Offset: 0xF10850
    void SetActivePanel(int panelIdx);
    // private System.Void RefreshContent()
    // Offset: 0xF10304
    void RefreshContent();
    // private System.Void RefreshActivePanel()
    // Offset: 0xF10A9C
    void RefreshActivePanel();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0xF10700
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0xF10BEC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static GameplaySetupViewController* New_ctor();
  }; // GameplaySetupViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplaySetupViewController*, "", "GameplaySetupViewController");
#pragma pack(pop)
