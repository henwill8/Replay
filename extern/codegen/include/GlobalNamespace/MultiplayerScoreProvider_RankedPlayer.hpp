// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerScoreProvider
#include "GlobalNamespace/MultiplayerScoreProvider.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: StandardScoreSyncState
#include "GlobalNamespace/StandardScoreSyncState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerSyncState`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class MultiplayerSyncState_3;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerScoreProvider/RankedPlayer
  // [] Offset: FFFFFFFF
  class MultiplayerScoreProvider::RankedPlayer : public ::Il2CppObject/*, public System::IComparable_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>*/ {
    public:
    // private readonly MultiplayerSyncState`3<StandardScoreSyncState,StandardScoreSyncState/Score,System.Int32> _multiplayerSyncState
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState, GlobalNamespace::StandardScoreSyncState_Score, int>* multiplayerSyncState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState, GlobalNamespace::StandardScoreSyncState_Score, int>*) == 0x8);
    // private readonly MultiplayerScoreProvider _scoreSyncManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MultiplayerScoreProvider* scoreSyncManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerScoreProvider*) == 0x8);
    // Creating value type constructor for type: RankedPlayer
    RankedPlayer(GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState, GlobalNamespace::StandardScoreSyncState_Score, int>* multiplayerSyncState_ = {}, GlobalNamespace::MultiplayerScoreProvider* scoreSyncManager_ = {}) noexcept : multiplayerSyncState{multiplayerSyncState_}, scoreSyncManager{scoreSyncManager_} {}
    // Creating interface conversion operator: operator System::IComparable_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>
    operator System::IComparable_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>() noexcept {
      return *reinterpret_cast<System::IComparable_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>*>(this);
    }
    // public System.Single get_offsetSyncTime()
    // Offset: 0xF7F9C0
    float get_offsetSyncTime();
    // public System.Single get_lastScoreTime()
    // Offset: 0xF7FE48
    float get_lastScoreTime();
    // public System.Int32 get_score()
    // Offset: 0xF7F094
    int get_score();
    // public System.Boolean get_isConnected()
    // Offset: 0xF7F87C
    bool get_isConnected();
    // public System.Boolean get_isActiveOrFinished()
    // Offset: 0xF7FEA0
    bool get_isActiveOrFinished();
    // public System.Boolean get_isFailed()
    // Offset: 0xF7FD20
    bool get_isFailed();
    // public System.Boolean get_wasActiveAtLevelStart()
    // Offset: 0xF7F944
    bool get_wasActiveAtLevelStart();
    // public System.Boolean get_isMe()
    // Offset: 0xF7FECC
    bool get_isMe();
    // public System.String get_userId()
    // Offset: 0xF7FD80
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0xF7FF90
    ::Il2CppString* get_userName();
    // public System.Void .ctor(MultiplayerSyncState`3<StandardScoreSyncState,StandardScoreSyncState/Score,System.Int32> multiplayerSyncState, MultiplayerScoreProvider scoreSyncManager)
    // Offset: 0xF7F970
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerScoreProvider::RankedPlayer* New_ctor(GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState, GlobalNamespace::StandardScoreSyncState_Score, int>* multiplayerSyncState, GlobalNamespace::MultiplayerScoreProvider* scoreSyncManager) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerScoreProvider::RankedPlayer*, creationType>(multiplayerSyncState, scoreSyncManager)));
    }
    // public System.Int32 CompareTo(MultiplayerScoreProvider/RankedPlayer other)
    // Offset: 0xF80058
    // Implemented from: System.IComparable`1
    // Base method: System.Int32 IComparable_1::CompareTo(MultiplayerScoreProvider/RankedPlayer other)
    int CompareTo(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* other);
  }; // MultiplayerScoreProvider/RankedPlayer
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerScoreProvider::RankedPlayer), 24 + sizeof(GlobalNamespace::MultiplayerScoreProvider*)> __GlobalNamespace_MultiplayerScoreProvider_RankedPlayerSizeCheck;
  static_assert(sizeof(MultiplayerScoreProvider::RankedPlayer) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*, "", "MultiplayerScoreProvider/RankedPlayer");
