// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSystem/_DriverDebugRequest
  class IVRSystem::_DriverDebugRequest : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x190FF0C
    static IVRSystem::_DriverDebugRequest* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke(System.UInt32 unDeviceIndex, System.String pchRequest, System.Text.StringBuilder pchResponseBuffer, System.UInt32 unResponseBufferSize)
    // Offset: 0x190FF20
    uint Invoke(uint unDeviceIndex, ::Il2CppString* pchRequest, System::Text::StringBuilder* pchResponseBuffer, uint unResponseBufferSize);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, System.String pchRequest, System.Text.StringBuilder pchResponseBuffer, System.UInt32 unResponseBufferSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x19101E8
    System::IAsyncResult* BeginInvoke(uint unDeviceIndex, ::Il2CppString* pchRequest, System::Text::StringBuilder* pchResponseBuffer, uint unResponseBufferSize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x191029C
    uint EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_DriverDebugRequest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_DriverDebugRequest*, "OVR.OpenVR", "IVRSystem/_DriverDebugRequest");
#pragma pack(pop)
