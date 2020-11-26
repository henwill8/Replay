// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: NoteDebris
#include "GlobalNamespace/NoteDebris.hpp"
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
  // Autogenerated type: NoteDebrisSpawner
  class NoteDebrisSpawner : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _rotation
    // Offset: 0x18
    float rotation;
    // private System.Single _cutDirMultiplier
    // Offset: 0x1C
    float cutDirMultiplier;
    // private System.Single _fromCenterSpeed
    // Offset: 0x20
    float fromCenterSpeed;
    // private System.Single _moveSpeedMultiplier
    // Offset: 0x24
    float moveSpeedMultiplier;
    // private readonly NoteDebris/Pool _noteDebrisPool
    // Offset: 0x28
    GlobalNamespace::NoteDebris::Pool* noteDebrisPool;
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
    // Offset: 0xFE22E8
    void SpawnDebris(UnityEngine::Vector3 cutPoint, UnityEngine::Vector3 cutNormal, float saberSpeed, UnityEngine::Vector3 saberDir, UnityEngine::Vector3 notePos, UnityEngine::Quaternion noteRotation, GlobalNamespace::ColorType colorType, float timeToNextColorNote, UnityEngine::Vector3 moveVec);
    // private System.Void HandleNoteDebrisDidFinish(NoteDebris noteDebris)
    // Offset: 0xFE61CC
    void HandleNoteDebrisDidFinish(GlobalNamespace::NoteDebris* noteDebris);
    // public System.Void .ctor()
    // Offset: 0xFE6278
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NoteDebrisSpawner* New_ctor();
  }; // NoteDebrisSpawner
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteDebrisSpawner*, "", "NoteDebrisSpawner");
#pragma pack(pop)
