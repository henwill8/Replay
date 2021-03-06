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
  // Autogenerated type: OVR.OpenVR.IVRTrackedCamera/_ReleaseVideoStreamingService
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CF61C8
  class IVRTrackedCamera::_ReleaseVideoStreamingService : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _ReleaseVideoStreamingService
    _ReleaseVideoStreamingService() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x11A0B6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRTrackedCamera::_ReleaseVideoStreamingService* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRTrackedCamera::_ReleaseVideoStreamingService::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRTrackedCamera::_ReleaseVideoStreamingService*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRTrackedCameraError Invoke(System.UInt64 hTrackedCamera)
    // Offset: 0x11A0B80
    OVR::OpenVR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera);
    // public System.IAsyncResult BeginInvoke(System.UInt64 hTrackedCamera, System.AsyncCallback callback, System.Object object)
    // Offset: 0x11A0DE8
    System::IAsyncResult* BeginInvoke(uint64_t hTrackedCamera, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRTrackedCameraError EndInvoke(System.IAsyncResult result)
    // Offset: 0x11A0E74
    OVR::OpenVR::EVRTrackedCameraError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRTrackedCamera/_ReleaseVideoStreamingService
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRTrackedCamera::_ReleaseVideoStreamingService*, "OVR.OpenVR", "IVRTrackedCamera/_ReleaseVideoStreamingService");
