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
  // Forward declaring type: ShaderWarmupSceneSetupData
  class ShaderWarmupSceneSetupData;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ShaderWarmupSceneSetup
  class ShaderWarmupSceneSetup : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::ShaderWarmupSceneSetup::$Start$d__2
    class $Start$d__2;
    // private ShaderWarmupSceneSetupData _sceneSetupData
    // Offset: 0x18
    GlobalNamespace::ShaderWarmupSceneSetupData* sceneSetupData;
    // private GameScenesManager _gameScenesManager
    // Offset: 0x20
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Collections.IEnumerator Start()
    // Offset: 0xFCD348
    System::Collections::IEnumerator* Start();
    // public System.Void .ctor()
    // Offset: 0xFCD3F0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ShaderWarmupSceneSetup* New_ctor();
  }; // ShaderWarmupSceneSetup
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShaderWarmupSceneSetup*, "", "ShaderWarmupSceneSetup");
#pragma pack(pop)