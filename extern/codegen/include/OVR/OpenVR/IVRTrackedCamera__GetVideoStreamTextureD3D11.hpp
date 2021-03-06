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
  // Forward declaring type: CameraVideoStreamFrameHeader_t
  struct CameraVideoStreamFrameHeader_t;
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
  // Autogenerated type: OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamTextureD3D11
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CF6204
  class IVRTrackedCamera::_GetVideoStreamTextureD3D11 : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetVideoStreamTextureD3D11
    _GetVideoStreamTextureD3D11() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x119F7BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRTrackedCamera::_GetVideoStreamTextureD3D11* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureD3D11::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRTrackedCamera::_GetVideoStreamTextureD3D11*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRTrackedCameraError Invoke(System.UInt64 hTrackedCamera, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, System.IntPtr pD3D11DeviceOrResource, ref System.IntPtr ppD3D11ShaderResourceView, ref OVR.OpenVR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize)
    // Offset: 0x119F7D0
    OVR::OpenVR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, System::IntPtr pD3D11DeviceOrResource, System::IntPtr& ppD3D11ShaderResourceView, OVR::OpenVR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize);
    // public System.IAsyncResult BeginInvoke(System.UInt64 hTrackedCamera, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, System.IntPtr pD3D11DeviceOrResource, ref System.IntPtr ppD3D11ShaderResourceView, ref OVR.OpenVR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x119FAAC
    System::IAsyncResult* BeginInvoke(uint64_t hTrackedCamera, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, System::IntPtr pD3D11DeviceOrResource, System::IntPtr& ppD3D11ShaderResourceView, OVR::OpenVR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRTrackedCameraError EndInvoke(ref System.IntPtr ppD3D11ShaderResourceView, ref OVR.OpenVR.CameraVideoStreamFrameHeader_t pFrameHeader, System.IAsyncResult result)
    // Offset: 0x119FBD8
    OVR::OpenVR::EVRTrackedCameraError EndInvoke(System::IntPtr& ppD3D11ShaderResourceView, OVR::OpenVR::CameraVideoStreamFrameHeader_t& pFrameHeader, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamTextureD3D11
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureD3D11*, "OVR.OpenVR", "IVRTrackedCamera/_GetVideoStreamTextureD3D11");
