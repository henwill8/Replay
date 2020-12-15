// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OnRenderImageTest
  class OnRenderImageTest : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.RenderTexture _rt
    // Offset: 0x18
    UnityEngine::RenderTexture* rt;
    // private UnityEngine.Material _stereoCopyMaterial
    // Offset: 0x20
    UnityEngine::Material* stereoCopyMaterial;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Start()
    // Offset: 0x1014438
    void Start();
    // private System.Void OnRenderImage(UnityEngine.RenderTexture source, UnityEngine.RenderTexture destination)
    // Offset: 0x101451C
    void OnRenderImage(UnityEngine::RenderTexture* source, UnityEngine::RenderTexture* destination);
    // public System.Void .ctor()
    // Offset: 0x10145B8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OnRenderImageTest* New_ctor();
  }; // OnRenderImageTest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OnRenderImageTest*, "", "OnRenderImageTest");
#pragma pack(pop)