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
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: ETextureType
  struct ETextureType;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetOutputDevice
  class IVRSystem::_GetOutputDevice : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1913C14
    static IVRSystem::_GetOutputDevice* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(ref System.UInt64 pnDevice, OVR.OpenVR.ETextureType textureType, System.IntPtr pInstance)
    // Offset: 0x1913C28
    void Invoke(uint64_t& pnDevice, OVR::OpenVR::ETextureType textureType, System::IntPtr pInstance);
    // public System.IAsyncResult BeginInvoke(ref System.UInt64 pnDevice, OVR.OpenVR.ETextureType textureType, System.IntPtr pInstance, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1913EAC
    System::IAsyncResult* BeginInvoke(uint64_t& pnDevice, OVR::OpenVR::ETextureType textureType, System::IntPtr pInstance, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref System.UInt64 pnDevice, System.IAsyncResult result)
    // Offset: 0x1913F7C
    void EndInvoke(uint64_t& pnDevice, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetOutputDevice
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetOutputDevice*, "OVR.OpenVR", "IVRSystem/_GetOutputDevice");
#pragma pack(pop)
