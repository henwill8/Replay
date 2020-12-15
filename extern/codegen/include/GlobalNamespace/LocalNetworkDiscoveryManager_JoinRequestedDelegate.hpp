// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LocalNetworkDiscoveryManager
#include "GlobalNamespace/LocalNetworkDiscoveryManager.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LocalNetworkDiscoveryManager/JoinRequestedDelegate
  class LocalNetworkDiscoveryManager::JoinRequestedDelegate : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A67764
    static LocalNetworkDiscoveryManager::JoinRequestedDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.String userId, System.Net.IPAddress remoteEndPoint, System.String userName, System.Byte flags)
    // Offset: 0x1A65F7C
    void Invoke(::Il2CppString* userId, System::Net::IPAddress* remoteEndPoint, ::Il2CppString* userName, uint8_t flags);
    // public System.IAsyncResult BeginInvoke(System.String userId, System.Net.IPAddress remoteEndPoint, System.String userName, System.Byte flags, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A67778
    System::IAsyncResult* BeginInvoke(::Il2CppString* userId, System::Net::IPAddress* remoteEndPoint, ::Il2CppString* userName, uint8_t flags, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1A67828
    void EndInvoke(System::IAsyncResult* result);
  }; // LocalNetworkDiscoveryManager/JoinRequestedDelegate
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalNetworkDiscoveryManager::JoinRequestedDelegate*, "", "LocalNetworkDiscoveryManager/JoinRequestedDelegate");
#pragma pack(pop)