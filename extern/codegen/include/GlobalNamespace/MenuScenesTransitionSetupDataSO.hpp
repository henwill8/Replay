// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ScenesTransitionSetupDataSO
#include "GlobalNamespace/ScenesTransitionSetupDataSO.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SceneInfo
  class SceneInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MenuScenesTransitionSetupDataSO
  class MenuScenesTransitionSetupDataSO : public GlobalNamespace::ScenesTransitionSetupDataSO {
    public:
    // private SceneInfo _menuSceneInfo
    // Offset: 0x28
    GlobalNamespace::SceneInfo* menuSceneInfo;
    // private SceneInfo _menuCoreSceneInfo
    // Offset: 0x30
    GlobalNamespace::SceneInfo* menuCoreSceneInfo;
    // private SceneInfo _menuEnvironmentSceneInfo
    // Offset: 0x38
    GlobalNamespace::SceneInfo* menuEnvironmentSceneInfo;
    // private SceneInfo _menuViewControllersSceneInfo
    // Offset: 0x40
    GlobalNamespace::SceneInfo* menuViewControllersSceneInfo;
    // public System.Void Init()
    // Offset: 0x1A72A2C
    void Init();
    // public System.Void .ctor()
    // Offset: 0x1A72B98
    // Implemented from: ScenesTransitionSetupDataSO
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MenuScenesTransitionSetupDataSO* New_ctor();
  }; // MenuScenesTransitionSetupDataSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuScenesTransitionSetupDataSO*, "", "MenuScenesTransitionSetupDataSO");
#pragma pack(pop)
