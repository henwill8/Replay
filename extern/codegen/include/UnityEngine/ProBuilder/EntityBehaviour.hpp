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
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: Scene
  struct Scene;
  // Forward declaring type: LoadSceneMode
  struct LoadSceneMode;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.EntityBehaviour
  class EntityBehaviour : public UnityEngine::MonoBehaviour {
    public:
    // public System.Boolean manageVisibility
    // Offset: 0x18
    bool manageVisibility;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Initialize()
    // Offset: 0xFFFFFFFF
    void Initialize();
    // public System.Void OnEnterPlayMode()
    // Offset: 0xFFFFFFFF
    void OnEnterPlayMode();
    // public System.Void OnSceneLoaded(UnityEngine.SceneManagement.Scene scene, UnityEngine.SceneManagement.LoadSceneMode mode)
    // Offset: 0xFFFFFFFF
    void OnSceneLoaded(UnityEngine::SceneManagement::Scene scene, UnityEngine::SceneManagement::LoadSceneMode mode);
    // protected System.Void SetMaterial(UnityEngine.Material material)
    // Offset: 0x1633B5C
    void SetMaterial(UnityEngine::Material* material);
    // protected System.Void .ctor()
    // Offset: 0x1633C38
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static EntityBehaviour* New_ctor();
  }; // UnityEngine.ProBuilder.EntityBehaviour
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::EntityBehaviour*, "UnityEngine.ProBuilder", "EntityBehaviour");
#pragma pack(pop)
