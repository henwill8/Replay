// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NamedPresetsSO
#include "GlobalNamespace/NamedPresetsSO.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NamedPreset
  class NamedPreset;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LanguageSettingsPresetsSO
  class LanguageSettingsPresetsSO : public GlobalNamespace::NamedPresetsSO {
    public:
    // Nested type: GlobalNamespace::LanguageSettingsPresetsSO::Preset
    class Preset;
    // private LanguageSettingsPresetsSO/Preset[] _presets
    // Offset: 0x18
    ::Array<GlobalNamespace::LanguageSettingsPresetsSO::Preset*>* presets;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public LanguageSettingsPresetsSO/Preset[] get_presets()
    // Offset: 0xF1CF94
    ::Array<GlobalNamespace::LanguageSettingsPresetsSO::Preset*>* get_presets();
    // public override NamedPreset[] get_namedPresets()
    // Offset: 0xF1CF9C
    // Implemented from: NamedPresetsSO
    // Base method: NamedPreset[] NamedPresetsSO::get_namedPresets()
    ::Array<GlobalNamespace::NamedPreset*>* get_namedPresets();
    // public System.Void .ctor()
    // Offset: 0xF1CFA4
    // Implemented from: NamedPresetsSO
    // Base method: System.Void NamedPresetsSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LanguageSettingsPresetsSO* New_ctor();
  }; // LanguageSettingsPresetsSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LanguageSettingsPresetsSO*, "", "LanguageSettingsPresetsSO");
#pragma pack(pop)
