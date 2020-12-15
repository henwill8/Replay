// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: MenuTransitionsHelper
  class MenuTransitionsHelper;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextAsset
  class TextAsset;
  // Skipping declaration: Component because it is already included!
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SimpleLevelStarter
  class SimpleLevelStarter : public UnityEngine::MonoBehaviour {
    public:
    // private BeatmapLevelSO _level
    // Offset: 0x18
    GlobalNamespace::BeatmapLevelSO* level;
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Offset: 0x20
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // private BeatmapDifficulty _beatmapDifficulty
    // Offset: 0x28
    GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // private System.Boolean _useTestNoteCutSoundEffects
    // Offset: 0x2C
    bool useTestNoteCutSoundEffects;
    // private UnityEngine.TextAsset _recordingTextAsset
    // Offset: 0x30
    UnityEngine::TextAsset* recordingTextAsset;
    // private UnityEngine.Component[] _prefabBindings
    // Offset: 0x38
    ::Array<UnityEngine::Component*>* prefabBindings;
    // private UnityEngine.UI.Button _button
    // Offset: 0x40
    UnityEngine::UI::Button* button;
    // private readonly MenuTransitionsHelper _menuTransitionsHelper
    // Offset: 0x48
    GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper;
    // private readonly GameScenesManager _gameScenesManager
    // Offset: 0x50
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // private readonly PlayerDataModel _playerDataModel
    // Offset: 0x58
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // private HMUI.ButtonBinder _buttonBinder
    // Offset: 0x60
    HMUI::ButtonBinder* buttonBinder;
    // private readonly GameplayModifiers _gameplayModifiers
    // Offset: 0x68
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0xFCEE5C
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0xFCEF20
    void OnDestroy();
    // private System.Void StartLevel()
    // Offset: 0xFCEF3C
    void StartLevel();
    // private System.Void InstallEarlyBindings(ScenesTransitionSetupDataSO scenesTransitionSetupData, Zenject.DiContainer container)
    // Offset: 0xFCF10C
    void InstallEarlyBindings(GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, Zenject::DiContainer* container);
    // private System.Void ButtonPressed()
    // Offset: 0xFCF258
    void ButtonPressed();
    // private System.Void HandleLevelDidFinish(StandardLevelScenesTransitionSetupDataSO standardLevelSceneSetupData, LevelCompletionResults levelCompletionResults)
    // Offset: 0xFCF25C
    void HandleLevelDidFinish(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelSceneSetupData, GlobalNamespace::LevelCompletionResults* levelCompletionResults);
    // private System.Void <StartLevel>g__AfterSceneSwitchCallback|14_0(Zenject.DiContainer container)
    // Offset: 0xFCF354
    void $StartLevel$g__AfterSceneSwitchCallback_14_0(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0xFCF280
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SimpleLevelStarter* New_ctor();
  }; // SimpleLevelStarter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleLevelStarter*, "", "SimpleLevelStarter");
#pragma pack(pop)