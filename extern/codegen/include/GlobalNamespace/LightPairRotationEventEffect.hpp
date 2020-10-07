// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectCallbackController
  class BeatmapObjectCallbackController;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LightPairRotationEventEffect
  class LightPairRotationEventEffect : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::LightPairRotationEventEffect::RotationData
    class RotationData;
    // private BeatmapEventType _eventL
    // Offset: 0x18
    GlobalNamespace::BeatmapEventType eventL;
    // private BeatmapEventType _eventR
    // Offset: 0x1C
    GlobalNamespace::BeatmapEventType eventR;
    // private BeatmapEventType _switchOverrideRandomValuesEvent
    // Offset: 0x20
    GlobalNamespace::BeatmapEventType switchOverrideRandomValuesEvent;
    // private UnityEngine.Vector3 _rotationVector
    // Offset: 0x24
    UnityEngine::Vector3 rotationVector;
    // private System.Boolean _overrideRandomValues
    // Offset: 0x30
    bool overrideRandomValues;
    // private System.Boolean _useZPositionForAngleOffset
    // Offset: 0x31
    bool useZPositionForAngleOffset;
    // private System.Single _zPositionAngleOffsetScale
    // Offset: 0x34
    float zPositionAngleOffsetScale;
    // private System.Single _startRotation
    // Offset: 0x38
    float startRotation;
    // private UnityEngine.Transform _transformL
    // Offset: 0x40
    UnityEngine::Transform* transformL;
    // private UnityEngine.Transform _transformR
    // Offset: 0x48
    UnityEngine::Transform* transformR;
    // private BeatmapObjectCallbackController _beatmapObjectCallbackController
    // Offset: 0x50
    GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController;
    // private LightPairRotationEventEffect/RotationData _rotationDataL
    // Offset: 0x58
    GlobalNamespace::LightPairRotationEventEffect::RotationData* rotationDataL;
    // private LightPairRotationEventEffect/RotationData _rotationDataR
    // Offset: 0x60
    GlobalNamespace::LightPairRotationEventEffect::RotationData* rotationDataR;
    // private System.Int32 _randomGenerationFrameNum
    // Offset: 0x68
    int randomGenerationFrameNum;
    // private System.Single _randomStartRotation
    // Offset: 0x6C
    float randomStartRotation;
    // private System.Single _randomDirection
    // Offset: 0x70
    float randomDirection;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kSpeedMultiplier
    static constexpr const float kSpeedMultiplier = 20;
    // Get static field: static private System.Single kSpeedMultiplier
    static float _get_kSpeedMultiplier();
    // Set static field: static private System.Single kSpeedMultiplier
    static void _set_kSpeedMultiplier(float value);
    // protected System.Void Start()
    // Offset: 0xBF9760
    void Start();
    // protected System.Void Update()
    // Offset: 0xBF9A34
    void Update();
    // private System.Void OnDestroy()
    // Offset: 0xBF9CB8
    void OnDestroy();
    // private System.Void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(BeatmapEventData beatmapEventData)
    // Offset: 0xBF9D90
    void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // private System.Void UpdateRotationData(System.Int32 beatmapEventDataValue, LightPairRotationEventEffect/RotationData rotationData, System.Single startRotationOffset, System.Single direction)
    // Offset: 0xBFA010
    void UpdateRotationData(int beatmapEventDataValue, GlobalNamespace::LightPairRotationEventEffect::RotationData* rotationData, float startRotationOffset, float direction);
    // public System.Void .ctor()
    // Offset: 0xBFA284
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LightPairRotationEventEffect* New_ctor();
  }; // LightPairRotationEventEffect
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightPairRotationEventEffect*, "", "LightPairRotationEventEffect");
#pragma pack(pop)
