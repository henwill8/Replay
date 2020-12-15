// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRRenderModels
#include "OVR/OpenVR/IVRRenderModels.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRRenderModelError
  struct EVRRenderModelError;
  // Forward declaring type: RenderModel_ControllerMode_State_t
  struct RenderModel_ControllerMode_State_t;
  // Forward declaring type: RenderModel_ComponentState_t
  struct RenderModel_ComponentState_t;
  // Forward declaring type: VRControllerState_t
  struct VRControllerState_t;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.CVRRenderModels
  class CVRRenderModels : public ::Il2CppObject {
    public:
    // Nested type: OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked
    class _GetComponentStatePacked;
    // Nested type: OVR::OpenVR::CVRRenderModels::GetComponentStateUnion
    struct GetComponentStateUnion;
    // private OVR.OpenVR.IVRRenderModels FnTable
    // Offset: 0x10
    OVR::OpenVR::IVRRenderModels FnTable;
    // Creating conversion operator: operator OVR::OpenVR::IVRRenderModels
    constexpr operator OVR::OpenVR::IVRRenderModels() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x11F69A0
    static CVRRenderModels* New_ctor(System::IntPtr pInterface);
    // public OVR.OpenVR.EVRRenderModelError LoadRenderModel_Async(System.String pchRenderModelName, ref System.IntPtr ppRenderModel)
    // Offset: 0x11F6AB4
    OVR::OpenVR::EVRRenderModelError LoadRenderModel_Async(::Il2CppString* pchRenderModelName, System::IntPtr& ppRenderModel);
    // public System.Void FreeRenderModel(System.IntPtr pRenderModel)
    // Offset: 0x11F6AD0
    void FreeRenderModel(System::IntPtr pRenderModel);
    // public OVR.OpenVR.EVRRenderModelError LoadTexture_Async(System.Int32 textureId, ref System.IntPtr ppTexture)
    // Offset: 0x11F6AEC
    OVR::OpenVR::EVRRenderModelError LoadTexture_Async(int textureId, System::IntPtr& ppTexture);
    // public System.Void FreeTexture(System.IntPtr pTexture)
    // Offset: 0x11F6B08
    void FreeTexture(System::IntPtr pTexture);
    // public OVR.OpenVR.EVRRenderModelError LoadTextureD3D11_Async(System.Int32 textureId, System.IntPtr pD3D11Device, ref System.IntPtr ppD3D11Texture2D)
    // Offset: 0x11F6B24
    OVR::OpenVR::EVRRenderModelError LoadTextureD3D11_Async(int textureId, System::IntPtr pD3D11Device, System::IntPtr& ppD3D11Texture2D);
    // public OVR.OpenVR.EVRRenderModelError LoadIntoTextureD3D11_Async(System.Int32 textureId, System.IntPtr pDstTexture)
    // Offset: 0x11F6B40
    OVR::OpenVR::EVRRenderModelError LoadIntoTextureD3D11_Async(int textureId, System::IntPtr pDstTexture);
    // public System.Void FreeTextureD3D11(System.IntPtr pD3D11Texture2D)
    // Offset: 0x11F6B5C
    void FreeTextureD3D11(System::IntPtr pD3D11Texture2D);
    // public System.UInt32 GetRenderModelName(System.UInt32 unRenderModelIndex, System.Text.StringBuilder pchRenderModelName, System.UInt32 unRenderModelNameLen)
    // Offset: 0x11F6B78
    uint GetRenderModelName(uint unRenderModelIndex, System::Text::StringBuilder* pchRenderModelName, uint unRenderModelNameLen);
    // public System.UInt32 GetRenderModelCount()
    // Offset: 0x11F6B94
    uint GetRenderModelCount();
    // public System.UInt32 GetComponentCount(System.String pchRenderModelName)
    // Offset: 0x11F6BB0
    uint GetComponentCount(::Il2CppString* pchRenderModelName);
    // public System.UInt32 GetComponentName(System.String pchRenderModelName, System.UInt32 unComponentIndex, System.Text.StringBuilder pchComponentName, System.UInt32 unComponentNameLen)
    // Offset: 0x11F6BCC
    uint GetComponentName(::Il2CppString* pchRenderModelName, uint unComponentIndex, System::Text::StringBuilder* pchComponentName, uint unComponentNameLen);
    // public System.UInt64 GetComponentButtonMask(System.String pchRenderModelName, System.String pchComponentName)
    // Offset: 0x11F6BE8
    uint64_t GetComponentButtonMask(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName);
    // public System.UInt32 GetComponentRenderModelName(System.String pchRenderModelName, System.String pchComponentName, System.Text.StringBuilder pchComponentRenderModelName, System.UInt32 unComponentRenderModelNameLen)
    // Offset: 0x11F6C04
    uint GetComponentRenderModelName(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName, System::Text::StringBuilder* pchComponentRenderModelName, uint unComponentRenderModelNameLen);
    // public System.Boolean GetComponentStateForDevicePath(System.String pchRenderModelName, System.String pchComponentName, System.UInt64 devicePath, ref OVR.OpenVR.RenderModel_ControllerMode_State_t pState, ref OVR.OpenVR.RenderModel_ComponentState_t pComponentState)
    // Offset: 0x11F6C20
    bool GetComponentStateForDevicePath(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName, uint64_t devicePath, OVR::OpenVR::RenderModel_ControllerMode_State_t& pState, OVR::OpenVR::RenderModel_ComponentState_t& pComponentState);
    // public System.Boolean GetComponentState(System.String pchRenderModelName, System.String pchComponentName, ref OVR.OpenVR.VRControllerState_t pControllerState, ref OVR.OpenVR.RenderModel_ControllerMode_State_t pState, ref OVR.OpenVR.RenderModel_ComponentState_t pComponentState)
    // Offset: 0x11F6C3C
    bool GetComponentState(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName, OVR::OpenVR::VRControllerState_t& pControllerState, OVR::OpenVR::RenderModel_ControllerMode_State_t& pState, OVR::OpenVR::RenderModel_ComponentState_t& pComponentState);
    // public System.Boolean RenderModelHasComponent(System.String pchRenderModelName, System.String pchComponentName)
    // Offset: 0x11F71F0
    bool RenderModelHasComponent(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName);
    // public System.UInt32 GetRenderModelThumbnailURL(System.String pchRenderModelName, System.Text.StringBuilder pchThumbnailURL, System.UInt32 unThumbnailURLLen, ref OVR.OpenVR.EVRRenderModelError peError)
    // Offset: 0x11F720C
    uint GetRenderModelThumbnailURL(::Il2CppString* pchRenderModelName, System::Text::StringBuilder* pchThumbnailURL, uint unThumbnailURLLen, OVR::OpenVR::EVRRenderModelError& peError);
    // public System.UInt32 GetRenderModelOriginalPath(System.String pchRenderModelName, System.Text.StringBuilder pchOriginalPath, System.UInt32 unOriginalPathLen, ref OVR.OpenVR.EVRRenderModelError peError)
    // Offset: 0x11F7228
    uint GetRenderModelOriginalPath(::Il2CppString* pchRenderModelName, System::Text::StringBuilder* pchOriginalPath, uint unOriginalPathLen, OVR::OpenVR::EVRRenderModelError& peError);
    // public System.String GetRenderModelErrorNameFromEnum(OVR.OpenVR.EVRRenderModelError error)
    // Offset: 0x11F7244
    ::Il2CppString* GetRenderModelErrorNameFromEnum(OVR::OpenVR::EVRRenderModelError error);
  }; // OVR.OpenVR.CVRRenderModels
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRRenderModels*, "OVR.OpenVR", "CVRRenderModels");
#pragma pack(pop)