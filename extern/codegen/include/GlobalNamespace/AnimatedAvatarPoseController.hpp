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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AnimatedAvatarPoseController
  class AnimatedAvatarPoseController : public UnityEngine::MonoBehaviour {
    public:
    // private readonly AvatarPoseController _avatarPoseController
    // Offset: 0x18
    GlobalNamespace::AvatarPoseController* avatarPoseController;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void LateUpdate()
    // Offset: 0x1A3CD28
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x1A3CF34
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AnimatedAvatarPoseController* New_ctor();
  }; // AnimatedAvatarPoseController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AnimatedAvatarPoseController*, "", "AnimatedAvatarPoseController");
#pragma pack(pop)
