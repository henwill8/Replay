// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusNetworkPlayerModel
#include "GlobalNamespace/OculusNetworkPlayerModel.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: UserAndRoomList
  class UserAndRoomList;
  // Forward declaring type: UserList
  class UserList;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusNetworkPlayerModel/<>c__DisplayClass50_0
  class OculusNetworkPlayerModel::$$c__DisplayClass50_0 : public ::Il2CppObject {
    public:
    // public OculusNetworkPlayerModel <>4__this
    // Offset: 0x10
    GlobalNamespace::OculusNetworkPlayerModel* $$4__this;
    // public Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.UserAndRoomList> onGetFriends
    // Offset: 0x18
    typename Oculus::Platform::Message_1<Oculus::Platform::Models::UserAndRoomList*>::Callback* onGetFriends;
    // public Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.UserList> onGetInvitable
    // Offset: 0x20
    typename Oculus::Platform::Message_1<Oculus::Platform::Models::UserList*>::Callback* onGetInvitable;
    // System.Void <Refresh>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.UserAndRoomList> result)
    // Offset: 0x100CCF0
    void $Refresh$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::UserAndRoomList*>* result);
    // System.Void <Refresh>b__1(Oculus.Platform.Message`1<Oculus.Platform.Models.UserList> result)
    // Offset: 0x100D1C8
    void $Refresh$b__1(Oculus::Platform::Message_1<Oculus::Platform::Models::UserList*>* result);
    // public System.Void .ctor()
    // Offset: 0x100C374
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OculusNetworkPlayerModel::$$c__DisplayClass50_0* New_ctor();
  }; // OculusNetworkPlayerModel/<>c__DisplayClass50_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass50_0*, "", "OculusNetworkPlayerModel/<>c__DisplayClass50_0");
#pragma pack(pop)
