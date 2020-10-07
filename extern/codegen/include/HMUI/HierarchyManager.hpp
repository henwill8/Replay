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
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ScreenSystem
  class ScreenSystem;
  // Forward declaring type: FlowCoordinator
  class FlowCoordinator;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.HierarchyManager
  class HierarchyManager : public UnityEngine::MonoBehaviour {
    public:
    // private HMUI.ScreenSystem _screenSystem
    // Offset: 0x18
    HMUI::ScreenSystem* screenSystem;
    // private GameScenesManager _gameScenesManager
    // Offset: 0x20
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // private HMUI.FlowCoordinator _rootFlowCoordinator
    // Offset: 0x28
    HMUI::FlowCoordinator* rootFlowCoordinator;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xEE22A8
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xEE2464
    void OnDestroy();
    // private System.Void HandleSceneTransitionDidFinish(ScenesTransitionSetupDataSO scenesTransitionSetupData, Zenject.DiContainer container)
    // Offset: 0xEE23A8
    void HandleSceneTransitionDidFinish(GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, Zenject::DiContainer* container);
    // private System.Void HandleBeforeDismissingScenes()
    // Offset: 0xEE253C
    void HandleBeforeDismissingScenes();
    // public System.Void StartWithFlowCoordinator(HMUI.FlowCoordinator flowCoordinator)
    // Offset: 0xEE25F8
    void StartWithFlowCoordinator(HMUI::FlowCoordinator* flowCoordinator);
    // public System.Void .ctor()
    // Offset: 0xEE2630
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static HierarchyManager* New_ctor();
  }; // HMUI.HierarchyManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::HierarchyManager*, "HMUI", "HierarchyManager");
#pragma pack(pop)
