// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapLevelFilterModel
#include "GlobalNamespace/BeatmapLevelFilterModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelFilterParams
  class LevelFilterParams;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapLevelFilterModel/<>c__DisplayClass0_0
  class BeatmapLevelFilterModel::$$c__DisplayClass0_0 : public ::Il2CppObject {
    public:
    // public System.Boolean searchByText
    // Offset: 0x10
    bool searchByText;
    // public System.String[] searchTexts
    // Offset: 0x18
    ::Array<::Il2CppString*>* searchTexts;
    // public LevelFilterParams levelFilterParams
    // Offset: 0x20
    GlobalNamespace::LevelFilterParams* levelFilterParams;
    // public PlayerDataModel playerDataModel
    // Offset: 0x28
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // System.Boolean <FilerBeatmapLevelPackCollectionAsync>b__0(IPreviewBeatmapLevel beatmapLevel)
    // Offset: 0x1A87438
    bool $FilerBeatmapLevelPackCollectionAsync$b__0(GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel);
    // public System.Void .ctor()
    // Offset: 0x1A87430
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BeatmapLevelFilterModel::$$c__DisplayClass0_0* New_ctor();
  }; // BeatmapLevelFilterModel/<>c__DisplayClass0_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelFilterModel::$$c__DisplayClass0_0*, "", "BeatmapLevelFilterModel/<>c__DisplayClass0_0");
#pragma pack(pop)