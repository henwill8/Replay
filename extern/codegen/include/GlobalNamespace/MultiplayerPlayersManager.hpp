// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IMultiplayerLevelEndActionsPublisher
#include "GlobalNamespace/IMultiplayerLevelEndActionsPublisher.hpp"
// Including type: MultiplayerLocalActivePlayerFacade
#include "GlobalNamespace/MultiplayerLocalActivePlayerFacade.hpp"
// Including type: MultiplayerLocalInactivePlayerFacade
#include "GlobalNamespace/MultiplayerLocalInactivePlayerFacade.hpp"
// Including type: MultiplayerConnectedPlayerFacade
#include "GlobalNamespace/MultiplayerConnectedPlayerFacade.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: BeatmapObjectSpawnCenter
  class BeatmapObjectSpawnCenter;
  // Forward declaring type: MultiplayerLayoutProvider
  class MultiplayerLayoutProvider;
  // Forward declaring type: FadeInOutController
  class FadeInOutController;
  // Forward declaring type: PlayersAtGameStartModel
  class PlayersAtGameStartModel;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Skipping declaration: IStartSeekSongControllerProvider because it is already included!
  // Forward declaring type: MultiplayerPlayerStartState
  struct MultiplayerPlayerStartState;
  // Forward declaring type: MultiplayerPlayerLayout
  struct MultiplayerPlayerLayout;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerPlayersManager
  class MultiplayerPlayersManager : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IMultiplayerLevelEndActionsPublisher*/ {
    public:
    // Nested type: GlobalNamespace::MultiplayerPlayersManager::$SwitchLocalPlayerToInactiveCoroutine$d__52
    class $SwitchLocalPlayerToInactiveCoroutine$d__52;
    // private MultiplayerLocalActivePlayerFacade _activeLocalPlayerControllerPrefab
    // Offset: 0x18
    GlobalNamespace::MultiplayerLocalActivePlayerFacade* activeLocalPlayerControllerPrefab;
    // private MultiplayerLocalActivePlayerFacade _activeLocalPlayerDuelControllerPrefab
    // Offset: 0x20
    GlobalNamespace::MultiplayerLocalActivePlayerFacade* activeLocalPlayerDuelControllerPrefab;
    // private MultiplayerLocalInactivePlayerFacade _inactiveLocalPlayerControllerPrefab
    // Offset: 0x28
    GlobalNamespace::MultiplayerLocalInactivePlayerFacade* inactiveLocalPlayerControllerPrefab;
    // private MultiplayerConnectedPlayerFacade _connectedPlayerControllerPrefab
    // Offset: 0x30
    GlobalNamespace::MultiplayerConnectedPlayerFacade* connectedPlayerControllerPrefab;
    // private MultiplayerConnectedPlayerFacade _connectedPlayerDuelControllerPrefab
    // Offset: 0x38
    GlobalNamespace::MultiplayerConnectedPlayerFacade* connectedPlayerDuelControllerPrefab;
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Offset: 0x40
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // private readonly BeatmapObjectSpawnCenter _beatmapObjectSpawnCenter
    // Offset: 0x48
    GlobalNamespace::BeatmapObjectSpawnCenter* beatmapObjectSpawnCenter;
    // private readonly MultiplayerLayoutProvider _layoutProvider
    // Offset: 0x50
    GlobalNamespace::MultiplayerLayoutProvider* layoutProvider;
    // private readonly FadeInOutController _fadeInOutController
    // Offset: 0x58
    GlobalNamespace::FadeInOutController* fadeInOutController;
    // private readonly PlayersAtGameStartModel _playersAtGameStartModel
    // Offset: 0x60
    GlobalNamespace::PlayersAtGameStartModel* playersAtGameStartModel;
    // private readonly Zenject.DiContainer _container
    // Offset: 0x68
    Zenject::DiContainer* container;
    // private System.Boolean <playerSpawningFinished>k__BackingField
    // Offset: 0x70
    bool playerSpawningFinished;
    // private System.Action playerSpawningDidFinishEvent
    // Offset: 0x78
    System::Action* playerSpawningDidFinishEvent;
    // private System.Action didSwitchPlayerToInactiveEvent
    // Offset: 0x80
    System::Action* didSwitchPlayerToInactiveEvent;
    // private System.Action`1<LevelCompletionResults> playerDidFinishEvent
    // Offset: 0x88
    System::Action_1<GlobalNamespace::LevelCompletionResults*>* playerDidFinishEvent;
    // private System.Action`1<PlayerNetworkFailReason> playerNetworkDidFailedEvent
    // Offset: 0x90
    System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* playerNetworkDidFailedEvent;
    // private MultiplayerLocalActivePlayerFacade _activeLocalPlayerFacade
    // Offset: 0x98
    GlobalNamespace::MultiplayerLocalActivePlayerFacade* activeLocalPlayerFacade;
    // private MultiplayerLocalInactivePlayerFacade _inactiveLocalPlayerFacade
    // Offset: 0xA0
    GlobalNamespace::MultiplayerLocalInactivePlayerFacade* inactiveLocalPlayerFacade;
    // private IMultiplayerLevelEndActionsPublisher _currentEventsPublisher
    // Offset: 0xA8
    GlobalNamespace::IMultiplayerLevelEndActionsPublisher* currentEventsPublisher;
    // private IStartSeekSongControllerProvider _currentStartSeekSongControllerProvider
    // Offset: 0xB0
    GlobalNamespace::IStartSeekSongControllerProvider* currentStartSeekSongControllerProvider;
    // private MultiplayerLocalActivePlayerFacade/Factory _activeLocalPlayerFactory
    // Offset: 0xB8
    GlobalNamespace::MultiplayerLocalActivePlayerFacade::Factory* activeLocalPlayerFactory;
    // private MultiplayerLocalInactivePlayerFacade/Factory _inactiveLocalPlayerFactory
    // Offset: 0xC0
    GlobalNamespace::MultiplayerLocalInactivePlayerFacade::Factory* inactiveLocalPlayerFactory;
    // private MultiplayerConnectedPlayerFacade/Factory _connectedPlayerFactory
    // Offset: 0xC8
    GlobalNamespace::MultiplayerConnectedPlayerFacade::Factory* connectedPlayerFactory;
    // private readonly System.Collections.Generic.Dictionary`2<System.String,MultiplayerConnectedPlayerFacade> _connectedPlayerControllersMap
    // Offset: 0xD0
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerConnectedPlayerFacade*>* connectedPlayerControllersMap;
    // private readonly System.Collections.Generic.Dictionary`2<System.String,System.Single> _connectedPlayerCenterFacingRotationsMap
    // Offset: 0xD8
    System::Collections::Generic::Dictionary_2<::Il2CppString*, float>* connectedPlayerCenterFacingRotationsMap;
    // private System.Collections.Generic.List`1<IConnectedPlayer> _allActivePlayers
    // Offset: 0xE0
    System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>* allActivePlayers;
    // Creating interface conversion operator: operator GlobalNamespace::IMultiplayerLevelEndActionsPublisher
    operator GlobalNamespace::IMultiplayerLevelEndActionsPublisher() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMultiplayerLevelEndActionsPublisher*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_playerSpawningFinished()
    // Offset: 0xF7B754
    bool get_playerSpawningFinished();
    // private System.Void set_playerSpawningFinished(System.Boolean value)
    // Offset: 0xF7B75C
    void set_playerSpawningFinished(bool value);
    // public System.Collections.Generic.IReadOnlyList`1<IConnectedPlayer> get_allActivePlayers()
    // Offset: 0xF7B768
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer*>* get_allActivePlayers();
    // public IStartSeekSongControllerProvider get_localPlayerStartSeekSongController()
    // Offset: 0xF7B770
    GlobalNamespace::IStartSeekSongControllerProvider* get_localPlayerStartSeekSongController();
    // public MultiplayerLocalActivePlayerFacade get_activeLocalPlayerFacade()
    // Offset: 0xF7B778
    GlobalNamespace::MultiplayerLocalActivePlayerFacade* get_activeLocalPlayerFacade();
    // public MultiplayerLocalInactivePlayerFacade get_inactivePlayerFacade()
    // Offset: 0xF7B780
    GlobalNamespace::MultiplayerLocalInactivePlayerFacade* get_inactivePlayerFacade();
    // public UnityEngine.Transform get_localPlayerTransform()
    // Offset: 0xF77FA4
    UnityEngine::Transform* get_localPlayerTransform();
    // public System.Void add_playerSpawningDidFinishEvent(System.Action value)
    // Offset: 0xF7B788
    void add_playerSpawningDidFinishEvent(System::Action* value);
    // public System.Void remove_playerSpawningDidFinishEvent(System.Action value)
    // Offset: 0xF7B82C
    void remove_playerSpawningDidFinishEvent(System::Action* value);
    // public System.Void add_didSwitchPlayerToInactiveEvent(System.Action value)
    // Offset: 0xF7B8D0
    void add_didSwitchPlayerToInactiveEvent(System::Action* value);
    // public System.Void remove_didSwitchPlayerToInactiveEvent(System.Action value)
    // Offset: 0xF7B974
    void remove_didSwitchPlayerToInactiveEvent(System::Action* value);
    // public System.Void SpawnPlayers(MultiplayerPlayerStartState localPlayerStartState)
    // Offset: 0xF7BCA8
    void SpawnPlayers(GlobalNamespace::MultiplayerPlayerStartState localPlayerStartState);
    // public System.Boolean TryGetConnectedPlayerController(System.String userId, out MultiplayerConnectedPlayerFacade connectedPlayerController)
    // Offset: 0xF78AE4
    bool TryGetConnectedPlayerController(::Il2CppString* userId, GlobalNamespace::MultiplayerConnectedPlayerFacade*& connectedPlayerController);
    // public System.Boolean TryGetConnectedCenterFacingRotation(System.String userId, out System.Single centerFacingRotation)
    // Offset: 0xF7C608
    bool TryGetConnectedCenterFacingRotation(::Il2CppString* userId, float& centerFacingRotation);
    // public System.Void SwitchLocalPlayerToInactive()
    // Offset: 0xF6D014
    void SwitchLocalPlayerToInactive();
    // public System.Void ReportLocalPlayerNetworkDidFailed(PlayerNetworkFailReason failReason)
    // Offset: 0xF7C6F4
    void ReportLocalPlayerNetworkDidFailed(GlobalNamespace::PlayerNetworkFailReason failReason);
    // private System.Collections.IEnumerator SwitchLocalPlayerToInactiveCoroutine()
    // Offset: 0xF7C678
    System::Collections::IEnumerator* SwitchLocalPlayerToInactiveCoroutine();
    // private System.Void BindPlayerFactories(MultiplayerPlayerLayout layout)
    // Offset: 0xF7C418
    void BindPlayerFactories(GlobalNamespace::MultiplayerPlayerLayout layout);
    // private System.Void HandlePlayerDidFinish(LevelCompletionResults levelCompletionResults)
    // Offset: 0xF7C794
    void HandlePlayerDidFinish(GlobalNamespace::LevelCompletionResults* levelCompletionResults);
    // private System.Void HandlePlayerNetworkDidFailed(PlayerNetworkFailReason failReason)
    // Offset: 0xF7C808
    void HandlePlayerNetworkDidFailed(GlobalNamespace::PlayerNetworkFailReason failReason);
    // public System.Void add_playerDidFinishEvent(System.Action`1<LevelCompletionResults> value)
    // Offset: 0xF7BA18
    // Implemented from: IMultiplayerLevelEndActionsPublisher
    // Base method: System.Void IMultiplayerLevelEndActionsPublisher::add_playerDidFinishEvent(System.Action`1<LevelCompletionResults> value)
    void add_playerDidFinishEvent(System::Action_1<GlobalNamespace::LevelCompletionResults*>* value);
    // public System.Void remove_playerDidFinishEvent(System.Action`1<LevelCompletionResults> value)
    // Offset: 0xF7BABC
    // Implemented from: IMultiplayerLevelEndActionsPublisher
    // Base method: System.Void IMultiplayerLevelEndActionsPublisher::remove_playerDidFinishEvent(System.Action`1<LevelCompletionResults> value)
    void remove_playerDidFinishEvent(System::Action_1<GlobalNamespace::LevelCompletionResults*>* value);
    // public System.Void add_playerNetworkDidFailedEvent(System.Action`1<PlayerNetworkFailReason> value)
    // Offset: 0xF7BB60
    // Implemented from: IMultiplayerLevelEndActionsPublisher
    // Base method: System.Void IMultiplayerLevelEndActionsPublisher::add_playerNetworkDidFailedEvent(System.Action`1<PlayerNetworkFailReason> value)
    void add_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* value);
    // public System.Void remove_playerNetworkDidFailedEvent(System.Action`1<PlayerNetworkFailReason> value)
    // Offset: 0xF7BC04
    // Implemented from: IMultiplayerLevelEndActionsPublisher
    // Base method: System.Void IMultiplayerLevelEndActionsPublisher::remove_playerNetworkDidFailedEvent(System.Action`1<PlayerNetworkFailReason> value)
    void remove_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* value);
    // public System.Void .ctor()
    // Offset: 0xF7C80C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerPlayersManager* New_ctor();
  }; // MultiplayerPlayersManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerPlayersManager*, "", "MultiplayerPlayersManager");
#pragma pack(pop)