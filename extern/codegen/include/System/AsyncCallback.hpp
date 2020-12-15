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
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.AsyncCallback
  class AsyncCallback : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1CA8F30
    static AsyncCallback* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.IAsyncResult ar)
    // Offset: 0x1CA8F44
    void Invoke(System::IAsyncResult* ar);
    // public System.IAsyncResult BeginInvoke(System.IAsyncResult ar, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1CA92FC
    System::IAsyncResult* BeginInvoke(System::IAsyncResult* ar, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1CA9320
    void EndInvoke(System::IAsyncResult* result);
  }; // System.AsyncCallback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::AsyncCallback*, "System", "AsyncCallback");
#pragma pack(pop)