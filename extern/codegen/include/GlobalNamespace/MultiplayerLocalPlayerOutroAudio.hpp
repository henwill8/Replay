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
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
  // Forward declaring type: FloatTween
  class FloatTween;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerLocalPlayerOutroAudio
  class MultiplayerLocalPlayerOutroAudio : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerLocalPlayerOutroAudio::InitData
    class InitData;
    // Nested type: GlobalNamespace::MultiplayerLocalPlayerOutroAudio::$PlayOutroMusicSampleCoroutine$d__9
    class $PlayOutroMusicSampleCoroutine$d__9;
    // private UnityEngine.AudioSource _audioSource
    // Offset: 0x18
    UnityEngine::AudioSource* audioSource;
    // private readonly MultiplayerLocalPlayerOutroAudio/InitData _initData
    // Offset: 0x20
    GlobalNamespace::MultiplayerLocalPlayerOutroAudio::InitData* initData;
    // private readonly Tweening.TweeningManager _tweeningManager
    // Offset: 0x28
    Tweening::TweeningManager* tweeningManager;
    // private Tweening.FloatTween _audioVolumeTween
    // Offset: 0x30
    Tweening::FloatTween* audioVolumeTween;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static public System.Single kFadeInDuration
    static constexpr const float kFadeInDuration = 1;
    // Get static field: static public System.Single kFadeInDuration
    static float _get_kFadeInDuration();
    // Set static field: static public System.Single kFadeInDuration
    static void _set_kFadeInDuration(float value);
    // static field const value: static public System.Single kFadeOutDuration
    static constexpr const float kFadeOutDuration = 1;
    // Get static field: static public System.Single kFadeOutDuration
    static float _get_kFadeOutDuration();
    // Set static field: static public System.Single kFadeOutDuration
    static void _set_kFadeOutDuration(float value);
    // protected System.Void OnDestroy()
    // Offset: 0xF735C4
    void OnDestroy();
    // public System.Void PlayOutroMusicSample(System.Single maxDuration, System.Single volume)
    // Offset: 0xF70EF0
    void PlayOutroMusicSample(float maxDuration, float volume);
    // private System.Collections.IEnumerator PlayOutroMusicSampleCoroutine(System.Single maxDuration, System.Single volume)
    // Offset: 0xF7365C
    System::Collections::IEnumerator* PlayOutroMusicSampleCoroutine(float maxDuration, float volume);
    // private System.Void <PlayOutroMusicSampleCoroutine>b__9_0(System.Single val)
    // Offset: 0xF73720
    void $PlayOutroMusicSampleCoroutine$b__9_0(float val);
    // private System.Void <PlayOutroMusicSampleCoroutine>b__9_1()
    // Offset: 0xF7373C
    void $PlayOutroMusicSampleCoroutine$b__9_1();
    // public System.Void .ctor()
    // Offset: 0xF73718
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerLocalPlayerOutroAudio* New_ctor();
  }; // MultiplayerLocalPlayerOutroAudio
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalPlayerOutroAudio*, "", "MultiplayerLocalPlayerOutroAudio");
#pragma pack(pop)