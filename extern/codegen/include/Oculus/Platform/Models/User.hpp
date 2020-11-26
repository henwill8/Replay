// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.UserPresenceStatus
#include "Oculus/Platform/UserPresenceStatus.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.User
  class User : public ::Il2CppObject {
    public:
    // public readonly System.UInt64 ID
    // Offset: 0x10
    uint64_t ID;
    // public readonly System.String ImageURL
    // Offset: 0x18
    ::Il2CppString* ImageURL;
    // public readonly System.String InviteToken
    // Offset: 0x20
    ::Il2CppString* InviteToken;
    // public readonly System.String OculusID
    // Offset: 0x28
    ::Il2CppString* OculusID;
    // public readonly System.String Presence
    // Offset: 0x30
    ::Il2CppString* Presence;
    // public readonly System.String PresenceDeeplinkMessage
    // Offset: 0x38
    ::Il2CppString* PresenceDeeplinkMessage;
    // public readonly System.String PresenceDestinationApiName
    // Offset: 0x40
    ::Il2CppString* PresenceDestinationApiName;
    // public readonly Oculus.Platform.UserPresenceStatus PresenceStatus
    // Offset: 0x48
    Oculus::Platform::UserPresenceStatus PresenceStatus;
    // public readonly System.String SmallImageUrl
    // Offset: 0x50
    ::Il2CppString* SmallImageUrl;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x11DFFD0
    static User* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.User
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::User*, "Oculus.Platform.Models", "User");
#pragma pack(pop)
