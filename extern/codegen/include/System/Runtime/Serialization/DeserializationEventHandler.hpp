// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Autogenerated type: System.Runtime.Serialization.DeserializationEventHandler
  class DeserializationEventHandler : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x133CF78
    static DeserializationEventHandler* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Object sender)
    // Offset: 0x133CF8C
    void Invoke(::Il2CppObject* sender);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.AsyncCallback callback, System.Object object)
    // Offset: 0x133D344
    System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x133D368
    void EndInvoke(System::IAsyncResult* result);
  }; // System.Runtime.Serialization.DeserializationEventHandler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::DeserializationEventHandler*, "System.Runtime.Serialization", "DeserializationEventHandler");
#pragma pack(pop)