// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MockPlayer
#include "GlobalNamespace/MockPlayer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayServerFiniteStateMachine
  class GameplayServerFiniteStateMachine;
  // Forward declaring type: GameplayServerConfiguration
  struct GameplayServerConfiguration;
  // Forward declaring type: MockMultiplayerSessionManager
  class MockMultiplayerSessionManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MockServer
  class MockServer : public GlobalNamespace::MockPlayer {
    public:
    // private System.Action onJoin
    // Offset: 0x108
    System::Action* onJoin;
    // private GameplayServerFiniteStateMachine _fsm
    // Offset: 0x110
    GlobalNamespace::GameplayServerFiniteStateMachine* fsm;
    // public System.Void add_onJoin(System.Action value)
    // Offset: 0x1022A54
    void add_onJoin(System::Action* value);
    // public System.Void remove_onJoin(System.Action value)
    // Offset: 0x1022FD0
    void remove_onJoin(System::Action* value);
    // public System.Void SetConfiguration(GameplayServerConfiguration configuration)
    // Offset: 0x10263C4
    void SetConfiguration(GlobalNamespace::GameplayServerConfiguration configuration);
    // public override System.Boolean get_canJoin()
    // Offset: 0x102902C
    // Implemented from: MockPlayer
    // Base method: System.Boolean MockPlayer::get_canJoin()
    bool get_canJoin();
    // public System.Void .ctor()
    // Offset: 0x1029034
    // Implemented from: MockPlayer
    // Base method: System.Void MockPlayer::.ctor()
    // Base method: System.Void Object::.ctor()
    static MockServer* New_ctor();
    // public override System.Void Join()
    // Offset: 0x1029078
    // Implemented from: MockPlayer
    // Base method: System.Void MockPlayer::Join()
    void Join();
    // public override System.Void Join(System.String password)
    // Offset: 0x102908C
    // Implemented from: MockPlayer
    // Base method: System.Void MockPlayer::Join(System.String password)
    void Join(::Il2CppString* password);
    // public override System.Void Connect(MockMultiplayerSessionManager multiplayerSessionManager)
    // Offset: 0x10290A0
    // Implemented from: MockPlayer
    // Base method: System.Void MockPlayer::Connect(MockMultiplayerSessionManager multiplayerSessionManager)
    void Connect(GlobalNamespace::MockMultiplayerSessionManager* multiplayerSessionManager);
    // public override System.Void Disconnect()
    // Offset: 0x10291AC
    // Implemented from: MockPlayer
    // Base method: System.Void MockPlayer::Disconnect()
    void Disconnect();
  }; // MockServer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockServer*, "", "MockServer");
#pragma pack(pop)
