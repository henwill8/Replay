// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: SharedVertex
  class SharedVertex;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.InternalMeshUtility
  class InternalMeshUtility : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::MeshOperations::InternalMeshUtility::$$c
    class $$c;
    // static UnityEngine.Vector3 AverageNormalWithIndexes(UnityEngine.ProBuilder.SharedVertex shared, System.Int32[] all, System.Collections.Generic.IList`1<UnityEngine.Vector3> norm)
    // Offset: 0xF17D10
    static UnityEngine::Vector3 AverageNormalWithIndexes(UnityEngine::ProBuilder::SharedVertex* shared, ::Array<int>* all, System::Collections::Generic::IList_1<UnityEngine::Vector3>* norm);
    // static public UnityEngine.ProBuilder.ProBuilderMesh CreateMeshWithTransform(UnityEngine.Transform t, System.Boolean preserveFaces)
    // Offset: 0xF18F18
    static UnityEngine::ProBuilder::ProBuilderMesh* CreateMeshWithTransform(UnityEngine::Transform* t, bool preserveFaces);
    // static public System.Boolean ResetPbObjectWithMeshFilter(UnityEngine.ProBuilder.ProBuilderMesh pb, System.Boolean preserveFaces)
    // Offset: 0xF19C44
    static bool ResetPbObjectWithMeshFilter(UnityEngine::ProBuilder::ProBuilderMesh* pb, bool preserveFaces);
    // static System.Void FilterUnusedSubmeshIndexes(UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0xF0A7DC
    static void FilterUnusedSubmeshIndexes(UnityEngine::ProBuilder::ProBuilderMesh* mesh);
  }; // UnityEngine.ProBuilder.MeshOperations.InternalMeshUtility
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::InternalMeshUtility*, "UnityEngine.ProBuilder.MeshOperations", "InternalMeshUtility");
#pragma pack(pop)
