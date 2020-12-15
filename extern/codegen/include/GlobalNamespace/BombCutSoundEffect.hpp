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
  // Forward declaring type: Saber
  class Saber;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BombCutSoundEffect
  class BombCutSoundEffect : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BombCutSoundEffect::Pool
    class Pool;
    // private UnityEngine.AudioSource _audioSource
    // Offset: 0x18
    UnityEngine::AudioSource* audioSource;
    // private System.Action`1<BombCutSoundEffect> didFinishEvent
    // Offset: 0x20
    System::Action_1<GlobalNamespace::BombCutSoundEffect*>* didFinishEvent;
    // private Saber _saber
    // Offset: 0x28
    GlobalNamespace::Saber* saber;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didFinishEvent(System.Action`1<BombCutSoundEffect> value)
    // Offset: 0x1A30598
    void add_didFinishEvent(System::Action_1<GlobalNamespace::BombCutSoundEffect*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<BombCutSoundEffect> value)
    // Offset: 0x1A3063C
    void remove_didFinishEvent(System::Action_1<GlobalNamespace::BombCutSoundEffect*>* value);
    // public System.Void Init(UnityEngine.AudioClip audioClip, Saber saber, System.Single volume)
    // Offset: 0x1A306E0
    void Init(UnityEngine::AudioClip* audioClip, GlobalNamespace::Saber* saber, float volume);
    // protected System.Void LateUpdate()
    // Offset: 0x1A30770
    void LateUpdate();
    // private System.Void StopPlayingAndFinish()
    // Offset: 0x1A30804
    void StopPlayingAndFinish();
    // public System.Void .ctor()
    // Offset: 0x1A3088C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BombCutSoundEffect* New_ctor();
  }; // BombCutSoundEffect
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BombCutSoundEffect*, "", "BombCutSoundEffect");
#pragma pack(pop)