// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.IVoipPCMSource
#include "Oculus/Platform/IVoipPCMSource.hpp"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.VoipPCMSourceNative
  class VoipPCMSourceNative : public ::Il2CppObject/*, public Oculus::Platform::IVoipPCMSource*/ {
    public:
    // private System.UInt64 senderID
    // Offset: 0x10
    uint64_t senderID;
    // Creating interface conversion operator: operator Oculus::Platform::IVoipPCMSource
    operator Oculus::Platform::IVoipPCMSource() noexcept {
      return *reinterpret_cast<Oculus::Platform::IVoipPCMSource*>(this);
    }
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return senderID;
    }
    // public System.Int32 GetPCM(System.Single[] dest, System.Int32 length)
    // Offset: 0x19FBCE0
    // Implemented from: Oculus.Platform.IVoipPCMSource
    // Base method: System.Int32 IVoipPCMSource::GetPCM(System.Single[] dest, System.Int32 length)
    int GetPCM(::Array<float>* dest, int length);
    // public System.Void SetSenderID(System.UInt64 senderID)
    // Offset: 0x19FBDA0
    // Implemented from: Oculus.Platform.IVoipPCMSource
    // Base method: System.Void IVoipPCMSource::SetSenderID(System.UInt64 senderID)
    void SetSenderID(uint64_t senderID);
    // public System.Int32 PeekSizeElements()
    // Offset: 0x19FBDA8
    // Implemented from: Oculus.Platform.IVoipPCMSource
    // Base method: System.Int32 IVoipPCMSource::PeekSizeElements()
    int PeekSizeElements();
    // public System.Void Update()
    // Offset: 0x19FBE48
    // Implemented from: Oculus.Platform.IVoipPCMSource
    // Base method: System.Void IVoipPCMSource::Update()
    void Update();
    // public System.Void .ctor()
    // Offset: 0x19FB178
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static VoipPCMSourceNative* New_ctor();
  }; // Oculus.Platform.VoipPCMSourceNative
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::VoipPCMSourceNative*, "Oculus.Platform", "VoipPCMSourceNative");
#pragma pack(pop)
