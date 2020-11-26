// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
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
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVROverlay/_GetOverlayTexelAspect
  class IVROverlay::_GetOverlayTexelAspect : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x186DDFC
    static IVROverlay::_GetOverlayTexelAspect* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref System.Single pfTexelAspect)
    // Offset: 0x186DE10
    OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float& pfTexelAspect);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref System.Single pfTexelAspect, System.AsyncCallback callback, System.Object object)
    // Offset: 0x186E094
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, float& pfTexelAspect, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref System.Single pfTexelAspect, System.IAsyncResult result)
    // Offset: 0x186E144
    OVR::OpenVR::EVROverlayError EndInvoke(float& pfTexelAspect, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_GetOverlayTexelAspect
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_GetOverlayTexelAspect*, "OVR.OpenVR", "IVROverlay/_GetOverlayTexelAspect");
#pragma pack(pop)
