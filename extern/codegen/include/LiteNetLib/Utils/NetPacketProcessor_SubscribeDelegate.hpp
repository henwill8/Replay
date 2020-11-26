// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.NetPacketProcessor
#include "LiteNetLib/Utils/NetPacketProcessor.hpp"
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
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Autogenerated type: LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate
  class NetPacketProcessor::SubscribeDelegate : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x22B56D4
    static NetPacketProcessor::SubscribeDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(LiteNetLib.Utils.NetDataReader reader, System.Object userData)
    // Offset: 0x22B52D0
    void Invoke(LiteNetLib::Utils::NetDataReader* reader, ::Il2CppObject* userData);
    // public System.IAsyncResult BeginInvoke(LiteNetLib.Utils.NetDataReader reader, System.Object userData, System.AsyncCallback callback, System.Object object)
    // Offset: 0x22B56E8
    System::IAsyncResult* BeginInvoke(LiteNetLib::Utils::NetDataReader* reader, ::Il2CppObject* userData, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x22B5718
    void EndInvoke(System::IAsyncResult* result);
  }; // LiteNetLib.Utils.NetPacketProcessor/SubscribeDelegate
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::NetPacketProcessor::SubscribeDelegate*, "LiteNetLib.Utils", "NetPacketProcessor/SubscribeDelegate");
#pragma pack(pop)
