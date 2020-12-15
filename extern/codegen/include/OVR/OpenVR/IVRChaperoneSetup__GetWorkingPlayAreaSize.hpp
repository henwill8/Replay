// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperoneSetup
#include "OVR/OpenVR/IVRChaperoneSetup.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVRChaperoneSetup/_GetWorkingPlayAreaSize
  class IVRChaperoneSetup::_GetWorkingPlayAreaSize : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x11FB8BC
    static IVRChaperoneSetup::_GetWorkingPlayAreaSize* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(ref System.Single pSizeX, ref System.Single pSizeZ)
    // Offset: 0x11F1710
    bool Invoke(float& pSizeX, float& pSizeZ);
    // public System.IAsyncResult BeginInvoke(ref System.Single pSizeX, ref System.Single pSizeZ, System.AsyncCallback callback, System.Object object)
    // Offset: 0x11FB8D0
    System::IAsyncResult* BeginInvoke(float& pSizeX, float& pSizeZ, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref System.Single pSizeX, ref System.Single pSizeZ, System.IAsyncResult result)
    // Offset: 0x11FB97C
    bool EndInvoke(float& pSizeX, float& pSizeZ, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperoneSetup/_GetWorkingPlayAreaSize
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperoneSetup::_GetWorkingPlayAreaSize*, "OVR.OpenVR", "IVRChaperoneSetup/_GetWorkingPlayAreaSize");
#pragma pack(pop)