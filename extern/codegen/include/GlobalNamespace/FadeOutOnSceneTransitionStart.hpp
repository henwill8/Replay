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
  // Forward declaring type: FadeInOutController
  class FadeInOutController;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FadeOutOnSceneTransitionStart
  class FadeOutOnSceneTransitionStart : public UnityEngine::MonoBehaviour {
    public:
    // private FadeInOutController _fadeInOut
    // Offset: 0x18
    GlobalNamespace::FadeInOutController* fadeInOut;
    // private GameScenesManager _gameScenesManager
    // Offset: 0x20
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1911164
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x19111F8
    void OnDestroy();
    // private System.Void HandleGameScenesManagerTransitionDidStart(System.Single duration)
    // Offset: 0x19112D4
    void HandleGameScenesManagerTransitionDidStart(float duration);
    // public System.Void .ctor()
    // Offset: 0x19112F0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FadeOutOnSceneTransitionStart* New_ctor();
  }; // FadeOutOnSceneTransitionStart
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FadeOutOnSceneTransitionStart*, "", "FadeOutOnSceneTransitionStart");
#pragma pack(pop)
