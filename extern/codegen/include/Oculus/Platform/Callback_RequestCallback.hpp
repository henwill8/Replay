// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Callback
#include "Oculus/Platform/Callback.hpp"
// Including type: Oculus.Platform.Message
#include "Oculus/Platform/Message.hpp"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.Callback/RequestCallback
  class Callback::RequestCallback : public ::Il2CppObject {
    public:
    // private Oculus.Platform.Message/Callback messageCallback
    // Offset: 0x10
    Oculus::Platform::Message::Callback* messageCallback;
    // Creating conversion operator: operator Oculus::Platform::Message::Callback*
    constexpr operator Oculus::Platform::Message::Callback*() const noexcept {
      return messageCallback;
    }
    // public System.Void .ctor(Oculus.Platform.Message/Callback callback)
    // Offset: 0x11CE00C
    static Callback::RequestCallback* New_ctor(Oculus::Platform::Message::Callback* callback);
    // public System.Void HandleMessage(Oculus.Platform.Message msg)
    // Offset: 0x11CE7D0
    void HandleMessage(Oculus::Platform::Message* msg);
    // public System.Void .ctor()
    // Offset: 0x11CE7C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Callback::RequestCallback* New_ctor();
  }; // Oculus.Platform.Callback/RequestCallback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Callback::RequestCallback*, "Oculus.Platform", "Callback/RequestCallback");
#pragma pack(pop)
