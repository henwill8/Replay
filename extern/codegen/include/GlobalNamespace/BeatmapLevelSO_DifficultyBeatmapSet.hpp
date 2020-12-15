// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapLevelSO
#include "GlobalNamespace/BeatmapLevelSO.hpp"
// Including type: IDifficultyBeatmapSet
#include "GlobalNamespace/IDifficultyBeatmapSet.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapLevelSO/DifficultyBeatmapSet
  class BeatmapLevelSO::DifficultyBeatmapSet : public ::Il2CppObject/*, public GlobalNamespace::IDifficultyBeatmapSet*/ {
    public:
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Offset: 0x10
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // private BeatmapLevelSO/DifficultyBeatmap[] _difficultyBeatmaps
    // Offset: 0x18
    ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>* difficultyBeatmaps;
    // Creating interface conversion operator: operator GlobalNamespace::IDifficultyBeatmapSet
    operator GlobalNamespace::IDifficultyBeatmapSet() noexcept {
      return *reinterpret_cast<GlobalNamespace::IDifficultyBeatmapSet*>(this);
    }
    // public System.Void .ctor(BeatmapCharacteristicSO beatmapCharacteristic, BeatmapLevelSO/DifficultyBeatmap[] difficultyBeatmaps)
    // Offset: 0x1A8A768
    static BeatmapLevelSO::DifficultyBeatmapSet* New_ctor(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>* difficultyBeatmaps);
    // public System.Void SetParentLevel(IBeatmapLevel level)
    // Offset: 0x1A8958C
    void SetParentLevel(GlobalNamespace::IBeatmapLevel* level);
    // public BeatmapCharacteristicSO get_beatmapCharacteristic()
    // Offset: 0x1A8A758
    // Implemented from: IDifficultyBeatmapSet
    // Base method: BeatmapCharacteristicSO IDifficultyBeatmapSet::get_beatmapCharacteristic()
    GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();
    // public IDifficultyBeatmap[] get_difficultyBeatmaps()
    // Offset: 0x1A8A760
    // Implemented from: IDifficultyBeatmapSet
    // Base method: IDifficultyBeatmap[] IDifficultyBeatmapSet::get_difficultyBeatmaps()
    ::Array<GlobalNamespace::IDifficultyBeatmap*>* get_difficultyBeatmaps();
  }; // BeatmapLevelSO/DifficultyBeatmapSet
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelSO::DifficultyBeatmapSet*, "", "BeatmapLevelSO/DifficultyBeatmapSet");
#pragma pack(pop)