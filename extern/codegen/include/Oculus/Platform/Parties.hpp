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
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Party
  class Party;
  // Forward declaring type: PartyUpdateNotification
  class PartyUpdateNotification;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.Parties
  class Parties : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Party> GetCurrent()
    // Offset: 0x11E36B8
    static Oculus::Platform::Request_1<Oculus::Platform::Models::Party*>* GetCurrent();
    // static public System.Void SetPartyUpdateNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.PartyUpdateNotification> callback)
    // Offset: 0x11E37C4
    static void SetPartyUpdateNotificationCallback(typename Oculus::Platform::Message_1<Oculus::Platform::Models::PartyUpdateNotification*>::Callback* callback);
  }; // Oculus.Platform.Parties
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Parties*, "Oculus.Platform", "Parties");
#pragma pack(pop)
