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
  // Forward declaring type: PartyID
  class PartyID;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithPartyID
  class MessageWithPartyID : public Oculus::Platform::Message_1<Oculus::Platform::Models::PartyID*> {
    public:
    // protected Oculus.Platform.Models.PartyID GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xEA7054
    Oculus::Platform::Models::PartyID* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xEA6FB0
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message`1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithPartyID* New_ctor(System::IntPtr c_message);
    // public override Oculus.Platform.Models.PartyID GetPartyID()
    // Offset: 0xEA7010
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.PartyID Message::GetPartyID()
    Oculus::Platform::Models::PartyID* GetPartyID();
  }; // Oculus.Platform.MessageWithPartyID
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithPartyID*, "Oculus.Platform", "MessageWithPartyID");
#pragma pack(pop)
