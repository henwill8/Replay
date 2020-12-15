// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HTTPLeaderboardsModel
#include "GlobalNamespace/HTTPLeaderboardsModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: BeatSaberAPI::DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Forward declaring type: LeaderboardEntry
  class LeaderboardEntry;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: HTTPLeaderboardsModel/<>c
  class HTTPLeaderboardsModel::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly HTTPLeaderboardsModel/<>c <>9
    static GlobalNamespace::HTTPLeaderboardsModel::$$c* _get_$$9();
    // Set static field: static public readonly HTTPLeaderboardsModel/<>c <>9
    static void _set_$$9(GlobalNamespace::HTTPLeaderboardsModel::$$c* value);
    // Get static field: static public System.Func`2<BeatSaberAPI.DataTransferObjects.LeaderboardEntry,System.String> <>9__10_0
    static System::Func_2<BeatSaberAPI::DataTransferObjects::LeaderboardEntry*, ::Il2CppString*>* _get_$$9__10_0();
    // Set static field: static public System.Func`2<BeatSaberAPI.DataTransferObjects.LeaderboardEntry,System.String> <>9__10_0
    static void _set_$$9__10_0(System::Func_2<BeatSaberAPI::DataTransferObjects::LeaderboardEntry*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0xF11DA0
    static void _cctor();
    // System.String <GetLeaderboardEntriesAsync>b__10_0(BeatSaberAPI.DataTransferObjects.LeaderboardEntry x)
    // Offset: 0xF11E10
    ::Il2CppString* $GetLeaderboardEntriesAsync$b__10_0(BeatSaberAPI::DataTransferObjects::LeaderboardEntry* x);
    // public System.Void .ctor()
    // Offset: 0xF11E08
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static HTTPLeaderboardsModel::$$c* New_ctor();
  }; // HTTPLeaderboardsModel/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HTTPLeaderboardsModel::$$c*, "", "HTTPLeaderboardsModel/<>c");
#pragma pack(pop)