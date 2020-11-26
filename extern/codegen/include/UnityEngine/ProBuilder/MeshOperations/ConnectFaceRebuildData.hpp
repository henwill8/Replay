// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: FaceRebuildData
  class FaceRebuildData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.ConnectFaceRebuildData
  class ConnectFaceRebuildData : public ::Il2CppObject {
    public:
    // public UnityEngine.ProBuilder.FaceRebuildData faceRebuildData
    // Offset: 0x10
    UnityEngine::ProBuilder::FaceRebuildData* faceRebuildData;
    // public System.Collections.Generic.List`1<System.Int32> newVertexIndexes
    // Offset: 0x18
    System::Collections::Generic::List_1<int>* newVertexIndexes;
    // public System.Void .ctor(UnityEngine.ProBuilder.FaceRebuildData faceRebuildData, System.Collections.Generic.List`1<System.Int32> newVertexIndexes)
    // Offset: 0x1252860
    static ConnectFaceRebuildData* New_ctor(UnityEngine::ProBuilder::FaceRebuildData* faceRebuildData, System::Collections::Generic::List_1<int>* newVertexIndexes);
  }; // UnityEngine.ProBuilder.MeshOperations.ConnectFaceRebuildData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, "UnityEngine.ProBuilder.MeshOperations", "ConnectFaceRebuildData");
#pragma pack(pop)
