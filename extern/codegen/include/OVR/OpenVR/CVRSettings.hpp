// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSettings
#include "OVR/OpenVR/IVRSettings.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRSettingsError
  struct EVRSettingsError;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.CVRSettings
  class CVRSettings : public ::Il2CppObject {
    public:
    // private OVR.OpenVR.IVRSettings FnTable
    // Offset: 0x10
    OVR::OpenVR::IVRSettings FnTable;
    // Creating conversion operator: operator OVR::OpenVR::IVRSettings
    constexpr operator OVR::OpenVR::IVRSettings() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x11F774C
    static CVRSettings* New_ctor(System::IntPtr pInterface);
    // public System.String GetSettingsErrorNameFromEnum(OVR.OpenVR.EVRSettingsError eError)
    // Offset: 0x11F7860
    ::Il2CppString* GetSettingsErrorNameFromEnum(OVR::OpenVR::EVRSettingsError eError);
    // public System.Boolean Sync(System.Boolean bForce, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x11F78F4
    bool Sync(bool bForce, OVR::OpenVR::EVRSettingsError& peError);
    // public System.Void SetBool(System.String pchSection, System.String pchSettingsKey, System.Boolean bValue, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x11F7914
    void SetBool(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, bool bValue, OVR::OpenVR::EVRSettingsError& peError);
    // public System.Void SetInt32(System.String pchSection, System.String pchSettingsKey, System.Int32 nValue, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x11F7934
    void SetInt32(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, int nValue, OVR::OpenVR::EVRSettingsError& peError);
    // public System.Void SetFloat(System.String pchSection, System.String pchSettingsKey, System.Single flValue, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x11F7950
    void SetFloat(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, float flValue, OVR::OpenVR::EVRSettingsError& peError);
    // public System.Void SetString(System.String pchSection, System.String pchSettingsKey, System.String pchValue, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x11F796C
    void SetString(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, ::Il2CppString* pchValue, OVR::OpenVR::EVRSettingsError& peError);
    // public System.Boolean GetBool(System.String pchSection, System.String pchSettingsKey, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x11F7988
    bool GetBool(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, OVR::OpenVR::EVRSettingsError& peError);
    // public System.Int32 GetInt32(System.String pchSection, System.String pchSettingsKey, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x11F79A4
    int GetInt32(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, OVR::OpenVR::EVRSettingsError& peError);
    // public System.Single GetFloat(System.String pchSection, System.String pchSettingsKey, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x11F79C0
    float GetFloat(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, OVR::OpenVR::EVRSettingsError& peError);
    // public System.Void GetString(System.String pchSection, System.String pchSettingsKey, System.Text.StringBuilder pchValue, System.UInt32 unValueLen, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x11F79DC
    void GetString(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, System::Text::StringBuilder* pchValue, uint unValueLen, OVR::OpenVR::EVRSettingsError& peError);
    // public System.Void RemoveSection(System.String pchSection, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x11F79F8
    void RemoveSection(::Il2CppString* pchSection, OVR::OpenVR::EVRSettingsError& peError);
    // public System.Void RemoveKeyInSection(System.String pchSection, System.String pchSettingsKey, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x11F7A14
    void RemoveKeyInSection(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, OVR::OpenVR::EVRSettingsError& peError);
  }; // OVR.OpenVR.CVRSettings
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRSettings*, "OVR.OpenVR", "CVRSettings");
#pragma pack(pop)