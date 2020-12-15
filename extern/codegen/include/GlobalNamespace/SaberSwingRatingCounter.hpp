// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMAutoincrementedRequestId
#include "GlobalNamespace/HMAutoincrementedRequestId.hpp"
// Including type: ISaberMovementDataProcessor
#include "GlobalNamespace/ISaberMovementDataProcessor.hpp"
// Including type: ISaberSwingRatingCounter
#include "GlobalNamespace/ISaberSwingRatingCounter.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Plane
#include "UnityEngine/Plane.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SwingSaberRatingDidChangeDelegate
  class SwingSaberRatingDidChangeDelegate;
  // Forward declaring type: SwingSaberRatingDidFinishDelegate
  class SwingSaberRatingDidFinishDelegate;
  // Forward declaring type: SaberMovementData
  class SaberMovementData;
  // Forward declaring type: BladeMovementDataElement
  struct BladeMovementDataElement;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SaberSwingRatingCounter
  class SaberSwingRatingCounter : public GlobalNamespace::HMAutoincrementedRequestId/*, public GlobalNamespace::ISaberMovementDataProcessor, public GlobalNamespace::ISaberSwingRatingCounter*/ {
    public:
    // private SwingSaberRatingDidChangeDelegate didChangeEvent
    // Offset: 0x18
    GlobalNamespace::SwingSaberRatingDidChangeDelegate* didChangeEvent;
    // private SwingSaberRatingDidFinishDelegate didFinishEvent
    // Offset: 0x20
    GlobalNamespace::SwingSaberRatingDidFinishDelegate* didFinishEvent;
    // private SaberMovementData _saberMovementData
    // Offset: 0x28
    GlobalNamespace::SaberMovementData* saberMovementData;
    // private UnityEngine.Vector3 _cutPlaneNormal
    // Offset: 0x30
    UnityEngine::Vector3 cutPlaneNormal;
    // private System.Single _cutTime
    // Offset: 0x3C
    float cutTime;
    // private System.Single _afterCutRating
    // Offset: 0x40
    float afterCutRating;
    // private System.Single _beforeCutRating
    // Offset: 0x44
    float beforeCutRating;
    // private System.Boolean _didFinish
    // Offset: 0x48
    bool didFinish;
    // private System.Boolean _initialized
    // Offset: 0x49
    bool initialized;
    // private UnityEngine.Plane _notePlane
    // Offset: 0x4C
    UnityEngine::Plane notePlane;
    // private System.Boolean _notePlaneWasCut
    // Offset: 0x5C
    bool notePlaneWasCut;
    // private UnityEngine.Vector3 _noteForward
    // Offset: 0x60
    UnityEngine::Vector3 noteForward;
    // private UnityEngine.Vector3 _notePlaneCenter
    // Offset: 0x6C
    UnityEngine::Vector3 notePlaneCenter;
    // private UnityEngine.Vector3 _beforeCutTopPos
    // Offset: 0x78
    UnityEngine::Vector3 beforeCutTopPos;
    // private UnityEngine.Vector3 _beforeCutBottomPos
    // Offset: 0x84
    UnityEngine::Vector3 beforeCutBottomPos;
    // private UnityEngine.Vector3 _afterCutTopPos
    // Offset: 0x90
    UnityEngine::Vector3 afterCutTopPos;
    // private UnityEngine.Vector3 _afterCutBottomPos
    // Offset: 0x9C
    UnityEngine::Vector3 afterCutBottomPos;
    // private UnityEngine.Vector3 _newPlaneNormal
    // Offset: 0xA8
    UnityEngine::Vector3 newPlaneNormal;
    // private UnityEngine.Vector3 _cutTopPos
    // Offset: 0xB4
    UnityEngine::Vector3 cutTopPos;
    // private UnityEngine.Vector3 _cutBottomPos
    // Offset: 0xC0
    UnityEngine::Vector3 cutBottomPos;
    // Creating interface conversion operator: operator GlobalNamespace::ISaberMovementDataProcessor
    operator GlobalNamespace::ISaberMovementDataProcessor() noexcept {
      return *reinterpret_cast<GlobalNamespace::ISaberMovementDataProcessor*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::ISaberSwingRatingCounter
    operator GlobalNamespace::ISaberSwingRatingCounter() noexcept {
      return *reinterpret_cast<GlobalNamespace::ISaberSwingRatingCounter*>(this);
    }
    // Deleting conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept = delete;
    // public System.Void Init(SaberMovementData saberMovementData, UnityEngine.Transform noteTransform)
    // Offset: 0xFC298C
    void Init(GlobalNamespace::SaberMovementData* saberMovementData, UnityEngine::Transform* noteTransform);
    // public System.Void Deinit()
    // Offset: 0xFC2A98
    void Deinit();
    // public System.Void DrawGizmos()
    // Offset: 0xFC2F08
    void DrawGizmos();
    // public System.Void add_didChangeEvent(SwingSaberRatingDidChangeDelegate value)
    // Offset: 0xFC26E4
    // Implemented from: ISaberSwingRatingCounter
    // Base method: System.Void ISaberSwingRatingCounter::add_didChangeEvent(SwingSaberRatingDidChangeDelegate value)
    void add_didChangeEvent(GlobalNamespace::SwingSaberRatingDidChangeDelegate* value);
    // public System.Void remove_didChangeEvent(SwingSaberRatingDidChangeDelegate value)
    // Offset: 0xFC2788
    // Implemented from: ISaberSwingRatingCounter
    // Base method: System.Void ISaberSwingRatingCounter::remove_didChangeEvent(SwingSaberRatingDidChangeDelegate value)
    void remove_didChangeEvent(GlobalNamespace::SwingSaberRatingDidChangeDelegate* value);
    // public System.Void add_didFinishEvent(SwingSaberRatingDidFinishDelegate value)
    // Offset: 0xFC282C
    // Implemented from: ISaberSwingRatingCounter
    // Base method: System.Void ISaberSwingRatingCounter::add_didFinishEvent(SwingSaberRatingDidFinishDelegate value)
    void add_didFinishEvent(GlobalNamespace::SwingSaberRatingDidFinishDelegate* value);
    // public System.Void remove_didFinishEvent(SwingSaberRatingDidFinishDelegate value)
    // Offset: 0xFC28D0
    // Implemented from: ISaberSwingRatingCounter
    // Base method: System.Void ISaberSwingRatingCounter::remove_didFinishEvent(SwingSaberRatingDidFinishDelegate value)
    void remove_didFinishEvent(GlobalNamespace::SwingSaberRatingDidFinishDelegate* value);
    // public System.Boolean get_didFinish()
    // Offset: 0xFC2974
    // Implemented from: ISaberSwingRatingCounter
    // Base method: System.Boolean ISaberSwingRatingCounter::get_didFinish()
    bool get_didFinish();
    // public System.Single get_beforeCutRating()
    // Offset: 0xFC297C
    // Implemented from: ISaberSwingRatingCounter
    // Base method: System.Single ISaberSwingRatingCounter::get_beforeCutRating()
    float get_beforeCutRating();
    // public System.Single get_afterCutRating()
    // Offset: 0xFC2984
    // Implemented from: ISaberSwingRatingCounter
    // Base method: System.Single ISaberSwingRatingCounter::get_afterCutRating()
    float get_afterCutRating();
    // public System.Void ProcessNewData(BladeMovementDataElement newData, BladeMovementDataElement prevData, System.Boolean prevDataAreValid)
    // Offset: 0xFC2AB8
    // Implemented from: ISaberMovementDataProcessor
    // Base method: System.Void ISaberMovementDataProcessor::ProcessNewData(BladeMovementDataElement newData, BladeMovementDataElement prevData, System.Boolean prevDataAreValid)
    void ProcessNewData(GlobalNamespace::BladeMovementDataElement newData, GlobalNamespace::BladeMovementDataElement prevData, bool prevDataAreValid);
    // public System.Void .ctor()
    // Offset: 0xFC31EC
    // Implemented from: HMAutoincrementedRequestId
    // Base method: System.Void HMAutoincrementedRequestId::.ctor()
    // Base method: System.Void Object::.ctor()
    static SaberSwingRatingCounter* New_ctor();
  }; // SaberSwingRatingCounter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberSwingRatingCounter*, "", "SaberSwingRatingCounter");
#pragma pack(pop)