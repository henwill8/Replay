// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HostLobbySetupViewController
#include "GlobalNamespace/HostLobbySetupViewController.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: HostLobbySetupViewController/CannotStartGameReason
  struct HostLobbySetupViewController::CannotStartGameReason : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: CannotStartGameReason
    constexpr CannotStartGameReason(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HostLobbySetupViewController/CannotStartGameReason None
    static constexpr const int None = 0;
    // Get static field: static public HostLobbySetupViewController/CannotStartGameReason None
    static GlobalNamespace::HostLobbySetupViewController::CannotStartGameReason _get_None();
    // Set static field: static public HostLobbySetupViewController/CannotStartGameReason None
    static void _set_None(GlobalNamespace::HostLobbySetupViewController::CannotStartGameReason value);
    // static field const value: static public HostLobbySetupViewController/CannotStartGameReason AllPlayersSpectating
    static constexpr const int AllPlayersSpectating = 1;
    // Get static field: static public HostLobbySetupViewController/CannotStartGameReason AllPlayersSpectating
    static GlobalNamespace::HostLobbySetupViewController::CannotStartGameReason _get_AllPlayersSpectating();
    // Set static field: static public HostLobbySetupViewController/CannotStartGameReason AllPlayersSpectating
    static void _set_AllPlayersSpectating(GlobalNamespace::HostLobbySetupViewController::CannotStartGameReason value);
    // static field const value: static public HostLobbySetupViewController/CannotStartGameReason NoSongSelected
    static constexpr const int NoSongSelected = 2;
    // Get static field: static public HostLobbySetupViewController/CannotStartGameReason NoSongSelected
    static GlobalNamespace::HostLobbySetupViewController::CannotStartGameReason _get_NoSongSelected();
    // Set static field: static public HostLobbySetupViewController/CannotStartGameReason NoSongSelected
    static void _set_NoSongSelected(GlobalNamespace::HostLobbySetupViewController::CannotStartGameReason value);
    // static field const value: static public HostLobbySetupViewController/CannotStartGameReason AllPlayersNotInLobby
    static constexpr const int AllPlayersNotInLobby = 3;
    // Get static field: static public HostLobbySetupViewController/CannotStartGameReason AllPlayersNotInLobby
    static GlobalNamespace::HostLobbySetupViewController::CannotStartGameReason _get_AllPlayersNotInLobby();
    // Set static field: static public HostLobbySetupViewController/CannotStartGameReason AllPlayersNotInLobby
    static void _set_AllPlayersNotInLobby(GlobalNamespace::HostLobbySetupViewController::CannotStartGameReason value);
    // static field const value: static public HostLobbySetupViewController/CannotStartGameReason DoNotOwnSong
    static constexpr const int DoNotOwnSong = 4;
    // Get static field: static public HostLobbySetupViewController/CannotStartGameReason DoNotOwnSong
    static GlobalNamespace::HostLobbySetupViewController::CannotStartGameReason _get_DoNotOwnSong();
    // Set static field: static public HostLobbySetupViewController/CannotStartGameReason DoNotOwnSong
    static void _set_DoNotOwnSong(GlobalNamespace::HostLobbySetupViewController::CannotStartGameReason value);
  }; // HostLobbySetupViewController/CannotStartGameReason
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HostLobbySetupViewController::CannotStartGameReason, "", "HostLobbySetupViewController/CannotStartGameReason");
#pragma pack(pop)