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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.BindingCondition
  class BindingCondition : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x10EB8C0
    static BindingCondition* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(Zenject.InjectContext c)
    // Offset: 0x10EB8D4
    bool Invoke(Zenject::InjectContext* c);
    // public System.IAsyncResult BeginInvoke(Zenject.InjectContext c, System.AsyncCallback callback, System.Object object)
    // Offset: 0x10EBC98
    System::IAsyncResult* BeginInvoke(Zenject::InjectContext* c, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x10EBCBC
    bool EndInvoke(System::IAsyncResult* result);
  }; // Zenject.BindingCondition
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::BindingCondition*, "Zenject", "BindingCondition");
#pragma pack(pop)
