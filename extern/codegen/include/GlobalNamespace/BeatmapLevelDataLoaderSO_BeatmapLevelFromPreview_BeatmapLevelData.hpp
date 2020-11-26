// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview
#include "GlobalNamespace/BeatmapLevelDataLoaderSO_BeatmapLevelFromPreview.hpp"
// Including type: IBeatmapLevelData
#include "GlobalNamespace/IBeatmapLevelData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelDataSO
  class BeatmapLevelDataSO;
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview/BeatmapLevelData
  class BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData : public ::Il2CppObject/*, public GlobalNamespace::IBeatmapLevelData*/ {
    public:
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData::DifficultyBeatmapSet
    class DifficultyBeatmapSet;
    // private UnityEngine.AudioClip _audioClip
    // Offset: 0x10
    UnityEngine::AudioClip* audioClip;
    // private BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview/BeatmapLevelData/DifficultyBeatmapSet[] _difficultyBeatmapSets
    // Offset: 0x18
    ::Array<GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData::DifficultyBeatmapSet*>* difficultyBeatmapSets;
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapLevelData
    operator GlobalNamespace::IBeatmapLevelData() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapLevelData*>(this);
    }
    // public System.Void .ctor(BeatmapLevelDataSO beatmapLevelData, BeatmapCharacteristicCollectionSO beatmapCharacteristicCollection, IBeatmapLevel parentLevel)
    // Offset: 0x1A86458
    static BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData* New_ctor(GlobalNamespace::BeatmapLevelDataSO* beatmapLevelData, GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection, GlobalNamespace::IBeatmapLevel* parentLevel);
    // public UnityEngine.AudioClip get_audioClip()
    // Offset: 0x1A86B24
    // Implemented from: IBeatmapLevelData
    // Base method: UnityEngine.AudioClip IBeatmapLevelData::get_audioClip()
    UnityEngine::AudioClip* get_audioClip();
    // public IDifficultyBeatmapSet[] get_difficultyBeatmapSets()
    // Offset: 0x1A86B2C
    // Implemented from: IBeatmapLevelData
    // Base method: IDifficultyBeatmapSet[] IBeatmapLevelData::get_difficultyBeatmapSets()
    ::Array<GlobalNamespace::IDifficultyBeatmapSet*>* get_difficultyBeatmapSets();
  }; // BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview/BeatmapLevelData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData*, "", "BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview/BeatmapLevelData");
#pragma pack(pop)
