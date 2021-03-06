// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatLineManager
  class BeatLineManager;
  // Forward declaring type: EnvironmentSpawnRotation
  class EnvironmentSpawnRotation;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: FlyingGameHUDRotation
  // [] Offset: FFFFFFFF
  class FlyingGameHUDRotation : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _smooth
    // Size: 0x4
    // Offset: 0x18
    float smooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: smooth and: beatLineManager
    char __padding0[0x4] = {};
    // [InjectOptionalAttribute] Offset: 0xD392C0
    // private readonly BeatLineManager _beatLineManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatLineManager* beatLineManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatLineManager*) == 0x8);
    // [InjectOptionalAttribute] Offset: 0xD392D0
    // private readonly EnvironmentSpawnRotation _environmentSpawnRotation
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::EnvironmentSpawnRotation* environmentSpawnRotation;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentSpawnRotation*) == 0x8);
    // private System.Single _prevYAngle
    // Size: 0x4
    // Offset: 0x30
    float prevYAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _yAngle
    // Size: 0x4
    // Offset: 0x34
    float yAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: FlyingGameHUDRotation
    FlyingGameHUDRotation(float smooth_ = {}, GlobalNamespace::BeatLineManager* beatLineManager_ = {}, GlobalNamespace::EnvironmentSpawnRotation* environmentSpawnRotation_ = {}, float prevYAngle_ = {}, float yAngle_ = {}) noexcept : smooth{smooth_}, beatLineManager{beatLineManager_}, environmentSpawnRotation{environmentSpawnRotation_}, prevYAngle{prevYAngle_}, yAngle{yAngle_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xF2E608
    void Start();
    // protected System.Void FixedUpdate()
    // Offset: 0xF2E73C
    void FixedUpdate();
    // protected System.Void LateUpdate()
    // Offset: 0xF2E91C
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0xF2EA30
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlyingGameHUDRotation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FlyingGameHUDRotation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlyingGameHUDRotation*, creationType>()));
    }
  }; // FlyingGameHUDRotation
  #pragma pack(pop)
  static check_size<sizeof(FlyingGameHUDRotation), 52 + sizeof(float)> __GlobalNamespace_FlyingGameHUDRotationSizeCheck;
  static_assert(sizeof(FlyingGameHUDRotation) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingGameHUDRotation*, "", "FlyingGameHUDRotation");
