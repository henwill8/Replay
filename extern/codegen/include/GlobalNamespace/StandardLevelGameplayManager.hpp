// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: ILevelEndActions
#include "GlobalNamespace/ILevelEndActions.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: GameSongController
  class GameSongController;
  // Forward declaring type: GameEnergyCounter
  class GameEnergyCounter;
  // Forward declaring type: PauseController
  class PauseController;
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
  // Autogenerated type: StandardLevelGameplayManager
  class StandardLevelGameplayManager : public UnityEngine::MonoBehaviour, public GlobalNamespace::ILevelEndActions {
    public:
    // Nested type: GlobalNamespace::StandardLevelGameplayManager::GameState
    struct GameState;
    // Nested type: GlobalNamespace::StandardLevelGameplayManager::$Start$d__13
    class $Start$d__13;
    // Autogenerated type: StandardLevelGameplayManager/GameState
    struct GameState : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: GameState
      constexpr GameState(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public StandardLevelGameplayManager/GameState Intro
      static constexpr const int Intro = 0;
      // Get static field: static public StandardLevelGameplayManager/GameState Intro
      static GlobalNamespace::StandardLevelGameplayManager::GameState _get_Intro();
      // Set static field: static public StandardLevelGameplayManager/GameState Intro
      static void _set_Intro(GlobalNamespace::StandardLevelGameplayManager::GameState value);
      // static field const value: static public StandardLevelGameplayManager/GameState Playing
      static constexpr const int Playing = 1;
      // Get static field: static public StandardLevelGameplayManager/GameState Playing
      static GlobalNamespace::StandardLevelGameplayManager::GameState _get_Playing();
      // Set static field: static public StandardLevelGameplayManager/GameState Playing
      static void _set_Playing(GlobalNamespace::StandardLevelGameplayManager::GameState value);
      // static field const value: static public StandardLevelGameplayManager/GameState Paused
      static constexpr const int Paused = 2;
      // Get static field: static public StandardLevelGameplayManager/GameState Paused
      static GlobalNamespace::StandardLevelGameplayManager::GameState _get_Paused();
      // Set static field: static public StandardLevelGameplayManager/GameState Paused
      static void _set_Paused(GlobalNamespace::StandardLevelGameplayManager::GameState value);
      // static field const value: static public StandardLevelGameplayManager/GameState Finished
      static constexpr const int Finished = 3;
      // Get static field: static public StandardLevelGameplayManager/GameState Finished
      static GlobalNamespace::StandardLevelGameplayManager::GameState _get_Finished();
      // Set static field: static public StandardLevelGameplayManager/GameState Finished
      static void _set_Finished(GlobalNamespace::StandardLevelGameplayManager::GameState value);
      // static field const value: static public StandardLevelGameplayManager/GameState Failed
      static constexpr const int Failed = 4;
      // Get static field: static public StandardLevelGameplayManager/GameState Failed
      static GlobalNamespace::StandardLevelGameplayManager::GameState _get_Failed();
      // Set static field: static public StandardLevelGameplayManager/GameState Failed
      static void _set_Failed(GlobalNamespace::StandardLevelGameplayManager::GameState value);
    }; // StandardLevelGameplayManager/GameState
    // private GameScenesManager _gameScenesManager
    // Offset: 0x18
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // private GameSongController _gameSongController
    // Offset: 0x20
    GlobalNamespace::GameSongController* gameSongController;
    // private GameEnergyCounter _gameEnergyCounter
    // Offset: 0x28
    GlobalNamespace::GameEnergyCounter* gameEnergyCounter;
    // private PauseController _pauseController
    // Offset: 0x30
    GlobalNamespace::PauseController* pauseController;
    // private System.Action levelFailedEvent
    // Offset: 0x38
    System::Action* levelFailedEvent;
    // private System.Action levelFinishedEvent
    // Offset: 0x40
    System::Action* levelFinishedEvent;
    // private StandardLevelGameplayManager/GameState _gameState
    // Offset: 0x48
    GlobalNamespace::StandardLevelGameplayManager::GameState gameState;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0xBA43BC
    void Awake();
    // private System.Collections.IEnumerator Start()
    // Offset: 0xBA43C4
    System::Collections::IEnumerator* Start();
    // protected System.Void OnDestroy()
    // Offset: 0xBA446C
    void OnDestroy();
    // private System.Void HandleGameEnergyDidReach0()
    // Offset: 0xBA46AC
    void HandleGameEnergyDidReach0();
    // private System.Void HandleSongDidFinish()
    // Offset: 0xBA46DC
    void HandleSongDidFinish();
    // private System.Void HandlePauseControllerCanPause(System.Action`1<System.Boolean> canPause)
    // Offset: 0xBA470C
    void HandlePauseControllerCanPause(System::Action_1<bool>* canPause);
    // private System.Void HandlePauseControllerDidPause()
    // Offset: 0xBA4788
    void HandlePauseControllerDidPause();
    // private System.Void HandlePauseControllerDidResume()
    // Offset: 0xBA47A0
    void HandlePauseControllerDidResume();
    // public System.Void add_levelFailedEvent(System.Action value)
    // Offset: 0xBA412C
    // Implemented from: ILevelEndActions
    // Base method: System.Void ILevelEndActions::add_levelFailedEvent(System.Action value)
    void add_levelFailedEvent(System::Action* value);
    // public System.Void remove_levelFailedEvent(System.Action value)
    // Offset: 0xBA41D0
    // Implemented from: ILevelEndActions
    // Base method: System.Void ILevelEndActions::remove_levelFailedEvent(System.Action value)
    void remove_levelFailedEvent(System::Action* value);
    // public System.Void add_levelFinishedEvent(System.Action value)
    // Offset: 0xBA4274
    // Implemented from: ILevelEndActions
    // Base method: System.Void ILevelEndActions::add_levelFinishedEvent(System.Action value)
    void add_levelFinishedEvent(System::Action* value);
    // public System.Void remove_levelFinishedEvent(System.Action value)
    // Offset: 0xBA4318
    // Implemented from: ILevelEndActions
    // Base method: System.Void ILevelEndActions::remove_levelFinishedEvent(System.Action value)
    void remove_levelFinishedEvent(System::Action* value);
    // public System.Void .ctor()
    // Offset: 0xBA47B8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static StandardLevelGameplayManager* New_ctor();
  }; // StandardLevelGameplayManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelGameplayManager*, "", "StandardLevelGameplayManager");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelGameplayManager::GameState, "", "StandardLevelGameplayManager/GameState");
#pragma pack(pop)
