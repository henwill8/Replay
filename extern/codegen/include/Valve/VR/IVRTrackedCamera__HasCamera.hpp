// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRTrackedCamera
#include "Valve/VR/IVRTrackedCamera.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRTrackedCamera/_HasCamera
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CFAE94
  class IVRTrackedCamera::_HasCamera : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _HasCamera
    _HasCamera() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x22709A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRTrackedCamera::_HasCamera* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRTrackedCamera::_HasCamera::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRTrackedCamera::_HasCamera*, creationType>(object, method)));
    }
    // public Valve.VR.EVRTrackedCameraError Invoke(System.UInt32 nDeviceIndex, ref System.Boolean pHasCamera)
    // Offset: 0x22709B4
    Valve::VR::EVRTrackedCameraError Invoke(uint nDeviceIndex, bool& pHasCamera);
    // public System.IAsyncResult BeginInvoke(System.UInt32 nDeviceIndex, ref System.Boolean pHasCamera, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2270C44
    System::IAsyncResult* BeginInvoke(uint nDeviceIndex, bool& pHasCamera, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRTrackedCameraError EndInvoke(ref System.Boolean pHasCamera, System.IAsyncResult result)
    // Offset: 0x2270CF8
    Valve::VR::EVRTrackedCameraError EndInvoke(bool& pHasCamera, System::IAsyncResult* result);
  }; // Valve.VR.IVRTrackedCamera/_HasCamera
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRTrackedCamera::_HasCamera*, "Valve.VR", "IVRTrackedCamera/_HasCamera");
