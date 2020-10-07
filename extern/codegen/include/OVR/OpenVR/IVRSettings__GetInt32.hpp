// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSettings
#include "OVR/OpenVR/IVRSettings.hpp"
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
  // Forward declaring type: EVRSettingsError
  struct EVRSettingsError;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSettings/_GetInt32
  class IVRSettings::_GetInt32 : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16B65D8
    static IVRSettings::_GetInt32* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Int32 Invoke(System.String pchSection, System.String pchSettingsKey, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x16B65EC
    int Invoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, OVR::OpenVR::EVRSettingsError& peError);
    // public System.IAsyncResult BeginInvoke(System.String pchSection, System.String pchSettingsKey, ref OVR.OpenVR.EVRSettingsError peError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16B6A1C
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, OVR::OpenVR::EVRSettingsError& peError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Int32 EndInvoke(ref OVR.OpenVR.EVRSettingsError peError, System.IAsyncResult result)
    // Offset: 0x16B6AC4
    int EndInvoke(OVR::OpenVR::EVRSettingsError& peError, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSettings/_GetInt32
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSettings::_GetInt32*, "OVR.OpenVR", "IVRSettings/_GetInt32");
#pragma pack(pop)
