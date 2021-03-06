// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SteamVR_RenderModel
#include "GlobalNamespace/SteamVR_RenderModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_RenderModel/RenderModel
  // [] Offset: FFFFFFFF
  class SteamVR_RenderModel::RenderModel : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xCFC5D4
    // private UnityEngine.Mesh <mesh>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Mesh* mesh;
    // Field size check
    static_assert(sizeof(UnityEngine::Mesh*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xCFC5E4
    // private UnityEngine.Material <material>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // Creating value type constructor for type: RenderModel
    RenderModel(UnityEngine::Mesh* mesh_ = {}, UnityEngine::Material* material_ = {}) noexcept : mesh{mesh_}, material{material_} {}
    // public System.Void .ctor(UnityEngine.Mesh mesh, UnityEngine.Material material)
    // Offset: 0x129CF5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_RenderModel::RenderModel* New_ctor(UnityEngine::Mesh* mesh, UnityEngine::Material* material) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_RenderModel::RenderModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_RenderModel::RenderModel*, creationType>(mesh, material)));
    }
    // public UnityEngine.Mesh get_mesh()
    // Offset: 0x129E1C8
    UnityEngine::Mesh* get_mesh();
    // private System.Void set_mesh(UnityEngine.Mesh value)
    // Offset: 0x129E1D0
    void set_mesh(UnityEngine::Mesh* value);
    // public UnityEngine.Material get_material()
    // Offset: 0x129E1D8
    UnityEngine::Material* get_material();
    // private System.Void set_material(UnityEngine.Material value)
    // Offset: 0x129E1E0
    void set_material(UnityEngine::Material* value);
  }; // SteamVR_RenderModel/RenderModel
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_RenderModel::RenderModel), 24 + sizeof(UnityEngine::Material*)> __GlobalNamespace_SteamVR_RenderModel_RenderModelSizeCheck;
  static_assert(sizeof(SteamVR_RenderModel::RenderModel) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_RenderModel::RenderModel*, "", "SteamVR_RenderModel/RenderModel");
