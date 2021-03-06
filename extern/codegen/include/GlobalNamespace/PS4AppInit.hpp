// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AppInit
#include "GlobalNamespace/AppInit.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainSystemInit
  class MainSystemInit;
  // Forward declaring type: DefaultScenesTransitionsFromInit
  class DefaultScenesTransitionsFromInit;
  // Forward declaring type: AppInitScenesTransitionSetupDataContainerSO
  class AppInitScenesTransitionSetupDataContainerSO;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: PS4ActivePublisherSKUSettingsSO
  class PS4ActivePublisherSKUSettingsSO;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: PS4AppInit
  // [] Offset: FFFFFFFF
  class PS4AppInit : public GlobalNamespace::AppInit {
    public:
    // private MainSystemInit _mainSystemInit
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MainSystemInit* mainSystemInit;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSystemInit*) == 0x8);
    // private DefaultScenesTransitionsFromInit _defaultScenesTransitionsFromInit
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::DefaultScenesTransitionsFromInit* defaultScenesTransitionsFromInit;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DefaultScenesTransitionsFromInit*) == 0x8);
    // private AppInitScenesTransitionSetupDataContainerSO _appInitScenesTransitionSetupDataContainer
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* appInitScenesTransitionSetupDataContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*) == 0x8);
    // private MainSettingsModelSO _mainSettingsModel
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // private PS4ActivePublisherSKUSettingsSO _activePublisherSKUSettingsSO
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::PS4ActivePublisherSKUSettingsSO* activePublisherSKUSettingsSO;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PS4ActivePublisherSKUSettingsSO*) == 0x8);
    // [InjectAttribute] Offset: 0xD334E0
    // private GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // Creating value type constructor for type: PS4AppInit
    PS4AppInit(GlobalNamespace::MainSystemInit* mainSystemInit_ = {}, GlobalNamespace::DefaultScenesTransitionsFromInit* defaultScenesTransitionsFromInit_ = {}, GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* appInitScenesTransitionSetupDataContainer_ = {}, GlobalNamespace::MainSettingsModelSO* mainSettingsModel_ = {}, GlobalNamespace::PS4ActivePublisherSKUSettingsSO* activePublisherSKUSettingsSO_ = {}, GlobalNamespace::GameScenesManager* gameScenesManager_ = {}) noexcept : mainSystemInit{mainSystemInit_}, defaultScenesTransitionsFromInit{defaultScenesTransitionsFromInit_}, appInitScenesTransitionSetupDataContainer{appInitScenesTransitionSetupDataContainer_}, mainSettingsModel{mainSettingsModel_}, activePublisherSKUSettingsSO{activePublisherSKUSettingsSO_}, gameScenesManager{gameScenesManager_} {}
    // protected override System.Void AppStartAndMultiSceneEditorSetup()
    // Offset: 0xF1E160
    // Implemented from: AppInit
    // Base method: System.Void AppInit::AppStartAndMultiSceneEditorSetup()
    void AppStartAndMultiSceneEditorSetup();
    // protected override System.Void RepeatableSetup()
    // Offset: 0xF1E1CC
    // Implemented from: AppInit
    // Base method: System.Void AppInit::RepeatableSetup()
    void RepeatableSetup();
    // protected override System.Void TransitionToNextScene()
    // Offset: 0xF1E218
    // Implemented from: AppInit
    // Base method: System.Void AppInit::TransitionToNextScene()
    void TransitionToNextScene();
    // public override System.Void InstallBindings()
    // Offset: 0xF1E254
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0xF1E324
    // Implemented from: AppInit
    // Base method: System.Void AppInit::.ctor()
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PS4AppInit* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PS4AppInit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PS4AppInit*, creationType>()));
    }
  }; // PS4AppInit
  #pragma pack(pop)
  static check_size<sizeof(PS4AppInit), 96 + sizeof(GlobalNamespace::GameScenesManager*)> __GlobalNamespace_PS4AppInitSizeCheck;
  static_assert(sizeof(PS4AppInit) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4AppInit*, "", "PS4AppInit");
