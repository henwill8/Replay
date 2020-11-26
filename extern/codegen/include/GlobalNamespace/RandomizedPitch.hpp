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
  // Forward declaring type: Coroutine
  class Coroutine;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: RandomizedPitch
  class RandomizedPitch : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::RandomizedPitch::$PlayDelayedCoroutine$d__9
    class $PlayDelayedCoroutine$d__9;
    // Nested type: GlobalNamespace::RandomizedPitch::$RestorePitchWithDelay$d__10
    class $RestorePitchWithDelay$d__10;
    // private UnityEngine.AudioSource _audioSource
    // Offset: 0x18
    UnityEngine::AudioSource* audioSource;
    // private System.Single _minPitchMultiplier
    // Offset: 0x20
    float minPitchMultiplier;
    // private System.Single _maxPitchMultiplier
    // Offset: 0x24
    float maxPitchMultiplier;
    // private System.Boolean _playOnAwake
    // Offset: 0x28
    bool playOnAwake;
    // private System.Single _originalPitch
    // Offset: 0x2C
    float originalPitch;
    // private UnityEngine.Coroutine _restoringCoroutine
    // Offset: 0x30
    UnityEngine::Coroutine* restoringCoroutine;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnEnable()
    // Offset: 0x103BCC8
    void OnEnable();
    // public System.Void Play()
    // Offset: 0x103BD30
    void Play();
    // public System.Void PlayDelayed(System.Single delay)
    // Offset: 0x103BEB4
    void PlayDelayed(float delay);
    // private System.Collections.IEnumerator PlayDelayedCoroutine(System.Single delay)
    // Offset: 0x103BEFC
    System::Collections::IEnumerator* PlayDelayedCoroutine(float delay);
    // private System.Collections.IEnumerator RestorePitchWithDelay(System.Single delay)
    // Offset: 0x103BE28
    System::Collections::IEnumerator* RestorePitchWithDelay(float delay);
    // public System.Void .ctor()
    // Offset: 0x103BFE0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static RandomizedPitch* New_ctor();
  }; // RandomizedPitch
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RandomizedPitch*, "", "RandomizedPitch");
#pragma pack(pop)
