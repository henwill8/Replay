// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRTrackedCamera
#include "OVR/OpenVR/IVRTrackedCamera.hpp"
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
  // Forward declaring type: EVRTrackedCameraError
  struct EVRTrackedCameraError;
  // Forward declaring type: EVRTrackedCameraFrameType
  struct EVRTrackedCameraFrameType;
  // Forward declaring type: HmdMatrix44_t
  struct HmdMatrix44_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRTrackedCamera/_GetCameraProjection
  class IVRTrackedCamera::_GetCameraProjection : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x106442C
    static IVRTrackedCamera::_GetCameraProjection* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRTrackedCameraError Invoke(System.UInt32 nDeviceIndex, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, System.Single flZNear, System.Single flZFar, ref OVR.OpenVR.HmdMatrix44_t pProjection)
    // Offset: 0x1064440
    OVR::OpenVR::EVRTrackedCameraError Invoke(uint nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, OVR::OpenVR::HmdMatrix44_t& pProjection);
    // public System.IAsyncResult BeginInvoke(System.UInt32 nDeviceIndex, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, System.Single flZNear, System.Single flZFar, ref OVR.OpenVR.HmdMatrix44_t pProjection, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1064724
    System::IAsyncResult* BeginInvoke(uint nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, OVR::OpenVR::HmdMatrix44_t& pProjection, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRTrackedCameraError EndInvoke(ref OVR.OpenVR.HmdMatrix44_t pProjection, System.IAsyncResult result)
    // Offset: 0x106482C
    OVR::OpenVR::EVRTrackedCameraError EndInvoke(OVR::OpenVR::HmdMatrix44_t& pProjection, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRTrackedCamera/_GetCameraProjection
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRTrackedCamera::_GetCameraProjection*, "OVR.OpenVR", "IVRTrackedCamera/_GetCameraProjection");
#pragma pack(pop)
