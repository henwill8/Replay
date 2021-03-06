// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TimeSlider
  class TimeSlider;
  // Forward declaring type: PercentSlider
  class PercentSlider;
  // Forward declaring type: RangeValuesTextSlider
  class RangeValuesTextSlider;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelBar
  class LevelBar;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: SongPreviewPlayer
  class SongPreviewPlayer;
  // Forward declaring type: PracticeSettings
  class PracticeSettings;
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xCC
  #pragma pack(push, 1)
  // Autogenerated type: PracticeViewController
  // [] Offset: FFFFFFFF
  class PracticeViewController : public HMUI::ViewController {
    public:
    // private HMUI.TimeSlider _songStartSlider
    // Size: 0x8
    // Offset: 0x70
    HMUI::TimeSlider* songStartSlider;
    // Field size check
    static_assert(sizeof(HMUI::TimeSlider*) == 0x8);
    // private HMUI.PercentSlider _speedSlider
    // Size: 0x8
    // Offset: 0x78
    HMUI::PercentSlider* speedSlider;
    // Field size check
    static_assert(sizeof(HMUI::PercentSlider*) == 0x8);
    // private LevelBar _levelBar
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::LevelBar* levelBar;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelBar*) == 0x8);
    // [SpaceAttribute] Offset: 0xD43628
    // private UnityEngine.UI.Button _playButton
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::UI::Button* playButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [InjectAttribute] Offset: 0xD43660
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0xD43670
    // private readonly SongPreviewPlayer _songPreviewPlayer
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::SongPreviewPlayer* songPreviewPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPreviewPlayer*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD43680
    // private System.Action didPressPlayButtonEvent
    // Size: 0x8
    // Offset: 0xA0
    System::Action* didPressPlayButtonEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private PracticeSettings _practiceSettings
    // Size: 0x8
    // Offset: 0xA8
    GlobalNamespace::PracticeSettings* practiceSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PracticeSettings*) == 0x8);
    // private System.Single _currentPlayingStartTime
    // Size: 0x4
    // Offset: 0xB0
    float currentPlayingStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxStartSongTime
    // Size: 0x4
    // Offset: 0xB4
    float maxStartSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private IBeatmapLevel _level
    // Size: 0x8
    // Offset: 0xB8
    GlobalNamespace::IBeatmapLevel* level;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevel*) == 0x8);
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Size: 0x8
    // Offset: 0xC0
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private BeatmapDifficulty _beatmapDifficulty
    // Size: 0x4
    // Offset: 0xC8
    GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Creating value type constructor for type: PracticeViewController
    PracticeViewController(HMUI::TimeSlider* songStartSlider_ = {}, HMUI::PercentSlider* speedSlider_ = {}, GlobalNamespace::LevelBar* levelBar_ = {}, UnityEngine::UI::Button* playButton_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, GlobalNamespace::SongPreviewPlayer* songPreviewPlayer_ = {}, System::Action* didPressPlayButtonEvent_ = {}, GlobalNamespace::PracticeSettings* practiceSettings_ = {}, float currentPlayingStartTime_ = {}, float maxStartSongTime_ = {}, GlobalNamespace::IBeatmapLevel* level_ = {}, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic_ = {}, GlobalNamespace::BeatmapDifficulty beatmapDifficulty_ = {}) noexcept : songStartSlider{songStartSlider_}, speedSlider{speedSlider_}, levelBar{levelBar_}, playButton{playButton_}, playerDataModel{playerDataModel_}, songPreviewPlayer{songPreviewPlayer_}, didPressPlayButtonEvent{didPressPlayButtonEvent_}, practiceSettings{practiceSettings_}, currentPlayingStartTime{currentPlayingStartTime_}, maxStartSongTime{maxStartSongTime_}, level{level_}, beatmapCharacteristic{beatmapCharacteristic_}, beatmapDifficulty{beatmapDifficulty_} {}
    // static field const value: static private System.Single kWaitBeforePlayPreviewAfterPreviewStartValueChanged
    static constexpr const float kWaitBeforePlayPreviewAfterPreviewStartValueChanged = 1;
    // Get static field: static private System.Single kWaitBeforePlayPreviewAfterPreviewStartValueChanged
    static float _get_kWaitBeforePlayPreviewAfterPreviewStartValueChanged();
    // Set static field: static private System.Single kWaitBeforePlayPreviewAfterPreviewStartValueChanged
    static void _set_kWaitBeforePlayPreviewAfterPreviewStartValueChanged(float value);
    // static field const value: static private System.Single kMinValueChangeToInstantPlayPreview
    static constexpr const float kMinValueChangeToInstantPlayPreview = 3;
    // Get static field: static private System.Single kMinValueChangeToInstantPlayPreview
    static float _get_kMinValueChangeToInstantPlayPreview();
    // Set static field: static private System.Single kMinValueChangeToInstantPlayPreview
    static void _set_kMinValueChangeToInstantPlayPreview(float value);
    // public System.Void add_didPressPlayButtonEvent(System.Action value)
    // Offset: 0xFBDED4
    void add_didPressPlayButtonEvent(System::Action* value);
    // public System.Void remove_didPressPlayButtonEvent(System.Action value)
    // Offset: 0xFBDF78
    void remove_didPressPlayButtonEvent(System::Action* value);
    // public PracticeSettings get_practiceSettings()
    // Offset: 0xFBE01C
    GlobalNamespace::PracticeSettings* get_practiceSettings();
    // public System.Void Init(IBeatmapLevel level, BeatmapCharacteristicSO beatmapCharacteristic, BeatmapDifficulty beatmapDifficulty)
    // Offset: 0xFBE024
    void Init(GlobalNamespace::IBeatmapLevel* level, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::BeatmapDifficulty beatmapDifficulty);
    // private System.Void PlayPreview()
    // Offset: 0xFBE50C
    void PlayPreview();
    // private System.Void RefreshUI()
    // Offset: 0xFBE3C4
    void RefreshUI();
    // private System.Void HandleSpeedSliderValueDidChange(HMUI.RangeValuesTextSlider slider, System.Single value)
    // Offset: 0xFBE674
    void HandleSpeedSliderValueDidChange(HMUI::RangeValuesTextSlider* slider, float value);
    // private System.Void HandleSongStartSliderValueDidChange(HMUI.RangeValuesTextSlider slider, System.Single value)
    // Offset: 0xFBE690
    void HandleSongStartSliderValueDidChange(HMUI::RangeValuesTextSlider* slider, float value);
    // private System.Void PlayButtonPressed()
    // Offset: 0xFBE734
    void PlayButtonPressed();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0xFBE25C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0xFBE418
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0xFBE7E0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PracticeViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PracticeViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PracticeViewController*, creationType>()));
    }
  }; // PracticeViewController
  #pragma pack(pop)
  static check_size<sizeof(PracticeViewController), 200 + sizeof(GlobalNamespace::BeatmapDifficulty)> __GlobalNamespace_PracticeViewControllerSizeCheck;
  static_assert(sizeof(PracticeViewController) == 0xCC);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PracticeViewController*, "", "PracticeViewController");
