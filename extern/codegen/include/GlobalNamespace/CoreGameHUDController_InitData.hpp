// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: CoreGameHUDController
#include "GlobalNamespace/CoreGameHUDController.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CoreGameHUDController/InitData
  class CoreGameHUDController::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Boolean hide
    // Offset: 0x10
    bool hide;
    // public readonly System.Boolean showEnergyPanel
    // Offset: 0x11
    bool showEnergyPanel;
    // public readonly System.Boolean advancedHUD
    // Offset: 0x12
    bool advancedHUD;
    // public System.Void .ctor(System.Boolean hide, System.Boolean showEnergyPanel, System.Boolean advancedHUD)
    // Offset: 0x1A548F4
    static CoreGameHUDController::InitData* New_ctor(bool hide, bool showEnergyPanel, bool advancedHUD);
  }; // CoreGameHUDController/InitData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CoreGameHUDController::InitData*, "", "CoreGameHUDController/InitData");
#pragma pack(pop)
