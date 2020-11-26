// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: BeatSaberAPI.DataTransferObjects.LevelScoreResult
#include "BeatSaberAPI/DataTransferObjects/LevelScoreResult.hpp"
// Completed includes
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Autogenerated type: BeatSaberAPI.DataTransferObjects.LeaderboardEntry
  class LeaderboardEntry : public ::Il2CppObject {
    public:
    // public System.Int32 id
    // Offset: 0x10
    int id;
    // public System.Int32 score
    // Offset: 0x14
    int score;
    // public System.Int32 unmodifiedScore
    // Offset: 0x18
    int unmodifiedScore;
    // public System.Int32 rank
    // Offset: 0x1C
    int rank;
    // public System.DateTime updated
    // Offset: 0x20
    System::DateTime updated;
    // public System.String userDisplayName
    // Offset: 0x28
    ::Il2CppString* userDisplayName;
    // public System.String platformUserId
    // Offset: 0x30
    ::Il2CppString* platformUserId;
    // public BeatSaberAPI.DataTransferObjects.LevelScoreResult/GameplayModifiers[] gameplayModifiers
    // Offset: 0x38
    ::Array<BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers>* gameplayModifiers;
    // public System.Void .ctor()
    // Offset: 0x1A78D80
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LeaderboardEntry* New_ctor();
  }; // BeatSaberAPI.DataTransferObjects.LeaderboardEntry
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::LeaderboardEntry*, "BeatSaberAPI.DataTransferObjects", "LeaderboardEntry");
#pragma pack(pop)
