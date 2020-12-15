// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.IPlayableBehaviour
#include "UnityEngine/Playables/IPlayableBehaviour.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Autogenerated type: UnityEngine.Playables.PlayableBehaviour
  class PlayableBehaviour : public ::Il2CppObject/*, public UnityEngine::Playables::IPlayableBehaviour, public System::ICloneable*/ {
    public:
    // Creating interface conversion operator: operator UnityEngine::Playables::IPlayableBehaviour
    operator UnityEngine::Playables::IPlayableBehaviour() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::IPlayableBehaviour*>(this);
    }
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x1731588
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlayableBehaviour* New_ctor();
    // public System.Void OnGraphStart(UnityEngine.Playables.Playable playable)
    // Offset: 0x1731590
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::OnGraphStart(UnityEngine.Playables.Playable playable)
    void OnGraphStart(UnityEngine::Playables::Playable playable);
    // public System.Void OnGraphStop(UnityEngine.Playables.Playable playable)
    // Offset: 0x1731594
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::OnGraphStop(UnityEngine.Playables.Playable playable)
    void OnGraphStop(UnityEngine::Playables::Playable playable);
    // public System.Void OnPlayableCreate(UnityEngine.Playables.Playable playable)
    // Offset: 0x1731598
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::OnPlayableCreate(UnityEngine.Playables.Playable playable)
    void OnPlayableCreate(UnityEngine::Playables::Playable playable);
    // public System.Void OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    // Offset: 0x173159C
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    void OnPlayableDestroy(UnityEngine::Playables::Playable playable);
    // public System.Void OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x17315A0
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPlay(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public System.Void OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x17315A4
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPause(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public System.Void PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x17315A8
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void PrepareFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0x17315AC
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    void ProcessFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
    // public System.Object Clone()
    // Offset: 0x17315B0
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* Clone();
    // Creating proxy method: System_ICloneable_Clone
    // Maps to method: Clone
    ::Il2CppObject* System_ICloneable_Clone();
  }; // UnityEngine.Playables.PlayableBehaviour
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableBehaviour*, "UnityEngine.Playables", "PlayableBehaviour");
#pragma pack(pop)