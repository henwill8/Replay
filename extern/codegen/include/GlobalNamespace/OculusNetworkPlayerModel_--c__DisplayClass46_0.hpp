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
  // Autogenerated type: OculusNetworkPlayerModel/<>c__DisplayClass46_0
  class OculusNetworkPlayerModel::$$c__DisplayClass46_0 : public ::Il2CppObject {
    public:
    // public OculusNetworkPlayerModel/OculusNetworkPlayer player
    // Offset: 0x10
    GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer* player;
    // public OculusNetworkPlayerModel <>4__this
    // Offset: 0x18
    GlobalNamespace::OculusNetworkPlayerModel* $$4__this;
    // System.Void <HandleRoomInviteReceived>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.Room> result)
    // Offset: 0x100CC48
    void $HandleRoomInviteReceived$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::Room*>* result);
    // public System.Void .ctor()
    // Offset: 0x100CC40
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OculusNetworkPlayerModel::$$c__DisplayClass46_0* New_ctor();
  }; // OculusNetworkPlayerModel/<>c__DisplayClass46_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass46_0*, "", "OculusNetworkPlayerModel/<>c__DisplayClass46_0");
#pragma pack(pop)
