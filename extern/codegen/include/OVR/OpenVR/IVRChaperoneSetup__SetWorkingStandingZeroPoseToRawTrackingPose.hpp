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
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRChaperoneSetup/_SetWorkingStandingZeroPoseToRawTrackingPose
  class IVRChaperoneSetup::_SetWorkingStandingZeroPoseToRawTrackingPose : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x11FC12C
    static IVRChaperoneSetup::_SetWorkingStandingZeroPoseToRawTrackingPose* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(ref OVR.OpenVR.HmdMatrix34_t pMatStandingZeroPoseToRawTrackingPose)
    // Offset: 0x11F2EC8
    void Invoke(OVR::OpenVR::HmdMatrix34_t& pMatStandingZeroPoseToRawTrackingPose);
    // public System.IAsyncResult BeginInvoke(ref OVR.OpenVR.HmdMatrix34_t pMatStandingZeroPoseToRawTrackingPose, System.AsyncCallback callback, System.Object object)
    // Offset: 0x11FC140
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::HmdMatrix34_t& pMatStandingZeroPoseToRawTrackingPose, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref OVR.OpenVR.HmdMatrix34_t pMatStandingZeroPoseToRawTrackingPose, System.IAsyncResult result)
    // Offset: 0x11FC1D4
    void EndInvoke(OVR::OpenVR::HmdMatrix34_t& pMatStandingZeroPoseToRawTrackingPose, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperoneSetup/_SetWorkingStandingZeroPoseToRawTrackingPose
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperoneSetup::_SetWorkingStandingZeroPoseToRawTrackingPose*, "OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingStandingZeroPoseToRawTrackingPose");
#pragma pack(pop)
