// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRApplications
#include "Valve/VR/IVRApplications.hpp"
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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRApplications/_AddApplicationManifest
  class IVRApplications::_AddApplicationManifest : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFE98B0
    static IVRApplications::_AddApplicationManifest* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVRApplicationError Invoke(System.String pchApplicationManifestFullPath, System.Boolean bTemporary)
    // Offset: 0xFDBEA8
    Valve::VR::EVRApplicationError Invoke(::Il2CppString* pchApplicationManifestFullPath, bool bTemporary);
    // public System.IAsyncResult BeginInvoke(System.String pchApplicationManifestFullPath, System.Boolean bTemporary, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFE98C4
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchApplicationManifestFullPath, bool bTemporary, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRApplicationError EndInvoke(System.IAsyncResult result)
    // Offset: 0xFE9964
    Valve::VR::EVRApplicationError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/_AddApplicationManifest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRApplications::_AddApplicationManifest*, "Valve.VR", "IVRApplications/_AddApplicationManifest");
#pragma pack(pop)
