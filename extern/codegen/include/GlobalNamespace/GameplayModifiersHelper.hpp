// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatSaberAPI.DataTransferObjects.LevelScoreResult
#include "BeatSaberAPI/DataTransferObjects/LevelScoreResult.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameplayModifiersHelper
  class GameplayModifiersHelper : public ::Il2CppObject {
    public:
    // static public BeatSaberAPI.DataTransferObjects.LevelScoreResult/GameplayModifiers[] ToDTO(GameplayModifiers gameplayModifiers)
    // Offset: 0x1A22388
    static ::Array<BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers>* ToDTO(GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // static public GameplayModifiers FromDTO(BeatSaberAPI.DataTransferObjects.LevelScoreResult/GameplayModifiers[] gameplayModifiersDTOs)
    // Offset: 0x1A2260C
    static GlobalNamespace::GameplayModifiers* FromDTO(::Array<BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers>* gameplayModifiersDTOs);
  }; // GameplayModifiersHelper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifiersHelper*, "", "GameplayModifiersHelper");
#pragma pack(pop)
