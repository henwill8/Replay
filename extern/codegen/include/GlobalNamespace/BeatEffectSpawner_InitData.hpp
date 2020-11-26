// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatEffectSpawner
#include "GlobalNamespace/BeatEffectSpawner.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatEffectSpawner/InitData
  class BeatEffectSpawner::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Boolean hideNoteSpawnEffect
    // Offset: 0x10
    bool hideNoteSpawnEffect;
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return hideNoteSpawnEffect;
    }
    // public System.Void .ctor(System.Boolean hideNoteSpawnEffect)
    // Offset: 0x1A780F4
    static BeatEffectSpawner::InitData* New_ctor(bool hideNoteSpawnEffect);
  }; // BeatEffectSpawner/InitData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatEffectSpawner::InitData*, "", "BeatEffectSpawner/InitData");
#pragma pack(pop)
