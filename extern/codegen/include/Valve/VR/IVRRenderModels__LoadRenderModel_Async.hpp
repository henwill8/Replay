// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRRenderModels
#include "Valve/VR/IVRRenderModels.hpp"
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
  // Forward declaring type: EVRRenderModelError
  struct EVRRenderModelError;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRRenderModels/_LoadRenderModel_Async
  class IVRRenderModels::_LoadRenderModel_Async : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1920A4C
    static IVRRenderModels::_LoadRenderModel_Async* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVRRenderModelError Invoke(System.String pchRenderModelName, ref System.IntPtr ppRenderModel)
    // Offset: 0x1920A60
    Valve::VR::EVRRenderModelError Invoke(::Il2CppString* pchRenderModelName, System::IntPtr& ppRenderModel);
    // public System.IAsyncResult BeginInvoke(System.String pchRenderModelName, ref System.IntPtr ppRenderModel, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1920E6C
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchRenderModelName, System::IntPtr& ppRenderModel, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRRenderModelError EndInvoke(ref System.IntPtr ppRenderModel, System.IAsyncResult result)
    // Offset: 0x1920F08
    Valve::VR::EVRRenderModelError EndInvoke(System::IntPtr& ppRenderModel, System::IAsyncResult* result);
  }; // Valve.VR.IVRRenderModels/_LoadRenderModel_Async
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRRenderModels::_LoadRenderModel_Async*, "Valve.VR", "IVRRenderModels/_LoadRenderModel_Async");
#pragma pack(pop)