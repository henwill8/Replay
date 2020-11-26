// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.RoomJoinPolicy
#include "Oculus/Platform/RoomJoinPolicy.hpp"
// Including type: Oculus.Platform.RoomJoinability
#include "Oculus/Platform/RoomJoinability.hpp"
// Including type: Oculus.Platform.RoomType
#include "Oculus/Platform/RoomType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: UserList
  class UserList;
  // Forward declaring type: MatchmakingEnqueuedUserList
  class MatchmakingEnqueuedUserList;
  // Forward declaring type: User
  class User;
  // Forward declaring type: TeamList
  class TeamList;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.Room
  class Room : public ::Il2CppObject {
    public:
    // public readonly System.UInt64 ApplicationID
    // Offset: 0x10
    uint64_t ApplicationID;
    // public readonly System.Collections.Generic.Dictionary`2<System.String,System.String> DataStore
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* DataStore;
    // public readonly System.String Description
    // Offset: 0x20
    ::Il2CppString* Description;
    // public readonly System.UInt64 ID
    // Offset: 0x28
    uint64_t ID;
    // public readonly Oculus.Platform.Models.UserList InvitedUsersOptional
    // Offset: 0x30
    Oculus::Platform::Models::UserList* InvitedUsersOptional;
    // public readonly Oculus.Platform.Models.UserList InvitedUsers
    // Offset: 0x38
    Oculus::Platform::Models::UserList* InvitedUsers;
    // public readonly System.Boolean IsMembershipLocked
    // Offset: 0x40
    bool IsMembershipLocked;
    // public readonly Oculus.Platform.RoomJoinPolicy JoinPolicy
    // Offset: 0x44
    Oculus::Platform::RoomJoinPolicy JoinPolicy;
    // public readonly Oculus.Platform.RoomJoinability Joinability
    // Offset: 0x48
    Oculus::Platform::RoomJoinability Joinability;
    // public readonly Oculus.Platform.Models.MatchmakingEnqueuedUserList MatchedUsersOptional
    // Offset: 0x50
    Oculus::Platform::Models::MatchmakingEnqueuedUserList* MatchedUsersOptional;
    // public readonly Oculus.Platform.Models.MatchmakingEnqueuedUserList MatchedUsers
    // Offset: 0x58
    Oculus::Platform::Models::MatchmakingEnqueuedUserList* MatchedUsers;
    // public readonly System.UInt32 MaxUsers
    // Offset: 0x60
    uint MaxUsers;
    // public readonly System.String Name
    // Offset: 0x68
    ::Il2CppString* Name;
    // public readonly Oculus.Platform.Models.User OwnerOptional
    // Offset: 0x70
    Oculus::Platform::Models::User* OwnerOptional;
    // public readonly Oculus.Platform.Models.User Owner
    // Offset: 0x78
    Oculus::Platform::Models::User* Owner;
    // public readonly Oculus.Platform.Models.TeamList TeamsOptional
    // Offset: 0x80
    Oculus::Platform::Models::TeamList* TeamsOptional;
    // public readonly Oculus.Platform.Models.TeamList Teams
    // Offset: 0x88
    Oculus::Platform::Models::TeamList* Teams;
    // public readonly Oculus.Platform.RoomType Type
    // Offset: 0x90
    Oculus::Platform::RoomType Type;
    // public readonly Oculus.Platform.Models.UserList UsersOptional
    // Offset: 0x98
    Oculus::Platform::Models::UserList* UsersOptional;
    // public readonly Oculus.Platform.Models.UserList Users
    // Offset: 0xA0
    Oculus::Platform::Models::UserList* Users;
    // public readonly System.UInt32 Version
    // Offset: 0xA8
    uint Version;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x11DC5F8
    static Room* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.Room
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::Room*, "Oculus.Platform.Models", "Room");
#pragma pack(pop)
