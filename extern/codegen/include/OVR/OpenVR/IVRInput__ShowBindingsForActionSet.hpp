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
  // Forward declaring type: VRActiveActionSet_t
  struct VRActiveActionSet_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRInput/_ShowBindingsForActionSet
  class IVRInput::_ShowBindingsForActionSet : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1866A70
    static IVRInput::_ShowBindingsForActionSet* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRInputError Invoke(in OVR.OpenVR.VRActiveActionSet_t[] pSets, System.UInt32 unSizeOfVRSelectedActionSet_t, System.UInt32 unSetCount, System.UInt64 originToHighlight)
    // Offset: 0x1866A84
    OVR::OpenVR::EVRInputError Invoke(::Array<OVR::OpenVR::VRActiveActionSet_t>*& pSets, uint unSizeOfVRSelectedActionSet_t, uint unSetCount, uint64_t originToHighlight);
    // public System.IAsyncResult BeginInvoke(in OVR.OpenVR.VRActiveActionSet_t[] pSets, System.UInt32 unSizeOfVRSelectedActionSet_t, System.UInt32 unSetCount, System.UInt64 originToHighlight, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1866D24
    System::IAsyncResult* BeginInvoke(::Array<OVR::OpenVR::VRActiveActionSet_t>*& pSets, uint unSizeOfVRSelectedActionSet_t, uint unSetCount, uint64_t originToHighlight, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1866DF0
    OVR::OpenVR::EVRInputError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/_ShowBindingsForActionSet
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRInput::_ShowBindingsForActionSet*, "OVR.OpenVR", "IVRInput/_ShowBindingsForActionSet");
#pragma pack(pop)
