// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: ScriptPlayable`1<T>
  template<typename T>
  struct ScriptPlayable_1;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.PrefabControlPlayable
  class PrefabControlPlayable : public UnityEngine::Playables::PlayableBehaviour {
    public:
    // private UnityEngine.GameObject m_Instance
    // Offset: 0x10
    UnityEngine::GameObject* m_Instance;
    // Creating conversion operator: operator UnityEngine::GameObject*
    constexpr operator UnityEngine::GameObject*() const noexcept {
      return m_Instance;
    }
    // static public UnityEngine.Playables.ScriptPlayable`1<UnityEngine.Timeline.PrefabControlPlayable> Create(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject prefabGameObject, UnityEngine.Transform parentTransform)
    // Offset: 0x14178F4
    static UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::PrefabControlPlayable*> Create(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* prefabGameObject, UnityEngine::Transform* parentTransform);
    // public UnityEngine.GameObject get_prefabInstance()
    // Offset: 0x141F4DC
    UnityEngine::GameObject* get_prefabInstance();
    // public UnityEngine.GameObject Initialize(UnityEngine.GameObject prefabGameObject, UnityEngine.Transform parentTransform)
    // Offset: 0x141F244
    UnityEngine::GameObject* Initialize(UnityEngine::GameObject* prefabGameObject, UnityEngine::Transform* parentTransform);
    // static private System.Void SetHideFlagsRecursive(UnityEngine.GameObject gameObject)
    // Offset: 0x141F4E4
    static void SetHideFlagsRecursive(UnityEngine::GameObject* gameObject);
    // public override System.Void OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    // Offset: 0x141F7B0
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    void OnPlayableDestroy(UnityEngine::Playables::Playable playable);
    // public override System.Void OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x141F89C
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPlay(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public override System.Void OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x141F934
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPause(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public System.Void .ctor()
    // Offset: 0x141F9EC
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    static PrefabControlPlayable* New_ctor();
  }; // UnityEngine.Timeline.PrefabControlPlayable
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::PrefabControlPlayable*, "UnityEngine.Timeline", "PrefabControlPlayable");
#pragma pack(pop)