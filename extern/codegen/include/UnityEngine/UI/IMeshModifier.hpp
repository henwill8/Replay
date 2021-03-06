// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.IMeshModifier
  // [] Offset: FFFFFFFF
  class IMeshModifier {
    public:
    // Creating value type constructor for type: IMeshModifier
    IMeshModifier() noexcept {}
    // public System.Void ModifyMesh(UnityEngine.Mesh mesh)
    // Offset: 0xFFFFFFFF
    void ModifyMesh(UnityEngine::Mesh* mesh);
    // public System.Void ModifyMesh(UnityEngine.UI.VertexHelper verts)
    // Offset: 0xFFFFFFFF
    void ModifyMesh(UnityEngine::UI::VertexHelper* verts);
  }; // UnityEngine.UI.IMeshModifier
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::IMeshModifier*, "UnityEngine.UI", "IMeshModifier");
