// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AppInitScenesTransitionSetupDataSO
#include "GlobalNamespace/AppInitScenesTransitionSetupDataSO.hpp"
// Including type: SceneSetupData
#include "GlobalNamespace/SceneSetupData.hpp"
// Including type: AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType
#include "GlobalNamespace/AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AppInitScenesTransitionSetupDataSO/AppInitSceneSetupData
  class AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData : public GlobalNamespace::SceneSetupData {
    public:
    // private AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType <appInitOverrideStartType>k__BackingField
    // Offset: 0x10
    GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType appInitOverrideStartType;
    // Creating conversion operator: operator GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType
    constexpr operator GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType() const noexcept {
      return appInitOverrideStartType;
    }
    // public AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType get_appInitOverrideStartType()
    // Offset: 0x1A3FF98
    GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType get_appInitOverrideStartType();
    // private System.Void set_appInitOverrideStartType(AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType value)
    // Offset: 0x1A3FFA0
    void set_appInitOverrideStartType(GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType value);
    // public System.Void .ctor(AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType appInitOverrideStartType)
    // Offset: 0x1A3FB6C
    static AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData* New_ctor(GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType appInitOverrideStartType);
  }; // AppInitScenesTransitionSetupDataSO/AppInitSceneSetupData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData*, "", "AppInitScenesTransitionSetupDataSO/AppInitSceneSetupData");
#pragma pack(pop)