// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LightWithIds
#include "GlobalNamespace/LightWithIds.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PointLight
  class PointLight;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: PointLightWithIds
  // [] Offset: FFFFFFFF
  class PointLightWithIds : public GlobalNamespace::LightWithIds {
    public:
    // Writing base type padding for base size: 0x31 to desired offset: 0x38
    char ___base_padding[0x7] = {};
    // private PointLight _pointLight
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::PointLight* pointLight;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PointLight*) == 0x8);
    // Creating value type constructor for type: PointLightWithIds
    PointLightWithIds(GlobalNamespace::PointLight* pointLight_ = {}) noexcept : pointLight{pointLight_} {}
    // protected override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x1DA4050
    // Implemented from: LightWithIds
    // Base method: System.Void LightWithIds::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0x1DA4070
    // Implemented from: LightWithIds
    // Base method: System.Void LightWithIds::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointLightWithIds* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PointLightWithIds::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointLightWithIds*, creationType>()));
    }
  }; // PointLightWithIds
  #pragma pack(pop)
  static check_size<sizeof(PointLightWithIds), 56 + sizeof(GlobalNamespace::PointLight*)> __GlobalNamespace_PointLightWithIdsSizeCheck;
  static_assert(sizeof(PointLightWithIds) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PointLightWithIds*, "", "PointLightWithIds");
