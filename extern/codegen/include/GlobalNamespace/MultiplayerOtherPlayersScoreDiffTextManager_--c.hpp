// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerOtherPlayersScoreDiffTextManager
#include "GlobalNamespace/MultiplayerOtherPlayersScoreDiffTextManager.hpp"
// Including type: MultiplayerScoreProvider
#include "GlobalNamespace/MultiplayerScoreProvider.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerOtherPlayersScoreDiffTextManager/<>c
  class MultiplayerOtherPlayersScoreDiffTextManager::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly MultiplayerOtherPlayersScoreDiffTextManager/<>c <>9
    static GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::$$c* _get_$$9();
    // Set static field: static public readonly MultiplayerOtherPlayersScoreDiffTextManager/<>c <>9
    static void _set_$$9(GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::$$c* value);
    // Get static field: static public System.Func`2<MultiplayerScoreProvider/RankedPlayer,System.Boolean> <>9__10_0
    static System::Func_2<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*, bool>* _get_$$9__10_0();
    // Set static field: static public System.Func`2<MultiplayerScoreProvider/RankedPlayer,System.Boolean> <>9__10_0
    static void _set_$$9__10_0(System::Func_2<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0xF79180
    static void _cctor();
    // System.Boolean <Update>b__10_0(MultiplayerScoreProvider/RankedPlayer p)
    // Offset: 0xF791F0
    bool $Update$b__10_0(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* p);
    // public System.Void .ctor()
    // Offset: 0xF791E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MultiplayerOtherPlayersScoreDiffTextManager::$$c* New_ctor();
  }; // MultiplayerOtherPlayersScoreDiffTextManager/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::$$c*, "", "MultiplayerOtherPlayersScoreDiffTextManager/<>c");
#pragma pack(pop)
