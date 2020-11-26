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
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: PrepareLevelCompletionResults
  class PrepareLevelCompletionResults;
  // Forward declaring type: ILevelEndActions
  class ILevelEndActions;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: StandardLevelFinishedController
  class StandardLevelFinishedController : public UnityEngine::MonoBehaviour {
    public:
    // private StandardLevelScenesTransitionSetupDataSO _standardLevelSceneSetupData
    // Offset: 0x18
    GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelSceneSetupData;
    // private readonly PrepareLevelCompletionResults _prepareLevelCompletionResults
    // Offset: 0x20
    GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults;
    // private ILevelEndActions _gameplayManager
    // Offset: 0x28
    GlobalNamespace::ILevelEndActions* gameplayManager;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xF43220
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xF4330C
    void OnDestroy();
    // private System.Void HandleLevelFinished()
    // Offset: 0xF43404
    void HandleLevelFinished();
    // private System.Void StartLevelFinished()
    // Offset: 0xF43408
    void StartLevelFinished();
    // public System.Void .ctor()
    // Offset: 0xF43450
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static StandardLevelFinishedController* New_ctor();
  }; // StandardLevelFinishedController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelFinishedController*, "", "StandardLevelFinishedController");
#pragma pack(pop)
