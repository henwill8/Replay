// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapObjectManager
#include "GlobalNamespace/BeatmapObjectManager.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: GameNoteController
#include "GlobalNamespace/GameNoteController.hpp"
// Including type: BombNoteController
#include "GlobalNamespace/BombNoteController.hpp"
// Including type: ObstacleController
#include "GlobalNamespace/ObstacleController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MonoMemoryPoolContainer`1<T>
  template<typename T>
  class MonoMemoryPoolContainer_1;
  // Skipping declaration: NoteController because it is already included!
  // Forward declaring type: ObstacleData
  class ObstacleData;
  // Forward declaring type: NoteData
  class NoteData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BasicBeatmapObjectManager
  // [] Offset: FFFFFFFF
  class BasicBeatmapObjectManager : public GlobalNamespace::BeatmapObjectManager {
    public:
    // Writing base type padding for base size: 0x49 to desired offset: 0x4C
    char ___base_padding[0x3] = {};
    // Nested type: GlobalNamespace::BasicBeatmapObjectManager::InitData
    class InitData;
    // private System.Nullable`1<System.Single> _firstBasicNoteTime
    // Size: 0xFFFFFFFF
    // Offset: 0x4C
    System::Nullable_1<float> firstBasicNoteTime;
    // private readonly BasicBeatmapObjectManager/InitData _initData
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::BasicBeatmapObjectManager::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BasicBeatmapObjectManager::InitData*) == 0x8);
    // private readonly MonoMemoryPoolContainer`1<GameNoteController> _gameNotePoolContainer
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::MonoMemoryPoolContainer_1<GlobalNamespace::GameNoteController*>* gameNotePoolContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MonoMemoryPoolContainer_1<GlobalNamespace::GameNoteController*>*) == 0x8);
    // private readonly MonoMemoryPoolContainer`1<BombNoteController> _bombNotePoolContainer
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::MonoMemoryPoolContainer_1<GlobalNamespace::BombNoteController*>* bombNotePoolContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MonoMemoryPoolContainer_1<GlobalNamespace::BombNoteController*>*) == 0x8);
    // private readonly MonoMemoryPoolContainer`1<ObstacleController> _obstaclePoolContainer
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::MonoMemoryPoolContainer_1<GlobalNamespace::ObstacleController*>* obstaclePoolContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MonoMemoryPoolContainer_1<GlobalNamespace::ObstacleController*>*) == 0x8);
    // Creating value type constructor for type: BasicBeatmapObjectManager
    BasicBeatmapObjectManager(System::Nullable_1<float> firstBasicNoteTime_ = {}, GlobalNamespace::BasicBeatmapObjectManager::InitData* initData_ = {}, GlobalNamespace::MonoMemoryPoolContainer_1<GlobalNamespace::GameNoteController*>* gameNotePoolContainer_ = {}, GlobalNamespace::MonoMemoryPoolContainer_1<GlobalNamespace::BombNoteController*>* bombNotePoolContainer_ = {}, GlobalNamespace::MonoMemoryPoolContainer_1<GlobalNamespace::ObstacleController*>* obstaclePoolContainer_ = {}) noexcept : firstBasicNoteTime{firstBasicNoteTime_}, initData{initData_}, gameNotePoolContainer{gameNotePoolContainer_}, bombNotePoolContainer{bombNotePoolContainer_}, obstaclePoolContainer{obstaclePoolContainer_} {}
    // private System.Void .ctor(BasicBeatmapObjectManager/InitData initData, GameNoteController/Pool gameNotePool, BombNoteController/Pool bombNotePool, ObstacleController/Pool obstaclePool)
    // Offset: 0x1065B6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BasicBeatmapObjectManager* New_ctor(GlobalNamespace::BasicBeatmapObjectManager::InitData* initData, GlobalNamespace::GameNoteController::Pool* gameNotePool, GlobalNamespace::BombNoteController::Pool* bombNotePool, GlobalNamespace::ObstacleController::Pool* obstaclePool) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BasicBeatmapObjectManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BasicBeatmapObjectManager*, creationType>(initData, gameNotePool, bombNotePool, obstaclePool)));
    }
    // public System.Single GetMaxYForRangeInMiddleTwoLanes(System.Single zStart, System.Single zEnd)
    // Offset: 0x106693C
    float GetMaxYForRangeInMiddleTwoLanes(float zStart, float zEnd);
    // public override System.Collections.Generic.HashSet`1<ObstacleController> get_activeObstacleControllers()
    // Offset: 0x1065B1C
    // Implemented from: BeatmapObjectManager
    // Base method: System.Collections.Generic.HashSet`1<ObstacleController> BeatmapObjectManager::get_activeObstacleControllers()
    System::Collections::Generic::HashSet_1<GlobalNamespace::ObstacleController*>* get_activeObstacleControllers();
    // protected override ObstacleController SpawnObstacleInternal(ObstacleData obstacleData, BeatmapObjectSpawnMovementData/ObstacleSpawnData obstacleSpawnData, System.Single rotation)
    // Offset: 0x1065C8C
    // Implemented from: BeatmapObjectManager
    // Base method: ObstacleController BeatmapObjectManager::SpawnObstacleInternal(ObstacleData obstacleData, BeatmapObjectSpawnMovementData/ObstacleSpawnData obstacleSpawnData, System.Single rotation)
    GlobalNamespace::ObstacleController* SpawnObstacleInternal(GlobalNamespace::ObstacleData* obstacleData, GlobalNamespace::BeatmapObjectSpawnMovementData::ObstacleSpawnData obstacleSpawnData, float rotation);
    // protected override NoteController SpawnBombNoteInternal(NoteData bombNoteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation)
    // Offset: 0x1065D60
    // Implemented from: BeatmapObjectManager
    // Base method: NoteController BeatmapObjectManager::SpawnBombNoteInternal(NoteData bombNoteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation)
    GlobalNamespace::NoteController* SpawnBombNoteInternal(GlobalNamespace::NoteData* bombNoteData, GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData noteSpawnData, float rotation);
    // protected override NoteController SpawnBasicNoteInternal(NoteData noteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation, System.Single cutDirectionAngleOffset)
    // Offset: 0x1065E28
    // Implemented from: BeatmapObjectManager
    // Base method: NoteController BeatmapObjectManager::SpawnBasicNoteInternal(NoteData noteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation, System.Single cutDirectionAngleOffset)
    GlobalNamespace::NoteController* SpawnBasicNoteInternal(GlobalNamespace::NoteData* noteData, GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData noteSpawnData, float rotation, float cutDirectionAngleOffset);
    // protected override System.Void DespawnInternal(NoteController noteController)
    // Offset: 0x1065F78
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::DespawnInternal(NoteController noteController)
    void DespawnInternal(GlobalNamespace::NoteController* noteController);
    // protected override System.Void DespawnInternal(ObstacleController obstacleController)
    // Offset: 0x106606C
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::DespawnInternal(ObstacleController obstacleController)
    void DespawnInternal(GlobalNamespace::ObstacleController* obstacleController);
    // public override System.Void DissolveAllObjects()
    // Offset: 0x10660D4
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::DissolveAllObjects()
    void DissolveAllObjects();
    // public override System.Void HideAllBeatmapObjects(System.Boolean hide)
    // Offset: 0x10663A4
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::HideAllBeatmapObjects(System.Boolean hide)
    void HideAllBeatmapObjects(bool hide);
    // public override System.Void PauseAllBeatmapObjects(System.Boolean pause)
    // Offset: 0x1066670
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::PauseAllBeatmapObjects(System.Boolean pause)
    void PauseAllBeatmapObjects(bool pause);
  }; // BasicBeatmapObjectManager
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BasicBeatmapObjectManager*, "", "BasicBeatmapObjectManager");
