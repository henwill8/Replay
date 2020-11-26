// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRIOBuffer
#include "OVR/OpenVR/IVRIOBuffer.hpp"
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
  // Forward declaring type: EIOBufferError
  struct EIOBufferError;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRIOBuffer/_Read
  class IVRIOBuffer::_Read : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18624E0
    static IVRIOBuffer::_Read* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EIOBufferError Invoke(System.UInt64 ulBuffer, System.IntPtr pDst, System.UInt32 unBytes, ref System.UInt32 punRead)
    // Offset: 0x18624F4
    OVR::OpenVR::EIOBufferError Invoke(uint64_t ulBuffer, System::IntPtr pDst, uint unBytes, uint& punRead);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulBuffer, System.IntPtr pDst, System.UInt32 unBytes, ref System.UInt32 punRead, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18627A4
    System::IAsyncResult* BeginInvoke(uint64_t ulBuffer, System::IntPtr pDst, uint unBytes, uint& punRead, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EIOBufferError EndInvoke(ref System.UInt32 punRead, System.IAsyncResult result)
    // Offset: 0x186288C
    OVR::OpenVR::EIOBufferError EndInvoke(uint& punRead, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRIOBuffer/_Read
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRIOBuffer::_Read*, "OVR.OpenVR", "IVRIOBuffer/_Read");
#pragma pack(pop)
