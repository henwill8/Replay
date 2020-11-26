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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelFailedTextEffect
  class LevelFailedTextEffect;
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: PrepareLevelCompletionResults
  class PrepareLevelCompletionResults;
  // Forward declaring type: ILevelEndActions
  class ILevelEndActions;
  // Forward declaring type: BeatmapObjectSpawnController
  class BeatmapObjectSpawnController;
  // Forward declaring type: GameSongController
  class GameSongController;
  // Forward declaring type: EnvironmentSpawnRotation
  class EnvironmentSpawnRotation;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: StandardLevelFailedController
  class StandardLevelFailedController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::StandardLevelFailedController::InitData
    class InitData;
    // Nested type: GlobalNamespace::StandardLevelFailedController::$LevelFailedCoroutine$d__13
    class $LevelFailedCoroutine$d__13;
    // private LevelFailedTextEffect _levelFailedTextEffect
    // Offset: 0x18
    GlobalNamespace::LevelFailedTextEffect* levelFailedTextEffect;
    // private StandardLevelScenesTransitionSetupDataSO _standardLevelSceneSetupData
    // Offset: 0x20
    GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelSceneSetupData;
    // private readonly PrepareLevelCompletionResults _prepareLevelCompletionResults
    // Offset: 0x28
    GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults;
    // private readonly StandardLevelFailedController/InitData _initData
    // Offset: 0x30
    GlobalNamespace::StandardLevelFailedController::InitData* initData;
    // private readonly ILevelEndActions _gameplayManager
    // Offset: 0x38
    GlobalNamespace::ILevelEndActions* gameplayManager;
    // private readonly BeatmapObjectSpawnController _beatmapObjectSpawnController
    // Offset: 0x40
    GlobalNamespace::BeatmapObjectSpawnController* beatmapObjectSpawnController;
    // private readonly GameSongController _gameSongController
    // Offset: 0x48
    GlobalNamespace::GameSongController* gameSongController;
    // private readonly EnvironmentSpawnRotation _environmentSpawnRotation
    // Offset: 0x50
    GlobalNamespace::EnvironmentSpawnRotation* environmentSpawnRotation;
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Offset: 0x58
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xF42CC8
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xF42DB0
    void OnDestroy();
    // private System.Void HandleLevelFailed()
    // Offset: 0xF42EA8
    void HandleLevelFailed();
    // private System.Collections.IEnumerator LevelFailedCoroutine()
    // Offset: 0xF42ED4
    System::Collections::IEnumerator* LevelFailedCoroutine();
    // public System.Void .ctor()
    // Offset: 0xF42F7C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static StandardLevelFailedController* New_ctor();
  }; // StandardLevelFailedController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelFailedController*, "", "StandardLevelFailedController");
#pragma pack(pop)
