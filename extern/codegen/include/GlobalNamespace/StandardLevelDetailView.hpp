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
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelBar
  class LevelBar;
  // Forward declaring type: LevelParamsPanel
  class LevelParamsPanel;
  // Forward declaring type: BeatmapDifficultySegmentedControlController
  class BeatmapDifficultySegmentedControlController;
  // Forward declaring type: BeatmapCharacteristicSegmentedControlController
  class BeatmapCharacteristicSegmentedControlController;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
  // Forward declaring type: PlayerData
  class PlayerData;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: StandardLevelDetailView
  class StandardLevelDetailView : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Button _actionButton
    // Offset: 0x18
    UnityEngine::UI::Button* actionButton;
    // private TMPro.TextMeshProUGUI _actionButtonText
    // Offset: 0x20
    TMPro::TextMeshProUGUI* actionButtonText;
    // private UnityEngine.UI.Button _practiceButton
    // Offset: 0x28
    UnityEngine::UI::Button* practiceButton;
    // private LevelBar _levelBar
    // Offset: 0x30
    GlobalNamespace::LevelBar* levelBar;
    // private LevelParamsPanel _levelParamsPanel
    // Offset: 0x38
    GlobalNamespace::LevelParamsPanel* levelParamsPanel;
    // private BeatmapDifficultySegmentedControlController _beatmapDifficultySegmentedControlController
    // Offset: 0x40
    GlobalNamespace::BeatmapDifficultySegmentedControlController* beatmapDifficultySegmentedControlController;
    // private BeatmapCharacteristicSegmentedControlController _beatmapCharacteristicSegmentedControlController
    // Offset: 0x48
    GlobalNamespace::BeatmapCharacteristicSegmentedControlController* beatmapCharacteristicSegmentedControlController;
    // private UnityEngine.UI.Toggle _favoriteToggle
    // Offset: 0x50
    UnityEngine::UI::Toggle* favoriteToggle;
    // private System.Action`2<StandardLevelDetailView,IDifficultyBeatmap> didChangeDifficultyBeatmapEvent
    // Offset: 0x58
    System::Action_2<GlobalNamespace::StandardLevelDetailView*, GlobalNamespace::IDifficultyBeatmap*>* didChangeDifficultyBeatmapEvent;
    // private System.Action`2<StandardLevelDetailView,UnityEngine.UI.Toggle> didFavoriteToggleChangeEvent
    // Offset: 0x60
    System::Action_2<GlobalNamespace::StandardLevelDetailView*, UnityEngine::UI::Toggle*>* didFavoriteToggleChangeEvent;
    // private System.Boolean _showPlayerStats
    // Offset: 0x68
    bool showPlayerStats;
    // private IBeatmapLevel _level
    // Offset: 0x70
    GlobalNamespace::IBeatmapLevel* level;
    // private PlayerData _playerData
    // Offset: 0x78
    GlobalNamespace::PlayerData* playerData;
    // private IDifficultyBeatmap _selectedDifficultyBeatmap
    // Offset: 0x80
    GlobalNamespace::IDifficultyBeatmap* selectedDifficultyBeatmap;
    // private HMUI.ToggleBinder _toggleBinder
    // Offset: 0x88
    HMUI::ToggleBinder* toggleBinder;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didChangeDifficultyBeatmapEvent(System.Action`2<StandardLevelDetailView,IDifficultyBeatmap> value)
    // Offset: 0xF3E5CC
    void add_didChangeDifficultyBeatmapEvent(System::Action_2<GlobalNamespace::StandardLevelDetailView*, GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void remove_didChangeDifficultyBeatmapEvent(System.Action`2<StandardLevelDetailView,IDifficultyBeatmap> value)
    // Offset: 0xF3E670
    void remove_didChangeDifficultyBeatmapEvent(System::Action_2<GlobalNamespace::StandardLevelDetailView*, GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void add_didFavoriteToggleChangeEvent(System.Action`2<StandardLevelDetailView,UnityEngine.UI.Toggle> value)
    // Offset: 0xF3E714
    void add_didFavoriteToggleChangeEvent(System::Action_2<GlobalNamespace::StandardLevelDetailView*, UnityEngine::UI::Toggle*>* value);
    // public System.Void remove_didFavoriteToggleChangeEvent(System.Action`2<StandardLevelDetailView,UnityEngine.UI.Toggle> value)
    // Offset: 0xF3E7B8
    void remove_didFavoriteToggleChangeEvent(System::Action_2<GlobalNamespace::StandardLevelDetailView*, UnityEngine::UI::Toggle*>* value);
    // public IDifficultyBeatmap get_selectedDifficultyBeatmap()
    // Offset: 0xF3E85C
    GlobalNamespace::IDifficultyBeatmap* get_selectedDifficultyBeatmap();
    // public UnityEngine.UI.Button get_actionButton()
    // Offset: 0xF3E864
    UnityEngine::UI::Button* get_actionButton();
    // public System.Void set_actionButtonText(System.String value)
    // Offset: 0xF3E86C
    void set_actionButtonText(::Il2CppString* value);
    // public UnityEngine.UI.Button get_practiceButton()
    // Offset: 0xF3E888
    UnityEngine::UI::Button* get_practiceButton();
    // public System.Void set_hidePracticeButton(System.Boolean value)
    // Offset: 0xF3E890
    void set_hidePracticeButton(bool value);
    // public System.Void set_disableActionButton(System.Boolean value)
    // Offset: 0xF3E8D0
    void set_disableActionButton(bool value);
    // public System.Void SetContent(IBeatmapLevel level, BeatmapDifficulty defaultDifficulty, BeatmapCharacteristicSO defaultBeatmapCharacteristic, PlayerData playerData, System.Boolean showPlayerStats)
    // Offset: 0xF3E8F4
    void SetContent(GlobalNamespace::IBeatmapLevel* level, GlobalNamespace::BeatmapDifficulty defaultDifficulty, GlobalNamespace::BeatmapCharacteristicSO* defaultBeatmapCharacteristic, GlobalNamespace::PlayerData* playerData, bool showPlayerStats);
    // protected System.Void Awake()
    // Offset: 0xF3F0FC
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0xF3F260
    void OnDestroy();
    // private System.Void HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty(BeatmapDifficultySegmentedControlController controller, BeatmapDifficulty difficulty)
    // Offset: 0xF3F3C8
    void HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty(GlobalNamespace::BeatmapDifficultySegmentedControlController* controller, GlobalNamespace::BeatmapDifficulty difficulty);
    // private System.Void HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic(BeatmapCharacteristicSegmentedControlController controller, BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0xF3F438
    void HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSegmentedControlController* controller, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
    // public System.Void RefreshContent()
    // Offset: 0xF3EC14
    void RefreshContent();
    // private System.Void <Awake>b__32_0(System.Boolean on)
    // Offset: 0xF3F5DC
    void $Awake$b__32_0(bool on);
    // public System.Void .ctor()
    // Offset: 0xF3F5D4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static StandardLevelDetailView* New_ctor();
  }; // StandardLevelDetailView
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelDetailView*, "", "StandardLevelDetailView");
#pragma pack(pop)
