// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRInput
#include "OVR/OpenVR/IVRInput.hpp"
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
  // Forward declaring type: EVRInputError
  struct EVRInputError;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRInput/_TriggerHapticVibrationAction
  class IVRInput::_TriggerHapticVibrationAction : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1866E1C
    static IVRInput::_TriggerHapticVibrationAction* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRInputError Invoke(System.UInt64 action, System.Single fStartSecondsFromNow, System.Single fDurationSeconds, System.Single fFrequency, System.Single fAmplitude, System.UInt64 ulRestrictToDevice)
    // Offset: 0x1866E30
    OVR::OpenVR::EVRInputError Invoke(uint64_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude, uint64_t ulRestrictToDevice);
    // public System.IAsyncResult BeginInvoke(System.UInt64 action, System.Single fStartSecondsFromNow, System.Single fDurationSeconds, System.Single fFrequency, System.Single fAmplitude, System.UInt64 ulRestrictToDevice, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1867114
    System::IAsyncResult* BeginInvoke(uint64_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude, uint64_t ulRestrictToDevice, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1867224
    OVR::OpenVR::EVRInputError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/_TriggerHapticVibrationAction
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRInput::_TriggerHapticVibrationAction*, "OVR.OpenVR", "IVRInput/_TriggerHapticVibrationAction");
#pragma pack(pop)