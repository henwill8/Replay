// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
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
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: VRMessageOverlayResponse
  struct VRMessageOverlayResponse;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVROverlay/_ShowMessageOverlay
  class IVROverlay::_ShowMessageOverlay : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16ADF54
    static IVROverlay::_ShowMessageOverlay* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.VRMessageOverlayResponse Invoke(System.String pchText, System.String pchCaption, System.String pchButton0Text, System.String pchButton1Text, System.String pchButton2Text, System.String pchButton3Text)
    // Offset: 0x16ADF68
    OVR::OpenVR::VRMessageOverlayResponse Invoke(::Il2CppString* pchText, ::Il2CppString* pchCaption, ::Il2CppString* pchButton0Text, ::Il2CppString* pchButton1Text, ::Il2CppString* pchButton2Text, ::Il2CppString* pchButton3Text);
    // public System.IAsyncResult BeginInvoke(System.String pchText, System.String pchCaption, System.String pchButton0Text, System.String pchButton1Text, System.String pchButton2Text, System.String pchButton3Text, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16AE3E0
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchText, ::Il2CppString* pchCaption, ::Il2CppString* pchButton0Text, ::Il2CppString* pchButton1Text, ::Il2CppString* pchButton2Text, ::Il2CppString* pchButton3Text, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.VRMessageOverlayResponse EndInvoke(System.IAsyncResult result)
    // Offset: 0x16AE41C
    OVR::OpenVR::VRMessageOverlayResponse EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_ShowMessageOverlay
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_ShowMessageOverlay*, "OVR.OpenVR", "IVROverlay/_ShowMessageOverlay");
#pragma pack(pop)
