// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_MaterialManager
#include "TMPro/TMP_MaterialManager.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_MaterialManager/<>c__DisplayClass10_0
  class TMP_MaterialManager::$$c__DisplayClass10_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.Material stencilMaterial
    // Offset: 0x10
    UnityEngine::Material* stencilMaterial;
    // Creating conversion operator: operator UnityEngine::Material*
    constexpr operator UnityEngine::Material*() const noexcept {
      return stencilMaterial;
    }
    // System.Boolean <GetBaseMaterial>b__0(TMPro.TMP_MaterialManager/MaskingMaterial item)
    // Offset: 0xF861F8
    bool $GetBaseMaterial$b__0(TMPro::TMP_MaterialManager::MaskingMaterial* item);
    // public System.Void .ctor()
    // Offset: 0xF84370
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TMP_MaterialManager::$$c__DisplayClass10_0* New_ctor();
  }; // TMPro.TMP_MaterialManager/<>c__DisplayClass10_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_MaterialManager::$$c__DisplayClass10_0*, "TMPro", "TMP_MaterialManager/<>c__DisplayClass10_0");
#pragma pack(pop)
