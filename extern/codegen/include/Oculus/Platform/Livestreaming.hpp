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
  // Forward declaring type: LivestreamingStatus
  class LivestreamingStatus;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.Livestreaming
  class Livestreaming : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.LivestreamingStatus> GetStatus()
    // Offset: 0x11D1738
    static Oculus::Platform::Request_1<Oculus::Platform::Models::LivestreamingStatus*>* GetStatus();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.LivestreamingStatus> PauseStream()
    // Offset: 0x11D1844
    static Oculus::Platform::Request_1<Oculus::Platform::Models::LivestreamingStatus*>* PauseStream();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.LivestreamingStatus> ResumeStream()
    // Offset: 0x11D1950
    static Oculus::Platform::Request_1<Oculus::Platform::Models::LivestreamingStatus*>* ResumeStream();
    // static public System.Void SetStatusUpdateNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.LivestreamingStatus> callback)
    // Offset: 0x11D1A5C
    static void SetStatusUpdateNotificationCallback(typename Oculus::Platform::Message_1<Oculus::Platform::Models::LivestreamingStatus*>::Callback* callback);
  }; // Oculus.Platform.Livestreaming
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Livestreaming*, "Oculus.Platform", "Livestreaming");
#pragma pack(pop)