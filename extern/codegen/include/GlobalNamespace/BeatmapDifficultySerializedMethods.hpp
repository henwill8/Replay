// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapDifficultySerializedMethods
  class BeatmapDifficultySerializedMethods : public ::Il2CppObject {
    public:
    // static field const value: static private System.String kDifficultyEasySerializedName
    static constexpr const char* kDifficultyEasySerializedName = "Easy";
    // Get static field: static private System.String kDifficultyEasySerializedName
    static ::Il2CppString* _get_kDifficultyEasySerializedName();
    // Set static field: static private System.String kDifficultyEasySerializedName
    static void _set_kDifficultyEasySerializedName(::Il2CppString* value);
    // static field const value: static private System.String kDifficultyNormalSerializedName
    static constexpr const char* kDifficultyNormalSerializedName = "Normal";
    // Get static field: static private System.String kDifficultyNormalSerializedName
    static ::Il2CppString* _get_kDifficultyNormalSerializedName();
    // Set static field: static private System.String kDifficultyNormalSerializedName
    static void _set_kDifficultyNormalSerializedName(::Il2CppString* value);
    // static field const value: static private System.String kDifficultyHardSerializedName
    static constexpr const char* kDifficultyHardSerializedName = "Hard";
    // Get static field: static private System.String kDifficultyHardSerializedName
    static ::Il2CppString* _get_kDifficultyHardSerializedName();
    // Set static field: static private System.String kDifficultyHardSerializedName
    static void _set_kDifficultyHardSerializedName(::Il2CppString* value);
    // static field const value: static private System.String kDifficultyExpertSerializedName
    static constexpr const char* kDifficultyExpertSerializedName = "Expert";
    // Get static field: static private System.String kDifficultyExpertSerializedName
    static ::Il2CppString* _get_kDifficultyExpertSerializedName();
    // Set static field: static private System.String kDifficultyExpertSerializedName
    static void _set_kDifficultyExpertSerializedName(::Il2CppString* value);
    // static field const value: static private System.String kDifficultyExpertPlusNameSerializedLegacy
    static constexpr const char* kDifficultyExpertPlusNameSerializedLegacy = "Expert+";
    // Get static field: static private System.String kDifficultyExpertPlusNameSerializedLegacy
    static ::Il2CppString* _get_kDifficultyExpertPlusNameSerializedLegacy();
    // Set static field: static private System.String kDifficultyExpertPlusNameSerializedLegacy
    static void _set_kDifficultyExpertPlusNameSerializedLegacy(::Il2CppString* value);
    // static field const value: static private System.String kDifficultyExpertPlusSerializedName
    static constexpr const char* kDifficultyExpertPlusSerializedName = "ExpertPlus";
    // Get static field: static private System.String kDifficultyExpertPlusSerializedName
    static ::Il2CppString* _get_kDifficultyExpertPlusSerializedName();
    // Set static field: static private System.String kDifficultyExpertPlusSerializedName
    static void _set_kDifficultyExpertPlusSerializedName(::Il2CppString* value);
    // static field const value: static private System.String kDifficultyUnknownSerializedName
    static constexpr const char* kDifficultyUnknownSerializedName = "Unknown";
    // Get static field: static private System.String kDifficultyUnknownSerializedName
    static ::Il2CppString* _get_kDifficultyUnknownSerializedName();
    // Set static field: static private System.String kDifficultyUnknownSerializedName
    static void _set_kDifficultyUnknownSerializedName(::Il2CppString* value);
    // static public System.String SerializedName(BeatmapDifficulty difficulty)
    // Offset: 0x19F59D4
    static ::Il2CppString* SerializedName(GlobalNamespace::BeatmapDifficulty difficulty);
    // static public System.Boolean BeatmapDifficultyFromSerializedName(System.String name, out BeatmapDifficulty difficulty)
    // Offset: 0x19F5A44
    static bool BeatmapDifficultyFromSerializedName(::Il2CppString* name, GlobalNamespace::BeatmapDifficulty& difficulty);
  }; // BeatmapDifficultySerializedMethods
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDifficultySerializedMethods*, "", "BeatmapDifficultySerializedMethods");
#pragma pack(pop)
