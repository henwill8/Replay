// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRChaperoneSetup
#include "Valve/VR/IVRChaperoneSetup.hpp"
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
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRChaperoneSetup/_SetWorkingSeatedZeroPoseToRawTrackingPose
  class IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18E3A2C
    static IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(ref Valve.VR.HmdMatrix34_t pMatSeatedZeroPoseToRawTrackingPose)
    // Offset: 0x18E3A40
    void Invoke(Valve::VR::HmdMatrix34_t& pMatSeatedZeroPoseToRawTrackingPose);
    // public System.IAsyncResult BeginInvoke(ref Valve.VR.HmdMatrix34_t pMatSeatedZeroPoseToRawTrackingPose, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18E3C90
    System::IAsyncResult* BeginInvoke(Valve::VR::HmdMatrix34_t& pMatSeatedZeroPoseToRawTrackingPose, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref Valve.VR.HmdMatrix34_t pMatSeatedZeroPoseToRawTrackingPose, System.IAsyncResult result)
    // Offset: 0x18E3D24
    void EndInvoke(Valve::VR::HmdMatrix34_t& pMatSeatedZeroPoseToRawTrackingPose, System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperoneSetup/_SetWorkingSeatedZeroPoseToRawTrackingPose
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose*, "Valve.VR", "IVRChaperoneSetup/_SetWorkingSeatedZeroPoseToRawTrackingPose");
#pragma pack(pop)