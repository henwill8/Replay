// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_Asset
  // [] Offset: FFFFFFFF
  class TMP_Asset : public UnityEngine::ScriptableObject {
    public:
    // public System.Int32 hashCode
    // Size: 0x4
    // Offset: 0x18
    int hashCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: hashCode and: material
    char __padding0[0x4] = {};
    // public UnityEngine.Material material
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // public System.Int32 materialHashCode
    // Size: 0x4
    // Offset: 0x28
    int materialHashCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TMP_Asset
    TMP_Asset(int hashCode_ = {}, UnityEngine::Material* material_ = {}, int materialHashCode_ = {}) noexcept : hashCode{hashCode_}, material{material_}, materialHashCode{materialHashCode_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void .ctor()
    // Offset: 0xF9AD90
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_Asset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_Asset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_Asset*, creationType>()));
    }
  }; // TMPro.TMP_Asset
  #pragma pack(pop)
  static check_size<sizeof(TMP_Asset), 40 + sizeof(int)> __TMPro_TMP_AssetSizeCheck;
  static_assert(sizeof(TMP_Asset) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Asset*, "TMPro", "TMP_Asset");
