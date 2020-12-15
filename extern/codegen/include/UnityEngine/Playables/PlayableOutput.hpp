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
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Playables.PlayableOutputHandle
#include "UnityEngine/Playables/PlayableOutputHandle.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Autogenerated type: UnityEngine.Playables.PlayableOutput
  struct PlayableOutput : public System::ValueType/*, public UnityEngine::Playables::IPlayableOutput, public System::IEquatable_1<UnityEngine::Playables::PlayableOutput>*/ {
    public:
    // private UnityEngine.Playables.PlayableOutputHandle m_Handle
    // Offset: 0x0
    UnityEngine::Playables::PlayableOutputHandle m_Handle;
    // Creating value type constructor for type: PlayableOutput
    constexpr PlayableOutput(UnityEngine::Playables::PlayableOutputHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator UnityEngine::Playables::IPlayableOutput
    operator UnityEngine::Playables::IPlayableOutput() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::IPlayableOutput*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Playables::PlayableOutput>
    operator System::IEquatable_1<UnityEngine::Playables::PlayableOutput>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Playables::PlayableOutput>*>(this);
    }
    // Creating conversion operator: operator UnityEngine::Playables::PlayableOutputHandle
    constexpr operator UnityEngine::Playables::PlayableOutputHandle() const noexcept {
      return m_Handle;
    }
    // Get static field: static private readonly UnityEngine.Playables.PlayableOutput m_NullPlayableOutput
    static UnityEngine::Playables::PlayableOutput _get_m_NullPlayableOutput();
    // Set static field: static private readonly UnityEngine.Playables.PlayableOutput m_NullPlayableOutput
    static void _set_m_NullPlayableOutput(UnityEngine::Playables::PlayableOutput value);
    // static public UnityEngine.Playables.PlayableOutput get_Null()
    // Offset: 0x17318FC
    static UnityEngine::Playables::PlayableOutput get_Null();
    // System.Void .ctor(UnityEngine.Playables.PlayableOutputHandle handle)
    // Offset: 0xCA73C8
    // ABORTED: conflicts with another method.  PlayableOutput(UnityEngine::Playables::PlayableOutputHandle handle);
    // public System.Boolean IsPlayableOutputOfType()
    // Offset: 0xFFFFFFFF
    template<class T>
    bool IsPlayableOutputOfType() {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayableOutput, std::remove_pointer_t<T>> && is_value_type_v<T>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<bool>(*this, "IsPlayableOutputOfType", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
    }
    // static private System.Void .cctor()
    // Offset: 0x1733AF4
    static void _cctor();
    // public UnityEngine.Playables.PlayableOutputHandle GetHandle()
    // Offset: 0xCA73D0
    // Implemented from: UnityEngine.Playables.IPlayableOutput
    // Base method: UnityEngine.Playables.PlayableOutputHandle IPlayableOutput::GetHandle()
    UnityEngine::Playables::PlayableOutputHandle GetHandle();
    // public System.Boolean Equals(UnityEngine.Playables.PlayableOutput other)
    // Offset: 0xCA73DC
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.Playables.PlayableOutput other)
    bool Equals(UnityEngine::Playables::PlayableOutput other);
  }; // UnityEngine.Playables.PlayableOutput
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableOutput, "UnityEngine.Playables", "PlayableOutput");
#pragma pack(pop)