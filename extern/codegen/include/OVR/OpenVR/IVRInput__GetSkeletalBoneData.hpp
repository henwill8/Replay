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
  // Forward declaring type: EVRSkeletalTransformSpace
  struct EVRSkeletalTransformSpace;
  // Forward declaring type: EVRSkeletalMotionRange
  struct EVRSkeletalMotionRange;
  // Forward declaring type: VRBoneTransform_t
  struct VRBoneTransform_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRInput/_GetSkeletalBoneData
  class IVRInput::_GetSkeletalBoneData : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1865A5C
    static IVRInput::_GetSkeletalBoneData* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRInputError Invoke(System.UInt64 action, OVR.OpenVR.EVRSkeletalTransformSpace eTransformSpace, OVR.OpenVR.EVRSkeletalMotionRange eMotionRange, in OVR.OpenVR.VRBoneTransform_t[] pTransformArray, System.UInt32 unTransformArrayCount, System.UInt64 ulRestrictToDevice)
    // Offset: 0x1865A70
    OVR::OpenVR::EVRInputError Invoke(uint64_t action, OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, OVR::OpenVR::EVRSkeletalMotionRange eMotionRange, ::Array<OVR::OpenVR::VRBoneTransform_t>*& pTransformArray, uint unTransformArrayCount, uint64_t ulRestrictToDevice);
    // public System.IAsyncResult BeginInvoke(System.UInt64 action, OVR.OpenVR.EVRSkeletalTransformSpace eTransformSpace, OVR.OpenVR.EVRSkeletalMotionRange eMotionRange, in OVR.OpenVR.VRBoneTransform_t[] pTransformArray, System.UInt32 unTransformArrayCount, System.UInt64 ulRestrictToDevice, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1865D44
    System::IAsyncResult* BeginInvoke(uint64_t action, OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, OVR::OpenVR::EVRSkeletalMotionRange eMotionRange, ::Array<OVR::OpenVR::VRBoneTransform_t>*& pTransformArray, uint unTransformArrayCount, uint64_t ulRestrictToDevice, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1865E50
    OVR::OpenVR::EVRInputError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/_GetSkeletalBoneData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRInput::_GetSkeletalBoneData*, "OVR.OpenVR", "IVRInput/_GetSkeletalBoneData");
#pragma pack(pop)
