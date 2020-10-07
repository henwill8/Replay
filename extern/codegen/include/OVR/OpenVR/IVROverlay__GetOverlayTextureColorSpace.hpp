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
  // Forward declaring type: EColorSpace
  struct EColorSpace;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVROverlay/_GetOverlayTextureColorSpace
  class IVROverlay::_GetOverlayTextureColorSpace : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1529F20
    static IVROverlay::_GetOverlayTextureColorSpace* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.EColorSpace peTextureColorSpace)
    // Offset: 0x1529F34
    OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::EColorSpace& peTextureColorSpace);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.EColorSpace peTextureColorSpace, System.AsyncCallback callback, System.Object object)
    // Offset: 0x152A1B8
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::EColorSpace& peTextureColorSpace, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref OVR.OpenVR.EColorSpace peTextureColorSpace, System.IAsyncResult result)
    // Offset: 0x152A268
    OVR::OpenVR::EVROverlayError EndInvoke(OVR::OpenVR::EColorSpace& peTextureColorSpace, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_GetOverlayTextureColorSpace
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_GetOverlayTextureColorSpace*, "OVR.OpenVR", "IVROverlay/_GetOverlayTextureColorSpace");
#pragma pack(pop)
