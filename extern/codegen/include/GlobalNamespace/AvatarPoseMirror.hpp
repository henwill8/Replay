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
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AvatarPoseMirror
  class AvatarPoseMirror : public UnityEngine::MonoBehaviour {
    public:
    // private readonly AvatarPoseController _avatarPoseController
    // Offset: 0x18
    GlobalNamespace::AvatarPoseController* avatarPoseController;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1A46118
    void Start();
    // static private System.Void HandleAvatarPoseControllerPositionsWillBeSet(UnityEngine.Vector3 headPosition, UnityEngine.Vector3 leftHandPosition, UnityEngine.Vector3 rightHandPosition, out UnityEngine.Vector3 newHeadPosition, out UnityEngine.Vector3 newLeftHandPosition, out UnityEngine.Vector3 newRightHandPosition)
    // Offset: 0x1A46200
    static void HandleAvatarPoseControllerPositionsWillBeSet(UnityEngine::Vector3 headPosition, UnityEngine::Vector3 leftHandPosition, UnityEngine::Vector3 rightHandPosition, UnityEngine::Vector3& newHeadPosition, UnityEngine::Vector3& newLeftHandPosition, UnityEngine::Vector3& newRightHandPosition);
    // static private System.Void HandleAvatarPoseControllerRotationsWillBeSet(UnityEngine.Quaternion headRotation, UnityEngine.Quaternion leftHandRotation, UnityEngine.Quaternion rightHandRotation, out UnityEngine.Quaternion newHeadRotation, out UnityEngine.Quaternion newLeftHandRotation, out UnityEngine.Quaternion newRightHandRotation)
    // Offset: 0x1A462CC
    static void HandleAvatarPoseControllerRotationsWillBeSet(UnityEngine::Quaternion headRotation, UnityEngine::Quaternion leftHandRotation, UnityEngine::Quaternion rightHandRotation, UnityEngine::Quaternion& newHeadRotation, UnityEngine::Quaternion& newLeftHandRotation, UnityEngine::Quaternion& newRightHandRotation);
    // static private UnityEngine.Quaternion MirrorRotation(UnityEngine.Quaternion rotation)
    // Offset: 0x1A46374
    static UnityEngine::Quaternion MirrorRotation(UnityEngine::Quaternion rotation);
    // static private UnityEngine.Vector3 MirrorPosition(UnityEngine.Vector3 position)
    // Offset: 0x1A46294
    static UnityEngine::Vector3 MirrorPosition(UnityEngine::Vector3 position);
    // public System.Void .ctor()
    // Offset: 0x1A463AC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AvatarPoseMirror* New_ctor();
  }; // AvatarPoseMirror
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarPoseMirror*, "", "AvatarPoseMirror");
#pragma pack(pop)
