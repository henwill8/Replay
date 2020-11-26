// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.CVRSystem
#include "OVR/OpenVR/CVRSystem.hpp"
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
  // Forward declaring type: VREvent_t_Packed
  struct VREvent_t_Packed;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.CVRSystem/_PollNextEventPacked
  class CVRSystem::_PollNextEventPacked : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x11F9358
    static CVRSystem::_PollNextEventPacked* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(ref OVR.OpenVR.VREvent_t_Packed pEvent, System.UInt32 uncbVREvent)
    // Offset: 0x11F8264
    bool Invoke(OVR::OpenVR::VREvent_t_Packed& pEvent, uint uncbVREvent);
    // public System.IAsyncResult BeginInvoke(ref OVR.OpenVR.VREvent_t_Packed pEvent, System.UInt32 uncbVREvent, System.AsyncCallback callback, System.Object object)
    // Offset: 0x11F936C
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::VREvent_t_Packed& pEvent, uint uncbVREvent, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref OVR.OpenVR.VREvent_t_Packed pEvent, System.IAsyncResult result)
    // Offset: 0x11F9420
    bool EndInvoke(OVR::OpenVR::VREvent_t_Packed& pEvent, System::IAsyncResult* result);
  }; // OVR.OpenVR.CVRSystem/_PollNextEventPacked
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRSystem::_PollNextEventPacked*, "OVR.OpenVR", "CVRSystem/_PollNextEventPacked");
#pragma pack(pop)
