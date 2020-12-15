// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LeaderboardEntryList
  class LeaderboardEntryList;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithLeaderboardEntryList
  class MessageWithLeaderboardEntryList : public Oculus::Platform::Message_1<Oculus::Platform::Models::LeaderboardEntryList*> {
    public:
    // protected Oculus.Platform.Models.LeaderboardEntryList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x11DAFCC
    Oculus::Platform::Models::LeaderboardEntryList* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x11D5EA8
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithLeaderboardEntryList* New_ctor(System::IntPtr c_message);
    // public override Oculus.Platform.Models.LeaderboardEntryList GetLeaderboardEntryList()
    // Offset: 0x11DAF88
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.LeaderboardEntryList Message::GetLeaderboardEntryList()
    Oculus::Platform::Models::LeaderboardEntryList* GetLeaderboardEntryList();
  }; // Oculus.Platform.MessageWithLeaderboardEntryList
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithLeaderboardEntryList*, "Oculus.Platform", "MessageWithLeaderboardEntryList");
#pragma pack(pop)