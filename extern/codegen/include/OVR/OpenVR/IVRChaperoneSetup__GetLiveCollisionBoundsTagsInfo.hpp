// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperoneSetup
#include "OVR/OpenVR/IVRChaperoneSetup.hpp"
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
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRChaperoneSetup/_GetLiveCollisionBoundsTagsInfo
  class IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x11FB444
    static IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(in System.Byte[] pTagsBuffer, ref System.UInt32 punTagCount)
    // Offset: 0x11F3944
    bool Invoke(::Array<uint8_t>*& pTagsBuffer, uint& punTagCount);
    // public System.IAsyncResult BeginInvoke(in System.Byte[] pTagsBuffer, ref System.UInt32 punTagCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x11FB458
    System::IAsyncResult* BeginInvoke(::Array<uint8_t>*& pTagsBuffer, uint& punTagCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref System.UInt32 punTagCount, System.IAsyncResult result)
    // Offset: 0x11FB4F4
    bool EndInvoke(uint& punTagCount, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperoneSetup/_GetLiveCollisionBoundsTagsInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo*, "OVR.OpenVR", "IVRChaperoneSetup/_GetLiveCollisionBoundsTagsInfo");
#pragma pack(pop)
