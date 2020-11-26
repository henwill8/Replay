// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.EventBasedNetListener
#include "LiteNetLib/EventBasedNetListener.hpp"
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
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPeer
  class NetPeer;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Autogenerated type: LiteNetLib.EventBasedNetListener/OnNetworkLatencyUpdate
  class EventBasedNetListener::OnNetworkLatencyUpdate : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1DC3CD0
    static EventBasedNetListener::OnNetworkLatencyUpdate* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(LiteNetLib.NetPeer peer, System.Int32 latency)
    // Offset: 0x1DC2F70
    void Invoke(LiteNetLib::NetPeer* peer, int latency);
    // public System.IAsyncResult BeginInvoke(LiteNetLib.NetPeer peer, System.Int32 latency, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1DC3CE4
    System::IAsyncResult* BeginInvoke(LiteNetLib::NetPeer* peer, int latency, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1DC3D80
    void EndInvoke(System::IAsyncResult* result);
  }; // LiteNetLib.EventBasedNetListener/OnNetworkLatencyUpdate
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::EventBasedNetListener::OnNetworkLatencyUpdate*, "LiteNetLib", "EventBasedNetListener/OnNetworkLatencyUpdate");
#pragma pack(pop)
