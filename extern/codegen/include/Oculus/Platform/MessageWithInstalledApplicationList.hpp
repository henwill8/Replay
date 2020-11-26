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
  // Forward declaring type: InstalledApplicationList
  class InstalledApplicationList;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithInstalledApplicationList
  class MessageWithInstalledApplicationList : public Oculus::Platform::Message_1<Oculus::Platform::Models::InstalledApplicationList*> {
    public:
    // protected Oculus.Platform.Models.InstalledApplicationList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x11DA53C
    Oculus::Platform::Models::InstalledApplicationList* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x11DA498
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithInstalledApplicationList* New_ctor(System::IntPtr c_message);
    // public override Oculus.Platform.Models.InstalledApplicationList GetInstalledApplicationList()
    // Offset: 0x11DA4F8
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.InstalledApplicationList Message::GetInstalledApplicationList()
    Oculus::Platform::Models::InstalledApplicationList* GetInstalledApplicationList();
  }; // Oculus.Platform.MessageWithInstalledApplicationList
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithInstalledApplicationList*, "Oculus.Platform", "MessageWithInstalledApplicationList");
#pragma pack(pop)
