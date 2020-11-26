// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AvatarPoseController
  class AvatarPoseController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AvatarPoseRestrictions
  class AvatarPoseRestrictions : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _maxHeadSquareDistanceFromCenter
    // Offset: 0x18
    float maxHeadSquareDistanceFromCenter;
    // private System.Single _minHeadYPos
    // Offset: 0x1C
    float minHeadYPos;
    // private System.Single _maxHeadYPos
    // Offset: 0x20
    float maxHeadYPos;
    // private System.Single _minHandSquareDistanceFromHeadCenter
    // Offset: 0x24
    float minHandSquareDistanceFromHeadCenter;
    // private System.Single _maxHandSquareDistanceFromHeadCenter
    // Offset: 0x28
    float maxHandSquareDistanceFromHeadCenter;
    // private System.Boolean _forceHeadPosition
    // Offset: 0x2C
    bool forceHeadPosition;
    // private UnityEngine.Vector3 _centerHeadOffset
    // Offset: 0x30
    UnityEngine::Vector3 centerHeadOffset;
    // private readonly AvatarPoseController _avatarPoseController
    // Offset: 0x40
    GlobalNamespace::AvatarPoseController* avatarPoseController;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1A463B4
    void Start();
    // private System.Void HandleAvatarPoseControllerPositionsWillBeSet(UnityEngine.Quaternion headRotation, UnityEngine.Vector3 headPosition, UnityEngine.Vector3 leftHandPosition, UnityEngine.Vector3 rightHandPosition, out UnityEngine.Vector3 newHeadPosition, out UnityEngine.Vector3 newLeftHandPosition, out UnityEngine.Vector3 newRightHandPosition)
    // Offset: 0x1A4644C
    void HandleAvatarPoseControllerPositionsWillBeSet(UnityEngine::Quaternion headRotation, UnityEngine::Vector3 headPosition, UnityEngine::Vector3 leftHandPosition, UnityEngine::Vector3 rightHandPosition, UnityEngine::Vector3& newHeadPosition, UnityEngine::Vector3& newLeftHandPosition, UnityEngine::Vector3& newRightHandPosition);
    // private UnityEngine.Vector3 LimitHandPositionRelativeToHead(UnityEngine.Vector3 handPosition, UnityEngine.Vector3 headCenter)
    // Offset: 0x1A467FC
    UnityEngine::Vector3 LimitHandPositionRelativeToHead(UnityEngine::Vector3 handPosition, UnityEngine::Vector3 headCenter);
    // public System.Void .ctor()
    // Offset: 0x1A469A4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AvatarPoseRestrictions* New_ctor();
  }; // AvatarPoseRestrictions
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarPoseRestrictions*, "", "AvatarPoseRestrictions");
#pragma pack(pop)
