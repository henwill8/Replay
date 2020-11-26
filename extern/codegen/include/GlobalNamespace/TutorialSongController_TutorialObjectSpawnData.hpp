// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TutorialSongController
#include "GlobalNamespace/TutorialSongController.hpp"
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
  // Autogenerated type: TutorialSongController/TutorialObjectSpawnData
  class TutorialSongController::TutorialObjectSpawnData : public ::Il2CppObject {
    public:
    // public readonly Signal signal
    // Offset: 0x10
    GlobalNamespace::Signal* signal;
    // public readonly System.Int32 beatOffset
    // Offset: 0x18
    int beatOffset;
    // public readonly System.Int32 firstTimeBeatOffset
    // Offset: 0x1C
    int firstTimeBeatOffset;
    // public readonly System.Int32 lineIndex
    // Offset: 0x20
    int lineIndex;
    // protected System.Void .ctor(Signal signal, System.Int32 firstTimeBeatOffset, System.Int32 beatOffset, System.Int32 lineIndex)
    // Offset: 0xFF3EA8
    static TutorialSongController::TutorialObjectSpawnData* New_ctor(GlobalNamespace::Signal* signal, int firstTimeBeatOffset, int beatOffset, int lineIndex);
  }; // TutorialSongController/TutorialObjectSpawnData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialSongController::TutorialObjectSpawnData*, "", "TutorialSongController/TutorialObjectSpawnData");
#pragma pack(pop)
