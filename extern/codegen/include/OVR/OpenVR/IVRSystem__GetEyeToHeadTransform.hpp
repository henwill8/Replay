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
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
  // Forward declaring type: EVREye
  struct EVREye;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetEyeToHeadTransform
  class IVRSystem::_GetEyeToHeadTransform : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16BDD78
    static IVRSystem::_GetEyeToHeadTransform* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.HmdMatrix34_t Invoke(OVR.OpenVR.EVREye eEye)
    // Offset: 0x16BDD8C
    OVR::OpenVR::HmdMatrix34_t Invoke(OVR::OpenVR::EVREye eEye);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVREye eEye, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16BE03C
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EVREye eEye, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.HmdMatrix34_t EndInvoke(System.IAsyncResult result)
    // Offset: 0x16BE0C8
    OVR::OpenVR::HmdMatrix34_t EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetEyeToHeadTransform
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetEyeToHeadTransform*, "OVR.OpenVR", "IVRSystem/_GetEyeToHeadTransform");
#pragma pack(pop)
