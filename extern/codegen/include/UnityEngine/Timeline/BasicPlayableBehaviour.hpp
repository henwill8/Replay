// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.Playables.IPlayableAsset
#include "UnityEngine/Playables/IPlayableAsset.hpp"
// Including type: UnityEngine.Playables.IPlayableBehaviour
#include "UnityEngine/Playables/IPlayableBehaviour.hpp"
// Including type: UnityEngine.Playables.PlayableBinding
#include "UnityEngine/Playables/PlayableBinding.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.BasicPlayableBehaviour
  // [] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: CFEF3C
  class BasicPlayableBehaviour : public UnityEngine::ScriptableObject/*, public UnityEngine::Playables::IPlayableAsset, public UnityEngine::Playables::IPlayableBehaviour*/ {
    public:
    // Creating value type constructor for type: BasicPlayableBehaviour
    BasicPlayableBehaviour() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::Playables::IPlayableAsset
    operator UnityEngine::Playables::IPlayableAsset() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::IPlayableAsset*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::Playables::IPlayableBehaviour
    operator UnityEngine::Playables::IPlayableBehaviour() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::IPlayableBehaviour*>(this);
    }
    // public System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> get_outputs()
    // Offset: 0x172C9B8
    System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>* get_outputs();
    // public System.Double get_duration()
    // Offset: 0x172C950
    // Implemented from: UnityEngine.Playables.IPlayableAsset
    // Base method: System.Double IPlayableAsset::get_duration()
    double get_duration();
    // public System.Void OnGraphStart(UnityEngine.Playables.Playable playable)
    // Offset: 0x172CA20
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::OnGraphStart(UnityEngine.Playables.Playable playable)
    void OnGraphStart(UnityEngine::Playables::Playable playable);
    // public System.Void OnGraphStop(UnityEngine.Playables.Playable playable)
    // Offset: 0x172CA24
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::OnGraphStop(UnityEngine.Playables.Playable playable)
    void OnGraphStop(UnityEngine::Playables::Playable playable);
    // public System.Void OnPlayableCreate(UnityEngine.Playables.Playable playable)
    // Offset: 0x172CA28
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::OnPlayableCreate(UnityEngine.Playables.Playable playable)
    void OnPlayableCreate(UnityEngine::Playables::Playable playable);
    // public System.Void OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    // Offset: 0x172CA2C
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    void OnPlayableDestroy(UnityEngine::Playables::Playable playable);
    // public System.Void OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x172CA30
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPlay(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public System.Void OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x172CA34
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPause(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public System.Void PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x172CA38
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void PrepareFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0x172CA3C
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    void ProcessFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
    // public UnityEngine.Playables.Playable CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject owner)
    // Offset: 0x172CA40
    // Implemented from: UnityEngine.Playables.IPlayableAsset
    // Base method: UnityEngine.Playables.Playable IPlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject owner)
    UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* owner);
    // public System.Void .ctor()
    // Offset: 0x172CADC
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BasicPlayableBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::BasicPlayableBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BasicPlayableBehaviour*, creationType>()));
    }
  }; // UnityEngine.Timeline.BasicPlayableBehaviour
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::BasicPlayableBehaviour*, "UnityEngine.Timeline", "BasicPlayableBehaviour");
