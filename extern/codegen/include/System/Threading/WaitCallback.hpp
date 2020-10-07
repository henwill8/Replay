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
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.WaitCallback
  class WaitCallback : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xCDAAE4
    static WaitCallback* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Object state)
    // Offset: 0xCD9E44
    void Invoke(::Il2CppObject* state);
    // public System.IAsyncResult BeginInvoke(System.Object state, System.AsyncCallback callback, System.Object object)
    // Offset: 0xCEEF98
    System::IAsyncResult* BeginInvoke(::Il2CppObject* state, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xCEEFBC
    void EndInvoke(System::IAsyncResult* result);
  }; // System.Threading.WaitCallback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::WaitCallback*, "System.Threading", "WaitCallback");
#pragma pack(pop)
