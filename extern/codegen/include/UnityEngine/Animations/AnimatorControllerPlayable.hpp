// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Playables.IPlayable
#include "UnityEngine/Playables/IPlayable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Playables.PlayableHandle
#include "UnityEngine/Playables/PlayableHandle.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.AnimatorControllerPlayable
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: CD4C2C
  // [NativeHeaderAttribute] Offset: CD4C2C
  // [NativeHeaderAttribute] Offset: CD4C2C
  // [NativeHeaderAttribute] Offset: CD4C2C
  // [RequiredByNativeCodeAttribute] Offset: CD4C2C
  // [StaticAccessorAttribute] Offset: CD4C2C
  // [NativeHeaderAttribute] Offset: CD4C2C
  struct AnimatorControllerPlayable/*, public System::ValueType, public UnityEngine::Playables::IPlayable, public System::IEquatable_1<UnityEngine::Animations::AnimatorControllerPlayable>*/ {
    public:
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Playables::PlayableHandle m_Handle;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableHandle) == 0xC);
    // Creating value type constructor for type: AnimatorControllerPlayable
    constexpr AnimatorControllerPlayable(UnityEngine::Playables::PlayableHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::Playables::IPlayable
    operator UnityEngine::Playables::IPlayable() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::IPlayable*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Animations::AnimatorControllerPlayable>
    operator System::IEquatable_1<UnityEngine::Animations::AnimatorControllerPlayable>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Animations::AnimatorControllerPlayable>*>(this);
    }
    // Creating conversion operator: operator UnityEngine::Playables::PlayableHandle
    constexpr operator UnityEngine::Playables::PlayableHandle() const noexcept {
      return m_Handle;
    }
    // Get static field: static private readonly UnityEngine.Animations.AnimatorControllerPlayable m_NullPlayable
    static UnityEngine::Animations::AnimatorControllerPlayable _get_m_NullPlayable();
    // Set static field: static private readonly UnityEngine.Animations.AnimatorControllerPlayable m_NullPlayable
    static void _set_m_NullPlayable(UnityEngine::Animations::AnimatorControllerPlayable value);
    // System.Void .ctor(UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0xE2F518
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  AnimatorControllerPlayable(UnityEngine::Playables::PlayableHandle handle)
    // public System.Void SetHandle(UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0xE2F52C
    void SetHandle(UnityEngine::Playables::PlayableHandle handle);
    // static private System.Void .cctor()
    // Offset: 0x2299EA4
    static void _cctor();
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0xE2F520
    // Implemented from: UnityEngine.Playables.IPlayable
    // Base method: UnityEngine.Playables.PlayableHandle IPlayable::GetHandle()
    UnityEngine::Playables::PlayableHandle GetHandle();
    // public System.Boolean Equals(UnityEngine.Animations.AnimatorControllerPlayable other)
    // Offset: 0xE2F534
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.Animations.AnimatorControllerPlayable other)
    bool Equals(UnityEngine::Animations::AnimatorControllerPlayable other);
  }; // UnityEngine.Animations.AnimatorControllerPlayable
  #pragma pack(pop)
  static check_size<sizeof(AnimatorControllerPlayable), 0 + sizeof(UnityEngine::Playables::PlayableHandle)> __UnityEngine_Animations_AnimatorControllerPlayableSizeCheck;
  static_assert(sizeof(AnimatorControllerPlayable) == 0xC);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::AnimatorControllerPlayable, "UnityEngine.Animations", "AnimatorControllerPlayable");
