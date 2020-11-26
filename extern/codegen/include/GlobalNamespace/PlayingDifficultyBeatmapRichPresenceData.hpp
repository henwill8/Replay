// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IRichPresenceData
#include "GlobalNamespace/IRichPresenceData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayingDifficultyBeatmapRichPresenceData
  class PlayingDifficultyBeatmapRichPresenceData : public ::Il2CppObject/*, public GlobalNamespace::IRichPresenceData*/ {
    public:
    // private System.String <apiName>k__BackingField
    // Offset: 0x10
    ::Il2CppString* apiName;
    // private System.String <localizedDescription>k__BackingField
    // Offset: 0x18
    ::Il2CppString* localizedDescription;
    // Creating interface conversion operator: operator GlobalNamespace::IRichPresenceData
    operator GlobalNamespace::IRichPresenceData() noexcept {
      return *reinterpret_cast<GlobalNamespace::IRichPresenceData*>(this);
    }
    // private System.Void set_apiName(System.String value)
    // Offset: 0xF2AF9C
    void set_apiName(::Il2CppString* value);
    // private System.Void set_localizedDescription(System.String value)
    // Offset: 0xF2AFAC
    void set_localizedDescription(::Il2CppString* value);
    // public System.Void .ctor(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0xF2AFB4
    static PlayingDifficultyBeatmapRichPresenceData* New_ctor(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // private System.String GetDestinationLocalizedString(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0xF2B00C
    ::Il2CppString* GetDestinationLocalizedString(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.String get_apiName()
    // Offset: 0xF2AF94
    // Implemented from: IRichPresenceData
    // Base method: System.String IRichPresenceData::get_apiName()
    ::Il2CppString* get_apiName();
    // public System.String get_localizedDescription()
    // Offset: 0xF2AFA4
    // Implemented from: IRichPresenceData
    // Base method: System.String IRichPresenceData::get_localizedDescription()
    ::Il2CppString* get_localizedDescription();
  }; // PlayingDifficultyBeatmapRichPresenceData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData*, "", "PlayingDifficultyBeatmapRichPresenceData");
#pragma pack(pop)
