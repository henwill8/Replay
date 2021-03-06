// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SceneSetupData
#include "GlobalNamespace/SceneSetupData.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: StandardGameplaySceneSetupData
  // [] Offset: FFFFFFFF
  // [ZenjectAllowDuringValidationAttribute] Offset: D307E0
  class StandardGameplaySceneSetupData : public GlobalNamespace::SceneSetupData {
    public:
    // public readonly System.Boolean autoRestart
    // Size: 0x1
    // Offset: 0x10
    bool autoRestart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: autoRestart and: previewBeatmapLevel
    char __padding0[0x7] = {};
    // public readonly IPreviewBeatmapLevel previewBeatmapLevel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    // public readonly BeatmapDifficulty beatmapDifficulty
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Padding between fields: beatmapDifficulty and: beatmapCharacteristic
    char __padding2[0x4] = {};
    // public readonly BeatmapCharacteristicSO beatmapCharacteristic
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // public readonly System.String backButtonText
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* backButtonText;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly GameplayModifiers gameplayModifiers
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers*) == 0x8);
    // Creating value type constructor for type: StandardGameplaySceneSetupData
    StandardGameplaySceneSetupData(bool autoRestart_ = {}, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel_ = {}, GlobalNamespace::BeatmapDifficulty beatmapDifficulty_ = {}, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic_ = {}, ::Il2CppString* backButtonText_ = {}, GlobalNamespace::GameplayModifiers* gameplayModifiers_ = {}) noexcept : autoRestart{autoRestart_}, previewBeatmapLevel{previewBeatmapLevel_}, beatmapDifficulty{beatmapDifficulty_}, beatmapCharacteristic{beatmapCharacteristic_}, backButtonText{backButtonText_}, gameplayModifiers{gameplayModifiers_} {}
    // public System.Void .ctor(System.Boolean autoRestart, IPreviewBeatmapLevel previewBeatmapLevel, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO beatmapCharacteristic, System.String backButtonText, GameplayModifiers gameplayModifiers)
    // Offset: 0xF74CB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardGameplaySceneSetupData* New_ctor(bool autoRestart, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::Il2CppString* backButtonText, GlobalNamespace::GameplayModifiers* gameplayModifiers) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StandardGameplaySceneSetupData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardGameplaySceneSetupData*, creationType>(autoRestart, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, backButtonText, gameplayModifiers)));
    }
  }; // StandardGameplaySceneSetupData
  #pragma pack(pop)
  static check_size<sizeof(StandardGameplaySceneSetupData), 56 + sizeof(GlobalNamespace::GameplayModifiers*)> __GlobalNamespace_StandardGameplaySceneSetupDataSizeCheck;
  static_assert(sizeof(StandardGameplaySceneSetupData) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardGameplaySceneSetupData*, "", "StandardGameplaySceneSetupData");
