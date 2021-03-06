// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NamedPresetsSO
#include "GlobalNamespace/NamedPresetsSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: LanguageSettingsPresetsSO
  // [] Offset: FFFFFFFF
  class LanguageSettingsPresetsSO : public GlobalNamespace::NamedPresetsSO {
    public:
    // Nested type: GlobalNamespace::LanguageSettingsPresetsSO::Preset
    class Preset;
    // private LanguageSettingsPresetsSO/Preset[] _presets
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::LanguageSettingsPresetsSO::Preset*>* presets;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::LanguageSettingsPresetsSO::Preset*>*) == 0x8);
    // Creating value type constructor for type: LanguageSettingsPresetsSO
    LanguageSettingsPresetsSO(::Array<GlobalNamespace::LanguageSettingsPresetsSO::Preset*>* presets_ = {}) noexcept : presets{presets_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public LanguageSettingsPresetsSO/Preset[] get_presets()
    // Offset: 0xFD4000
    ::Array<GlobalNamespace::LanguageSettingsPresetsSO::Preset*>* get_presets();
    // public override NamedPreset[] get_namedPresets()
    // Offset: 0xFD4008
    // Implemented from: NamedPresetsSO
    // Base method: NamedPreset[] NamedPresetsSO::get_namedPresets()
    ::Array<GlobalNamespace::NamedPreset*>* get_namedPresets();
    // public System.Void .ctor()
    // Offset: 0xFD4010
    // Implemented from: NamedPresetsSO
    // Base method: System.Void NamedPresetsSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LanguageSettingsPresetsSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LanguageSettingsPresetsSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LanguageSettingsPresetsSO*, creationType>()));
    }
  }; // LanguageSettingsPresetsSO
  #pragma pack(pop)
  static check_size<sizeof(LanguageSettingsPresetsSO), 24 + sizeof(::Array<GlobalNamespace::LanguageSettingsPresetsSO::Preset*>*)> __GlobalNamespace_LanguageSettingsPresetsSOSizeCheck;
  static_assert(sizeof(LanguageSettingsPresetsSO) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LanguageSettingsPresetsSO*, "", "LanguageSettingsPresetsSO");
