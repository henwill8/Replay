// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusPlatformLeaderboardsHandler
#include "GlobalNamespace/OculusPlatformLeaderboardsHandler.hpp"
// Including type: PlatformLeaderboardsModel
#include "GlobalNamespace/PlatformLeaderboardsModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusPlatformLeaderboardsHandler/<>c__DisplayClass6_0
  class OculusPlatformLeaderboardsHandler::$$c__DisplayClass6_0 : public ::Il2CppObject {
    public:
    // public OculusPlatformLeaderboardsHandler <>4__this
    // Offset: 0x10
    GlobalNamespace::OculusPlatformLeaderboardsHandler* $$4__this;
    // public PlatformLeaderboardsModel/UploadScoreCompletionHandler completionHandler
    // Offset: 0x18
    GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler* completionHandler;
    // System.Void <UploadScore>b__0(Oculus.Platform.Message`1<System.Boolean> messsage)
    // Offset: 0x1012618
    void $UploadScore$b__0(Oculus::Platform::Message_1<bool>* messsage);
    // public System.Void .ctor()
    // Offset: 0x1012238
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OculusPlatformLeaderboardsHandler::$$c__DisplayClass6_0* New_ctor();
  }; // OculusPlatformLeaderboardsHandler/<>c__DisplayClass6_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass6_0*, "", "OculusPlatformLeaderboardsHandler/<>c__DisplayClass6_0");
#pragma pack(pop)
