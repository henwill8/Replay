// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AppInit
#include "GlobalNamespace/AppInit.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainSystemInit
  class MainSystemInit;
  // Forward declaring type: OculusInit
  class OculusInit;
  // Forward declaring type: MenuScenesTransitionSetupDataSO
  class MenuScenesTransitionSetupDataSO;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: QuestShowcaseAppInit
  class QuestShowcaseAppInit : public GlobalNamespace::AppInit {
    public:
    // private MainSystemInit _mainSystemInit
    // Offset: 0x38
    GlobalNamespace::MainSystemInit* mainSystemInit;
    // private OculusInit _oculusInit
    // Offset: 0x40
    GlobalNamespace::OculusInit* oculusInit;
    // private MenuScenesTransitionSetupDataSO _menuTransitionSetupData
    // Offset: 0x48
    GlobalNamespace::MenuScenesTransitionSetupDataSO* menuTransitionSetupData;
    // private MainSettingsModelSO _mainSettingsModel
    // Offset: 0x50
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // private readonly GameScenesManager _gameScenesManager
    // Offset: 0x58
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // private readonly PlayerDataModel _playerDataModel
    // Offset: 0x60
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // protected override System.Void AppStartAndMultiSceneEditorSetup()
    // Offset: 0xF2E118
    // Implemented from: AppInit
    // Base method: System.Void AppInit::AppStartAndMultiSceneEditorSetup()
    void AppStartAndMultiSceneEditorSetup();
    // protected override System.Void RepeatableSetup()
    // Offset: 0xF2E134
    // Implemented from: AppInit
    // Base method: System.Void AppInit::RepeatableSetup()
    void RepeatableSetup();
    // protected override System.Void TransitionToNextScene()
    // Offset: 0xF2E2C0
    // Implemented from: AppInit
    // Base method: System.Void AppInit::TransitionToNextScene()
    void TransitionToNextScene();
    // public override System.Void InstallBindings()
    // Offset: 0xF2E30C
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0xF2E398
    // Implemented from: AppInit
    // Base method: System.Void AppInit::.ctor()
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static QuestShowcaseAppInit* New_ctor();
  }; // QuestShowcaseAppInit
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::QuestShowcaseAppInit*, "", "QuestShowcaseAppInit");
#pragma pack(pop)
