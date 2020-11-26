// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Playables.IPlayableOutput
#include "UnityEngine/Playables/IPlayableOutput.hpp"
// Including type: UnityEngine.Playables.PlayableOutputHandle
#include "UnityEngine/Playables/PlayableOutputHandle.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: PlayableOutput
  struct PlayableOutput;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Autogenerated type: UnityEngine.Playables.ScriptPlayableOutput
  struct ScriptPlayableOutput : public System::ValueType/*, public UnityEngine::Playables::IPlayableOutput*/ {
    public:
    // private UnityEngine.Playables.PlayableOutputHandle m_Handle
    // Offset: 0x0
    UnityEngine::Playables::PlayableOutputHandle m_Handle;
    // Creating value type constructor for type: ScriptPlayableOutput
    constexpr ScriptPlayableOutput(UnityEngine::Playables::PlayableOutputHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator UnityEngine::Playables::IPlayableOutput
    operator UnityEngine::Playables::IPlayableOutput() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::IPlayableOutput*>(this);
    }
    // Creating conversion operator: operator UnityEngine::Playables::PlayableOutputHandle
    constexpr operator UnityEngine::Playables::PlayableOutputHandle() const noexcept {
      return m_Handle;
    }
    // static public UnityEngine.Playables.ScriptPlayableOutput Create(UnityEngine.Playables.PlayableGraph graph, System.String name)
    // Offset: 0x1734774
    static UnityEngine::Playables::ScriptPlayableOutput Create(UnityEngine::Playables::PlayableGraph graph, ::Il2CppString* name);
    // System.Void .ctor(UnityEngine.Playables.PlayableOutputHandle handle)
    // Offset: 0xCA7480
    // ABORTED: conflicts with another method.  ScriptPlayableOutput(UnityEngine::Playables::PlayableOutputHandle handle);
    // static public UnityEngine.Playables.ScriptPlayableOutput get_Null()
    // Offset: 0x17347F4
    static UnityEngine::Playables::ScriptPlayableOutput get_Null();
    // public UnityEngine.Playables.PlayableOutputHandle GetHandle()
    // Offset: 0xCA7488
    // Implemented from: UnityEngine.Playables.IPlayableOutput
    // Base method: UnityEngine.Playables.PlayableOutputHandle IPlayableOutput::GetHandle()
    UnityEngine::Playables::PlayableOutputHandle GetHandle();
  }; // UnityEngine.Playables.ScriptPlayableOutput
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::ScriptPlayableOutput, "UnityEngine.Playables", "ScriptPlayableOutput");
#pragma pack(pop)
