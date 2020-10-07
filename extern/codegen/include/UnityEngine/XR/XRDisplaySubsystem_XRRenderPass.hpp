// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.RenderTextureDescriptor
#include "UnityEngine/RenderTextureDescriptor.hpp"
// Including type: UnityEngine.XR.XRDisplaySubsystem
#include "UnityEngine/XR/XRDisplaySubsystem.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: UnityEngine.Rendering.RenderTargetIdentifier
#include "UnityEngine/Rendering/RenderTargetIdentifier.hpp"
// Completed includes
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Autogenerated type: UnityEngine.XR.XRDisplaySubsystem/XRRenderPass
  struct XRDisplaySubsystem::XRRenderPass : public System::ValueType {
    public:
    // private System.IntPtr displaySubsystemInstance
    // Offset: 0x0
    System::IntPtr displaySubsystemInstance;
    // public System.Int32 renderPassIndex
    // Offset: 0x8
    int renderPassIndex;
    // public UnityEngine.Rendering.RenderTargetIdentifier renderTarget
    // Offset: 0x10
    UnityEngine::Rendering::RenderTargetIdentifier renderTarget;
    // public UnityEngine.RenderTextureDescriptor renderTargetDesc
    // Offset: 0x38
    UnityEngine::RenderTextureDescriptor renderTargetDesc;
    // public System.Boolean shouldFillOutDepth
    // Offset: 0x6C
    bool shouldFillOutDepth;
    // public System.Int32 cullingPassIndex
    // Offset: 0x70
    int cullingPassIndex;
    // Creating value type constructor for type: XRRenderPass
    constexpr XRRenderPass(System::IntPtr displaySubsystemInstance_ = {}, int renderPassIndex_ = {}, UnityEngine::Rendering::RenderTargetIdentifier renderTarget_ = {}, UnityEngine::RenderTextureDescriptor renderTargetDesc_ = {}, bool shouldFillOutDepth_ = {}, int cullingPassIndex_ = {}) noexcept : displaySubsystemInstance{displaySubsystemInstance_}, renderPassIndex{renderPassIndex_}, renderTarget{renderTarget_}, renderTargetDesc{renderTargetDesc_}, shouldFillOutDepth{shouldFillOutDepth_}, cullingPassIndex{cullingPassIndex_} {}
  }; // UnityEngine.XR.XRDisplaySubsystem/XRRenderPass
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::XRDisplaySubsystem::XRRenderPass, "UnityEngine.XR", "XRDisplaySubsystem/XRRenderPass");
#pragma pack(pop)
