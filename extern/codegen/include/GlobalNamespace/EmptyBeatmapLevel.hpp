// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IBeatmapLevel
#include "GlobalNamespace/IBeatmapLevel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: PreviewDifficultyBeatmapSet
  class PreviewDifficultyBeatmapSet;
  // Forward declaring type: IBeatmapLevelData
  class IBeatmapLevelData;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: EmptyBeatmapLevel
  class EmptyBeatmapLevel : public ::Il2CppObject/*, public GlobalNamespace::IBeatmapLevel*/ {
    public:
    // private readonly System.String <levelID>k__BackingField
    // Offset: 0x10
    ::Il2CppString* levelID;
    // private readonly System.String <songName>k__BackingField
    // Offset: 0x18
    ::Il2CppString* songName;
    // private readonly System.String <songSubName>k__BackingField
    // Offset: 0x20
    ::Il2CppString* songSubName;
    // private readonly System.String <songAuthorName>k__BackingField
    // Offset: 0x28
    ::Il2CppString* songAuthorName;
    // private readonly System.String <levelAuthorName>k__BackingField
    // Offset: 0x30
    ::Il2CppString* levelAuthorName;
    // private readonly System.Single <beatsPerMinute>k__BackingField
    // Offset: 0x38
    float beatsPerMinute;
    // private readonly System.Single <songTimeOffset>k__BackingField
    // Offset: 0x3C
    float songTimeOffset;
    // private readonly System.Single <shuffle>k__BackingField
    // Offset: 0x40
    float shuffle;
    // private readonly System.Single <shufflePeriod>k__BackingField
    // Offset: 0x44
    float shufflePeriod;
    // private readonly System.Single <previewStartTime>k__BackingField
    // Offset: 0x48
    float previewStartTime;
    // private readonly System.Single <previewDuration>k__BackingField
    // Offset: 0x4C
    float previewDuration;
    // private readonly System.Single <songDuration>k__BackingField
    // Offset: 0x50
    float songDuration;
    // private readonly EnvironmentInfoSO <environmentInfo>k__BackingField
    // Offset: 0x58
    GlobalNamespace::EnvironmentInfoSO* environmentInfo;
    // private readonly EnvironmentInfoSO <allDirectionsEnvironmentInfo>k__BackingField
    // Offset: 0x60
    GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo;
    // private readonly PreviewDifficultyBeatmapSet[] <previewDifficultyBeatmapSets>k__BackingField
    // Offset: 0x68
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets;
    // private readonly IBeatmapLevelData <beatmapLevelData>k__BackingField
    // Offset: 0x70
    GlobalNamespace::IBeatmapLevelData* beatmapLevelData;
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapLevel
    operator GlobalNamespace::IBeatmapLevel() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapLevel*>(this);
    }
    // public System.String get_levelID()
    // Offset: 0x1A5F644
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_levelID()
    ::Il2CppString* get_levelID();
    // public System.String get_songName()
    // Offset: 0x1A5F64C
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_songName()
    ::Il2CppString* get_songName();
    // public System.String get_songSubName()
    // Offset: 0x1A5F654
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_songSubName()
    ::Il2CppString* get_songSubName();
    // public System.String get_songAuthorName()
    // Offset: 0x1A5F65C
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_songAuthorName()
    ::Il2CppString* get_songAuthorName();
    // public System.String get_levelAuthorName()
    // Offset: 0x1A5F664
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_levelAuthorName()
    ::Il2CppString* get_levelAuthorName();
    // public System.Single get_beatsPerMinute()
    // Offset: 0x1A5F66C
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_beatsPerMinute()
    float get_beatsPerMinute();
    // public System.Single get_songTimeOffset()
    // Offset: 0x1A5F674
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_songTimeOffset()
    float get_songTimeOffset();
    // public System.Single get_shuffle()
    // Offset: 0x1A5F67C
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_shuffle()
    float get_shuffle();
    // public System.Single get_shufflePeriod()
    // Offset: 0x1A5F684
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_shufflePeriod()
    float get_shufflePeriod();
    // public System.Single get_previewStartTime()
    // Offset: 0x1A5F68C
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_previewStartTime()
    float get_previewStartTime();
    // public System.Single get_previewDuration()
    // Offset: 0x1A5F694
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_previewDuration()
    float get_previewDuration();
    // public System.Single get_songDuration()
    // Offset: 0x1A5F69C
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_songDuration()
    float get_songDuration();
    // public EnvironmentInfoSO get_environmentInfo()
    // Offset: 0x1A5F6A4
    // Implemented from: IPreviewBeatmapLevel
    // Base method: EnvironmentInfoSO IPreviewBeatmapLevel::get_environmentInfo()
    GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();
    // public EnvironmentInfoSO get_allDirectionsEnvironmentInfo()
    // Offset: 0x1A5F6AC
    // Implemented from: IPreviewBeatmapLevel
    // Base method: EnvironmentInfoSO IPreviewBeatmapLevel::get_allDirectionsEnvironmentInfo()
    GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo();
    // public PreviewDifficultyBeatmapSet[] get_previewDifficultyBeatmapSets()
    // Offset: 0x1A5F6B4
    // Implemented from: IPreviewBeatmapLevel
    // Base method: PreviewDifficultyBeatmapSet[] IPreviewBeatmapLevel::get_previewDifficultyBeatmapSets()
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets();
    // public System.Threading.Tasks.Task`1<UnityEngine.AudioClip> GetPreviewAudioClipAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1A5F6BC
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Threading.Tasks.Task`1<UnityEngine.AudioClip> IPreviewBeatmapLevel::GetPreviewAudioClipAsync(System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>* GetPreviewAudioClipAsync(System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<UnityEngine.Sprite> GetCoverImageAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1A5F71C
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Threading.Tasks.Task`1<UnityEngine.Sprite> IPreviewBeatmapLevel::GetCoverImageAsync(System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<UnityEngine::Sprite*>* GetCoverImageAsync(System::Threading::CancellationToken cancellationToken);
    // public IBeatmapLevelData get_beatmapLevelData()
    // Offset: 0x1A5F77C
    // Implemented from: IBeatmapLevel
    // Base method: IBeatmapLevelData IBeatmapLevel::get_beatmapLevelData()
    GlobalNamespace::IBeatmapLevelData* get_beatmapLevelData();
    // public System.Void .ctor()
    // Offset: 0x1A5F784
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static EmptyBeatmapLevel* New_ctor();
  }; // EmptyBeatmapLevel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EmptyBeatmapLevel*, "", "EmptyBeatmapLevel");
#pragma pack(pop)
