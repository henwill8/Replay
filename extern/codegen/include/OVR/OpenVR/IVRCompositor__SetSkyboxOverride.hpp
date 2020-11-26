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
  // Forward declaring type: Texture_t
  struct Texture_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_SetSkyboxOverride
  class IVRCompositor::_SetSkyboxOverride : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x185E78C
    static IVRCompositor::_SetSkyboxOverride* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRCompositorError Invoke(in OVR.OpenVR.Texture_t[] pTextures, System.UInt32 unTextureCount)
    // Offset: 0x185E7A0
    OVR::OpenVR::EVRCompositorError Invoke(::Array<OVR::OpenVR::Texture_t>*& pTextures, uint unTextureCount);
    // public System.IAsyncResult BeginInvoke(in OVR.OpenVR.Texture_t[] pTextures, System.UInt32 unTextureCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x185EA14
    System::IAsyncResult* BeginInvoke(::Array<OVR::OpenVR::Texture_t>*& pTextures, uint unTextureCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRCompositorError EndInvoke(System.IAsyncResult result)
    // Offset: 0x185EAB0
    OVR::OpenVR::EVRCompositorError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_SetSkyboxOverride
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_SetSkyboxOverride*, "OVR.OpenVR", "IVRCompositor/_SetSkyboxOverride");
#pragma pack(pop)
