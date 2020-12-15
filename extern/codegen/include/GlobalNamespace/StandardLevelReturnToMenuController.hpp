// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IReturnToMenuController
#include "GlobalNamespace/IReturnToMenuController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: PrepareLevelCompletionResults
  class PrepareLevelCompletionResults;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: StandardLevelReturnToMenuController
  class StandardLevelReturnToMenuController : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IReturnToMenuController*/ {
    public:
    // private StandardLevelScenesTransitionSetupDataSO _standardLevelSceneSetupData
    // Offset: 0x18
    GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelSceneSetupData;
    // private PrepareLevelCompletionResults _prepareLevelCompletionResults
    // Offset: 0x20
    GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults;
    // Creating interface conversion operator: operator GlobalNamespace::IReturnToMenuController
    operator GlobalNamespace::IReturnToMenuController() noexcept {
      return *reinterpret_cast<GlobalNamespace::IReturnToMenuController*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void ReturnToMenu()
    // Offset: 0xF450DC
    // Implemented from: IReturnToMenuController
    // Base method: System.Void IReturnToMenuController::ReturnToMenu()
    void ReturnToMenu();
    // public System.Void .ctor()
    // Offset: 0xF45124
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static StandardLevelReturnToMenuController* New_ctor();
  }; // StandardLevelReturnToMenuController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelReturnToMenuController*, "", "StandardLevelReturnToMenuController");
#pragma pack(pop)