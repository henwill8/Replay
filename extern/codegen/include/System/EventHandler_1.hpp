// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.EventHandler`1
  template<typename TEventArgs>
  class EventHandler_1 : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFF
    static EventHandler_1<TEventArgs>* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      return THROW_UNLESS(il2cpp_utils::New<EventHandler_1<TEventArgs>*>(object, method));
    }
    // public System.Void Invoke(System.Object sender, TEventArgs e)
    // Offset: 0xFFFFFFFF
    void Invoke(::Il2CppObject* sender, TEventArgs e) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", sender, e));
    }
    // public System.IAsyncResult BeginInvoke(System.Object sender, TEventArgs e, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFF
    System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, TEventArgs e, System::AsyncCallback* callback, ::Il2CppObject* object) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", sender, e, callback, object));
    }
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xFFFFFFFF
    void EndInvoke(System::IAsyncResult* result) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
    }
  }; // System.EventHandler`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::EventHandler_1, "System", "EventHandler`1");
#pragma pack(pop)