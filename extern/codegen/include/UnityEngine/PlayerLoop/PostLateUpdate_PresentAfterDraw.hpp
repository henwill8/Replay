// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: UnityEngine.PlayerLoop.PostLateUpdate
#include "UnityEngine/PlayerLoop/PostLateUpdate.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine.PlayerLoop
namespace UnityEngine::PlayerLoop {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.PlayerLoop.PostLateUpdate/PresentAfterDraw
  // [] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: CC08A4
  struct PostLateUpdate::PresentAfterDraw/*, public System::ValueType*/ {
    public:
    // Creating value type constructor for type: PresentAfterDraw
    constexpr PresentAfterDraw() noexcept {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // UnityEngine.PlayerLoop.PostLateUpdate/PresentAfterDraw
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::PostLateUpdate::PresentAfterDraw, "UnityEngine.PlayerLoop", "PostLateUpdate/PresentAfterDraw");
