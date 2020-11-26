// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SceneSetupData
#include "GlobalNamespace/SceneSetupData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
  // Forward declaring type: PracticeSettings
  class PracticeSettings;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameplayCoreSceneSetupData
  class GameplayCoreSceneSetupData : public GlobalNamespace::SceneSetupData {
    public:
    // public readonly IDifficultyBeatmap difficultyBeatmap
    // Offset: 0x10
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // public readonly GameplayModifiers gameplayModifiers
    // Offset: 0x18
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // public readonly PlayerSpecificSettings playerSpecificSettings
    // Offset: 0x20
    GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;
    // public readonly PracticeSettings practiceSettings
    // Offset: 0x28
    GlobalNamespace::PracticeSettings* practiceSettings;
    // public readonly System.Boolean useTestNoteCutSoundEffects
    // Offset: 0x30
    bool useTestNoteCutSoundEffects;
    // public readonly EnvironmentInfoSO environmentInfo
    // Offset: 0x38
    GlobalNamespace::EnvironmentInfoSO* environmentInfo;
    // public System.Void .ctor(IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, PlayerSpecificSettings playerSpecificSettings, PracticeSettings practiceSettings, System.Boolean useTestNoteCutSoundEffects, EnvironmentInfoSO environmentInfo)
    // Offset: 0x1A21614
    static GameplayCoreSceneSetupData* New_ctor(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, GlobalNamespace::PracticeSettings* practiceSettings, bool useTestNoteCutSoundEffects, GlobalNamespace::EnvironmentInfoSO* environmentInfo);
  }; // GameplayCoreSceneSetupData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayCoreSceneSetupData*, "", "GameplayCoreSceneSetupData");
#pragma pack(pop)
