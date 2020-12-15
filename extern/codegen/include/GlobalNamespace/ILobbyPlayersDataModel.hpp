// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IReadOnlyDictionary_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ILobbyPlayerDataModel
  class ILobbyPlayerDataModel;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ILobbyPlayersDataModel
  class ILobbyPlayersDataModel {
    public:
    // public System.Void add_didChangeEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void add_didChangeEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_didChangeEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void remove_didChangeEvent(System::Action_1<::Il2CppString*>* value);
    // public System.String get_localUserId()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_localUserId();
    // public System.String get_hostUserId()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_hostUserId();
    // public System.Collections.Generic.IReadOnlyDictionary`2<System.String,ILobbyPlayerDataModel> get_playersData()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IReadOnlyDictionary_2<::Il2CppString*, GlobalNamespace::ILobbyPlayerDataModel*>* get_playersData();
    // public ILobbyPlayerDataModel GetLobbyPlayerDataModel(System.String userId)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::ILobbyPlayerDataModel* GetLobbyPlayerDataModel(::Il2CppString* userId);
    // public IPreviewBeatmapLevel GetPlayerBeatmapLevel(System.String userId)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::IPreviewBeatmapLevel* GetPlayerBeatmapLevel(::Il2CppString* userId);
    // public BeatmapDifficulty GetPlayerBeatmapDifficulty(System.String userId)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::BeatmapDifficulty GetPlayerBeatmapDifficulty(::Il2CppString* userId);
    // public BeatmapCharacteristicSO GetPlayerBeatmapCharacteristic(System.String userId)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::BeatmapCharacteristicSO* GetPlayerBeatmapCharacteristic(::Il2CppString* userId);
    // public GameplayModifiers GetPlayerGameplayModifiers(System.String userId)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::GameplayModifiers* GetPlayerGameplayModifiers(::Il2CppString* userId);
    // public System.Boolean GetPlayerIsActive(System.String userId)
    // Offset: 0xFFFFFFFF
    bool GetPlayerIsActive(::Il2CppString* userId);
    // public System.Boolean GetPlayerIsReady(System.String userId)
    // Offset: 0xFFFFFFFF
    bool GetPlayerIsReady(::Il2CppString* userId);
    // public System.Boolean GetPlayerIsInLobby(System.String userId)
    // Offset: 0xFFFFFFFF
    bool GetPlayerIsInLobby(::Il2CppString* userId);
    // public System.Void SetLocalPlayerBeatmapLevel(System.String levelId, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO characteristic)
    // Offset: 0xFFFFFFFF
    void SetLocalPlayerBeatmapLevel(::Il2CppString* levelId, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* characteristic);
    // public System.Void ClearLocalPlayerBeatmapLevel()
    // Offset: 0xFFFFFFFF
    void ClearLocalPlayerBeatmapLevel();
    // public System.Void SetLocalPlayerGameplayModifiers(GameplayModifiers modifiers)
    // Offset: 0xFFFFFFFF
    void SetLocalPlayerGameplayModifiers(GlobalNamespace::GameplayModifiers* modifiers);
    // public System.Void ClearLocalPlayerGameplayModifiers()
    // Offset: 0xFFFFFFFF
    void ClearLocalPlayerGameplayModifiers();
    // public System.Void SetLocalPlayerIsActive(System.Boolean isActive)
    // Offset: 0xFFFFFFFF
    void SetLocalPlayerIsActive(bool isActive);
    // public System.Void SetLocalPlayerIsReady(System.Boolean isReady)
    // Offset: 0xFFFFFFFF
    void SetLocalPlayerIsReady(bool isReady);
    // public System.Void SetLocalPlayerIsInLobby(System.Boolean isInLobby)
    // Offset: 0xFFFFFFFF
    void SetLocalPlayerIsInLobby(bool isInLobby);
    // public System.Void ClearData()
    // Offset: 0xFFFFFFFF
    void ClearData();
    // public System.Void ClearRecommendations()
    // Offset: 0xFFFFFFFF
    void ClearRecommendations();
    // public System.Void Activate()
    // Offset: 0xFFFFFFFF
    void Activate();
    // public System.Void Deactivate()
    // Offset: 0xFFFFFFFF
    void Deactivate();
  }; // ILobbyPlayersDataModel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ILobbyPlayersDataModel*, "", "ILobbyPlayersDataModel");
#pragma pack(pop)