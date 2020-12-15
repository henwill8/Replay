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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Coroutine
  class Coroutine;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AudioPitchGainEffect
  class AudioPitchGainEffect : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::AudioPitchGainEffect::$StartEffectCoroutine$d__8
    class $StartEffectCoroutine$d__8;
    // private UnityEngine.AudioSource _audioSource
    // Offset: 0x18
    UnityEngine::AudioSource* audioSource;
    // private System.Single _duration
    // Offset: 0x20
    float duration;
    // private UnityEngine.AnimationCurve _pitchCurve
    // Offset: 0x28
    UnityEngine::AnimationCurve* pitchCurve;
    // private UnityEngine.AnimationCurve _gainCurve
    // Offset: 0x30
    UnityEngine::AnimationCurve* gainCurve;
    // private UnityEngine.Coroutine _currentCoroutine
    // Offset: 0x38
    UnityEngine::Coroutine* currentCoroutine;
    // private System.Single _startPitch
    // Offset: 0x40
    float startPitch;
    // private System.Single _startVolume
    // Offset: 0x44
    float startVolume;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1A41D60
    void Start();
    // private System.Collections.IEnumerator StartEffectCoroutine(System.Single volumeScale, System.Action finishCallback)
    // Offset: 0x1A41D94
    System::Collections::IEnumerator* StartEffectCoroutine(float volumeScale, System::Action* finishCallback);
    // public System.Void StartEffect(System.Single volumeScale, System.Action finishCallback)
    // Offset: 0x1A41E68
    void StartEffect(float volumeScale, System::Action* finishCallback);
    // public System.Void InterruptEffect()
    // Offset: 0x1A41EA4
    void InterruptEffect();
    // public System.Void SetAudioSource(UnityEngine.AudioSource audioSource)
    // Offset: 0x1A41F08
    void SetAudioSource(UnityEngine::AudioSource* audioSource);
    // public System.Void .ctor()
    // Offset: 0x1A41F10
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AudioPitchGainEffect* New_ctor();
  }; // AudioPitchGainEffect
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioPitchGainEffect*, "", "AudioPitchGainEffect");
#pragma pack(pop)