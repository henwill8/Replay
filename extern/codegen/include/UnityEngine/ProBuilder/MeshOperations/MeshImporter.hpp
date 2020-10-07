// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.EdgeLookup
#include "UnityEngine/ProBuilder/EdgeLookup.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Forward declaring type: MeshImportSettings
  class MeshImportSettings;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Vertex
  class Vertex;
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: WingedEdge
  class WingedEdge;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.MeshImporter
  class MeshImporter : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::MeshOperations::MeshImporter::$$c
    class $$c;
    // private UnityEngine.ProBuilder.ProBuilderMesh m_Mesh
    // Offset: 0x10
    UnityEngine::ProBuilder::ProBuilderMesh* m_Mesh;
    // private UnityEngine.ProBuilder.Vertex[] m_Vertices
    // Offset: 0x18
    ::Array<UnityEngine::ProBuilder::Vertex*>* m_Vertices;
    // Get static field: static private readonly UnityEngine.ProBuilder.MeshOperations.MeshImportSettings k_DefaultImportSettings
    static UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* _get_k_DefaultImportSettings();
    // Set static field: static private readonly UnityEngine.ProBuilder.MeshOperations.MeshImportSettings k_DefaultImportSettings
    static void _set_k_DefaultImportSettings(UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* value);
    // public System.Void .ctor(UnityEngine.ProBuilder.ProBuilderMesh target)
    // Offset: 0x101EAEC
    static MeshImporter* New_ctor(UnityEngine::ProBuilder::ProBuilderMesh* target);
    // System.Boolean Import(UnityEngine.GameObject gameObject, UnityEngine.ProBuilder.MeshOperations.MeshImportSettings importSettings)
    // Offset: 0x101EB20
    bool Import(UnityEngine::GameObject* gameObject, UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* importSettings);
    // public System.Void Import(UnityEngine.Mesh originalMesh, UnityEngine.Material[] materials, UnityEngine.ProBuilder.MeshOperations.MeshImportSettings importSettings)
    // Offset: 0x101EE14
    void Import(UnityEngine::Mesh* originalMesh, ::Array<UnityEngine::Material*>* materials, UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* importSettings);
    // private UnityEngine.ProBuilder.Face GetBestQuadConnection(UnityEngine.ProBuilder.WingedEdge wing, System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.EdgeLookup,System.Single> connections)
    // Offset: 0x1020870
    UnityEngine::ProBuilder::Face* GetBestQuadConnection(UnityEngine::ProBuilder::WingedEdge* wing, System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::EdgeLookup, float>* connections);
    // private System.Single GetQuadScore(UnityEngine.ProBuilder.WingedEdge left, UnityEngine.ProBuilder.WingedEdge right, System.Single normalThreshold)
    // Offset: 0x10202E0
    float GetQuadScore(UnityEngine::ProBuilder::WingedEdge* left, UnityEngine::ProBuilder::WingedEdge* right, float normalThreshold);
    // static private System.Void .cctor()
    // Offset: 0x1020A60
    static void _cctor();
  }; // UnityEngine.ProBuilder.MeshOperations.MeshImporter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::MeshImporter*, "UnityEngine.ProBuilder.MeshOperations", "MeshImporter");
#pragma pack(pop)
