// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRTrackedCamera
#include "OVR/OpenVR/IVRTrackedCamera.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRTrackedCameraError
  struct EVRTrackedCameraError;
  // Forward declaring type: EVRTrackedCameraFrameType
  struct EVRTrackedCameraFrameType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRTrackedCamera/_GetCameraFrameSize
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CF6178
  class IVRTrackedCamera::_GetCameraFrameSize : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetCameraFrameSize
    _GetCameraFrameSize() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x119E700
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRTrackedCamera::_GetCameraFrameSize* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRTrackedCamera::_GetCameraFrameSize::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRTrackedCamera::_GetCameraFrameSize*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRTrackedCameraError Invoke(System.UInt32 nDeviceIndex, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, ref System.UInt32 pnFrameBufferSize)
    // Offset: 0x119E714
    OVR::OpenVR::EVRTrackedCameraError Invoke(uint nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, uint& pnWidth, uint& pnHeight, uint& pnFrameBufferSize);
    // public System.IAsyncResult BeginInvoke(System.UInt32 nDeviceIndex, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, ref System.UInt32 pnFrameBufferSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x119E9F8
    System::IAsyncResult* BeginInvoke(uint nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, uint& pnWidth, uint& pnHeight, uint& pnFrameBufferSize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRTrackedCameraError EndInvoke(ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, ref System.UInt32 pnFrameBufferSize, System.IAsyncResult result)
    // Offset: 0x119EAFC
    OVR::OpenVR::EVRTrackedCameraError EndInvoke(uint& pnWidth, uint& pnHeight, uint& pnFrameBufferSize, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRTrackedCamera/_GetCameraFrameSize
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRTrackedCamera::_GetCameraFrameSize*, "OVR.OpenVR", "IVRTrackedCamera/_GetCameraFrameSize");
