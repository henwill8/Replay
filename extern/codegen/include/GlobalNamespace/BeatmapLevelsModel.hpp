// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelDataAssetDownloadUpdate
  struct LevelDataAssetDownloadUpdate;
  // Forward declaring type: IBeatmapLevelPackCollection
  class IBeatmapLevelPackCollection;
  // Forward declaring type: BeatmapLevelPackCollectionContainerSO
  class BeatmapLevelPackCollectionContainerSO;
  // Forward declaring type: BeatmapLevelPackCollectionSO
  class BeatmapLevelPackCollectionSO;
  // Forward declaring type: BeatmapLevelDataLoaderSO
  class BeatmapLevelDataLoaderSO;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
  // Forward declaring type: IBeatmapDataAssetFileModel
  class IBeatmapDataAssetFileModel;
  // Forward declaring type: HMCache`2<K, V>
  template<typename K, typename V>
  class HMCache_2;
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapLevelLoader
  class BeatmapLevelLoader;
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapLevelsModel
  class BeatmapLevelsModel : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelResult
    struct GetBeatmapLevelResult;
    // Nested type: GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate
    struct LevelDownloadingUpdate;
    // Nested type: GlobalNamespace::BeatmapLevelsModel::$GetCustomLevelPackCollectionAsync$d__28
    struct $GetCustomLevelPackCollectionAsync$d__28;
    // Nested type: GlobalNamespace::BeatmapLevelsModel::$GetBeatmapLevelAsync$d__33
    struct $GetBeatmapLevelAsync$d__33;
    // Autogenerated type: BeatmapLevelsModel/GetBeatmapLevelResult
    struct GetBeatmapLevelResult : public System::ValueType {
      public:
      // public readonly System.Boolean isError
      // Offset: 0x0
      bool isError;
      // public readonly IBeatmapLevel beatmapLevel
      // Offset: 0x8
      GlobalNamespace::IBeatmapLevel* beatmapLevel;
      // Creating value type constructor for type: GetBeatmapLevelResult
      constexpr GetBeatmapLevelResult(bool isError_ = {}, GlobalNamespace::IBeatmapLevel* beatmapLevel_ = {}) noexcept : isError{isError_}, beatmapLevel{beatmapLevel_} {}
      // public System.Void .ctor(System.Boolean isError, IBeatmapLevel beatmapLevel)
      // Offset: 0xA2BCB4
      // ABORTED: conflicts with another method.  GetBeatmapLevelResult(bool isError, GlobalNamespace::IBeatmapLevel* beatmapLevel);
    }; // BeatmapLevelsModel/GetBeatmapLevelResult
    // Autogenerated type: BeatmapLevelsModel/LevelDownloadingUpdate
    struct LevelDownloadingUpdate : public System::ValueType {
      public:
      // Nested type: GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState
      struct DownloadingState;
      // Autogenerated type: BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState
      struct DownloadingState : public System::Enum {
        public:
        // public System.Int32 value__
        // Offset: 0x0
        int value;
        // Creating value type constructor for type: DownloadingState
        constexpr DownloadingState(int value_ = {}) noexcept : value{value_} {}
        // Creating conversion operator: operator int
        constexpr operator int() const noexcept {
          return value;
        }
        // static field const value: static public BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState PreparingToDownload
        static constexpr const int PreparingToDownload = 0;
        // Get static field: static public BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState PreparingToDownload
        static GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState _get_PreparingToDownload();
        // Set static field: static public BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState PreparingToDownload
        static void _set_PreparingToDownload(GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState value);
        // static field const value: static public BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState Downloading
        static constexpr const int Downloading = 1;
        // Get static field: static public BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState Downloading
        static GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState _get_Downloading();
        // Set static field: static public BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState Downloading
        static void _set_Downloading(GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState value);
        // static field const value: static public BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState Completed
        static constexpr const int Completed = 2;
        // Get static field: static public BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState Completed
        static GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState _get_Completed();
        // Set static field: static public BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState Completed
        static void _set_Completed(GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState value);
      }; // BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState
      // public readonly System.String levelID
      // Offset: 0x0
      ::Il2CppString* levelID;
      // public readonly System.UInt32 bytesTotal
      // Offset: 0x8
      uint bytesTotal;
      // public readonly System.UInt32 bytesTransferred
      // Offset: 0xC
      uint bytesTransferred;
      // public readonly BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState downloadingState
      // Offset: 0x10
      GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState downloadingState;
      // Creating value type constructor for type: LevelDownloadingUpdate
      constexpr LevelDownloadingUpdate(::Il2CppString* levelID_ = {}, uint bytesTotal_ = {}, uint bytesTransferred_ = {}, GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState downloadingState_ = {}) noexcept : levelID{levelID_}, bytesTotal{bytesTotal_}, bytesTransferred{bytesTransferred_}, downloadingState{downloadingState_} {}
      // public System.Void .ctor(System.String levelID, System.UInt32 bytesTotal, System.UInt32 bytesTransferred, BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState downloadingState)
      // Offset: 0xA2BD84
      // ABORTED: conflicts with another method.  LevelDownloadingUpdate(::Il2CppString* levelID, uint bytesTotal, uint bytesTransferred, GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState downloadingState);
    }; // BeatmapLevelsModel/LevelDownloadingUpdate
    // private BeatmapLevelPackCollectionContainerSO _dlcLevelPackCollectionContainer
    // Offset: 0x18
    GlobalNamespace::BeatmapLevelPackCollectionContainerSO* dlcLevelPackCollectionContainer;
    // private BeatmapLevelPackCollectionSO _ostAndExtrasPackCollection
    // Offset: 0x20
    GlobalNamespace::BeatmapLevelPackCollectionSO* ostAndExtrasPackCollection;
    // private BeatmapLevelDataLoaderSO _beatmapLevelDataLoader
    // Offset: 0x28
    GlobalNamespace::BeatmapLevelDataLoaderSO* beatmapLevelDataLoader;
    // private System.Int32 _maxCachedBeatmapLevels
    // Offset: 0x30
    int maxCachedBeatmapLevels;
    // private AdditionalContentModel _additionalContentModel
    // Offset: 0x38
    GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // private IBeatmapDataAssetFileModel _beatmapDataAssetFileModel
    // Offset: 0x40
    GlobalNamespace::IBeatmapDataAssetFileModel* beatmapDataAssetFileModel;
    // private System.Action`1<BeatmapLevelsModel/LevelDownloadingUpdate> levelDownloadingUpdateEvent
    // Offset: 0x48
    System::Action_1<GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate>* levelDownloadingUpdateEvent;
    // private IBeatmapLevelPackCollection _allLoadedBeatmapLevelPackCollection
    // Offset: 0x50
    GlobalNamespace::IBeatmapLevelPackCollection* allLoadedBeatmapLevelPackCollection;
    // private IBeatmapLevelPackCollection _customLevelPackCollection
    // Offset: 0x58
    GlobalNamespace::IBeatmapLevelPackCollection* customLevelPackCollection;
    // private HMCache`2<System.String,IBeatmapLevel> _loadedBeatmapLevels
    // Offset: 0x60
    GlobalNamespace::HMCache_2<::Il2CppString*, GlobalNamespace::IBeatmapLevel*>* loadedBeatmapLevels;
    // private System.Collections.Generic.Dictionary`2<System.String,IPreviewBeatmapLevel> _loadedPreviewBeatmapLevels
    // Offset: 0x68
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::IPreviewBeatmapLevel*>* loadedPreviewBeatmapLevels;
    // private BeatmapLevelLoader _beatmapLevelLoader
    // Offset: 0x70
    GlobalNamespace::BeatmapLevelLoader* beatmapLevelLoader;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_levelDownloadingUpdateEvent(System.Action`1<BeatmapLevelsModel/LevelDownloadingUpdate> value)
    // Offset: 0xB7333C
    void add_levelDownloadingUpdateEvent(System::Action_1<GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate>* value);
    // public System.Void remove_levelDownloadingUpdateEvent(System.Action`1<BeatmapLevelsModel/LevelDownloadingUpdate> value)
    // Offset: 0xB733E0
    void remove_levelDownloadingUpdateEvent(System::Action_1<GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate>* value);
    // public BeatmapLevelPackCollectionSO get_ostAndExtrasPackCollection()
    // Offset: 0xB73484
    GlobalNamespace::BeatmapLevelPackCollectionSO* get_ostAndExtrasPackCollection();
    // public IBeatmapLevelPackCollection get_dlcBeatmapLevelPackCollection()
    // Offset: 0xB7348C
    GlobalNamespace::IBeatmapLevelPackCollection* get_dlcBeatmapLevelPackCollection();
    // public IBeatmapLevelPackCollection get_allLoadedBeatmapLevelPackCollection()
    // Offset: 0xB734A8
    GlobalNamespace::IBeatmapLevelPackCollection* get_allLoadedBeatmapLevelPackCollection();
    // public IBeatmapLevelPackCollection get_customLevelPackCollection()
    // Offset: 0xB734B0
    GlobalNamespace::IBeatmapLevelPackCollection* get_customLevelPackCollection();
    // private System.Void Init()
    // Offset: 0xB734B8
    void Init();
    // protected System.Void Start()
    // Offset: 0xB73840
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xB73930
    void OnDestroy();
    // public System.Void ClearLoadedBeatmapLevelsCaches()
    // Offset: 0xB73A24
    void ClearLoadedBeatmapLevelsCaches();
    // public System.Threading.Tasks.Task`1<IBeatmapLevelPackCollection> GetCustomLevelPackCollectionAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xB73A7C
    System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapLevelPackCollection*>* GetCustomLevelPackCollectionAsync(System::Threading::CancellationToken cancellationToken);
    // public IBeatmapLevelPack GetLevelPackForLevelId(System.String levelId)
    // Offset: 0xB73B88
    GlobalNamespace::IBeatmapLevelPack* GetLevelPackForLevelId(::Il2CppString* levelId);
    // public IBeatmapLevelPack GetLevelPack(System.String levePacklId)
    // Offset: 0xB73E40
    GlobalNamespace::IBeatmapLevelPack* GetLevelPack(::Il2CppString* levePacklId);
    // public System.Boolean IsBeatmapLevelLoaded(System.String levelId)
    // Offset: 0xB73FD0
    bool IsBeatmapLevelLoaded(::Il2CppString* levelId);
    // public IBeatmapLevel GetBeatmapLevelIfLoaded(System.String levelId)
    // Offset: 0xB7409C
    GlobalNamespace::IBeatmapLevel* GetBeatmapLevelIfLoaded(::Il2CppString* levelId);
    // public System.Threading.Tasks.Task`1<BeatmapLevelsModel/GetBeatmapLevelResult> GetBeatmapLevelAsync(System.String levelID, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xB74190
    System::Threading::Tasks::Task_1<GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelResult>* GetBeatmapLevelAsync(::Il2CppString* levelID, System::Threading::CancellationToken cancellationToken);
    // private System.Void HandleLevelDataAssetDownloadUpdate(LevelDataAssetDownloadUpdate update)
    // Offset: 0xB742DC
    void HandleLevelDataAssetDownloadUpdate(GlobalNamespace::LevelDataAssetDownloadUpdate update);
    // private System.Void UpdateLoadedPreviewLevels()
    // Offset: 0xB73578
    void UpdateLoadedPreviewLevels();
    // private System.Void UpdateAllLoadedBeatmapLevelPacks()
    // Offset: 0xB743D0
    void UpdateAllLoadedBeatmapLevelPacks();
    // public System.Void .ctor()
    // Offset: 0xB744F0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatmapLevelsModel* New_ctor();
  }; // BeatmapLevelsModel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelsModel*, "", "BeatmapLevelsModel");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelResult, "", "BeatmapLevelsModel/GetBeatmapLevelResult");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate, "", "BeatmapLevelsModel/LevelDownloadingUpdate");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState, "", "BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState");
#pragma pack(pop)
