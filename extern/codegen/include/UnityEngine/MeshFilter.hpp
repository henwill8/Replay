// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.MeshFilter
  class MeshFilter : public UnityEngine::Component {
    public:
    // private System.Void DontStripMeshFilter()
    // Offset: 0x1415C1C
    void DontStripMeshFilter();
    // public UnityEngine.Mesh get_sharedMesh()
    // Offset: 0x1415C20
    UnityEngine::Mesh* get_sharedMesh();
    // public System.Void set_sharedMesh(UnityEngine.Mesh value)
    // Offset: 0x1415C60
    void set_sharedMesh(UnityEngine::Mesh* value);
    // public System.Void set_mesh(UnityEngine.Mesh value)
    // Offset: 0x1415CB0
    void set_mesh(UnityEngine::Mesh* value);
  }; // UnityEngine.MeshFilter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::MeshFilter*, "UnityEngine", "MeshFilter");
#pragma pack(pop)
