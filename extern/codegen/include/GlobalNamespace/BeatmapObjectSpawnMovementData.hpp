// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
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
  // Autogenerated type: BeatmapObjectSpawnMovementData
  class BeatmapObjectSpawnMovementData : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BeatmapObjectSpawnMovementData::ObstacleSpawnData
    struct ObstacleSpawnData;
    // Nested type: GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData
    struct NoteSpawnData;
    // private UnityEngine.Vector3 _centerPos
    // Offset: 0x10
    UnityEngine::Vector3 centerPos;
    // private System.Single _noteLinesDistance
    // Offset: 0x1C
    float noteLinesDistance;
    // private System.Single _maxHalfJumpDistance
    // Offset: 0x20
    float maxHalfJumpDistance;
    // private System.Single _startHalfJumpDurationInBeats
    // Offset: 0x24
    float startHalfJumpDurationInBeats;
    // private System.Single _baseLinesHighestJumpPosY
    // Offset: 0x28
    float baseLinesHighestJumpPosY;
    // private System.Single _upperLinesHighestJumpPosY
    // Offset: 0x2C
    float upperLinesHighestJumpPosY;
    // private System.Single _topLinesHighestJumpPosY
    // Offset: 0x30
    float topLinesHighestJumpPosY;
    // private System.Single _moveSpeed
    // Offset: 0x34
    float moveSpeed;
    // private System.Single _moveDuration
    // Offset: 0x38
    float moveDuration;
    // private System.Single _baseLinesYPos
    // Offset: 0x3C
    float baseLinesYPos;
    // private System.Single _upperLinesYPos
    // Offset: 0x40
    float upperLinesYPos;
    // private System.Single _topLinesYPos
    // Offset: 0x44
    float topLinesYPos;
    // private System.Single _verticalObstaclePosY
    // Offset: 0x48
    float verticalObstaclePosY;
    // private System.Single _topObstaclePosY
    // Offset: 0x4C
    float topObstaclePosY;
    // private System.Single _obstacleTopPosY
    // Offset: 0x50
    float obstacleTopPosY;
    // private System.Single _spawnAheadTime
    // Offset: 0x54
    float spawnAheadTime;
    // private System.Single _jumpDuration
    // Offset: 0x58
    float jumpDuration;
    // private System.Single _startBpm
    // Offset: 0x5C
    float startBpm;
    // private System.Single _startNoteJumpMovementSpeed
    // Offset: 0x60
    float startNoteJumpMovementSpeed;
    // private System.Single _noteJumpStartBeatOffset
    // Offset: 0x64
    float noteJumpStartBeatOffset;
    // private System.Single _noteJumpMovementSpeed
    // Offset: 0x68
    float noteJumpMovementSpeed;
    // private System.Single _jumpDistance
    // Offset: 0x6C
    float jumpDistance;
    // private System.Single _moveDistance
    // Offset: 0x70
    float moveDistance;
    // private UnityEngine.Vector3 _moveStartPos
    // Offset: 0x74
    UnityEngine::Vector3 moveStartPos;
    // private UnityEngine.Vector3 _moveEndPos
    // Offset: 0x80
    UnityEngine::Vector3 moveEndPos;
    // private UnityEngine.Vector3 _jumpEndPos
    // Offset: 0x8C
    UnityEngine::Vector3 jumpEndPos;
    // private System.Single _noteLinesCount
    // Offset: 0x98
    float noteLinesCount;
    // private System.Single _jumpOffsetY
    // Offset: 0x9C
    float jumpOffsetY;
    // private UnityEngine.Vector3 _rightVec
    // Offset: 0xA0
    UnityEngine::Vector3 rightVec;
    // private UnityEngine.Vector3 _forwardVec
    // Offset: 0xAC
    UnityEngine::Vector3 forwardVec;
    // public System.Single get_spawnAheadTime()
    // Offset: 0x1A2B5BC
    float get_spawnAheadTime();
    // public System.Single get_moveDuration()
    // Offset: 0x1A2B5C4
    float get_moveDuration();
    // public System.Single get_jumpDuration()
    // Offset: 0x1A2B5CC
    float get_jumpDuration();
    // public System.Single get_noteLinesDistance()
    // Offset: 0x1A2B5D4
    float get_noteLinesDistance();
    // public System.Single get_verticalLayersDistance()
    // Offset: 0x1A29EA0
    float get_verticalLayersDistance();
    // public System.Single get_jumpDistance()
    // Offset: 0x1A2B5DC
    float get_jumpDistance();
    // public System.Single get_noteJumpMovementSpeed()
    // Offset: 0x1A2B5E4
    float get_noteJumpMovementSpeed();
    // public System.Void Init(System.Int32 noteLinesCount, System.Single startNoteJumpMovementSpeed, System.Single startBpm, System.Single noteJumpStartBeatOffset, System.Single jumpOffsetY, UnityEngine.Vector3 rightVec, UnityEngine.Vector3 forwardVec)
    // Offset: 0x1A2A470
    void Init(int noteLinesCount, float startNoteJumpMovementSpeed, float startBpm, float noteJumpStartBeatOffset, float jumpOffsetY, UnityEngine::Vector3 rightVec, UnityEngine::Vector3 forwardVec);
    // public System.Void Update(System.Single bpm, System.Single jumpOffsetY)
    // Offset: 0x1A2ADD4
    void Update(float bpm, float jumpOffsetY);
    // public BeatmapObjectSpawnMovementData/ObstacleSpawnData GetObstacleSpawnData(ObstacleData obstacleData)
    // Offset: 0x1A2A708
    GlobalNamespace::BeatmapObjectSpawnMovementData::ObstacleSpawnData GetObstacleSpawnData(GlobalNamespace::ObstacleData* obstacleData);
    // public BeatmapObjectSpawnMovementData/NoteSpawnData GetJumpingNoteSpawnData(NoteData noteData)
    // Offset: 0x1A2A9EC
    GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData GetJumpingNoteSpawnData(GlobalNamespace::NoteData* noteData);
    // public UnityEngine.Vector3 GetNoteOffset(System.Int32 noteLineIndex, NoteLineLayer noteLineLayer)
    // Offset: 0x1A2B5EC
    UnityEngine::Vector3 GetNoteOffset(int noteLineIndex, GlobalNamespace::NoteLineLayer noteLineLayer);
    // public UnityEngine.Vector2 Get2DNoteOffset(System.Int32 noteLineIndex, NoteLineLayer noteLineLayer)
    // Offset: 0x1A2B0A0
    UnityEngine::Vector2 Get2DNoteOffset(int noteLineIndex, GlobalNamespace::NoteLineLayer noteLineLayer);
    // public System.Single JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset(NoteLineLayer lineLayer, System.Single distanceFromPlayer)
    // Offset: 0x1A2B12C
    float JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset(GlobalNamespace::NoteLineLayer lineLayer, float distanceFromPlayer);
    // private System.Single HighestJumpPosYForLineLayer(NoteLineLayer lineLayer)
    // Offset: 0x1A2B890
    float HighestJumpPosYForLineLayer(GlobalNamespace::NoteLineLayer lineLayer);
    // private System.Single HighestJumpPosYForLineLayerWithoutJumpOffset(NoteLineLayer lineLayer)
    // Offset: 0x1A2B8C0
    float HighestJumpPosYForLineLayerWithoutJumpOffset(GlobalNamespace::NoteLineLayer lineLayer);
    // private System.Single LineYPosForLineLayer(NoteLineLayer lineLayer)
    // Offset: 0x1A2B7FC
    float LineYPosForLineLayer(GlobalNamespace::NoteLineLayer lineLayer);
    // private System.Single NoteJumpGravityForLineLayer(NoteLineLayer lineLayer, NoteLineLayer startLineLayer)
    // Offset: 0x1A2B758
    float NoteJumpGravityForLineLayer(GlobalNamespace::NoteLineLayer lineLayer, GlobalNamespace::NoteLineLayer startLineLayer);
    // private System.Single NoteJumpGravityForLineLayerWithoutJumpOffset(NoteLineLayer lineLayer, NoteLineLayer startLineLayer)
    // Offset: 0x1A2B824
    float NoteJumpGravityForLineLayerWithoutJumpOffset(GlobalNamespace::NoteLineLayer lineLayer, GlobalNamespace::NoteLineLayer startLineLayer);
    // public System.Void .ctor()
    // Offset: 0x1A2B270
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BeatmapObjectSpawnMovementData* New_ctor();
  }; // BeatmapObjectSpawnMovementData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectSpawnMovementData*, "", "BeatmapObjectSpawnMovementData");
#pragma pack(pop)