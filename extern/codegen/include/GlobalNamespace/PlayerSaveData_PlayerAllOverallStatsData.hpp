// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayerSaveData
#include "GlobalNamespace/PlayerSaveData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveData/PlayerAllOverallStatsData
  // [] Offset: FFFFFFFF
  class PlayerSaveData::PlayerAllOverallStatsData : public ::Il2CppObject {
    public:
    // public PlayerSaveData/PlayerOverallStatsData campaignOverallStatsData
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::PlayerSaveData::PlayerOverallStatsData* campaignOverallStatsData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveData::PlayerOverallStatsData*) == 0x8);
    // public PlayerSaveData/PlayerOverallStatsData soloFreePlayOverallStatsData
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PlayerSaveData::PlayerOverallStatsData* soloFreePlayOverallStatsData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveData::PlayerOverallStatsData*) == 0x8);
    // public PlayerSaveData/PlayerOverallStatsData partyFreePlayOverallStatsData
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::PlayerSaveData::PlayerOverallStatsData* partyFreePlayOverallStatsData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveData::PlayerOverallStatsData*) == 0x8);
    // public PlayerSaveData/PlayerOverallStatsData onlinePlayOverallStatsData
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::PlayerSaveData::PlayerOverallStatsData* onlinePlayOverallStatsData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveData::PlayerOverallStatsData*) == 0x8);
    // Creating value type constructor for type: PlayerAllOverallStatsData
    PlayerAllOverallStatsData(GlobalNamespace::PlayerSaveData::PlayerOverallStatsData* campaignOverallStatsData_ = {}, GlobalNamespace::PlayerSaveData::PlayerOverallStatsData* soloFreePlayOverallStatsData_ = {}, GlobalNamespace::PlayerSaveData::PlayerOverallStatsData* partyFreePlayOverallStatsData_ = {}, GlobalNamespace::PlayerSaveData::PlayerOverallStatsData* onlinePlayOverallStatsData_ = {}) noexcept : campaignOverallStatsData{campaignOverallStatsData_}, soloFreePlayOverallStatsData{soloFreePlayOverallStatsData_}, partyFreePlayOverallStatsData{partyFreePlayOverallStatsData_}, onlinePlayOverallStatsData{onlinePlayOverallStatsData_} {}
    // public System.Void .ctor(PlayerSaveData/PlayerOverallStatsData campaignOverallStatsData, PlayerSaveData/PlayerOverallStatsData soloFreePlayOverallStatsData, PlayerSaveData/PlayerOverallStatsData partyFreePlayOverallStatsData, PlayerSaveData/PlayerOverallStatsData onlinePlayOverallStatsData)
    // Offset: 0xFB98DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveData::PlayerAllOverallStatsData* New_ctor(GlobalNamespace::PlayerSaveData::PlayerOverallStatsData* campaignOverallStatsData, GlobalNamespace::PlayerSaveData::PlayerOverallStatsData* soloFreePlayOverallStatsData, GlobalNamespace::PlayerSaveData::PlayerOverallStatsData* partyFreePlayOverallStatsData, GlobalNamespace::PlayerSaveData::PlayerOverallStatsData* onlinePlayOverallStatsData) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveData::PlayerAllOverallStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveData::PlayerAllOverallStatsData*, creationType>(campaignOverallStatsData, soloFreePlayOverallStatsData, partyFreePlayOverallStatsData, onlinePlayOverallStatsData)));
    }
    // public System.Void .ctor()
    // Offset: 0xFB96FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveData::PlayerAllOverallStatsData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveData::PlayerAllOverallStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveData::PlayerAllOverallStatsData*, creationType>()));
    }
  }; // PlayerSaveData/PlayerAllOverallStatsData
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveData::PlayerAllOverallStatsData), 40 + sizeof(GlobalNamespace::PlayerSaveData::PlayerOverallStatsData*)> __GlobalNamespace_PlayerSaveData_PlayerAllOverallStatsDataSizeCheck;
  static_assert(sizeof(PlayerSaveData::PlayerAllOverallStatsData) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::PlayerAllOverallStatsData*, "", "PlayerSaveData/PlayerAllOverallStatsData");
