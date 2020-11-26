// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: BeatmapObjectSpawnController
  class BeatmapObjectSpawnController;
  // Forward declaring type: PlayerTransforms
  class PlayerTransforms;
  // Forward declaring type: BeatmapObjectAvoidanceYOffsetEvaluator
  class BeatmapObjectAvoidanceYOffsetEvaluator;
  // Forward declaring type: BeatmapObjectAvoidancePathEvaluator
  class BeatmapObjectAvoidancePathEvaluator;
  // Forward declaring type: BeatmapObjectAvoidanceTiltEvaluator
  class BeatmapObjectAvoidanceTiltEvaluator;
  // Forward declaring type: BezierSplineEvaluator
  class BezierSplineEvaluator;
  // Forward declaring type: OffsetDirection
  struct OffsetDirection;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapObjectsAvoidance
  class BeatmapObjectsAvoidance : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _zOffset
    // Offset: 0x18
    float zOffset;
    // private System.Single _yOffset
    // Offset: 0x1C
    float yOffset;
    // private UnityEngine.Vector2 _gravity
    // Offset: 0x20
    UnityEngine::Vector2 gravity;
    // private UnityEngine.Transform _towardsPlayerWrapperTransform
    // Offset: 0x28
    UnityEngine::Transform* towardsPlayerWrapperTransform;
    // private readonly IAudioTimeSource _audioTimeSource
    // Offset: 0x30
    GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // private readonly IReadonlyBeatmapData _beatmapData
    // Offset: 0x38
    GlobalNamespace::IReadonlyBeatmapData* beatmapData;
    // private readonly BeatmapObjectSpawnController _beatmapObjectSpawnController
    // Offset: 0x40
    GlobalNamespace::BeatmapObjectSpawnController* beatmapObjectSpawnController;
    // private readonly PlayerTransforms _playerTransforms
    // Offset: 0x48
    GlobalNamespace::PlayerTransforms* playerTransforms;
    // private BeatmapObjectAvoidanceYOffsetEvaluator _avoidanceYOffsetEvaluatorProvider
    // Offset: 0x50
    GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator* avoidanceYOffsetEvaluatorProvider;
    // private BeatmapObjectAvoidancePathEvaluator _pathEvaluator
    // Offset: 0x58
    GlobalNamespace::BeatmapObjectAvoidancePathEvaluator* pathEvaluator;
    // private BeatmapObjectAvoidanceTiltEvaluator _tiltEvaluator
    // Offset: 0x60
    GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator* tiltEvaluator;
    // private BezierSplineEvaluator _pathBezierSplineEvaluator
    // Offset: 0x68
    GlobalNamespace::BezierSplineEvaluator* pathBezierSplineEvaluator;
    // private BezierSplineEvaluator _accelerationBezierSplineEvaluator
    // Offset: 0x70
    GlobalNamespace::BezierSplineEvaluator* accelerationBezierSplineEvaluator;
    // private UnityEngine.Transform _transform
    // Offset: 0x78
    UnityEngine::Transform* transform;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x1A2B8E8
    void Awake();
    // protected System.Void Start()
    // Offset: 0x1A2B918
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1A2BC4C
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x1A2BD1C
    void Update();
    // private System.Void SetupAndRun()
    // Offset: 0x1A2B9CC
    void SetupAndRun();
    // private System.Boolean BuildAnimationCurvePath()
    // Offset: 0x1A2BF08
    bool BuildAnimationCurvePath();
    // private System.Void AdjustPositionWithOffsetDirection(ref UnityEngine.Vector2 position, System.Int32 lineIndex, OffsetDirection offsetDirection)
    // Offset: 0x1A2C40C
    void AdjustPositionWithOffsetDirection(UnityEngine::Vector2& position, int lineIndex, GlobalNamespace::OffsetDirection offsetDirection);
    // private System.Void HandleBeatmapObjectSpawnControllerDidInit()
    // Offset: 0x1A2CDAC
    void HandleBeatmapObjectSpawnControllerDidInit();
    // public System.Void .ctor()
    // Offset: 0x1A2CDB0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatmapObjectsAvoidance* New_ctor();
  }; // BeatmapObjectsAvoidance
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectsAvoidance*, "", "BeatmapObjectsAvoidance");
#pragma pack(pop)
