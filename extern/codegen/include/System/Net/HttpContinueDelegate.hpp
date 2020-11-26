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
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.HttpContinueDelegate
  class HttpContinueDelegate : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x12AD538
    static HttpContinueDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Int32 StatusCode, System.Net.WebHeaderCollection httpHeaders)
    // Offset: 0x12AD54C
    void Invoke(int StatusCode, System::Net::WebHeaderCollection* httpHeaders);
    // public System.IAsyncResult BeginInvoke(System.Int32 StatusCode, System.Net.WebHeaderCollection httpHeaders, System.AsyncCallback callback, System.Object object)
    // Offset: 0x12AD7D4
    System::IAsyncResult* BeginInvoke(int StatusCode, System::Net::WebHeaderCollection* httpHeaders, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x12AD86C
    void EndInvoke(System::IAsyncResult* result);
  }; // System.Net.HttpContinueDelegate
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpContinueDelegate*, "System.Net", "HttpContinueDelegate");
#pragma pack(pop)
