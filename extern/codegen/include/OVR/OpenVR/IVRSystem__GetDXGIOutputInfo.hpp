// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetDXGIOutputInfo
  class IVRSystem::_GetDXGIOutputInfo : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1911F40
    static IVRSystem::_GetDXGIOutputInfo* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(ref System.Int32 pnAdapterIndex)
    // Offset: 0x1911F54
    void Invoke(int& pnAdapterIndex);
    // public System.IAsyncResult BeginInvoke(ref System.Int32 pnAdapterIndex, System.AsyncCallback callback, System.Object object)
    // Offset: 0x19121A4
    System::IAsyncResult* BeginInvoke(int& pnAdapterIndex, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref System.Int32 pnAdapterIndex, System.IAsyncResult result)
    // Offset: 0x1912238
    void EndInvoke(int& pnAdapterIndex, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetDXGIOutputInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo*, "OVR.OpenVR", "IVRSystem/_GetDXGIOutputInfo");
#pragma pack(pop)
