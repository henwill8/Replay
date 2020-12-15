// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapDifficultyMethods
  class BeatmapDifficultyMethods : public ::Il2CppObject {
    public:
    // static public System.String Name(BeatmapDifficulty difficulty)
    // Offset: 0x1A82048
    static ::Il2CppString* Name(GlobalNamespace::BeatmapDifficulty difficulty);
    // static public System.String ShortName(BeatmapDifficulty difficulty)
    // Offset: 0x1A82618
    static ::Il2CppString* ShortName(GlobalNamespace::BeatmapDifficulty difficulty);
    // static public System.Int32 DefaultRating(BeatmapDifficulty difficulty)
    // Offset: 0x1A82680
    static int DefaultRating(GlobalNamespace::BeatmapDifficulty difficulty);
    // static public System.Single NoteJumpMovementSpeed(BeatmapDifficulty difficulty)
    // Offset: 0x1A826A8
    static float NoteJumpMovementSpeed(GlobalNamespace::BeatmapDifficulty difficulty);
  }; // BeatmapDifficultyMethods
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDifficultyMethods*, "", "BeatmapDifficultyMethods");
#pragma pack(pop)