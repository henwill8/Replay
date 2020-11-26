// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ScoreUIController
#include "GlobalNamespace/ScoreUIController.hpp"
// Including type: ScoreUIController/ScoreDisplayType
#include "GlobalNamespace/ScoreUIController_ScoreDisplayType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ScoreUIController/InitData
  class ScoreUIController::InitData : public ::Il2CppObject {
    public:
    // public readonly ScoreUIController/ScoreDisplayType scoreDisplayType
    // Offset: 0x10
    GlobalNamespace::ScoreUIController::ScoreDisplayType scoreDisplayType;
    // Creating conversion operator: operator GlobalNamespace::ScoreUIController::ScoreDisplayType
    constexpr operator GlobalNamespace::ScoreUIController::ScoreDisplayType() const noexcept {
      return scoreDisplayType;
    }
    // public System.Void .ctor(ScoreUIController/ScoreDisplayType scoreDisplayType)
    // Offset: 0xFC944C
    static ScoreUIController::InitData* New_ctor(GlobalNamespace::ScoreUIController::ScoreDisplayType scoreDisplayType);
  }; // ScoreUIController/InitData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreUIController::InitData*, "", "ScoreUIController/InitData");
#pragma pack(pop)
