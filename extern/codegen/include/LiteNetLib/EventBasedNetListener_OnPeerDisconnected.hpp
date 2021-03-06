// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.EventBasedNetListener
#include "LiteNetLib/EventBasedNetListener.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPeer
  class NetPeer;
  // Forward declaring type: DisconnectInfo
  struct DisconnectInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.EventBasedNetListener/OnPeerDisconnected
  // [] Offset: FFFFFFFF
  class EventBasedNetListener::OnPeerDisconnected : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: OnPeerDisconnected
    OnPeerDisconnected() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A99074
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventBasedNetListener::OnPeerDisconnected* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::EventBasedNetListener::OnPeerDisconnected::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventBasedNetListener::OnPeerDisconnected*, creationType>(object, method)));
    }
    // public System.Void Invoke(LiteNetLib.NetPeer peer, LiteNetLib.DisconnectInfo disconnectInfo)
    // Offset: 0x1A96F98
    void Invoke(LiteNetLib::NetPeer* peer, LiteNetLib::DisconnectInfo disconnectInfo);
    // public System.IAsyncResult BeginInvoke(LiteNetLib.NetPeer peer, LiteNetLib.DisconnectInfo disconnectInfo, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A99088
    System::IAsyncResult* BeginInvoke(LiteNetLib::NetPeer* peer, LiteNetLib::DisconnectInfo disconnectInfo, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1A99124
    void EndInvoke(System::IAsyncResult* result);
  }; // LiteNetLib.EventBasedNetListener/OnPeerDisconnected
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::EventBasedNetListener::OnPeerDisconnected*, "LiteNetLib", "EventBasedNetListener/OnPeerDisconnected");
