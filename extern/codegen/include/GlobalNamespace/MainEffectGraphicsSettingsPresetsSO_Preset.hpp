// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MainEffectGraphicsSettingsPresetsSO
#include "GlobalNamespace/MainEffectGraphicsSettingsPresetsSO.hpp"
// Including type: NamedPreset
#include "GlobalNamespace/NamedPreset.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainEffectSO
  class MainEffectSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MainEffectGraphicsSettingsPresetsSO/Preset
  class MainEffectGraphicsSettingsPresetsSO::Preset : public GlobalNamespace::NamedPreset {
    public:
    // public MainEffectSO mainEffect
    // Offset: 0x18
    GlobalNamespace::MainEffectSO* mainEffect;
    // Deleting conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept = delete;
    // public System.Void .ctor()
    // Offset: 0x1A6C198
    // Implemented from: NamedPreset
    // Base method: System.Void NamedPreset::.ctor()
    // Base method: System.Void Object::.ctor()
    static MainEffectGraphicsSettingsPresetsSO::Preset* New_ctor();
  }; // MainEffectGraphicsSettingsPresetsSO/Preset
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::Preset*, "", "MainEffectGraphicsSettingsPresetsSO/Preset");
#pragma pack(pop)