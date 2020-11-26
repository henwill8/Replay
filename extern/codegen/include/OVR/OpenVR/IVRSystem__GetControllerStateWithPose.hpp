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
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: VRControllerState_t
  struct VRControllerState_t;
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetControllerStateWithPose
  class IVRSystem::_GetControllerStateWithPose : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1911884
    static IVRSystem::_GetControllerStateWithPose* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(OVR.OpenVR.ETrackingUniverseOrigin eOrigin, System.UInt32 unControllerDeviceIndex, ref OVR.OpenVR.VRControllerState_t pControllerState, System.UInt32 unControllerStateSize, ref OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose)
    // Offset: 0x1911898
    bool Invoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint unControllerDeviceIndex, OVR::OpenVR::VRControllerState_t& pControllerState, uint unControllerStateSize, OVR::OpenVR::TrackedDevicePose_t& pTrackedDevicePose);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.ETrackingUniverseOrigin eOrigin, System.UInt32 unControllerDeviceIndex, ref OVR.OpenVR.VRControllerState_t pControllerState, System.UInt32 unControllerStateSize, ref OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1911B80
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint unControllerDeviceIndex, OVR::OpenVR::VRControllerState_t& pControllerState, uint unControllerStateSize, OVR::OpenVR::TrackedDevicePose_t& pTrackedDevicePose, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref OVR.OpenVR.VRControllerState_t pControllerState, ref OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose, System.IAsyncResult result)
    // Offset: 0x1911C88
    bool EndInvoke(OVR::OpenVR::VRControllerState_t& pControllerState, OVR::OpenVR::TrackedDevicePose_t& pTrackedDevicePose, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetControllerStateWithPose
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetControllerStateWithPose*, "OVR.OpenVR", "IVRSystem/_GetControllerStateWithPose");
#pragma pack(pop)
