// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RankModel/Rank
#include "GlobalNamespace/RankModel_Rank.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerLevelStatsData
  class PlayerLevelStatsData : public ::Il2CppObject {
    public:
    // private System.Int32 _highScore
    // Offset: 0x10
    int highScore;
    // private System.Int32 _maxCombo
    // Offset: 0x14
    int maxCombo;
    // private System.Boolean _fullCombo
    // Offset: 0x18
    bool fullCombo;
    // private RankModel/Rank _maxRank
    // Offset: 0x1C
    GlobalNamespace::RankModel::Rank maxRank;
    // private System.Boolean _validScore
    // Offset: 0x20
    bool validScore;
    // private System.Int32 _playCount
    // Offset: 0x24
    int playCount;
    // private System.String _levelID
    // Offset: 0x28
    ::Il2CppString* levelID;
    // private BeatmapDifficulty _difficulty
    // Offset: 0x30
    GlobalNamespace::BeatmapDifficulty difficulty;
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Offset: 0x38
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // public System.String get_levelID()
    // Offset: 0xF288E0
    ::Il2CppString* get_levelID();
    // public BeatmapDifficulty get_difficulty()
    // Offset: 0xF288E8
    GlobalNamespace::BeatmapDifficulty get_difficulty();
    // public BeatmapCharacteristicSO get_beatmapCharacteristic()
    // Offset: 0xF288F0
    GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();
    // public System.Int32 get_highScore()
    // Offset: 0xF288F8
    int get_highScore();
    // public System.Int32 get_maxCombo()
    // Offset: 0xF28900
    int get_maxCombo();
    // public System.Boolean get_fullCombo()
    // Offset: 0xF28908
    bool get_fullCombo();
    // public RankModel/Rank get_maxRank()
    // Offset: 0xF28910
    GlobalNamespace::RankModel::Rank get_maxRank();
    // public System.Boolean get_validScore()
    // Offset: 0xF28918
    bool get_validScore();
    // public System.Int32 get_playCount()
    // Offset: 0xF28920
    int get_playCount();
    // public System.Void .ctor(System.String levelID, BeatmapDifficulty difficulty, BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0xF28928
    static PlayerLevelStatsData* New_ctor(::Il2CppString* levelID, GlobalNamespace::BeatmapDifficulty difficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
    // public System.Void .ctor(System.String levelID, BeatmapDifficulty difficulty, BeatmapCharacteristicSO beatmapCharacteristic, System.Int32 highScore, System.Int32 maxCombo, System.Boolean fullCombo, RankModel/Rank maxRank, System.Boolean validScore, System.Int32 playCount)
    // Offset: 0xF26D3C
    static PlayerLevelStatsData* New_ctor(::Il2CppString* levelID, GlobalNamespace::BeatmapDifficulty difficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, int highScore, int maxCombo, bool fullCombo, GlobalNamespace::RankModel::Rank maxRank, bool validScore, int playCount);
    // public System.Void UpdateScoreData(System.Int32 score, System.Int32 maxCombo, System.Boolean fullCombo, RankModel/Rank rank)
    // Offset: 0xF28980
    void UpdateScoreData(int score, int maxCombo, bool fullCombo, GlobalNamespace::RankModel::Rank rank);
    // public System.Void IncreaseNumberOfGameplays()
    // Offset: 0xF28A64
    void IncreaseNumberOfGameplays();
  }; // PlayerLevelStatsData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerLevelStatsData*, "", "PlayerLevelStatsData");
#pragma pack(pop)