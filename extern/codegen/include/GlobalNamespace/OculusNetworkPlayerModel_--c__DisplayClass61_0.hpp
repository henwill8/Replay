// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusNetworkPlayerModel
#include "GlobalNamespace/OculusNetworkPlayerModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Room
  class Room;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusNetworkPlayerModel/<>c__DisplayClass61_0
  class OculusNetworkPlayerModel::$$c__DisplayClass61_0 : public ::Il2CppObject {
    public:
    // public OculusNetworkPlayerModel <>4__this
    // Offset: 0x10
    GlobalNamespace::OculusNetworkPlayerModel* $$4__this;
    // public System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> tcs
    // Offset: 0x18
    System::Threading::Tasks::TaskCompletionSource_1<bool>* tcs;
    // public System.UInt64 userId
    // Offset: 0x20
    uint64_t userId;
    // System.Void <ShouldAcceptConnectionFromPlayer>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.Room> result)
    // Offset: 0x100D5F0
    void $ShouldAcceptConnectionFromPlayer$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::Room*>* result);
    // public System.Void .ctor()
    // Offset: 0x100C9A4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OculusNetworkPlayerModel::$$c__DisplayClass61_0* New_ctor();
  }; // OculusNetworkPlayerModel/<>c__DisplayClass61_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass61_0*, "", "OculusNetworkPlayerModel/<>c__DisplayClass61_0");
#pragma pack(pop)
