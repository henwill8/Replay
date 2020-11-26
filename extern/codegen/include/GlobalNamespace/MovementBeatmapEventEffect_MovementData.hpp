// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MovementBeatmapEventEffect
#include "GlobalNamespace/MovementBeatmapEventEffect.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MovementBeatmapEventEffect/MovementData
  class MovementBeatmapEventEffect::MovementData : public ::Il2CppObject {
    public:
    // private UnityEngine.Vector3 _localPositionOffset
    // Offset: 0x10
    UnityEngine::Vector3 localPositionOffset;
    // Creating conversion operator: operator UnityEngine::Vector3
    constexpr operator UnityEngine::Vector3() const noexcept {
      return localPositionOffset;
    }
    // public UnityEngine.Vector3 get_localPositionOffset()
    // Offset: 0xFA5CF4
    UnityEngine::Vector3 get_localPositionOffset();
    // public System.Void .ctor()
    // Offset: 0xFA5D00
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MovementBeatmapEventEffect::MovementData* New_ctor();
  }; // MovementBeatmapEventEffect/MovementData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MovementBeatmapEventEffect::MovementData*, "", "MovementBeatmapEventEffect/MovementData");
#pragma pack(pop)
