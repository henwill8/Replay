// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRRenderModels
#include "Valve/VR/IVRRenderModels.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRRenderModelError
  struct EVRRenderModelError;
  // Forward declaring type: VRControllerState_t
  struct VRControllerState_t;
  // Forward declaring type: RenderModel_ControllerMode_State_t
  struct RenderModel_ControllerMode_State_t;
  // Forward declaring type: RenderModel_ComponentState_t
  struct RenderModel_ComponentState_t;
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.CVRRenderModels
  class CVRRenderModels : public ::Il2CppObject {
    public:
    // Nested type: Valve::VR::CVRRenderModels::_GetComponentStatePacked
    class _GetComponentStatePacked;
    // Nested type: Valve::VR::CVRRenderModels::GetComponentStateUnion
    struct GetComponentStateUnion;
    // private Valve.VR.IVRRenderModels FnTable
    // Offset: 0x10
    Valve::VR::IVRRenderModels FnTable;
    // Creating conversion operator: operator Valve::VR::IVRRenderModels
    constexpr operator Valve::VR::IVRRenderModels() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x136AD40
    static CVRRenderModels* New_ctor(System::IntPtr pInterface);
    // public Valve.VR.EVRRenderModelError LoadRenderModel_Async(System.String pchRenderModelName, ref System.IntPtr ppRenderModel)
    // Offset: 0x136AE54
    Valve::VR::EVRRenderModelError LoadRenderModel_Async(::Il2CppString* pchRenderModelName, System::IntPtr& ppRenderModel);
    // public System.Void FreeRenderModel(System.IntPtr pRenderModel)
    // Offset: 0x136AE70
    void FreeRenderModel(System::IntPtr pRenderModel);
    // public Valve.VR.EVRRenderModelError LoadTexture_Async(System.Int32 textureId, ref System.IntPtr ppTexture)
    // Offset: 0x136AE8C
    Valve::VR::EVRRenderModelError LoadTexture_Async(int textureId, System::IntPtr& ppTexture);
    // public System.Void FreeTexture(System.IntPtr pTexture)
    // Offset: 0x136AEA8
    void FreeTexture(System::IntPtr pTexture);
    // public Valve.VR.EVRRenderModelError LoadTextureD3D11_Async(System.Int32 textureId, System.IntPtr pD3D11Device, ref System.IntPtr ppD3D11Texture2D)
    // Offset: 0x136AEC4
    Valve::VR::EVRRenderModelError LoadTextureD3D11_Async(int textureId, System::IntPtr pD3D11Device, System::IntPtr& ppD3D11Texture2D);
    // public Valve.VR.EVRRenderModelError LoadIntoTextureD3D11_Async(System.Int32 textureId, System.IntPtr pDstTexture)
    // Offset: 0x136AEE0
    Valve::VR::EVRRenderModelError LoadIntoTextureD3D11_Async(int textureId, System::IntPtr pDstTexture);
    // public System.Void FreeTextureD3D11(System.IntPtr pD3D11Texture2D)
    // Offset: 0x136AEFC
    void FreeTextureD3D11(System::IntPtr pD3D11Texture2D);
    // public System.UInt32 GetRenderModelName(System.UInt32 unRenderModelIndex, System.Text.StringBuilder pchRenderModelName, System.UInt32 unRenderModelNameLen)
    // Offset: 0x136AF18
    uint GetRenderModelName(uint unRenderModelIndex, System::Text::StringBuilder* pchRenderModelName, uint unRenderModelNameLen);
    // public System.UInt32 GetRenderModelCount()
    // Offset: 0x136AF34
    uint GetRenderModelCount();
    // public System.UInt32 GetComponentCount(System.String pchRenderModelName)
    // Offset: 0x136AF50
    uint GetComponentCount(::Il2CppString* pchRenderModelName);
    // public System.UInt32 GetComponentName(System.String pchRenderModelName, System.UInt32 unComponentIndex, System.Text.StringBuilder pchComponentName, System.UInt32 unComponentNameLen)
    // Offset: 0x136AF6C
    uint GetComponentName(::Il2CppString* pchRenderModelName, uint unComponentIndex, System::Text::StringBuilder* pchComponentName, uint unComponentNameLen);
    // public System.UInt64 GetComponentButtonMask(System.String pchRenderModelName, System.String pchComponentName)
    // Offset: 0x136AF88
    uint64_t GetComponentButtonMask(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName);
    // public System.UInt32 GetComponentRenderModelName(System.String pchRenderModelName, System.String pchComponentName, System.Text.StringBuilder pchComponentRenderModelName, System.UInt32 unComponentRenderModelNameLen)
    // Offset: 0x136AFA4
    uint GetComponentRenderModelName(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName, System::Text::StringBuilder* pchComponentRenderModelName, uint unComponentRenderModelNameLen);
    // public System.Boolean GetComponentState(System.String pchRenderModelName, System.String pchComponentName, ref Valve.VR.VRControllerState_t pControllerState, ref Valve.VR.RenderModel_ControllerMode_State_t pState, ref Valve.VR.RenderModel_ComponentState_t pComponentState)
    // Offset: 0x136AFC0
    bool GetComponentState(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName, Valve::VR::VRControllerState_t& pControllerState, Valve::VR::RenderModel_ControllerMode_State_t& pState, Valve::VR::RenderModel_ComponentState_t& pComponentState);
    // public System.Boolean RenderModelHasComponent(System.String pchRenderModelName, System.String pchComponentName)
    // Offset: 0x136B574
    bool RenderModelHasComponent(::Il2CppString* pchRenderModelName, ::Il2CppString* pchComponentName);
    // public System.UInt32 GetRenderModelThumbnailURL(System.String pchRenderModelName, System.Text.StringBuilder pchThumbnailURL, System.UInt32 unThumbnailURLLen, ref Valve.VR.EVRRenderModelError peError)
    // Offset: 0x136B590
    uint GetRenderModelThumbnailURL(::Il2CppString* pchRenderModelName, System::Text::StringBuilder* pchThumbnailURL, uint unThumbnailURLLen, Valve::VR::EVRRenderModelError& peError);
    // public System.UInt32 GetRenderModelOriginalPath(System.String pchRenderModelName, System.Text.StringBuilder pchOriginalPath, System.UInt32 unOriginalPathLen, ref Valve.VR.EVRRenderModelError peError)
    // Offset: 0x136B5AC
    uint GetRenderModelOriginalPath(::Il2CppString* pchRenderModelName, System::Text::StringBuilder* pchOriginalPath, uint unOriginalPathLen, Valve::VR::EVRRenderModelError& peError);
    // public System.String GetRenderModelErrorNameFromEnum(Valve.VR.EVRRenderModelError error)
    // Offset: 0x136B5C8
    ::Il2CppString* GetRenderModelErrorNameFromEnum(Valve::VR::EVRRenderModelError error);
  }; // Valve.VR.CVRRenderModels
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRRenderModels*, "Valve.VR", "CVRRenderModels");
#pragma pack(pop)