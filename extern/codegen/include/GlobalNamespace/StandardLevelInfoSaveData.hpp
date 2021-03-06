// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelInfoSaveData
  // [] Offset: FFFFFFFF
  class StandardLevelInfoSaveData : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet
    class DifficultyBeatmapSet;
    // Nested type: GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap
    class DifficultyBeatmap;
    // Nested type: GlobalNamespace::StandardLevelInfoSaveData::VersionCheck
    class VersionCheck;
    // private System.String _version
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* version;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _songName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* songName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _songSubName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* songSubName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xD356B8
    // private System.String _songAuthorName
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* songAuthorName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _levelAuthorName
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* levelAuthorName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Single _beatsPerMinute
    // Size: 0x4
    // Offset: 0x38
    float beatsPerMinute;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _songTimeOffset
    // Size: 0x4
    // Offset: 0x3C
    float songTimeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _shuffle
    // Size: 0x4
    // Offset: 0x40
    float shuffle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _shufflePeriod
    // Size: 0x4
    // Offset: 0x44
    float shufflePeriod;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _previewStartTime
    // Size: 0x4
    // Offset: 0x48
    float previewStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _previewDuration
    // Size: 0x4
    // Offset: 0x4C
    float previewDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0xD35774
    // private System.String _songFilename
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* songFilename;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xD357C0
    // private System.String _coverImageFilename
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* coverImageFilename;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _environmentName
    // Size: 0x8
    // Offset: 0x60
    ::Il2CppString* environmentName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _allDirectionsEnvironmentName
    // Size: 0x8
    // Offset: 0x68
    ::Il2CppString* allDirectionsEnvironmentName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private StandardLevelInfoSaveData/DifficultyBeatmapSet[] _difficultyBeatmapSets
    // Size: 0x8
    // Offset: 0x70
    ::Array<GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet*>* difficultyBeatmapSets;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet*>*) == 0x8);
    // Creating value type constructor for type: StandardLevelInfoSaveData
    StandardLevelInfoSaveData(::Il2CppString* version_ = {}, ::Il2CppString* songName_ = {}, ::Il2CppString* songSubName_ = {}, ::Il2CppString* songAuthorName_ = {}, ::Il2CppString* levelAuthorName_ = {}, float beatsPerMinute_ = {}, float songTimeOffset_ = {}, float shuffle_ = {}, float shufflePeriod_ = {}, float previewStartTime_ = {}, float previewDuration_ = {}, ::Il2CppString* songFilename_ = {}, ::Il2CppString* coverImageFilename_ = {}, ::Il2CppString* environmentName_ = {}, ::Il2CppString* allDirectionsEnvironmentName_ = {}, ::Array<GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet*>* difficultyBeatmapSets_ = {}) noexcept : version{version_}, songName{songName_}, songSubName{songSubName_}, songAuthorName{songAuthorName_}, levelAuthorName{levelAuthorName_}, beatsPerMinute{beatsPerMinute_}, songTimeOffset{songTimeOffset_}, shuffle{shuffle_}, shufflePeriod{shufflePeriod_}, previewStartTime{previewStartTime_}, previewDuration{previewDuration_}, songFilename{songFilename_}, coverImageFilename{coverImageFilename_}, environmentName{environmentName_}, allDirectionsEnvironmentName{allDirectionsEnvironmentName_}, difficultyBeatmapSets{difficultyBeatmapSets_} {}
    // static field const value: static private System.String kCurrentVersion
    static constexpr const char* kCurrentVersion = "2.0.0";
    // Get static field: static private System.String kCurrentVersion
    static ::Il2CppString* _get_kCurrentVersion();
    // Set static field: static private System.String kCurrentVersion
    static void _set_kCurrentVersion(::Il2CppString* value);
    // static field const value: static private System.String kDefaultBeatmapCharacteristicName
    static constexpr const char* kDefaultBeatmapCharacteristicName = "Standard";
    // Get static field: static private System.String kDefaultBeatmapCharacteristicName
    static ::Il2CppString* _get_kDefaultBeatmapCharacteristicName();
    // Set static field: static private System.String kDefaultBeatmapCharacteristicName
    static void _set_kDefaultBeatmapCharacteristicName(::Il2CppString* value);
    // public System.String get_version()
    // Offset: 0xF7AD14
    ::Il2CppString* get_version();
    // public System.String get_songName()
    // Offset: 0xF7AD1C
    ::Il2CppString* get_songName();
    // public System.String get_songSubName()
    // Offset: 0xF7AD24
    ::Il2CppString* get_songSubName();
    // public System.String get_songAuthorName()
    // Offset: 0xF7AD2C
    ::Il2CppString* get_songAuthorName();
    // public System.String get_levelAuthorName()
    // Offset: 0xF7AD34
    ::Il2CppString* get_levelAuthorName();
    // public System.Single get_beatsPerMinute()
    // Offset: 0xF7AD3C
    float get_beatsPerMinute();
    // public System.Single get_songTimeOffset()
    // Offset: 0xF7AD44
    float get_songTimeOffset();
    // public System.Single get_shuffle()
    // Offset: 0xF7AD4C
    float get_shuffle();
    // public System.Single get_shufflePeriod()
    // Offset: 0xF7AD54
    float get_shufflePeriod();
    // public System.Single get_previewStartTime()
    // Offset: 0xF7AD5C
    float get_previewStartTime();
    // public System.Single get_previewDuration()
    // Offset: 0xF7AD64
    float get_previewDuration();
    // public System.String get_songFilename()
    // Offset: 0xF7AD6C
    ::Il2CppString* get_songFilename();
    // public System.String get_coverImageFilename()
    // Offset: 0xF7AD74
    ::Il2CppString* get_coverImageFilename();
    // public System.String get_environmentName()
    // Offset: 0xF7AD7C
    ::Il2CppString* get_environmentName();
    // public System.String get_allDirectionsEnvironmentName()
    // Offset: 0xF7AD84
    ::Il2CppString* get_allDirectionsEnvironmentName();
    // public StandardLevelInfoSaveData/DifficultyBeatmapSet[] get_difficultyBeatmapSets()
    // Offset: 0xF7AD8C
    ::Array<GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet*>* get_difficultyBeatmapSets();
    // public System.Void .ctor(System.String songName, System.String songSubName, System.String songAuthorName, System.String levelAuthorName, System.Single beatsPerMinute, System.Single songTimeOffset, System.Single shuffle, System.Single shufflePeriod, System.Single previewStartTime, System.Single previewDuration, System.String songFilename, System.String coverImageFilename, System.String environmentName, System.String allDirectionsEnvironmentName, StandardLevelInfoSaveData/DifficultyBeatmapSet[] difficultyBeatmapSets)
    // Offset: 0xF7AD94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelInfoSaveData* New_ctor(::Il2CppString* songName, ::Il2CppString* songSubName, ::Il2CppString* songAuthorName, ::Il2CppString* levelAuthorName, float beatsPerMinute, float songTimeOffset, float shuffle, float shufflePeriod, float previewStartTime, float previewDuration, ::Il2CppString* songFilename, ::Il2CppString* coverImageFilename, ::Il2CppString* environmentName, ::Il2CppString* allDirectionsEnvironmentName, ::Array<GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet*>* difficultyBeatmapSets) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StandardLevelInfoSaveData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelInfoSaveData*, creationType>(songName, songSubName, songAuthorName, levelAuthorName, beatsPerMinute, songTimeOffset, shuffle, shufflePeriod, previewStartTime, previewDuration, songFilename, coverImageFilename, environmentName, allDirectionsEnvironmentName, difficultyBeatmapSets)));
    }
    // public System.Boolean get_hasAllData()
    // Offset: 0xF7AF08
    bool get_hasAllData();
    // public System.Void SetSongFilename(System.String songFilename)
    // Offset: 0xF7AF6C
    void SetSongFilename(::Il2CppString* songFilename);
    // public System.String SerializeToJSONString()
    // Offset: 0xF7AF74
    ::Il2CppString* SerializeToJSONString();
    // static public StandardLevelInfoSaveData DeserializeFromJSONString(System.String stringData)
    // Offset: 0xF7AF7C
    static GlobalNamespace::StandardLevelInfoSaveData* DeserializeFromJSONString(::Il2CppString* stringData);
  }; // StandardLevelInfoSaveData
  #pragma pack(pop)
  static check_size<sizeof(StandardLevelInfoSaveData), 112 + sizeof(::Array<GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet*>*)> __GlobalNamespace_StandardLevelInfoSaveDataSizeCheck;
  static_assert(sizeof(StandardLevelInfoSaveData) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelInfoSaveData*, "", "StandardLevelInfoSaveData");
