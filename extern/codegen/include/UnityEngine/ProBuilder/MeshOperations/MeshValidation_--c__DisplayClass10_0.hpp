// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshOperations.MeshValidation
#include "UnityEngine/ProBuilder/MeshOperations/MeshValidation.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Face
  class Face;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.MeshValidation/<>c__DisplayClass10_0
  class MeshValidation::$$c__DisplayClass10_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.ProBuilder.ProBuilderMesh mesh
    // Offset: 0x10
    UnityEngine::ProBuilder::ProBuilderMesh* mesh;
    // Creating conversion operator: operator UnityEngine::ProBuilder::ProBuilderMesh*
    constexpr operator UnityEngine::ProBuilder::ProBuilderMesh*() const noexcept {
      return mesh;
    }
    // System.Boolean <RebuildSelectionIndexes>b__0(UnityEngine.ProBuilder.Face x)
    // Offset: 0x138F7BC
    bool $RebuildSelectionIndexes$b__0(UnityEngine::ProBuilder::Face* x);
    // public System.Void .ctor()
    // Offset: 0x138F57C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MeshValidation::$$c__DisplayClass10_0* New_ctor();
  }; // UnityEngine.ProBuilder.MeshOperations.MeshValidation/<>c__DisplayClass10_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c__DisplayClass10_0*, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation/<>c__DisplayClass10_0");
#pragma pack(pop)
