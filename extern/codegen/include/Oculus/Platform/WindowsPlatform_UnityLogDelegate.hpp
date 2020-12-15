// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.WindowsPlatform
#include "Oculus/Platform/WindowsPlatform.hpp"
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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.WindowsPlatform/UnityLogDelegate
  class WindowsPlatform::UnityLogDelegate : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x19FC164
    static WindowsPlatform::UnityLogDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.IntPtr tag, System.IntPtr msg)
    // Offset: 0x19FC178
    void Invoke(System::IntPtr tag, System::IntPtr msg);
    // public System.IAsyncResult BeginInvoke(System.IntPtr tag, System.IntPtr msg, System.AsyncCallback callback, System.Object object)
    // Offset: 0x19FC3F4
    System::IAsyncResult* BeginInvoke(System::IntPtr tag, System::IntPtr msg, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x19FC494
    void EndInvoke(System::IAsyncResult* result);
  }; // Oculus.Platform.WindowsPlatform/UnityLogDelegate
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::WindowsPlatform::UnityLogDelegate*, "Oculus.Platform", "WindowsPlatform/UnityLogDelegate");
#pragma pack(pop)