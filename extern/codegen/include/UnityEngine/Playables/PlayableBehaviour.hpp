// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.IPlayableBehaviour
#include "UnityEngine/Playables/IPlayableBehaviour.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Playables.PlayableBehaviour
  // [] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: CC0F6C
  class PlayableBehaviour : public ::Il2CppObject/*, public UnityEngine::Playables::IPlayableBehaviour, public System::ICloneable*/ {
    public:
    // Creating value type constructor for type: PlayableBehaviour
    PlayableBehaviour() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::Playables::IPlayableBehaviour
    operator UnityEngine::Playables::IPlayableBehaviour() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::IPlayableBehaviour*>(this);
    }
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x1B37FBC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayableBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::PlayableBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayableBehaviour*, creationType>()));
    }
    // public System.Void OnGraphStart(UnityEngine.Playables.Playable playable)
    // Offset: 0x1B37FC4
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::OnGraphStart(UnityEngine.Playables.Playable playable)
    void OnGraphStart(UnityEngine::Playables::Playable playable);
    // public System.Void OnGraphStop(UnityEngine.Playables.Playable playable)
    // Offset: 0x1B37FC8
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::OnGraphStop(UnityEngine.Playables.Playable playable)
    void OnGraphStop(UnityEngine::Playables::Playable playable);
    // public System.Void OnPlayableCreate(UnityEngine.Playables.Playable playable)
    // Offset: 0x1B37FCC
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::OnPlayableCreate(UnityEngine.Playables.Playable playable)
    void OnPlayableCreate(UnityEngine::Playables::Playable playable);
    // public System.Void OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    // Offset: 0x1B37FD0
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    void OnPlayableDestroy(UnityEngine::Playables::Playable playable);
    // public System.Void OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x1B37FD4
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPlay(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public System.Void OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x1B37FD8
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPause(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public System.Void PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x1B37FDC
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void PrepareFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0x1B37FE0
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    void ProcessFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
    // public System.Object Clone()
    // Offset: 0x1B37FE4
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* Clone();
    // Creating proxy method: System_ICloneable_Clone
    // Maps to method: Clone
    ::Il2CppObject* System_ICloneable_Clone();
  }; // UnityEngine.Playables.PlayableBehaviour
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableBehaviour*, "UnityEngine.Playables", "PlayableBehaviour");
