// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
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
  // Forward declaring type: EVREye
  struct EVREye;
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
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetProjectionRaw
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CF5D90
  class IVRSystem::_GetProjectionRaw : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetProjectionRaw
    _GetProjectionRaw() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x200FEF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetProjectionRaw* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_GetProjectionRaw::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetProjectionRaw*, creationType>(object, method)));
    }
    // public System.Void Invoke(OVR.OpenVR.EVREye eEye, ref System.Single pfLeft, ref System.Single pfRight, ref System.Single pfTop, ref System.Single pfBottom)
    // Offset: 0x200FF0C
    void Invoke(OVR::OpenVR::EVREye eEye, float& pfLeft, float& pfRight, float& pfTop, float& pfBottom);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVREye eEye, ref System.Single pfLeft, ref System.Single pfRight, ref System.Single pfTop, ref System.Single pfBottom, System.AsyncCallback callback, System.Object object)
    // Offset: 0x20101E8
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EVREye eEye, float& pfLeft, float& pfRight, float& pfTop, float& pfBottom, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref System.Single pfLeft, ref System.Single pfRight, ref System.Single pfTop, ref System.Single pfBottom, System.IAsyncResult result)
    // Offset: 0x20102EC
    void EndInvoke(float& pfLeft, float& pfRight, float& pfTop, float& pfBottom, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetProjectionRaw
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetProjectionRaw*, "OVR.OpenVR", "IVRSystem/_GetProjectionRaw");
