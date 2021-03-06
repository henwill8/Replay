// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BTSCharacterSpawnController
  class BTSCharacterSpawnController;
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: StandardGameplaySceneSetupData
  class StandardGameplaySceneSetupData;
  // Forward declaring type: GameplayCoreSceneSetupData
  class GameplayCoreSceneSetupData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x94
  #pragma pack(push, 1)
  // Autogenerated type: WaypointsTestGameplayManager
  // [] Offset: FFFFFFFF
  class WaypointsTestGameplayManager : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Vector3 _outerCapsuleStart
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 outerCapsuleStart;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _outerCapsuleEnd
    // Size: 0xC
    // Offset: 0x24
    UnityEngine::Vector3 outerCapsuleEnd;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _outerCapsuleRadius
    // Size: 0x4
    // Offset: 0x30
    float outerCapsuleRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0xD39EBC
    // private UnityEngine.Vector3 _innerSphereOffset
    // Size: 0xC
    // Offset: 0x34
    UnityEngine::Vector3 innerSphereOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _innerSphereRadius
    // Size: 0x4
    // Offset: 0x40
    float innerSphereRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0xD39F04
    // private UnityEngine.LayerMask _layersToColliderWith
    // Size: 0x4
    // Offset: 0x44
    UnityEngine::LayerMask layersToColliderWith;
    // Field size check
    static_assert(sizeof(UnityEngine::LayerMask) == 0x4);
    // [InjectAttribute] Offset: 0xD39F3C
    // private readonly BTSCharacterSpawnController _characterSpawnController
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::BTSCharacterSpawnController* characterSpawnController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BTSCharacterSpawnController*) == 0x8);
    // [InjectAttribute] Offset: 0xD39F4C
    // private readonly IAudioTimeSource _audioTimeSource
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAudioTimeSource*) == 0x8);
    // [InjectAttribute] Offset: 0xD39F5C
    // private readonly StandardGameplaySceneSetupData _standardSceneSetupData
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::StandardGameplaySceneSetupData* standardSceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandardGameplaySceneSetupData*) == 0x8);
    // [InjectAttribute] Offset: 0xD39F6C
    // private readonly GameplayCoreSceneSetupData _levelSceneSetupData
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::GameplayCoreSceneSetupData* levelSceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayCoreSceneSetupData*) == 0x8);
    // private UnityEngine.Transform _target
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private System.Boolean _firstPosSaved
    // Size: 0x1
    // Offset: 0x70
    bool firstPosSaved;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _speedSaved
    // Size: 0x1
    // Offset: 0x71
    bool speedSaved;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: speedSaved and: lastFramePos
    char __padding12[0x2] = {};
    // private UnityEngine.Vector3 _lastFramePos
    // Size: 0xC
    // Offset: 0x74
    UnityEngine::Vector3 lastFramePos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _lastFrameSpeed
    // Size: 0x4
    // Offset: 0x80
    float lastFrameSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _biggestFrameSpeed
    // Size: 0x4
    // Offset: 0x84
    float biggestFrameSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _biggestFrameSpeedSongTime
    // Size: 0x4
    // Offset: 0x88
    float biggestFrameSpeedSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _biggestAcceleration
    // Size: 0x4
    // Offset: 0x8C
    float biggestAcceleration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _biggestAccelerationSongTime
    // Size: 0x4
    // Offset: 0x90
    float biggestAccelerationSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: WaypointsTestGameplayManager
    WaypointsTestGameplayManager(UnityEngine::Vector3 outerCapsuleStart_ = {}, UnityEngine::Vector3 outerCapsuleEnd_ = {}, float outerCapsuleRadius_ = {}, UnityEngine::Vector3 innerSphereOffset_ = {}, float innerSphereRadius_ = {}, UnityEngine::LayerMask layersToColliderWith_ = {}, GlobalNamespace::BTSCharacterSpawnController* characterSpawnController_ = {}, GlobalNamespace::IAudioTimeSource* audioTimeSource_ = {}, GlobalNamespace::StandardGameplaySceneSetupData* standardSceneSetupData_ = {}, GlobalNamespace::GameplayCoreSceneSetupData* levelSceneSetupData_ = {}, UnityEngine::Transform* target_ = {}, bool firstPosSaved_ = {}, bool speedSaved_ = {}, UnityEngine::Vector3 lastFramePos_ = {}, float lastFrameSpeed_ = {}, float biggestFrameSpeed_ = {}, float biggestFrameSpeedSongTime_ = {}, float biggestAcceleration_ = {}, float biggestAccelerationSongTime_ = {}) noexcept : outerCapsuleStart{outerCapsuleStart_}, outerCapsuleEnd{outerCapsuleEnd_}, outerCapsuleRadius{outerCapsuleRadius_}, innerSphereOffset{innerSphereOffset_}, innerSphereRadius{innerSphereRadius_}, layersToColliderWith{layersToColliderWith_}, characterSpawnController{characterSpawnController_}, audioTimeSource{audioTimeSource_}, standardSceneSetupData{standardSceneSetupData_}, levelSceneSetupData{levelSceneSetupData_}, target{target_}, firstPosSaved{firstPosSaved_}, speedSaved{speedSaved_}, lastFramePos{lastFramePos_}, lastFrameSpeed{lastFrameSpeed_}, biggestFrameSpeed{biggestFrameSpeed_}, biggestFrameSpeedSongTime{biggestFrameSpeedSongTime_}, biggestAcceleration{biggestAcceleration_}, biggestAccelerationSongTime{biggestAccelerationSongTime_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x17220DC
    void Start();
    // protected System.Void LateUpdate()
    // Offset: 0x1722124
    void LateUpdate();
    // protected System.Void OnDestroy()
    // Offset: 0x1723738
    void OnDestroy();
    // private System.String GetBar(System.Single songTime)
    // Offset: 0x1723534
    ::Il2CppString* GetBar(float songTime);
    // protected System.Void OnDrawGizmos()
    // Offset: 0x1723CE8
    void OnDrawGizmos();
    // public System.Void .ctor()
    // Offset: 0x1723FD4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WaypointsTestGameplayManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::WaypointsTestGameplayManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WaypointsTestGameplayManager*, creationType>()));
    }
  }; // WaypointsTestGameplayManager
  #pragma pack(pop)
  static check_size<sizeof(WaypointsTestGameplayManager), 144 + sizeof(float)> __GlobalNamespace_WaypointsTestGameplayManagerSizeCheck;
  static_assert(sizeof(WaypointsTestGameplayManager) == 0x94);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::WaypointsTestGameplayManager*, "", "WaypointsTestGameplayManager");
