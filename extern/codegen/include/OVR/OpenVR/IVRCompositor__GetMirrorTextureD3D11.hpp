// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRCompositor
#include "OVR/OpenVR/IVRCompositor.hpp"
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
  // Forward declaring type: EVRCompositorError
  struct EVRCompositorError;
  // Forward declaring type: EVREye
  struct EVREye;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_GetMirrorTextureD3D11
  class IVRCompositor::_GetMirrorTextureD3D11 : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x185BE7C
    static IVRCompositor::_GetMirrorTextureD3D11* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRCompositorError Invoke(OVR.OpenVR.EVREye eEye, System.IntPtr pD3D11DeviceOrResource, ref System.IntPtr ppD3D11ShaderResourceView)
    // Offset: 0x185BE90
    OVR::OpenVR::EVRCompositorError Invoke(OVR::OpenVR::EVREye eEye, System::IntPtr pD3D11DeviceOrResource, System::IntPtr& ppD3D11ShaderResourceView);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVREye eEye, System.IntPtr pD3D11DeviceOrResource, ref System.IntPtr ppD3D11ShaderResourceView, System.AsyncCallback callback, System.Object object)
    // Offset: 0x185C13C
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EVREye eEye, System::IntPtr pD3D11DeviceOrResource, System::IntPtr& ppD3D11ShaderResourceView, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRCompositorError EndInvoke(ref System.IntPtr ppD3D11ShaderResourceView, System.IAsyncResult result)
    // Offset: 0x185C204
    OVR::OpenVR::EVRCompositorError EndInvoke(System::IntPtr& ppD3D11ShaderResourceView, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_GetMirrorTextureD3D11
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_GetMirrorTextureD3D11*, "OVR.OpenVR", "IVRCompositor/_GetMirrorTextureD3D11");
#pragma pack(pop)