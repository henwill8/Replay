// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ITickable
#include "Zenject/ITickable.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
// Including type: BeatmapLevelsModel/GetBeatmapLevelResult
#include "GlobalNamespace/BeatmapLevelsModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Skipping declaration: BeatmapLevelsModel because it is already included!
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: BeatmapIdentifierNetSerializable
  class BeatmapIdentifierNetSerializable;
  // Forward declaring type: PreviewDifficultyBeatmapSet
  class PreviewDifficultyBeatmapSet;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`5<T1, T2, T3, T4, T5>
  template<typename T1, typename T2, typename T3, typename T4, typename T5>
  class Action_5;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x75
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLevelLoader
  // [] Offset: FFFFFFFF
  class MultiplayerLevelLoader : public ::Il2CppObject/*, public Zenject::ITickable*/ {
    public:
    // Nested type: GlobalNamespace::MultiplayerLevelLoader::MultiplayerBeatmapLoaderState
    struct MultiplayerBeatmapLoaderState;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MultiplayerLevelLoader/MultiplayerBeatmapLoaderState
    // [] Offset: FFFFFFFF
    struct MultiplayerBeatmapLoaderState/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: MultiplayerBeatmapLoaderState
      constexpr MultiplayerBeatmapLoaderState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MultiplayerLevelLoader/MultiplayerBeatmapLoaderState NotLoading
      static constexpr const int NotLoading = 0;
      // Get static field: static public MultiplayerLevelLoader/MultiplayerBeatmapLoaderState NotLoading
      static GlobalNamespace::MultiplayerLevelLoader::MultiplayerBeatmapLoaderState _get_NotLoading();
      // Set static field: static public MultiplayerLevelLoader/MultiplayerBeatmapLoaderState NotLoading
      static void _set_NotLoading(GlobalNamespace::MultiplayerLevelLoader::MultiplayerBeatmapLoaderState value);
      // static field const value: static public MultiplayerLevelLoader/MultiplayerBeatmapLoaderState LoadingBeatmap
      static constexpr const int LoadingBeatmap = 1;
      // Get static field: static public MultiplayerLevelLoader/MultiplayerBeatmapLoaderState LoadingBeatmap
      static GlobalNamespace::MultiplayerLevelLoader::MultiplayerBeatmapLoaderState _get_LoadingBeatmap();
      // Set static field: static public MultiplayerLevelLoader/MultiplayerBeatmapLoaderState LoadingBeatmap
      static void _set_LoadingBeatmap(GlobalNamespace::MultiplayerLevelLoader::MultiplayerBeatmapLoaderState value);
      // static field const value: static public MultiplayerLevelLoader/MultiplayerBeatmapLoaderState WaitingForCountdown
      static constexpr const int WaitingForCountdown = 2;
      // Get static field: static public MultiplayerLevelLoader/MultiplayerBeatmapLoaderState WaitingForCountdown
      static GlobalNamespace::MultiplayerLevelLoader::MultiplayerBeatmapLoaderState _get_WaitingForCountdown();
      // Set static field: static public MultiplayerLevelLoader/MultiplayerBeatmapLoaderState WaitingForCountdown
      static void _set_WaitingForCountdown(GlobalNamespace::MultiplayerLevelLoader::MultiplayerBeatmapLoaderState value);
    }; // MultiplayerLevelLoader/MultiplayerBeatmapLoaderState
    #pragma pack(pop)
    static check_size<sizeof(MultiplayerLevelLoader::MultiplayerBeatmapLoaderState), 0 + sizeof(int)> __GlobalNamespace_MultiplayerLevelLoader_MultiplayerBeatmapLoaderStateSizeCheck;
    static_assert(sizeof(MultiplayerLevelLoader::MultiplayerBeatmapLoaderState) == 0x4);
    // [InjectAttribute] Offset: 0xD40F8C
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0xD40F9C
    // private readonly BeatmapLevelsModel _beatmapLevelsModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelsModel*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD40FAC
    // private System.Action stillDownloadingSongEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action* stillDownloadingSongEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD40FBC
    // private System.Action`5<IPreviewBeatmapLevel,BeatmapDifficulty,BeatmapCharacteristicSO,IDifficultyBeatmap,GameplayModifiers> countdownFinishedEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_5<GlobalNamespace::IPreviewBeatmapLevel*, GlobalNamespace::BeatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::IDifficultyBeatmap*, GlobalNamespace::GameplayModifiers*>* countdownFinishedEvent;
    // Field size check
    static_assert(sizeof(System::Action_5<GlobalNamespace::IPreviewBeatmapLevel*, GlobalNamespace::BeatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::IDifficultyBeatmap*, GlobalNamespace::GameplayModifiers*>*) == 0x8);
    // private MultiplayerLevelLoader/MultiplayerBeatmapLoaderState _loaderState
    // Size: 0x4
    // Offset: 0x30
    GlobalNamespace::MultiplayerLevelLoader::MultiplayerBeatmapLoaderState loaderState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLevelLoader::MultiplayerBeatmapLoaderState) == 0x4);
    // Padding between fields: loaderState and: getBeatmapCancellationTokenSource
    char __padding4[0x4] = {};
    // private System.Threading.CancellationTokenSource _getBeatmapCancellationTokenSource
    // Size: 0x8
    // Offset: 0x38
    System::Threading::CancellationTokenSource* getBeatmapCancellationTokenSource;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationTokenSource*) == 0x8);
    // private System.Threading.Tasks.Task`1<BeatmapLevelsModel/GetBeatmapLevelResult> _getBeatmapLevelResultTask
    // Size: 0x8
    // Offset: 0x40
    System::Threading::Tasks::Task_1<GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelResult>* getBeatmapLevelResultTask;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task_1<GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelResult>*) == 0x8);
    // private BeatmapIdentifierNetSerializable _beatmapId
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::BeatmapIdentifierNetSerializable* beatmapId;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapIdentifierNetSerializable*) == 0x8);
    // private GameplayModifiers _gameplayModifiers
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers*) == 0x8);
    // private IDifficultyBeatmap _difficultyBeatmap
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private IPreviewBeatmapLevel _previewBeatmapLevel
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    // private System.Single _startTime
    // Size: 0x4
    // Offset: 0x70
    float startTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _stillDownloadingCalled
    // Size: 0x1
    // Offset: 0x74
    bool stillDownloadingCalled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MultiplayerLevelLoader
    MultiplayerLevelLoader(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel_ = {}, System::Action* stillDownloadingSongEvent_ = {}, System::Action_5<GlobalNamespace::IPreviewBeatmapLevel*, GlobalNamespace::BeatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::IDifficultyBeatmap*, GlobalNamespace::GameplayModifiers*>* countdownFinishedEvent_ = {}, GlobalNamespace::MultiplayerLevelLoader::MultiplayerBeatmapLoaderState loaderState_ = {}, System::Threading::CancellationTokenSource* getBeatmapCancellationTokenSource_ = {}, System::Threading::Tasks::Task_1<GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelResult>* getBeatmapLevelResultTask_ = {}, GlobalNamespace::BeatmapIdentifierNetSerializable* beatmapId_ = {}, GlobalNamespace::GameplayModifiers* gameplayModifiers_ = {}, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap_ = {}, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic_ = {}, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel_ = {}, float startTime_ = {}, bool stillDownloadingCalled_ = {}) noexcept : multiplayerSessionManager{multiplayerSessionManager_}, beatmapLevelsModel{beatmapLevelsModel_}, stillDownloadingSongEvent{stillDownloadingSongEvent_}, countdownFinishedEvent{countdownFinishedEvent_}, loaderState{loaderState_}, getBeatmapCancellationTokenSource{getBeatmapCancellationTokenSource_}, getBeatmapLevelResultTask{getBeatmapLevelResultTask_}, beatmapId{beatmapId_}, gameplayModifiers{gameplayModifiers_}, difficultyBeatmap{difficultyBeatmap_}, beatmapCharacteristic{beatmapCharacteristic_}, previewBeatmapLevel{previewBeatmapLevel_}, startTime{startTime_}, stillDownloadingCalled{stillDownloadingCalled_} {}
    // Creating interface conversion operator: operator Zenject::ITickable
    operator Zenject::ITickable() noexcept {
      return *reinterpret_cast<Zenject::ITickable*>(this);
    }
    // public System.Void add_stillDownloadingSongEvent(System.Action value)
    // Offset: 0x1027768
    void add_stillDownloadingSongEvent(System::Action* value);
    // public System.Void remove_stillDownloadingSongEvent(System.Action value)
    // Offset: 0x102780C
    void remove_stillDownloadingSongEvent(System::Action* value);
    // public System.Void add_countdownFinishedEvent(System.Action`5<IPreviewBeatmapLevel,BeatmapDifficulty,BeatmapCharacteristicSO,IDifficultyBeatmap,GameplayModifiers> value)
    // Offset: 0x10278B0
    void add_countdownFinishedEvent(System::Action_5<GlobalNamespace::IPreviewBeatmapLevel*, GlobalNamespace::BeatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::IDifficultyBeatmap*, GlobalNamespace::GameplayModifiers*>* value);
    // public System.Void remove_countdownFinishedEvent(System.Action`5<IPreviewBeatmapLevel,BeatmapDifficulty,BeatmapCharacteristicSO,IDifficultyBeatmap,GameplayModifiers> value)
    // Offset: 0x1027954
    void remove_countdownFinishedEvent(System::Action_5<GlobalNamespace::IPreviewBeatmapLevel*, GlobalNamespace::BeatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::IDifficultyBeatmap*, GlobalNamespace::GameplayModifiers*>* value);
    // public System.Void LoadLevel(BeatmapIdentifierNetSerializable beatmapId, GameplayModifiers gameplayModifiers, System.Single initialStartTime)
    // Offset: 0x10279F8
    void LoadLevel(GlobalNamespace::BeatmapIdentifierNetSerializable* beatmapId, GlobalNamespace::GameplayModifiers* gameplayModifiers, float initialStartTime);
    // public System.Void SetNewStartTime(System.Single newStartTime)
    // Offset: 0x1027C28
    void SetNewStartTime(float newStartTime);
    // public System.Void ClearLoading()
    // Offset: 0x1027C30
    void ClearLoading();
    // private System.Boolean <LoadLevel>b__19_0(PreviewDifficultyBeatmapSet set)
    // Offset: 0x1027F6C
    bool $LoadLevel$b__19_0(GlobalNamespace::PreviewDifficultyBeatmapSet* set);
    // public System.Void Tick()
    // Offset: 0x1027CD8
    // Implemented from: Zenject.ITickable
    // Base method: System.Void ITickable::Tick()
    void Tick();
    // public System.Void .ctor()
    // Offset: 0x1027F64
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLevelLoader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLevelLoader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLevelLoader*, creationType>()));
    }
  }; // MultiplayerLevelLoader
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLevelLoader), 116 + sizeof(bool)> __GlobalNamespace_MultiplayerLevelLoaderSizeCheck;
  static_assert(sizeof(MultiplayerLevelLoader) == 0x75);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLevelLoader*, "", "MultiplayerLevelLoader");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLevelLoader::MultiplayerBeatmapLoaderState, "", "MultiplayerLevelLoader/MultiplayerBeatmapLoaderState");
