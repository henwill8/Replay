// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MainEffectCore
  // [] Offset: FFFFFFFF
  class MainEffectCore : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: MainEffectCore
    MainEffectCore() noexcept {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD22FE8
    // Get static field: static private readonly System.Int32 _baseColorBoostID
    static int _get__baseColorBoostID();
    // Set static field: static private readonly System.Int32 _baseColorBoostID
    static void _set__baseColorBoostID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD22FF8
    // Get static field: static private readonly System.Int32 _baseColorBoostThresholdID
    static int _get__baseColorBoostThresholdID();
    // Set static field: static private readonly System.Int32 _baseColorBoostThresholdID
    static void _set__baseColorBoostThresholdID(int value);
    // static public System.Void SetGlobalShaderValues(System.Single baseColorBoost, System.Single baseColorBoostThreshold)
    // Offset: 0x2250160
    static void SetGlobalShaderValues(float baseColorBoost, float baseColorBoostThreshold);
    // static private System.Void .cctor()
    // Offset: 0x2250DA0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x2250D98
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainEffectCore* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MainEffectCore::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainEffectCore*, creationType>()));
    }
  }; // MainEffectCore
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainEffectCore*, "", "MainEffectCore");
