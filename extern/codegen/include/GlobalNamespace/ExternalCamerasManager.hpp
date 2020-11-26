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
  // Forward declaring type: OculusMRCManager
  class OculusMRCManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ExternalCamerasManager
  class ExternalCamerasManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::ExternalCamerasManager::InitData
    class InitData;
    // private OculusMRCManager _oculusMRCManager
    // Offset: 0x18
    GlobalNamespace::OculusMRCManager* oculusMRCManager;
    // private UnityEngine.Camera _mrcBackgroundCameraPrefab
    // Offset: 0x20
    UnityEngine::Camera* mrcBackgroundCameraPrefab;
    // private UnityEngine.Camera _mrcForegroundCameraPrefab
    // Offset: 0x28
    UnityEngine::Camera* mrcForegroundCameraPrefab;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Init(ExternalCamerasManager/InitData initData)
    // Offset: 0x1989180
    void Init(GlobalNamespace::ExternalCamerasManager::InitData* initData);
    // private UnityEngine.GameObject InstantiateMixedRealityBackgroundCameraGameObject(UnityEngine.Camera mainCamera)
    // Offset: 0x1989268
    UnityEngine::GameObject* InstantiateMixedRealityBackgroundCameraGameObject(UnityEngine::Camera* mainCamera);
    // private UnityEngine.GameObject InstantiateMixedRealityForegroundCameraGameObject(UnityEngine.Camera mainCamera)
    // Offset: 0x19892EC
    UnityEngine::GameObject* InstantiateMixedRealityForegroundCameraGameObject(UnityEngine::Camera* mainCamera);
    // public System.Void .ctor()
    // Offset: 0x1989370
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ExternalCamerasManager* New_ctor();
  }; // ExternalCamerasManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ExternalCamerasManager*, "", "ExternalCamerasManager");
#pragma pack(pop)
