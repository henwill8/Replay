// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableBinding
  struct PlayableBinding;
  // Forward declaring type: PlayableOutput
  struct PlayableOutput;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine.Audio
namespace UnityEngine::Audio {
  // Autogenerated type: UnityEngine.Audio.AudioPlayableBinding
  class AudioPlayableBinding : public ::Il2CppObject {
    public:
    // static public UnityEngine.Playables.PlayableBinding Create(System.String name, UnityEngine.Object key)
    // Offset: 0x19EAE64
    static UnityEngine::Playables::PlayableBinding Create(::Il2CppString* name, UnityEngine::Object* key);
    // static private UnityEngine.Playables.PlayableOutput CreateAudioOutput(UnityEngine.Playables.PlayableGraph graph, System.String name)
    // Offset: 0x19EAF84
    static UnityEngine::Playables::PlayableOutput CreateAudioOutput(UnityEngine::Playables::PlayableGraph graph, ::Il2CppString* name);
  }; // UnityEngine.Audio.AudioPlayableBinding
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Audio::AudioPlayableBinding*, "UnityEngine.Audio", "AudioPlayableBinding");
#pragma pack(pop)
