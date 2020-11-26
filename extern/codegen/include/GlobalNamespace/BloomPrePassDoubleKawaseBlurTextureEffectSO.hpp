// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BloomPrePassEffectSO
#include "GlobalNamespace/BloomPrePassEffectSO.hpp"
// Including type: KawaseBlurRendererSO/KernelSize
#include "GlobalNamespace/KawaseBlurRendererSO_KernelSize.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: KawaseBlurRendererSO because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BloomPrePassDoubleKawaseBlurTextureEffectSO
  class BloomPrePassDoubleKawaseBlurTextureEffectSO : public GlobalNamespace::BloomPrePassEffectSO {
    public:
    // private KawaseBlurRendererSO/KernelSize _bloom1KernelSize
    // Offset: 0x2C
    GlobalNamespace::KawaseBlurRendererSO::KernelSize bloom1KernelSize;
    // private System.Single _bloom1Boost
    // Offset: 0x30
    float bloom1Boost;
    // private KawaseBlurRendererSO/KernelSize _bloom2KernelSize
    // Offset: 0x34
    GlobalNamespace::KawaseBlurRendererSO::KernelSize bloom2KernelSize;
    // private System.Single _bloom2Boost
    // Offset: 0x38
    float bloom2Boost;
    // private System.Single _bloom2Alpha
    // Offset: 0x3C
    float bloom2Alpha;
    // private System.Int32 _downsample
    // Offset: 0x40
    int downsample;
    // private System.Boolean _gammaCorrection
    // Offset: 0x44
    bool gammaCorrection;
    // private KawaseBlurRendererSO _kawaseBlurRenderer
    // Offset: 0x48
    GlobalNamespace::KawaseBlurRendererSO* kawaseBlurRenderer;
    // public override System.Void Render(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest)
    // Offset: 0x198803C
    // Implemented from: TextureEffectSO
    // Base method: System.Void TextureEffectSO::Render(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest)
    void Render(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest);
    // public System.Void .ctor()
    // Offset: 0x1988074
    // Implemented from: BloomPrePassEffectSO
    // Base method: System.Void BloomPrePassEffectSO::.ctor()
    // Base method: System.Void TextureEffectSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BloomPrePassDoubleKawaseBlurTextureEffectSO* New_ctor();
  }; // BloomPrePassDoubleKawaseBlurTextureEffectSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO*, "", "BloomPrePassDoubleKawaseBlurTextureEffectSO");
#pragma pack(pop)
