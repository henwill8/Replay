// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: MissionCompletionResults
  class MissionCompletionResults;
  // Forward declaring type: MissionNode
  class MissionNode;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: PlayerAllOverallStatsData
  // [] Offset: FFFFFFFF
  class PlayerAllOverallStatsData : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData
    class PlayerOverallStatsData;
    // [CompilerGeneratedAttribute] Offset: 0xD36910
    // private PlayerAllOverallStatsData/PlayerOverallStatsData <campaignOverallStatsData>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* campaignOverallStatsData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD36920
    // private PlayerAllOverallStatsData/PlayerOverallStatsData <soloFreePlayOverallStatsData>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* soloFreePlayOverallStatsData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD36930
    // private PlayerAllOverallStatsData/PlayerOverallStatsData <partyFreePlayOverallStatsData>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* partyFreePlayOverallStatsData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD36940
    // private PlayerAllOverallStatsData/PlayerOverallStatsData <onlinePlayOverallStatsData>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* onlinePlayOverallStatsData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD36950
    // private System.Action`2<LevelCompletionResults,IDifficultyBeatmap> didUpdateSoloFreePlayOverallStatsDataEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>* didUpdateSoloFreePlayOverallStatsDataEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD36960
    // private System.Action`2<LevelCompletionResults,IDifficultyBeatmap> didUpdatePartyFreePlayOverallStatsDataEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>* didUpdatePartyFreePlayOverallStatsDataEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD36970
    // private System.Action`2<MissionCompletionResults,MissionNode> didUpdateCampaignOverallStatsDataEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action_2<GlobalNamespace::MissionCompletionResults*, GlobalNamespace::MissionNode*>* didUpdateCampaignOverallStatsDataEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::MissionCompletionResults*, GlobalNamespace::MissionNode*>*) == 0x8);
    // Creating value type constructor for type: PlayerAllOverallStatsData
    PlayerAllOverallStatsData(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* campaignOverallStatsData_ = {}, GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* soloFreePlayOverallStatsData_ = {}, GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* partyFreePlayOverallStatsData_ = {}, GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* onlinePlayOverallStatsData_ = {}, System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>* didUpdateSoloFreePlayOverallStatsDataEvent_ = {}, System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>* didUpdatePartyFreePlayOverallStatsDataEvent_ = {}, System::Action_2<GlobalNamespace::MissionCompletionResults*, GlobalNamespace::MissionNode*>* didUpdateCampaignOverallStatsDataEvent_ = {}) noexcept : campaignOverallStatsData{campaignOverallStatsData_}, soloFreePlayOverallStatsData{soloFreePlayOverallStatsData_}, partyFreePlayOverallStatsData{partyFreePlayOverallStatsData_}, onlinePlayOverallStatsData{onlinePlayOverallStatsData_}, didUpdateSoloFreePlayOverallStatsDataEvent{didUpdateSoloFreePlayOverallStatsDataEvent_}, didUpdatePartyFreePlayOverallStatsDataEvent{didUpdatePartyFreePlayOverallStatsDataEvent_}, didUpdateCampaignOverallStatsDataEvent{didUpdateCampaignOverallStatsDataEvent_} {}
    // public PlayerAllOverallStatsData/PlayerOverallStatsData get_allOverallStatsData()
    // Offset: 0xFB3EF0
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* get_allOverallStatsData();
    // public PlayerAllOverallStatsData/PlayerOverallStatsData get_campaignOverallStatsData()
    // Offset: 0xFB4050
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* get_campaignOverallStatsData();
    // private System.Void set_campaignOverallStatsData(PlayerAllOverallStatsData/PlayerOverallStatsData value)
    // Offset: 0xFB4058
    void set_campaignOverallStatsData(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* value);
    // public PlayerAllOverallStatsData/PlayerOverallStatsData get_soloFreePlayOverallStatsData()
    // Offset: 0xFB4060
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* get_soloFreePlayOverallStatsData();
    // private System.Void set_soloFreePlayOverallStatsData(PlayerAllOverallStatsData/PlayerOverallStatsData value)
    // Offset: 0xFB4068
    void set_soloFreePlayOverallStatsData(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* value);
    // public PlayerAllOverallStatsData/PlayerOverallStatsData get_partyFreePlayOverallStatsData()
    // Offset: 0xFB4070
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* get_partyFreePlayOverallStatsData();
    // private System.Void set_partyFreePlayOverallStatsData(PlayerAllOverallStatsData/PlayerOverallStatsData value)
    // Offset: 0xFB4078
    void set_partyFreePlayOverallStatsData(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* value);
    // public PlayerAllOverallStatsData/PlayerOverallStatsData get_onlinePlayOverallStatsData()
    // Offset: 0xFB4080
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* get_onlinePlayOverallStatsData();
    // private System.Void set_onlinePlayOverallStatsData(PlayerAllOverallStatsData/PlayerOverallStatsData value)
    // Offset: 0xFB4088
    void set_onlinePlayOverallStatsData(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* value);
    // public System.Void add_didUpdateSoloFreePlayOverallStatsDataEvent(System.Action`2<LevelCompletionResults,IDifficultyBeatmap> value)
    // Offset: 0xFB4090
    void add_didUpdateSoloFreePlayOverallStatsDataEvent(System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void remove_didUpdateSoloFreePlayOverallStatsDataEvent(System.Action`2<LevelCompletionResults,IDifficultyBeatmap> value)
    // Offset: 0xFB4134
    void remove_didUpdateSoloFreePlayOverallStatsDataEvent(System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void add_didUpdatePartyFreePlayOverallStatsDataEvent(System.Action`2<LevelCompletionResults,IDifficultyBeatmap> value)
    // Offset: 0xFB41D8
    void add_didUpdatePartyFreePlayOverallStatsDataEvent(System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void remove_didUpdatePartyFreePlayOverallStatsDataEvent(System.Action`2<LevelCompletionResults,IDifficultyBeatmap> value)
    // Offset: 0xFB427C
    void remove_didUpdatePartyFreePlayOverallStatsDataEvent(System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void add_didUpdateCampaignOverallStatsDataEvent(System.Action`2<MissionCompletionResults,MissionNode> value)
    // Offset: 0xFB4320
    void add_didUpdateCampaignOverallStatsDataEvent(System::Action_2<GlobalNamespace::MissionCompletionResults*, GlobalNamespace::MissionNode*>* value);
    // public System.Void remove_didUpdateCampaignOverallStatsDataEvent(System.Action`2<MissionCompletionResults,MissionNode> value)
    // Offset: 0xFB43C4
    void remove_didUpdateCampaignOverallStatsDataEvent(System::Action_2<GlobalNamespace::MissionCompletionResults*, GlobalNamespace::MissionNode*>* value);
    // public System.Void .ctor(PlayerAllOverallStatsData/PlayerOverallStatsData campaignOverallStatsData, PlayerAllOverallStatsData/PlayerOverallStatsData soloFreePlayOverallStatsData, PlayerAllOverallStatsData/PlayerOverallStatsData partyFreePlayOverallStatsData, PlayerAllOverallStatsData/PlayerOverallStatsData onlinePlayOverallStatsData)
    // Offset: 0xFB4558
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerAllOverallStatsData* New_ctor(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* campaignOverallStatsData, GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* soloFreePlayOverallStatsData, GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* partyFreePlayOverallStatsData, GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* onlinePlayOverallStatsData) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerAllOverallStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerAllOverallStatsData*, creationType>(campaignOverallStatsData, soloFreePlayOverallStatsData, partyFreePlayOverallStatsData, onlinePlayOverallStatsData)));
    }
    // public System.Void UpdateSoloFreePlayOverallStatsData(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0xFB45D8
    void UpdateSoloFreePlayOverallStatsData(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Void UpdatePartyFreePlayOverallStatsData(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0xFB4778
    void UpdatePartyFreePlayOverallStatsData(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Void UpdateCampaignOverallStatsData(MissionCompletionResults missionCompletionResults, MissionNode missionNode)
    // Offset: 0xFB4808
    void UpdateCampaignOverallStatsData(GlobalNamespace::MissionCompletionResults* missionCompletionResults, GlobalNamespace::MissionNode* missionNode);
    // public System.Void UpdateOnlinePlayOverallStatsData(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0xFB489C
    void UpdateOnlinePlayOverallStatsData(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Void .ctor()
    // Offset: 0xFB4468
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerAllOverallStatsData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerAllOverallStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerAllOverallStatsData*, creationType>()));
    }
  }; // PlayerAllOverallStatsData
  #pragma pack(pop)
  static check_size<sizeof(PlayerAllOverallStatsData), 64 + sizeof(System::Action_2<GlobalNamespace::MissionCompletionResults*, GlobalNamespace::MissionNode*>*)> __GlobalNamespace_PlayerAllOverallStatsDataSizeCheck;
  static_assert(sizeof(PlayerAllOverallStatsData) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerAllOverallStatsData*, "", "PlayerAllOverallStatsData");
