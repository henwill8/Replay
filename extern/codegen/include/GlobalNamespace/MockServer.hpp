// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MockPlayer
#include "GlobalNamespace/MockPlayer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x118
  #pragma pack(push, 1)
  // Autogenerated type: MockServer
  // [] Offset: FFFFFFFF
  class MockServer : public GlobalNamespace::MockPlayer {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD3BC74
    // private System.Action onJoin
    // Size: 0x8
    // Offset: 0x108
    System::Action* onJoin;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private GameplayServerFiniteStateMachine _fsm
    // Size: 0x8
    // Offset: 0x110
    GlobalNamespace::GameplayServerFiniteStateMachine* fsm;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerFiniteStateMachine*) == 0x8);
    // Creating value type constructor for type: MockServer
    MockServer(System::Action* onJoin_ = {}, GlobalNamespace::GameplayServerFiniteStateMachine* fsm_ = {}) noexcept : onJoin{onJoin_}, fsm{fsm_} {}
    // public System.Void add_onJoin(System.Action value)
    // Offset: 0x101442C
    void add_onJoin(System::Action* value);
    // public System.Void remove_onJoin(System.Action value)
    // Offset: 0x10144D4
    void remove_onJoin(System::Action* value);
    // public System.Void SetConfiguration(GameplayServerConfiguration configuration)
    // Offset: 0x10145FC
    void SetConfiguration(GlobalNamespace::GameplayServerConfiguration configuration);
    // public override System.Boolean get_canJoin()
    // Offset: 0x101457C
    // Implemented from: MockPlayer
    // Base method: System.Boolean MockPlayer::get_canJoin()
    bool get_canJoin();
    // public System.Void .ctor()
    // Offset: 0x1014584
    // Implemented from: MockPlayer
    // Base method: System.Void MockPlayer::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockServer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockServer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockServer*, creationType>()));
    }
    // public override System.Void Join()
    // Offset: 0x10145D4
    // Implemented from: MockPlayer
    // Base method: System.Void MockPlayer::Join()
    void Join();
    // public override System.Void Join(System.String password)
    // Offset: 0x10145E8
    // Implemented from: MockPlayer
    // Base method: System.Void MockPlayer::Join(System.String password)
    void Join(::Il2CppString* password);
    // public override System.Void Connect(MockMultiplayerSessionManager multiplayerSessionManager)
    // Offset: 0x1014618
    // Implemented from: MockPlayer
    // Base method: System.Void MockPlayer::Connect(MockMultiplayerSessionManager multiplayerSessionManager)
    void Connect(GlobalNamespace::MockMultiplayerSessionManager* multiplayerSessionManager);
    // public override System.Void Disconnect()
    // Offset: 0x1014728
    // Implemented from: MockPlayer
    // Base method: System.Void MockPlayer::Disconnect()
    void Disconnect();
  }; // MockServer
  #pragma pack(pop)
  static check_size<sizeof(MockServer), 272 + sizeof(GlobalNamespace::GameplayServerFiniteStateMachine*)> __GlobalNamespace_MockServerSizeCheck;
  static_assert(sizeof(MockServer) == 0x118);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockServer*, "", "MockServer");
