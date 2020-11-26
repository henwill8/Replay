// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LocalLeaderboardsModel
#include "GlobalNamespace/LocalLeaderboardsModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LocalLeaderboardsModel/LeaderboardData
  class LocalLeaderboardsModel::LeaderboardData : public ::Il2CppObject {
    public:
    // public System.String _leaderboardId
    // Offset: 0x10
    ::Il2CppString* leaderboardId;
    // public System.Collections.Generic.List`1<LocalLeaderboardsModel/ScoreData> _scores
    // Offset: 0x18
    System::Collections::Generic::List_1<GlobalNamespace::LocalLeaderboardsModel::ScoreData*>* scores;
    // public System.Void .ctor()
    // Offset: 0x1A64078
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LocalLeaderboardsModel::LeaderboardData* New_ctor();
  }; // LocalLeaderboardsModel/LeaderboardData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalLeaderboardsModel::LeaderboardData*, "", "LocalLeaderboardsModel/LeaderboardData");
#pragma pack(pop)
