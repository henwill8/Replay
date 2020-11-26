// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TutorialSongController
#include "GlobalNamespace/TutorialSongController.hpp"
// Including type: TutorialSongController/TutorialObjectSpawnData
#include "GlobalNamespace/TutorialSongController_TutorialObjectSpawnData.hpp"
// Including type: NoteLineLayer
#include "GlobalNamespace/NoteLineLayer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TutorialSongController/TutorialJumpingNoteSpawnData
  class TutorialSongController::TutorialJumpingNoteSpawnData : public GlobalNamespace::TutorialSongController::TutorialObjectSpawnData {
    public:
    // public readonly NoteLineLayer noteLineLayer
    // Offset: 0x24
    GlobalNamespace::NoteLineLayer noteLineLayer;
    // Creating conversion operator: operator GlobalNamespace::NoteLineLayer
    constexpr operator GlobalNamespace::NoteLineLayer() const noexcept {
      return noteLineLayer;
    }
    // protected System.Void .ctor(Signal signal, System.Int32 firstTimeBeatOffset, System.Int32 beatOffset, System.Int32 lineIndex, NoteLineLayer noteLineLayer)
    // Offset: 0xFF3E48
    static TutorialSongController::TutorialJumpingNoteSpawnData* New_ctor(GlobalNamespace::Signal* signal, int firstTimeBeatOffset, int beatOffset, int lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer);
  }; // TutorialSongController/TutorialJumpingNoteSpawnData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialSongController::TutorialJumpingNoteSpawnData*, "", "TutorialSongController/TutorialJumpingNoteSpawnData");
#pragma pack(pop)
