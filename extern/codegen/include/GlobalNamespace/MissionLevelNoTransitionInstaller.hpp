// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.NoTransitionInstaller
#include "Zenject/NoTransitionInstaller.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: ColorSchemeSO
  class ColorSchemeSO;
  // Forward declaring type: MissionObjective
  class MissionObjective;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
  // Forward declaring type: MissionLevelScenesTransitionSetupDataSO
  class MissionLevelScenesTransitionSetupDataSO;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: MissionLevelNoTransitionInstaller
  // [] Offset: FFFFFFFF
  class MissionLevelNoTransitionInstaller : public Zenject::NoTransitionInstaller {
    public:
    // private BeatmapLevelSO _beatmapLevel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapLevelSO* beatmapLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelSO*) == 0x8);
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private BeatmapDifficulty _beatmapDifficulty
    // Size: 0x4
    // Offset: 0x28
    GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Padding between fields: beatmapDifficulty and: colorScheme
    char __padding2[0x4] = {};
    // private ColorSchemeSO _colorScheme
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ColorSchemeSO* colorScheme;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemeSO*) == 0x8);
    // private MissionObjective[] _missionObjectives
    // Size: 0x8
    // Offset: 0x38
    ::Array<GlobalNamespace::MissionObjective*>* missionObjectives;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MissionObjective*>*) == 0x8);
    // private GameplayModifiers _gameplayModifiers
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers*) == 0x8);
    // private PlayerSpecificSettings _playerSpecificSettings
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSpecificSettings*) == 0x8);
    // private System.String _backButtonText
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* backButtonText;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [SpaceAttribute] Offset: 0xD450DC
    // private MissionLevelScenesTransitionSetupDataSO _scenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* scenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*) == 0x8);
    // Creating value type constructor for type: MissionLevelNoTransitionInstaller
    MissionLevelNoTransitionInstaller(GlobalNamespace::BeatmapLevelSO* beatmapLevel_ = {}, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic_ = {}, GlobalNamespace::BeatmapDifficulty beatmapDifficulty_ = {}, GlobalNamespace::ColorSchemeSO* colorScheme_ = {}, ::Array<GlobalNamespace::MissionObjective*>* missionObjectives_ = {}, GlobalNamespace::GameplayModifiers* gameplayModifiers_ = {}, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings_ = {}, ::Il2CppString* backButtonText_ = {}, GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* scenesTransitionSetupData_ = {}) noexcept : beatmapLevel{beatmapLevel_}, beatmapCharacteristic{beatmapCharacteristic_}, beatmapDifficulty{beatmapDifficulty_}, colorScheme{colorScheme_}, missionObjectives{missionObjectives_}, gameplayModifiers{gameplayModifiers_}, playerSpecificSettings{playerSpecificSettings_}, backButtonText{backButtonText_}, scenesTransitionSetupData{scenesTransitionSetupData_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public override System.Void InstallBindings(Zenject.DiContainer container)
    // Offset: 0x1097D7C
    // Implemented from: Zenject.NoTransitionInstaller
    // Base method: System.Void NoTransitionInstaller::InstallBindings(Zenject.DiContainer container)
    void InstallBindings(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0x109837C
    // Implemented from: Zenject.NoTransitionInstaller
    // Base method: System.Void NoTransitionInstaller::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionLevelNoTransitionInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionLevelNoTransitionInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionLevelNoTransitionInstaller*, creationType>()));
    }
  }; // MissionLevelNoTransitionInstaller
  #pragma pack(pop)
  static check_size<sizeof(MissionLevelNoTransitionInstaller), 88 + sizeof(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*)> __GlobalNamespace_MissionLevelNoTransitionInstallerSizeCheck;
  static_assert(sizeof(MissionLevelNoTransitionInstaller) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelNoTransitionInstaller*, "", "MissionLevelNoTransitionInstaller");
