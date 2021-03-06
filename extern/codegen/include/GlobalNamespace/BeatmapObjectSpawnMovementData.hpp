// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ObstacleData
  class ObstacleData;
  // Forward declaring type: NoteData
  class NoteData;
  // Forward declaring type: NoteLineLayer
  struct NoteLineLayer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectSpawnMovementData
  // [] Offset: FFFFFFFF
  class BeatmapObjectSpawnMovementData : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BeatmapObjectSpawnMovementData::ObstacleSpawnData
    struct ObstacleSpawnData;
    // Nested type: GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData
    struct NoteSpawnData;
    // [HeaderAttribute] Offset: 0xD37520
    // private UnityEngine.Vector3 _centerPos
    // Size: 0xC
    // Offset: 0x10
    UnityEngine::Vector3 centerPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _noteLinesDistance
    // Size: 0x4
    // Offset: 0x1C
    float noteLinesDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0xD3757C
    // [TooltipAttribute] Offset: 0xD3757C
    // private System.Single _maxHalfJumpDistance
    // Size: 0x4
    // Offset: 0x20
    float maxHalfJumpDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _startHalfJumpDurationInBeats
    // Size: 0x4
    // Offset: 0x24
    float startHalfJumpDurationInBeats;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _baseLinesHighestJumpPosY
    // Size: 0x4
    // Offset: 0x28
    float baseLinesHighestJumpPosY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _upperLinesHighestJumpPosY
    // Size: 0x4
    // Offset: 0x2C
    float upperLinesHighestJumpPosY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _topLinesHighestJumpPosY
    // Size: 0x4
    // Offset: 0x30
    float topLinesHighestJumpPosY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0xD3762C
    // private System.Single _moveSpeed
    // Size: 0x4
    // Offset: 0x34
    float moveSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _moveDuration
    // Size: 0x4
    // Offset: 0x38
    float moveDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _baseLinesYPos
    // Size: 0x4
    // Offset: 0x3C
    float baseLinesYPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _upperLinesYPos
    // Size: 0x4
    // Offset: 0x40
    float upperLinesYPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _topLinesYPos
    // Size: 0x4
    // Offset: 0x44
    float topLinesYPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0xD376B8
    // private System.Single _verticalObstaclePosY
    // Size: 0x4
    // Offset: 0x48
    float verticalObstaclePosY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _topObstaclePosY
    // Size: 0x4
    // Offset: 0x4C
    float topObstaclePosY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _obstacleTopPosY
    // Size: 0x4
    // Offset: 0x50
    float obstacleTopPosY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _spawnAheadTime
    // Size: 0x4
    // Offset: 0x54
    float spawnAheadTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _jumpDuration
    // Size: 0x4
    // Offset: 0x58
    float jumpDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _startBpm
    // Size: 0x4
    // Offset: 0x5C
    float startBpm;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _startNoteJumpMovementSpeed
    // Size: 0x4
    // Offset: 0x60
    float startNoteJumpMovementSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _noteJumpStartBeatOffset
    // Size: 0x4
    // Offset: 0x64
    float noteJumpStartBeatOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _noteJumpMovementSpeed
    // Size: 0x4
    // Offset: 0x68
    float noteJumpMovementSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _jumpDistance
    // Size: 0x4
    // Offset: 0x6C
    float jumpDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _moveDistance
    // Size: 0x4
    // Offset: 0x70
    float moveDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 _moveStartPos
    // Size: 0xC
    // Offset: 0x74
    UnityEngine::Vector3 moveStartPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _moveEndPos
    // Size: 0xC
    // Offset: 0x80
    UnityEngine::Vector3 moveEndPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _jumpEndPos
    // Size: 0xC
    // Offset: 0x8C
    UnityEngine::Vector3 jumpEndPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _noteLinesCount
    // Size: 0x4
    // Offset: 0x98
    float noteLinesCount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _jumpOffsetY
    // Size: 0x4
    // Offset: 0x9C
    float jumpOffsetY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 _rightVec
    // Size: 0xC
    // Offset: 0xA0
    UnityEngine::Vector3 rightVec;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _forwardVec
    // Size: 0xC
    // Offset: 0xAC
    UnityEngine::Vector3 forwardVec;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: BeatmapObjectSpawnMovementData
    BeatmapObjectSpawnMovementData(UnityEngine::Vector3 centerPos_ = {}, float noteLinesDistance_ = {}, float maxHalfJumpDistance_ = {}, float startHalfJumpDurationInBeats_ = {}, float baseLinesHighestJumpPosY_ = {}, float upperLinesHighestJumpPosY_ = {}, float topLinesHighestJumpPosY_ = {}, float moveSpeed_ = {}, float moveDuration_ = {}, float baseLinesYPos_ = {}, float upperLinesYPos_ = {}, float topLinesYPos_ = {}, float verticalObstaclePosY_ = {}, float topObstaclePosY_ = {}, float obstacleTopPosY_ = {}, float spawnAheadTime_ = {}, float jumpDuration_ = {}, float startBpm_ = {}, float startNoteJumpMovementSpeed_ = {}, float noteJumpStartBeatOffset_ = {}, float noteJumpMovementSpeed_ = {}, float jumpDistance_ = {}, float moveDistance_ = {}, UnityEngine::Vector3 moveStartPos_ = {}, UnityEngine::Vector3 moveEndPos_ = {}, UnityEngine::Vector3 jumpEndPos_ = {}, float noteLinesCount_ = {}, float jumpOffsetY_ = {}, UnityEngine::Vector3 rightVec_ = {}, UnityEngine::Vector3 forwardVec_ = {}) noexcept : centerPos{centerPos_}, noteLinesDistance{noteLinesDistance_}, maxHalfJumpDistance{maxHalfJumpDistance_}, startHalfJumpDurationInBeats{startHalfJumpDurationInBeats_}, baseLinesHighestJumpPosY{baseLinesHighestJumpPosY_}, upperLinesHighestJumpPosY{upperLinesHighestJumpPosY_}, topLinesHighestJumpPosY{topLinesHighestJumpPosY_}, moveSpeed{moveSpeed_}, moveDuration{moveDuration_}, baseLinesYPos{baseLinesYPos_}, upperLinesYPos{upperLinesYPos_}, topLinesYPos{topLinesYPos_}, verticalObstaclePosY{verticalObstaclePosY_}, topObstaclePosY{topObstaclePosY_}, obstacleTopPosY{obstacleTopPosY_}, spawnAheadTime{spawnAheadTime_}, jumpDuration{jumpDuration_}, startBpm{startBpm_}, startNoteJumpMovementSpeed{startNoteJumpMovementSpeed_}, noteJumpStartBeatOffset{noteJumpStartBeatOffset_}, noteJumpMovementSpeed{noteJumpMovementSpeed_}, jumpDistance{jumpDistance_}, moveDistance{moveDistance_}, moveStartPos{moveStartPos_}, moveEndPos{moveEndPos_}, jumpEndPos{jumpEndPos_}, noteLinesCount{noteLinesCount_}, jumpOffsetY{jumpOffsetY_}, rightVec{rightVec_}, forwardVec{forwardVec_} {}
    // public System.Single get_spawnAheadTime()
    // Offset: 0xF5C2F4
    float get_spawnAheadTime();
    // public System.Single get_moveDuration()
    // Offset: 0xF5C2FC
    float get_moveDuration();
    // public System.Single get_jumpDuration()
    // Offset: 0xF5C304
    float get_jumpDuration();
    // public System.Single get_noteLinesDistance()
    // Offset: 0xF5C30C
    float get_noteLinesDistance();
    // public System.Single get_verticalLayersDistance()
    // Offset: 0xF5ABD8
    float get_verticalLayersDistance();
    // public System.Single get_jumpDistance()
    // Offset: 0xF5C314
    float get_jumpDistance();
    // public System.Single get_noteJumpMovementSpeed()
    // Offset: 0xF5C31C
    float get_noteJumpMovementSpeed();
    // public System.Void Init(System.Int32 noteLinesCount, System.Single startNoteJumpMovementSpeed, System.Single startBpm, System.Single noteJumpStartBeatOffset, System.Single jumpOffsetY, UnityEngine.Vector3 rightVec, UnityEngine.Vector3 forwardVec)
    // Offset: 0xF5B1A8
    void Init(int noteLinesCount, float startNoteJumpMovementSpeed, float startBpm, float noteJumpStartBeatOffset, float jumpOffsetY, UnityEngine::Vector3 rightVec, UnityEngine::Vector3 forwardVec);
    // public System.Void Update(System.Single bpm, System.Single jumpOffsetY)
    // Offset: 0xF5BB0C
    void Update(float bpm, float jumpOffsetY);
    // public BeatmapObjectSpawnMovementData/ObstacleSpawnData GetObstacleSpawnData(ObstacleData obstacleData)
    // Offset: 0xF5B440
    GlobalNamespace::BeatmapObjectSpawnMovementData::ObstacleSpawnData GetObstacleSpawnData(GlobalNamespace::ObstacleData* obstacleData);
    // public BeatmapObjectSpawnMovementData/NoteSpawnData GetJumpingNoteSpawnData(NoteData noteData)
    // Offset: 0xF5B724
    GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData GetJumpingNoteSpawnData(GlobalNamespace::NoteData* noteData);
    // public UnityEngine.Vector3 GetNoteOffset(System.Int32 noteLineIndex, NoteLineLayer noteLineLayer)
    // Offset: 0xF5C324
    UnityEngine::Vector3 GetNoteOffset(int noteLineIndex, GlobalNamespace::NoteLineLayer noteLineLayer);
    // public UnityEngine.Vector2 Get2DNoteOffset(System.Int32 noteLineIndex, NoteLineLayer noteLineLayer)
    // Offset: 0xF5BDD8
    UnityEngine::Vector2 Get2DNoteOffset(int noteLineIndex, GlobalNamespace::NoteLineLayer noteLineLayer);
    // public System.Single JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset(NoteLineLayer lineLayer, System.Single distanceFromPlayer)
    // Offset: 0xF5BE64
    float JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset(GlobalNamespace::NoteLineLayer lineLayer, float distanceFromPlayer);
    // private System.Single HighestJumpPosYForLineLayer(NoteLineLayer lineLayer)
    // Offset: 0xF5C5C8
    float HighestJumpPosYForLineLayer(GlobalNamespace::NoteLineLayer lineLayer);
    // private System.Single HighestJumpPosYForLineLayerWithoutJumpOffset(NoteLineLayer lineLayer)
    // Offset: 0xF5C5F8
    float HighestJumpPosYForLineLayerWithoutJumpOffset(GlobalNamespace::NoteLineLayer lineLayer);
    // private System.Single LineYPosForLineLayer(NoteLineLayer lineLayer)
    // Offset: 0xF5C534
    float LineYPosForLineLayer(GlobalNamespace::NoteLineLayer lineLayer);
    // private System.Single NoteJumpGravityForLineLayer(NoteLineLayer lineLayer, NoteLineLayer startLineLayer)
    // Offset: 0xF5C490
    float NoteJumpGravityForLineLayer(GlobalNamespace::NoteLineLayer lineLayer, GlobalNamespace::NoteLineLayer startLineLayer);
    // private System.Single NoteJumpGravityForLineLayerWithoutJumpOffset(NoteLineLayer lineLayer, NoteLineLayer startLineLayer)
    // Offset: 0xF5C55C
    float NoteJumpGravityForLineLayerWithoutJumpOffset(GlobalNamespace::NoteLineLayer lineLayer, GlobalNamespace::NoteLineLayer startLineLayer);
    // public System.Void .ctor()
    // Offset: 0xF5BFA8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectSpawnMovementData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectSpawnMovementData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectSpawnMovementData*, creationType>()));
    }
  }; // BeatmapObjectSpawnMovementData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectSpawnMovementData), 172 + sizeof(UnityEngine::Vector3)> __GlobalNamespace_BeatmapObjectSpawnMovementDataSizeCheck;
  static_assert(sizeof(BeatmapObjectSpawnMovementData) == 0xB8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectSpawnMovementData*, "", "BeatmapObjectSpawnMovementData");
