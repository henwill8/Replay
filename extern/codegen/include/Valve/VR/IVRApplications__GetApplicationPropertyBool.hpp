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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRApplicationProperty
  struct EVRApplicationProperty;
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
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
  // Autogenerated type: Valve.VR.IVRApplications/_GetApplicationPropertyBool
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CFB09C
  class IVRApplications::_GetApplicationPropertyBool : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetApplicationPropertyBool
    _GetApplicationPropertyBool() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15DA288
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_GetApplicationPropertyBool* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRApplications::_GetApplicationPropertyBool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_GetApplicationPropertyBool*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.String pchAppKey, Valve.VR.EVRApplicationProperty eProperty, ref Valve.VR.EVRApplicationError peError)
    // Offset: 0x15CF970
    bool Invoke(::Il2CppString* pchAppKey, Valve::VR::EVRApplicationProperty eProperty, Valve::VR::EVRApplicationError& peError);
    // public System.IAsyncResult BeginInvoke(System.String pchAppKey, Valve.VR.EVRApplicationProperty eProperty, ref Valve.VR.EVRApplicationError peError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15DA29C
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchAppKey, Valve::VR::EVRApplicationProperty eProperty, Valve::VR::EVRApplicationError& peError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.EVRApplicationError peError, System.IAsyncResult result)
    // Offset: 0x15DA358
    bool EndInvoke(Valve::VR::EVRApplicationError& peError, System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/_GetApplicationPropertyBool
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRApplications::_GetApplicationPropertyBool*, "Valve.VR", "IVRApplications/_GetApplicationPropertyBool");
