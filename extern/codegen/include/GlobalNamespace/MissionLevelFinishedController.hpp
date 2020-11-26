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
  // Forward declaring type: PrepareLevelCompletionResults
  class PrepareLevelCompletionResults;
  // Forward declaring type: MissionLevelScenesTransitionSetupDataSO
  class MissionLevelScenesTransitionSetupDataSO;
  // Forward declaring type: MissionObjectiveCheckersManager
  class MissionObjectiveCheckersManager;
  // Forward declaring type: ILevelEndActions
  class ILevelEndActions;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionLevelFinishedController
  class MissionLevelFinishedController : public UnityEngine::MonoBehaviour {
    public:
    // private PrepareLevelCompletionResults _prepareLevelCompletionResults
    // Offset: 0x18
    GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults;
    // private MissionLevelScenesTransitionSetupDataSO _missionLevelSceneSetupData
    // Offset: 0x20
    GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelSceneSetupData;
    // private MissionObjectiveCheckersManager _missionObjectiveCheckersManager
    // Offset: 0x28
    GlobalNamespace::MissionObjectiveCheckersManager* missionObjectiveCheckersManager;
    // private ILevelEndActions _gameplayManager
    // Offset: 0x30
    GlobalNamespace::ILevelEndActions* gameplayManager;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x10192F4
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x10193E0
    void OnDestroy();
    // private System.Void HandleLevelFinished()
    // Offset: 0x10194D8
    void HandleLevelFinished();
    // private System.Void StartLevelFinished()
    // Offset: 0x10194DC
    void StartLevelFinished();
    // public System.Void .ctor()
    // Offset: 0x1019588
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissionLevelFinishedController* New_ctor();
  }; // MissionLevelFinishedController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelFinishedController*, "", "MissionLevelFinishedController");
#pragma pack(pop)
