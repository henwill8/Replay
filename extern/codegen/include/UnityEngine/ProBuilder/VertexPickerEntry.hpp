// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.VertexPickerEntry
  struct VertexPickerEntry : public System::ValueType {
    public:
    // public UnityEngine.ProBuilder.ProBuilderMesh mesh
    // Offset: 0x0
    UnityEngine::ProBuilder::ProBuilderMesh* mesh;
    // public System.Int32 vertex
    // Offset: 0x8
    int vertex;
    // public System.Single screenDistance
    // Offset: 0xC
    float screenDistance;
    // public UnityEngine.Vector3 worldPosition
    // Offset: 0x10
    UnityEngine::Vector3 worldPosition;
    // Creating value type constructor for type: VertexPickerEntry
    constexpr VertexPickerEntry(UnityEngine::ProBuilder::ProBuilderMesh* mesh_ = {}, int vertex_ = {}, float screenDistance_ = {}, UnityEngine::Vector3 worldPosition_ = {}) noexcept : mesh{mesh_}, vertex{vertex_}, screenDistance{screenDistance_}, worldPosition{worldPosition_} {}
  }; // UnityEngine.ProBuilder.VertexPickerEntry
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::VertexPickerEntry, "UnityEngine.ProBuilder", "VertexPickerEntry");
#pragma pack(pop)
