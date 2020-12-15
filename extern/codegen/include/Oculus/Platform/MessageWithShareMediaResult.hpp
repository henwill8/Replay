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
  // Forward declaring type: ShareMediaResult
  class ShareMediaResult;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithShareMediaResult
  class MessageWithShareMediaResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::ShareMediaResult*> {
    public:
    // protected Oculus.Platform.Models.ShareMediaResult GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x11DF9CC
    Oculus::Platform::Models::ShareMediaResult* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x11D67A8
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithShareMediaResult* New_ctor(System::IntPtr c_message);
    // public override Oculus.Platform.Models.ShareMediaResult GetShareMediaResult()
    // Offset: 0x11DF988
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.ShareMediaResult Message::GetShareMediaResult()
    Oculus::Platform::Models::ShareMediaResult* GetShareMediaResult();
  }; // Oculus.Platform.MessageWithShareMediaResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithShareMediaResult*, "Oculus.Platform", "MessageWithShareMediaResult");
#pragma pack(pop)