// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapLevelDataLoaderSO
#include "GlobalNamespace/BeatmapLevelDataLoaderSO.hpp"
// Including type: IBeatmapLevel
#include "GlobalNamespace/IBeatmapLevel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: IPreviewBeatmapLevel because it is already included!
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
  // Forward declaring type: BeatmapLevelDataSO
  class BeatmapLevelDataSO;
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
  // Autogenerated type: BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview
  class BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview : public ::Il2CppObject/*, public GlobalNamespace::IBeatmapLevel*/ {
    public:
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData
    class BeatmapLevelData;
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::$GetPreviewAudioClipAsync$d__33
    struct $GetPreviewAudioClipAsync$d__33;
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::$GetCoverImageAsync$d__34
    struct $GetCoverImageAsync$d__34;
    // private IPreviewBeatmapLevel _level
    // Offset: 0x10
    GlobalNamespace::IPreviewBeatmapLevel* level;
    // private BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview/BeatmapLevelData _beatmapLevelData
    // Offset: 0x18
    GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData* beatmapLevelData;
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapLevel
    operator GlobalNamespace::IBeatmapLevel() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapLevel*>(this);
    }
    // public System.Void .ctor(IPreviewBeatmapLevel previewLevel)
    // Offset: 0x1A85188
    static BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview* New_ctor(GlobalNamespace::IPreviewBeatmapLevel* previewLevel);
    // public System.Void LoadData(BeatmapCharacteristicCollectionSO beatmapCharacteristicCollection, BeatmapLevelDataSO beatmapLevelData)
    // Offset: 0x1A851BC
    void LoadData(GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection, GlobalNamespace::BeatmapLevelDataSO* beatmapLevelData);
    // public System.String get_levelID()
    // Offset: 0x1A85728
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_levelID()
    ::Il2CppString* get_levelID();
    // public System.String get_songName()
    // Offset: 0x1A857D8
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_songName()
    ::Il2CppString* get_songName();
    // public System.String get_songSubName()
    // Offset: 0x1A8588C
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_songSubName()
    ::Il2CppString* get_songSubName();
    // public System.String get_songAuthorName()
    // Offset: 0x1A85940
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_songAuthorName()
    ::Il2CppString* get_songAuthorName();
    // public System.String get_levelAuthorName()
    // Offset: 0x1A859F4
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_levelAuthorName()
    ::Il2CppString* get_levelAuthorName();
    // public System.Single get_beatsPerMinute()
    // Offset: 0x1A85AA8
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_beatsPerMinute()
    float get_beatsPerMinute();
    // public System.Single get_songTimeOffset()
    // Offset: 0x1A85B5C
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_songTimeOffset()
    float get_songTimeOffset();
    // public System.Single get_songDuration()
    // Offset: 0x1A85C10
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_songDuration()
    float get_songDuration();
    // public System.Single get_shuffle()
    // Offset: 0x1A85CC4
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_shuffle()
    float get_shuffle();
    // public System.Single get_shufflePeriod()
    // Offset: 0x1A85D78
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_shufflePeriod()
    float get_shufflePeriod();
    // public System.Single get_previewStartTime()
    // Offset: 0x1A85E2C
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_previewStartTime()
    float get_previewStartTime();
    // public System.Single get_previewDuration()
    // Offset: 0x1A85EE0
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_previewDuration()
    float get_previewDuration();
    // public EnvironmentInfoSO get_environmentInfo()
    // Offset: 0x1A85F94
    // Implemented from: IPreviewBeatmapLevel
    // Base method: EnvironmentInfoSO IPreviewBeatmapLevel::get_environmentInfo()
    GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();
    // public EnvironmentInfoSO get_allDirectionsEnvironmentInfo()
    // Offset: 0x1A86048
    // Implemented from: IPreviewBeatmapLevel
    // Base method: EnvironmentInfoSO IPreviewBeatmapLevel::get_allDirectionsEnvironmentInfo()
    GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo();
    // public PreviewDifficultyBeatmapSet[] get_previewDifficultyBeatmapSets()
    // Offset: 0x1A860FC
    // Implemented from: IPreviewBeatmapLevel
    // Base method: PreviewDifficultyBeatmapSet[] IPreviewBeatmapLevel::get_previewDifficultyBeatmapSets()
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets();
    // public IBeatmapLevelData get_beatmapLevelData()
    // Offset: 0x1A861B0
    // Implemented from: IBeatmapLevel
    // Base method: IBeatmapLevelData IBeatmapLevel::get_beatmapLevelData()
    GlobalNamespace::IBeatmapLevelData* get_beatmapLevelData();
    // public System.Threading.Tasks.Task`1<UnityEngine.AudioClip> GetPreviewAudioClipAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1A861B8
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Threading.Tasks.Task`1<UnityEngine.AudioClip> IPreviewBeatmapLevel::GetPreviewAudioClipAsync(System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>* GetPreviewAudioClipAsync(System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<UnityEngine.Sprite> GetCoverImageAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1A86308
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Threading.Tasks.Task`1<UnityEngine.Sprite> IPreviewBeatmapLevel::GetCoverImageAsync(System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<UnityEngine::Sprite*>* GetCoverImageAsync(System::Threading::CancellationToken cancellationToken);
  }; // BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview*, "", "BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview");
#pragma pack(pop)
