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
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPacketReader
  class NetPacketReader;
  // Forward declaring type: UnconnectedMessageType
  struct UnconnectedMessageType;
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
  // Autogenerated type: LiteNetLib.EventBasedNetListener/OnNetworkReceiveUnconnected
  // [] Offset: FFFFFFFF
  class EventBasedNetListener::OnNetworkReceiveUnconnected : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: OnNetworkReceiveUnconnected
    OnNetworkReceiveUnconnected() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A98F70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventBasedNetListener::OnNetworkReceiveUnconnected* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::EventBasedNetListener::OnNetworkReceiveUnconnected::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventBasedNetListener::OnNetworkReceiveUnconnected*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Net.IPEndPoint remoteEndPoint, LiteNetLib.NetPacketReader reader, LiteNetLib.UnconnectedMessageType messageType)
    // Offset: 0x1A97C5C
    void Invoke(System::Net::IPEndPoint* remoteEndPoint, LiteNetLib::NetPacketReader* reader, LiteNetLib::UnconnectedMessageType messageType);
    // public System.IAsyncResult BeginInvoke(System.Net.IPEndPoint remoteEndPoint, LiteNetLib.NetPacketReader reader, LiteNetLib.UnconnectedMessageType messageType, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A98F84
    System::IAsyncResult* BeginInvoke(System::Net::IPEndPoint* remoteEndPoint, LiteNetLib::NetPacketReader* reader, LiteNetLib::UnconnectedMessageType messageType, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1A99024
    void EndInvoke(System::IAsyncResult* result);
  }; // LiteNetLib.EventBasedNetListener/OnNetworkReceiveUnconnected
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::EventBasedNetListener::OnNetworkReceiveUnconnected*, "LiteNetLib", "EventBasedNetListener/OnNetworkReceiveUnconnected");
