// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IGameplayRpcManager
  class IGameplayRpcManager;
  // Forward declaring type: PlayersAtGameStartModel
  class PlayersAtGameStartModel;
  // Forward declaring type: SongStartHandler
  class SongStartHandler;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SongStartSyncController
  class SongStartSyncController : public UnityEngine::MonoBehaviour {
    public:
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Offset: 0x18
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // private readonly IGameplayRpcManager _gameplayRpcManager
    // Offset: 0x20
    GlobalNamespace::IGameplayRpcManager* gameplayRpcManager;
    // private readonly PlayersAtGameStartModel _playersAtGameStartModel
    // Offset: 0x28
    GlobalNamespace::PlayersAtGameStartModel* playersAtGameStartModel;
    // private System.Single _waitStartTime
    // Offset: 0x30
    float waitStartTime;
    // private System.Boolean _songStarted
    // Offset: 0x34
    bool songStarted;
    // private System.Single _startTime
    // Offset: 0x38
    float startTime;
    // private SongStartHandler _songStartHandler
    // Offset: 0x40
    GlobalNamespace::SongStartHandler* songStartHandler;
    // private System.Action syncStartFailedEvent
    // Offset: 0x48
    System::Action* syncStartFailedEvent;
    // private System.Action`1<System.Single> syncStartSuccessEvent
    // Offset: 0x50
    System::Action_1<float>* syncStartSuccessEvent;
    // private System.Action`1<System.Single> syncResumeEvent
    // Offset: 0x58
    System::Action_1<float>* syncResumeEvent;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kAudioLoadTimeoutForceStart
    static constexpr const float kAudioLoadTimeoutForceStart = 10;
    // Get static field: static private System.Single kAudioLoadTimeoutForceStart
    static float _get_kAudioLoadTimeoutForceStart();
    // Set static field: static private System.Single kAudioLoadTimeoutForceStart
    static void _set_kAudioLoadTimeoutForceStart(float value);
    // static field const value: static private System.Single kAudioLoadTimeout
    static constexpr const float kAudioLoadTimeout = 15;
    // Get static field: static private System.Single kAudioLoadTimeout
    static float _get_kAudioLoadTimeout();
    // Set static field: static private System.Single kAudioLoadTimeout
    static void _set_kAudioLoadTimeout(float value);
    // public System.Boolean get_isSongStarted()
    // Offset: 0xF3B80C
    bool get_isSongStarted();
    // public System.Single get_songStartSyncTime()
    // Offset: 0xF3B814
    float get_songStartSyncTime();
    // public System.Void add_syncStartFailedEvent(System.Action value)
    // Offset: 0xF3B830
    void add_syncStartFailedEvent(System::Action* value);
    // public System.Void remove_syncStartFailedEvent(System.Action value)
    // Offset: 0xF3B8D4
    void remove_syncStartFailedEvent(System::Action* value);
    // public System.Void add_syncStartSuccessEvent(System.Action`1<System.Single> value)
    // Offset: 0xF3B978
    void add_syncStartSuccessEvent(System::Action_1<float>* value);
    // public System.Void remove_syncStartSuccessEvent(System.Action`1<System.Single> value)
    // Offset: 0xF3BA1C
    void remove_syncStartSuccessEvent(System::Action_1<float>* value);
    // public System.Void add_syncResumeEvent(System.Action`1<System.Single> value)
    // Offset: 0xF3BAC0
    void add_syncResumeEvent(System::Action_1<float>* value);
    // public System.Void remove_syncResumeEvent(System.Action`1<System.Single> value)
    // Offset: 0xF3BB64
    void remove_syncResumeEvent(System::Action_1<float>* value);
    // protected System.Void Start()
    // Offset: 0xF3BC08
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xF3BC14
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0xF3BC28
    void Update();
    // protected System.Void OnApplicationPause(System.Boolean pauseStatus)
    // Offset: 0xF3BD5C
    void OnApplicationPause(bool pauseStatus);
    // public System.Void StartSong()
    // Offset: 0xF3BDE8
    void StartSong();
    // private System.Void HandleSetSongStartSyncTime(System.Single songStartSyncTime)
    // Offset: 0xF3BF40
    void HandleSetSongStartSyncTime(float songStartSyncTime);
    // public System.Void .ctor()
    // Offset: 0xF3BFC4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SongStartSyncController* New_ctor();
  }; // SongStartSyncController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongStartSyncController*, "", "SongStartSyncController");
#pragma pack(pop)
