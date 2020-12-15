// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlatformLeaderboardsModel
#include "GlobalNamespace/PlatformLeaderboardsModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifierParamsSO
  class GameplayModifierParamsSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlatformLeaderboardsModel/LeaderboardScore
  class PlatformLeaderboardsModel::LeaderboardScore : public ::Il2CppObject {
    public:
    // public readonly System.Int32 score
    // Offset: 0x10
    int score;
    // public readonly System.Int32 rank
    // Offset: 0x14
    int rank;
    // public readonly System.String playerName
    // Offset: 0x18
    ::Il2CppString* playerName;
    // public readonly System.String playerId
    // Offset: 0x20
    ::Il2CppString* playerId;
    // public System.Void .ctor(System.Int32 score, System.Int32 rank, System.String playerName, System.String playerId, System.Collections.Generic.List`1<GameplayModifierParamsSO> gameplayModifiers)
    // Offset: 0xF0ADFC
    static PlatformLeaderboardsModel::LeaderboardScore* New_ctor(int score, int rank, ::Il2CppString* playerName, ::Il2CppString* playerId, System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>* gameplayModifiers);
  }; // PlatformLeaderboardsModel/LeaderboardScore
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformLeaderboardsModel::LeaderboardScore*, "", "PlatformLeaderboardsModel/LeaderboardScore");
#pragma pack(pop)