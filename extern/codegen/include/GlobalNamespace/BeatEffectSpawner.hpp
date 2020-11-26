// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: BeatEffect
#include "GlobalNamespace/BeatEffect.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorManager
  class ColorManager;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: SongController
  class SongController;
  // Forward declaring type: MonoMemoryPoolContainer`1<T>
  template<typename T>
  class MonoMemoryPoolContainer_1;
  // Forward declaring type: NoteController
  class NoteController;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatEffectSpawner
  class BeatEffectSpawner : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BeatEffectSpawner::InitData
    class InitData;
    // private System.Single _effectDuration
    // Offset: 0x18
    float effectDuration;
    // private UnityEngine.Color _bombColorEffect
    // Offset: 0x1C
    UnityEngine::Color bombColorEffect;
    // private readonly ColorManager _colorManager
    // Offset: 0x30
    GlobalNamespace::ColorManager* colorManager;
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Offset: 0x38
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Offset: 0x40
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // private readonly BeatEffectSpawner/InitData _initData
    // Offset: 0x48
    GlobalNamespace::BeatEffectSpawner::InitData* initData;
    // private SongController _songController
    // Offset: 0x50
    GlobalNamespace::SongController* songController;
    // private MonoMemoryPoolContainer`1<BeatEffect> _beatEffectPoolContainer
    // Offset: 0x58
    GlobalNamespace::MonoMemoryPoolContainer_1<GlobalNamespace::BeatEffect*>* beatEffectPoolContainer;
    // private readonly System.Collections.Generic.List`1<BeatEffect> _beatEffectsToDespawn
    // Offset: 0x60
    System::Collections::Generic::List_1<GlobalNamespace::BeatEffect*>* beatEffectsToDespawn;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Init(BeatEffect/Pool beatEffectPool)
    // Offset: 0x1A7790C
    void Init(GlobalNamespace::BeatEffect::Pool* beatEffectPool);
    // protected System.Void Start()
    // Offset: 0x1A7798C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1A77A20
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x1A77AC0
    void Update();
    // private System.Void HandleNoteDidStartJump(NoteController noteController)
    // Offset: 0x1A77CB0
    void HandleNoteDidStartJump(GlobalNamespace::NoteController* noteController);
    // private System.Void HandleBeatEffectDidFinish(BeatEffect beatEffect)
    // Offset: 0x1A77F88
    void HandleBeatEffectDidFinish(GlobalNamespace::BeatEffect* beatEffect);
    // public System.Void .ctor()
    // Offset: 0x1A78034
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatEffectSpawner* New_ctor();
  }; // BeatEffectSpawner
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatEffectSpawner*, "", "BeatEffectSpawner");
#pragma pack(pop)
