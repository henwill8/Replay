// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: UnityEngine.PlayerLoop.Update
#include "UnityEngine/PlayerLoop/Update.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine.PlayerLoop
namespace UnityEngine::PlayerLoop {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.PlayerLoop.Update/DirectorUpdate
  // [] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: CC058C
  struct Update::DirectorUpdate/*, public System::ValueType*/ {
    public:
    // Creating value type constructor for type: DirectorUpdate
    constexpr DirectorUpdate() noexcept {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // UnityEngine.PlayerLoop.Update/DirectorUpdate
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::Update::DirectorUpdate, "UnityEngine.PlayerLoop", "Update/DirectorUpdate");
