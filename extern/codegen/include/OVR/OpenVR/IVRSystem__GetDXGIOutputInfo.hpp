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
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetDXGIOutputInfo
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CF5DF4
  class IVRSystem::_GetDXGIOutputInfo : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetDXGIOutputInfo
    _GetDXGIOutputInfo() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x200DA94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetDXGIOutputInfo* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetDXGIOutputInfo*, creationType>(object, method)));
    }
    // public System.Void Invoke(ref System.Int32 pnAdapterIndex)
    // Offset: 0x200DAA8
    void Invoke(int& pnAdapterIndex);
    // public System.IAsyncResult BeginInvoke(ref System.Int32 pnAdapterIndex, System.AsyncCallback callback, System.Object object)
    // Offset: 0x200DCF8
    System::IAsyncResult* BeginInvoke(int& pnAdapterIndex, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref System.Int32 pnAdapterIndex, System.IAsyncResult result)
    // Offset: 0x200DD8C
    void EndInvoke(int& pnAdapterIndex, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetDXGIOutputInfo
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetDXGIOutputInfo*, "OVR.OpenVR", "IVRSystem/_GetDXGIOutputInfo");
