// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRTrackedCamera
#include "Valve/VR/IVRTrackedCamera.hpp"
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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRTrackedCameraError
  struct EVRTrackedCameraError;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRTrackedCamera/_AcquireVideoStreamingService
  class IVRTrackedCamera::_AcquireVideoStreamingService : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x19317A8
    static IVRTrackedCamera::_AcquireVideoStreamingService* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVRTrackedCameraError Invoke(System.UInt32 nDeviceIndex, ref System.UInt64 pHandle)
    // Offset: 0x19317BC
    Valve::VR::EVRTrackedCameraError Invoke(uint nDeviceIndex, uint64_t& pHandle);
    // public System.IAsyncResult BeginInvoke(System.UInt32 nDeviceIndex, ref System.UInt64 pHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1931A4C
    System::IAsyncResult* BeginInvoke(uint nDeviceIndex, uint64_t& pHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRTrackedCameraError EndInvoke(ref System.UInt64 pHandle, System.IAsyncResult result)
    // Offset: 0x1931B00
    Valve::VR::EVRTrackedCameraError EndInvoke(uint64_t& pHandle, System::IAsyncResult* result);
  }; // Valve.VR.IVRTrackedCamera/_AcquireVideoStreamingService
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRTrackedCamera::_AcquireVideoStreamingService*, "Valve.VR", "IVRTrackedCamera/_AcquireVideoStreamingService");
#pragma pack(pop)
