// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: CoreGameHUDController
#include "GlobalNamespace/CoreGameHUDController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FlyingSpriteSpawner
  class FlyingSpriteSpawner;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: NoteController
  class NoteController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissedNoteEffectSpawner
  class MissedNoteEffectSpawner : public UnityEngine::MonoBehaviour {
    public:
    // private FlyingSpriteSpawner _missedNoteFlyingSpriteSpawner
    // Offset: 0x18
    GlobalNamespace::FlyingSpriteSpawner* missedNoteFlyingSpriteSpawner;
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Offset: 0x20
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Offset: 0x28
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // private readonly CoreGameHUDController/InitData _initData
    // Offset: 0x30
    GlobalNamespace::CoreGameHUDController::InitData* initData;
    // private System.Single _spawnPosZ
    // Offset: 0x38
    float spawnPosZ;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1A74208
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1A742E8
    void OnDestroy();
    // private System.Void HandleNoteWasMissed(NoteController noteController)
    // Offset: 0x1A74388
    void HandleNoteWasMissed(GlobalNamespace::NoteController* noteController);
    // public System.Void .ctor()
    // Offset: 0x1A7456C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissedNoteEffectSpawner* New_ctor();
  }; // MissedNoteEffectSpawner
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissedNoteEffectSpawner*, "", "MissedNoteEffectSpawner");
#pragma pack(pop)