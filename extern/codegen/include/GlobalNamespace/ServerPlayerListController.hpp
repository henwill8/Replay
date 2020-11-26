// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameServerPlayersTableView
  class GameServerPlayersTableView;
  // Forward declaring type: ILobbyPlayersDataModel
  class ILobbyPlayersDataModel;
  // Forward declaring type: ILobbyStateDataModel
  class ILobbyStateDataModel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ServerPlayerListController
  class ServerPlayerListController : public HMUI::ViewController {
    public:
    // private GameServerPlayersTableView _gameServerPlayersTableView
    // Offset: 0x70
    GlobalNamespace::GameServerPlayersTableView* gameServerPlayersTableView;
    // private readonly ILobbyPlayersDataModel _lobbyPlayersDataModel
    // Offset: 0x78
    GlobalNamespace::ILobbyPlayersDataModel* lobbyPlayersDataModel;
    // private readonly ILobbyStateDataModel _lobbyStateDataModel
    // Offset: 0x80
    GlobalNamespace::ILobbyStateDataModel* lobbyStateDataModel;
    // private System.Action`3<System.String,BeatmapCharacteristicSO,BeatmapDifficulty> selectSuggestedBeatmapEvent
    // Offset: 0x88
    System::Action_3<::Il2CppString*, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::BeatmapDifficulty>* selectSuggestedBeatmapEvent;
    // private System.Action`1<GameplayModifiers> selectSuggestedGameplayModifiersEvent
    // Offset: 0x90
    System::Action_1<GlobalNamespace::GameplayModifiers*>* selectSuggestedGameplayModifiersEvent;
    // private System.Action`1<System.String> kickPlayerEvent
    // Offset: 0x98
    System::Action_1<::Il2CppString*>* kickPlayerEvent;
    // public System.Void add_selectSuggestedBeatmapEvent(System.Action`3<System.String,BeatmapCharacteristicSO,BeatmapDifficulty> value)
    // Offset: 0xFCB198
    void add_selectSuggestedBeatmapEvent(System::Action_3<::Il2CppString*, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::BeatmapDifficulty>* value);
    // public System.Void remove_selectSuggestedBeatmapEvent(System.Action`3<System.String,BeatmapCharacteristicSO,BeatmapDifficulty> value)
    // Offset: 0xFCB23C
    void remove_selectSuggestedBeatmapEvent(System::Action_3<::Il2CppString*, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::BeatmapDifficulty>* value);
    // public System.Void add_selectSuggestedGameplayModifiersEvent(System.Action`1<GameplayModifiers> value)
    // Offset: 0xFCB2E0
    void add_selectSuggestedGameplayModifiersEvent(System::Action_1<GlobalNamespace::GameplayModifiers*>* value);
    // public System.Void remove_selectSuggestedGameplayModifiersEvent(System.Action`1<GameplayModifiers> value)
    // Offset: 0xFCB384
    void remove_selectSuggestedGameplayModifiersEvent(System::Action_1<GlobalNamespace::GameplayModifiers*>* value);
    // public System.Void add_kickPlayerEvent(System.Action`1<System.String> value)
    // Offset: 0xFCB428
    void add_kickPlayerEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_kickPlayerEvent(System.Action`1<System.String> value)
    // Offset: 0xFCB4CC
    void remove_kickPlayerEvent(System::Action_1<::Il2CppString*>* value);
    // private System.Void HandleLobbyPlayersDataDidChange(System.String userId)
    // Offset: 0xFCBCFC
    void HandleLobbyPlayersDataDidChange(::Il2CppString* userId);
    // private System.Void HandleLobbyStateDataPlayerConnected(IConnectedPlayer connectedPlayer)
    // Offset: 0xFCBD00
    void HandleLobbyStateDataPlayerConnected(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // private System.Void HandleLobbyStateDataPlayerDisconnected(IConnectedPlayer connectedPlayer)
    // Offset: 0xFCBD04
    void HandleLobbyStateDataPlayerDisconnected(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // private System.Void SetDataToTable()
    // Offset: 0xFCB888
    void SetDataToTable();
    // private System.Void HandleSelectSuggestedLevel(System.String levelId, BeatmapCharacteristicSO beatmapCharacteristic, BeatmapDifficulty beatmapDifficulty)
    // Offset: 0xFCBD08
    void HandleSelectSuggestedLevel(::Il2CppString* levelId, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::BeatmapDifficulty beatmapDifficulty);
    // private System.Void HandleSelectSuggestedGameplayModifiers(GameplayModifiers gameplayModifiers)
    // Offset: 0xFCBD98
    void HandleSelectSuggestedGameplayModifiers(GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // private System.Void HandleKickPlayer(System.String userId)
    // Offset: 0xFCBE0C
    void HandleKickPlayer(::Il2CppString* userId);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0xFCB570
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0xFCB9E4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0xFCBE80
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ServerPlayerListController* New_ctor();
  }; // ServerPlayerListController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ServerPlayerListController*, "", "ServerPlayerListController");
#pragma pack(pop)
