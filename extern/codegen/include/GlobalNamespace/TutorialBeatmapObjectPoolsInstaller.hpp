// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TutorialNoteController
  class TutorialNoteController;
  // Forward declaring type: BombNoteController
  class BombNoteController;
  // Forward declaring type: ObstacleController
  class ObstacleController;
  // Forward declaring type: NoteLineConnectionController
  class NoteLineConnectionController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: TutorialBeatmapObjectPoolsInstaller
  // [] Offset: FFFFFFFF
  class TutorialBeatmapObjectPoolsInstaller : public Zenject::MonoInstaller {
    public:
    // private TutorialNoteController _basicNotePrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::TutorialNoteController* basicNotePrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TutorialNoteController*) == 0x8);
    // private BombNoteController _bombNotePrefab
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BombNoteController* bombNotePrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BombNoteController*) == 0x8);
    // private ObstacleController _obstaclePrefab
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ObstacleController* obstaclePrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ObstacleController*) == 0x8);
    // private NoteLineConnectionController _noteLineConnectionControllerPrefab
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::NoteLineConnectionController* noteLineConnectionControllerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteLineConnectionController*) == 0x8);
    // Creating value type constructor for type: TutorialBeatmapObjectPoolsInstaller
    TutorialBeatmapObjectPoolsInstaller(GlobalNamespace::TutorialNoteController* basicNotePrefab_ = {}, GlobalNamespace::BombNoteController* bombNotePrefab_ = {}, GlobalNamespace::ObstacleController* obstaclePrefab_ = {}, GlobalNamespace::NoteLineConnectionController* noteLineConnectionControllerPrefab_ = {}) noexcept : basicNotePrefab{basicNotePrefab_}, bombNotePrefab{bombNotePrefab_}, obstaclePrefab{obstaclePrefab_}, noteLineConnectionControllerPrefab{noteLineConnectionControllerPrefab_} {}
    // public override System.Void InstallBindings()
    // Offset: 0xF49524
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0xF49664
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialBeatmapObjectPoolsInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialBeatmapObjectPoolsInstaller*, creationType>()));
    }
  }; // TutorialBeatmapObjectPoolsInstaller
  #pragma pack(pop)
  static check_size<sizeof(TutorialBeatmapObjectPoolsInstaller), 56 + sizeof(GlobalNamespace::NoteLineConnectionController*)> __GlobalNamespace_TutorialBeatmapObjectPoolsInstallerSizeCheck;
  static_assert(sizeof(TutorialBeatmapObjectPoolsInstaller) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialBeatmapObjectPoolsInstaller*, "", "TutorialBeatmapObjectPoolsInstaller");
