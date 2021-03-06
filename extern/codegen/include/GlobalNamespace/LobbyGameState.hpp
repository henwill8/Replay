// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerGameState
#include "GlobalNamespace/MultiplayerGameState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: LobbyGameState
  // [] Offset: FFFFFFFF
  class LobbyGameState : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD36030
    // private System.Action`1<MultiplayerGameState> gameStateDidChangeEvent
    // Size: 0x8
    // Offset: 0x10
    System::Action_1<GlobalNamespace::MultiplayerGameState>* gameStateDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MultiplayerGameState>*) == 0x8);
    // private MultiplayerGameState _gameState
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::MultiplayerGameState gameState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerGameState) == 0x4);
    // Creating value type constructor for type: LobbyGameState
    LobbyGameState(System::Action_1<GlobalNamespace::MultiplayerGameState>* gameStateDidChangeEvent_ = {}, GlobalNamespace::MultiplayerGameState gameState_ = {}) noexcept : gameStateDidChangeEvent{gameStateDidChangeEvent_}, gameState{gameState_} {}
    // public MultiplayerGameState get_gameState()
    // Offset: 0x10E63DC
    GlobalNamespace::MultiplayerGameState get_gameState();
    // public System.Void add_gameStateDidChangeEvent(System.Action`1<MultiplayerGameState> value)
    // Offset: 0x10E63E4
    void add_gameStateDidChangeEvent(System::Action_1<GlobalNamespace::MultiplayerGameState>* value);
    // public System.Void remove_gameStateDidChangeEvent(System.Action`1<MultiplayerGameState> value)
    // Offset: 0x10E6488
    void remove_gameStateDidChangeEvent(System::Action_1<GlobalNamespace::MultiplayerGameState>* value);
    // public System.Void SetGameState(MultiplayerGameState newGameState)
    // Offset: 0x10E652C
    void SetGameState(GlobalNamespace::MultiplayerGameState newGameState);
    // public System.Void SetGameStateWithoutNotification(MultiplayerGameState newGameState)
    // Offset: 0x10E65B0
    void SetGameStateWithoutNotification(GlobalNamespace::MultiplayerGameState newGameState);
    // public System.Void .ctor()
    // Offset: 0x10E65B8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LobbyGameState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LobbyGameState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LobbyGameState*, creationType>()));
    }
  }; // LobbyGameState
  #pragma pack(pop)
  static check_size<sizeof(LobbyGameState), 24 + sizeof(GlobalNamespace::MultiplayerGameState)> __GlobalNamespace_LobbyGameStateSizeCheck;
  static_assert(sizeof(LobbyGameState) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LobbyGameState*, "", "LobbyGameState");
