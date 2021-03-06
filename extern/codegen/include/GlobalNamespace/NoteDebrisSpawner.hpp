// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: NoteDebris
#include "GlobalNamespace/NoteDebris.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorType
  struct ColorType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: NoteDebrisSpawner
  // [] Offset: FFFFFFFF
  class NoteDebrisSpawner : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _rotation
    // Size: 0x4
    // Offset: 0x18
    float rotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _cutDirMultiplier
    // Size: 0x4
    // Offset: 0x1C
    float cutDirMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _fromCenterSpeed
    // Size: 0x4
    // Offset: 0x20
    float fromCenterSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _moveSpeedMultiplier
    // Size: 0x4
    // Offset: 0x24
    float moveSpeedMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [InjectAttribute] Offset: 0xD38524
    // private readonly NoteDebris/Pool _noteDebrisPool
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::NoteDebris::Pool* noteDebrisPool;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteDebris::Pool*) == 0x8);
    // Creating value type constructor for type: NoteDebrisSpawner
    NoteDebrisSpawner(float rotation_ = {}, float cutDirMultiplier_ = {}, float fromCenterSpeed_ = {}, float moveSpeedMultiplier_ = {}, GlobalNamespace::NoteDebris::Pool* noteDebrisPool_ = {}) noexcept : rotation{rotation_}, cutDirMultiplier{cutDirMultiplier_}, fromCenterSpeed{fromCenterSpeed_}, moveSpeedMultiplier{moveSpeedMultiplier_}, noteDebrisPool{noteDebrisPool_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kMinLifeTime
    static constexpr const float kMinLifeTime = 0.2;
    // Get static field: static private System.Single kMinLifeTime
    static float _get_kMinLifeTime();
    // Set static field: static private System.Single kMinLifeTime
    static void _set_kMinLifeTime(float value);
    // static field const value: static private System.Single kMaxLifeTime
    static constexpr const float kMaxLifeTime = 2;
    // Get static field: static private System.Single kMaxLifeTime
    static float _get_kMaxLifeTime();
    // Set static field: static private System.Single kMaxLifeTime
    static void _set_kMaxLifeTime(float value);
    // static field const value: static private System.Single kLifeTimeOffset
    static constexpr const float kLifeTimeOffset = 0.05;
    // Get static field: static private System.Single kLifeTimeOffset
    static float _get_kLifeTimeOffset();
    // Set static field: static private System.Single kLifeTimeOffset
    static void _set_kLifeTimeOffset(float value);
    // public System.Void SpawnDebris(UnityEngine.Vector3 cutPoint, UnityEngine.Vector3 cutNormal, System.Single saberSpeed, UnityEngine.Vector3 saberDir, UnityEngine.Vector3 notePos, UnityEngine.Quaternion noteRotation, ColorType colorType, System.Single timeToNextColorNote, UnityEngine.Vector3 moveVec)
    // Offset: 0xF909C8
    void SpawnDebris(UnityEngine::Vector3 cutPoint, UnityEngine::Vector3 cutNormal, float saberSpeed, UnityEngine::Vector3 saberDir, UnityEngine::Vector3 notePos, UnityEngine::Quaternion noteRotation, GlobalNamespace::ColorType colorType, float timeToNextColorNote, UnityEngine::Vector3 moveVec);
    // private System.Void HandleNoteDebrisDidFinish(NoteDebris noteDebris)
    // Offset: 0xF945B4
    void HandleNoteDebrisDidFinish(GlobalNamespace::NoteDebris* noteDebris);
    // public System.Void .ctor()
    // Offset: 0xF94660
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteDebrisSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteDebrisSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteDebrisSpawner*, creationType>()));
    }
  }; // NoteDebrisSpawner
  #pragma pack(pop)
  static check_size<sizeof(NoteDebrisSpawner), 40 + sizeof(GlobalNamespace::NoteDebris::Pool*)> __GlobalNamespace_NoteDebrisSpawnerSizeCheck;
  static_assert(sizeof(NoteDebrisSpawner) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteDebrisSpawner*, "", "NoteDebrisSpawner");
