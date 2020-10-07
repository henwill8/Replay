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
  // Autogenerated type: System.Threading.ContextCallback
  class ContextCallback : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x13DA4AC
    static ContextCallback* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Object state)
    // Offset: 0x13DC75C
    void Invoke(::Il2CppObject* state);
    // public System.IAsyncResult BeginInvoke(System.Object state, System.AsyncCallback callback, System.Object object)
    // Offset: 0x13DCB14
    System::IAsyncResult* BeginInvoke(::Il2CppObject* state, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x13DCB38
    void EndInvoke(System::IAsyncResult* result);
  }; // System.Threading.ContextCallback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ContextCallback*, "System.Threading", "ContextCallback");
#pragma pack(pop)
