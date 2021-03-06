// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRApplications
#include "Valve/VR/IVRApplications.hpp"
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRApplications/_CancelApplicationLaunch
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CFB038
  class IVRApplications::_CancelApplicationLaunch : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _CancelApplicationLaunch
    _CancelApplicationLaunch() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15D9E20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_CancelApplicationLaunch* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRApplications::_CancelApplicationLaunch::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_CancelApplicationLaunch*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.String pchAppKey)
    // Offset: 0x15CE754
    bool Invoke(::Il2CppString* pchAppKey);
    // public System.IAsyncResult BeginInvoke(System.String pchAppKey, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15D9E34
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchAppKey, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x15D9E58
    bool EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/_CancelApplicationLaunch
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRApplications::_CancelApplicationLaunch*, "Valve.VR", "IVRApplications/_CancelApplicationLaunch");
