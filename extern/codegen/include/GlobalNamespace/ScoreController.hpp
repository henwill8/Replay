// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: PlayerHeadAndObstacleInteraction
  class PlayerHeadAndObstacleInteraction;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: GameEnergyCounter
  class GameEnergyCounter;
  // Forward declaring type: NoteData
  class NoteData;
  // Forward declaring type: NoteCutInfo
  class NoteCutInfo;
  // Forward declaring type: CutScoreBuffer
  class CutScoreBuffer;
  // Forward declaring type: NoteController
  class NoteController;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xE8
  #pragma pack(push, 1)
  // Autogenerated type: ScoreController
  // [] Offset: FFFFFFFF
  class ScoreController : public UnityEngine::MonoBehaviour {
    public:
    // [TooltipAttribute] Offset: 0xD3D35C
    // private System.Int32 _feverModeRequiredCombo
    // Size: 0x4
    // Offset: 0x18
    int feverModeRequiredCombo;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _feverModeDuration
    // Size: 0x4
    // Offset: 0x1C
    float feverModeDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private GameplayModifiersModelSO _gameplayModifiersModel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiersModelSO*) == 0x8);
    // [InjectAttribute] Offset: 0xD3D3C8
    // private readonly GameplayModifiers _gameplayModifiers
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers*) == 0x8);
    // [InjectAttribute] Offset: 0xD3D3D8
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0xD3D3E8
    // private readonly PlayerHeadAndObstacleInteraction _playerHeadAndObstacleInteraction
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::PlayerHeadAndObstacleInteraction* playerHeadAndObstacleInteraction;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerHeadAndObstacleInteraction*) == 0x8);
    // [InjectAttribute] Offset: 0xD3D3F8
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // [InjectAttribute] Offset: 0xD3D408
    // private readonly GameEnergyCounter _gameEnergyCounter
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::GameEnergyCounter* gameEnergyCounter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameEnergyCounter*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3D418
    // private System.Action`3<NoteData,NoteCutInfo,System.Int32> noteWasCutEvent
    // Size: 0x8
    // Offset: 0x50
    System::Action_3<GlobalNamespace::NoteData*, GlobalNamespace::NoteCutInfo*, int>* noteWasCutEvent;
    // Field size check
    static_assert(sizeof(System::Action_3<GlobalNamespace::NoteData*, GlobalNamespace::NoteCutInfo*, int>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3D428
    // private System.Action`2<NoteData,System.Int32> noteWasMissedEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action_2<GlobalNamespace::NoteData*, int>* noteWasMissedEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::NoteData*, int>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3D438
    // private System.Action`2<System.Int32,System.Int32> scoreDidChangeEvent
    // Size: 0x8
    // Offset: 0x60
    System::Action_2<int, int>* scoreDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<int, int>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3D448
    // private System.Action`2<System.Int32,System.Int32> immediateMaxPossibleScoreDidChangeEvent
    // Size: 0x8
    // Offset: 0x68
    System::Action_2<int, int>* immediateMaxPossibleScoreDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<int, int>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3D458
    // private System.Action`2<System.Int32,System.Single> multiplierDidChangeEvent
    // Size: 0x8
    // Offset: 0x70
    System::Action_2<int, float>* multiplierDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<int, float>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3D468
    // private System.Action`1<System.Int32> comboDidChangeEvent
    // Size: 0x8
    // Offset: 0x78
    System::Action_1<int>* comboDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<int>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3D478
    // private System.Action`1<System.Single> feverModeChargeProgressDidChangeEvent
    // Size: 0x8
    // Offset: 0x80
    System::Action_1<float>* feverModeChargeProgressDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<float>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3D488
    // private System.Action feverDidStartEvent
    // Size: 0x8
    // Offset: 0x88
    System::Action* feverDidStartEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3D498
    // private System.Action feverDidFinishEvent
    // Size: 0x8
    // Offset: 0x90
    System::Action* feverDidFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3D4A8
    // private System.Action comboBreakingEventHappenedEvent
    // Size: 0x8
    // Offset: 0x98
    System::Action* comboBreakingEventHappenedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Int32 _baseRawScore
    // Size: 0x4
    // Offset: 0xA0
    int baseRawScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _prevFrameRawScore
    // Size: 0x4
    // Offset: 0xA4
    int prevFrameRawScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _multiplier
    // Size: 0x4
    // Offset: 0xA8
    int multiplier;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _multiplierIncreaseProgress
    // Size: 0x4
    // Offset: 0xAC
    int multiplierIncreaseProgress;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _multiplierIncreaseMaxProgress
    // Size: 0x4
    // Offset: 0xB0
    int multiplierIncreaseMaxProgress;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _combo
    // Size: 0x4
    // Offset: 0xB4
    int combo;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _maxCombo
    // Size: 0x4
    // Offset: 0xB8
    int maxCombo;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _feverIsActive
    // Size: 0x1
    // Offset: 0xBC
    bool feverIsActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: feverIsActive and: feverStartTime
    char __padding25[0x3] = {};
    // private System.Single _feverStartTime
    // Size: 0x4
    // Offset: 0xC0
    float feverStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _feverCombo
    // Size: 0x4
    // Offset: 0xC4
    int feverCombo;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _playerHeadWasInObstacle
    // Size: 0x1
    // Offset: 0xC8
    bool playerHeadWasInObstacle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: playerHeadWasInObstacle and: immediateMaxPossibleRawScore
    char __padding28[0x3] = {};
    // private System.Int32 _immediateMaxPossibleRawScore
    // Size: 0x4
    // Offset: 0xCC
    int immediateMaxPossibleRawScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _cutOrMissedNotes
    // Size: 0x4
    // Offset: 0xD0
    int cutOrMissedNotes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: cutOrMissedNotes and: cutScoreBuffers
    char __padding30[0x4] = {};
    // private readonly System.Collections.Generic.List`1<CutScoreBuffer> _cutScoreBuffers
    // Size: 0x8
    // Offset: 0xD8
    System::Collections::Generic::List_1<GlobalNamespace::CutScoreBuffer*>* cutScoreBuffers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::CutScoreBuffer*>*) == 0x8);
    // private System.Single _gameplayModifiersScoreMultiplier
    // Size: 0x4
    // Offset: 0xE0
    float gameplayModifiersScoreMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _prevFrameGameplayModifiersScoreMultiplier
    // Size: 0x4
    // Offset: 0xE4
    float prevFrameGameplayModifiersScoreMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: ScoreController
    ScoreController(int feverModeRequiredCombo_ = {}, float feverModeDuration_ = {}, GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel_ = {}, GlobalNamespace::GameplayModifiers* gameplayModifiers_ = {}, GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}, GlobalNamespace::PlayerHeadAndObstacleInteraction* playerHeadAndObstacleInteraction_ = {}, GlobalNamespace::AudioTimeSyncController* audioTimeSyncController_ = {}, GlobalNamespace::GameEnergyCounter* gameEnergyCounter_ = {}, System::Action_3<GlobalNamespace::NoteData*, GlobalNamespace::NoteCutInfo*, int>* noteWasCutEvent_ = {}, System::Action_2<GlobalNamespace::NoteData*, int>* noteWasMissedEvent_ = {}, System::Action_2<int, int>* scoreDidChangeEvent_ = {}, System::Action_2<int, int>* immediateMaxPossibleScoreDidChangeEvent_ = {}, System::Action_2<int, float>* multiplierDidChangeEvent_ = {}, System::Action_1<int>* comboDidChangeEvent_ = {}, System::Action_1<float>* feverModeChargeProgressDidChangeEvent_ = {}, System::Action* feverDidStartEvent_ = {}, System::Action* feverDidFinishEvent_ = {}, System::Action* comboBreakingEventHappenedEvent_ = {}, int baseRawScore_ = {}, int prevFrameRawScore_ = {}, int multiplier_ = {}, int multiplierIncreaseProgress_ = {}, int multiplierIncreaseMaxProgress_ = {}, int combo_ = {}, int maxCombo_ = {}, bool feverIsActive_ = {}, float feverStartTime_ = {}, int feverCombo_ = {}, bool playerHeadWasInObstacle_ = {}, int immediateMaxPossibleRawScore_ = {}, int cutOrMissedNotes_ = {}, System::Collections::Generic::List_1<GlobalNamespace::CutScoreBuffer*>* cutScoreBuffers_ = {}, float gameplayModifiersScoreMultiplier_ = {}, float prevFrameGameplayModifiersScoreMultiplier_ = {}) noexcept : feverModeRequiredCombo{feverModeRequiredCombo_}, feverModeDuration{feverModeDuration_}, gameplayModifiersModel{gameplayModifiersModel_}, gameplayModifiers{gameplayModifiers_}, beatmapObjectManager{beatmapObjectManager_}, playerHeadAndObstacleInteraction{playerHeadAndObstacleInteraction_}, audioTimeSyncController{audioTimeSyncController_}, gameEnergyCounter{gameEnergyCounter_}, noteWasCutEvent{noteWasCutEvent_}, noteWasMissedEvent{noteWasMissedEvent_}, scoreDidChangeEvent{scoreDidChangeEvent_}, immediateMaxPossibleScoreDidChangeEvent{immediateMaxPossibleScoreDidChangeEvent_}, multiplierDidChangeEvent{multiplierDidChangeEvent_}, comboDidChangeEvent{comboDidChangeEvent_}, feverModeChargeProgressDidChangeEvent{feverModeChargeProgressDidChangeEvent_}, feverDidStartEvent{feverDidStartEvent_}, feverDidFinishEvent{feverDidFinishEvent_}, comboBreakingEventHappenedEvent{comboBreakingEventHappenedEvent_}, baseRawScore{baseRawScore_}, prevFrameRawScore{prevFrameRawScore_}, multiplier{multiplier_}, multiplierIncreaseProgress{multiplierIncreaseProgress_}, multiplierIncreaseMaxProgress{multiplierIncreaseMaxProgress_}, combo{combo_}, maxCombo{maxCombo_}, feverIsActive{feverIsActive_}, feverStartTime{feverStartTime_}, feverCombo{feverCombo_}, playerHeadWasInObstacle{playerHeadWasInObstacle_}, immediateMaxPossibleRawScore{immediateMaxPossibleRawScore_}, cutOrMissedNotes{cutOrMissedNotes_}, cutScoreBuffers{cutScoreBuffers_}, gameplayModifiersScoreMultiplier{gameplayModifiersScoreMultiplier_}, prevFrameGameplayModifiersScoreMultiplier{prevFrameGameplayModifiersScoreMultiplier_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_noteWasCutEvent(System.Action`3<NoteData,NoteCutInfo,System.Int32> value)
    // Offset: 0x108C41C
    void add_noteWasCutEvent(System::Action_3<GlobalNamespace::NoteData*, GlobalNamespace::NoteCutInfo*, int>* value);
    // public System.Void remove_noteWasCutEvent(System.Action`3<NoteData,NoteCutInfo,System.Int32> value)
    // Offset: 0x108C4C0
    void remove_noteWasCutEvent(System::Action_3<GlobalNamespace::NoteData*, GlobalNamespace::NoteCutInfo*, int>* value);
    // public System.Void add_noteWasMissedEvent(System.Action`2<NoteData,System.Int32> value)
    // Offset: 0x108C564
    void add_noteWasMissedEvent(System::Action_2<GlobalNamespace::NoteData*, int>* value);
    // public System.Void remove_noteWasMissedEvent(System.Action`2<NoteData,System.Int32> value)
    // Offset: 0x108C608
    void remove_noteWasMissedEvent(System::Action_2<GlobalNamespace::NoteData*, int>* value);
    // public System.Void add_scoreDidChangeEvent(System.Action`2<System.Int32,System.Int32> value)
    // Offset: 0x108C6AC
    void add_scoreDidChangeEvent(System::Action_2<int, int>* value);
    // public System.Void remove_scoreDidChangeEvent(System.Action`2<System.Int32,System.Int32> value)
    // Offset: 0x108C750
    void remove_scoreDidChangeEvent(System::Action_2<int, int>* value);
    // public System.Void add_immediateMaxPossibleScoreDidChangeEvent(System.Action`2<System.Int32,System.Int32> value)
    // Offset: 0x107D9F4
    void add_immediateMaxPossibleScoreDidChangeEvent(System::Action_2<int, int>* value);
    // public System.Void remove_immediateMaxPossibleScoreDidChangeEvent(System.Action`2<System.Int32,System.Int32> value)
    // Offset: 0x107DB6C
    void remove_immediateMaxPossibleScoreDidChangeEvent(System::Action_2<int, int>* value);
    // public System.Void add_multiplierDidChangeEvent(System.Action`2<System.Int32,System.Single> value)
    // Offset: 0x108C7F4
    void add_multiplierDidChangeEvent(System::Action_2<int, float>* value);
    // public System.Void remove_multiplierDidChangeEvent(System.Action`2<System.Int32,System.Single> value)
    // Offset: 0x108C898
    void remove_multiplierDidChangeEvent(System::Action_2<int, float>* value);
    // public System.Void add_comboDidChangeEvent(System.Action`1<System.Int32> value)
    // Offset: 0x108C93C
    void add_comboDidChangeEvent(System::Action_1<int>* value);
    // public System.Void remove_comboDidChangeEvent(System.Action`1<System.Int32> value)
    // Offset: 0x108C9E0
    void remove_comboDidChangeEvent(System::Action_1<int>* value);
    // public System.Void add_feverModeChargeProgressDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0x108CA84
    void add_feverModeChargeProgressDidChangeEvent(System::Action_1<float>* value);
    // public System.Void remove_feverModeChargeProgressDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0x108CB28
    void remove_feverModeChargeProgressDidChangeEvent(System::Action_1<float>* value);
    // public System.Void add_feverDidStartEvent(System.Action value)
    // Offset: 0x108CBCC
    void add_feverDidStartEvent(System::Action* value);
    // public System.Void remove_feverDidStartEvent(System.Action value)
    // Offset: 0x108CC70
    void remove_feverDidStartEvent(System::Action* value);
    // public System.Void add_feverDidFinishEvent(System.Action value)
    // Offset: 0x108CD14
    void add_feverDidFinishEvent(System::Action* value);
    // public System.Void remove_feverDidFinishEvent(System.Action value)
    // Offset: 0x108CDB8
    void remove_feverDidFinishEvent(System::Action* value);
    // public System.Void add_comboBreakingEventHappenedEvent(System.Action value)
    // Offset: 0x108CE5C
    void add_comboBreakingEventHappenedEvent(System::Action* value);
    // public System.Void remove_comboBreakingEventHappenedEvent(System.Action value)
    // Offset: 0x108CF00
    void remove_comboBreakingEventHappenedEvent(System::Action* value);
    // public System.Int32 get_prevFrameRawScore()
    // Offset: 0x108CFA4
    int get_prevFrameRawScore();
    // public System.Int32 get_prevFrameModifiedScore()
    // Offset: 0x107DC6C
    int get_prevFrameModifiedScore();
    // public System.Int32 get_maxCombo()
    // Offset: 0x108D024
    int get_maxCombo();
    // public System.Int32 get_multiplierWithFever()
    // Offset: 0x108D02C
    int get_multiplierWithFever();
    // public System.Boolean get_feverModeActive()
    // Offset: 0x108D048
    bool get_feverModeActive();
    // public System.Single get_feverModeDrainProgress()
    // Offset: 0x108D050
    float get_feverModeDrainProgress();
    // public System.Single get_feverModeChargeProgress()
    // Offset: 0x108D0E4
    float get_feverModeChargeProgress();
    // public System.Int32 get_immediateMaxPossibleRawScore()
    // Offset: 0x108D0FC
    int get_immediateMaxPossibleRawScore();
    // public System.Single get_gameplayModifiersScoreMultiplier()
    // Offset: 0x108D104
    float get_gameplayModifiersScoreMultiplier();
    // protected System.Void Start()
    // Offset: 0x108D10C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x108D228
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x108D318
    void Update();
    // protected System.Void LateUpdate()
    // Offset: 0x108D5B0
    void LateUpdate();
    // private System.Void LoseMultiplier(out System.Boolean comboChanged, out System.Boolean multiplierChanged)
    // Offset: 0x108D45C
    void LoseMultiplier(bool& comboChanged, bool& multiplierChanged);
    // private System.Void NotifyForChange(System.Boolean comboChanged, System.Boolean multiplierChanged)
    // Offset: 0x108D4D0
    void NotifyForChange(bool comboChanged, bool multiplierChanged);
    // private System.Void HandleNoteWasCut(NoteController noteController, NoteCutInfo noteCutInfo)
    // Offset: 0x108D890
    void HandleNoteWasCut(GlobalNamespace::NoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo);
    // private System.Void HandleNoteWasMissed(NoteController noteController)
    // Offset: 0x108DAC0
    void HandleNoteWasMissed(GlobalNamespace::NoteController* noteController);
    // private System.Void HandleCutScoreBufferDidFinish(CutScoreBuffer cutScoreBuffer)
    // Offset: 0x108DB7C
    void HandleCutScoreBufferDidFinish(GlobalNamespace::CutScoreBuffer* cutScoreBuffer);
    // public System.Void .ctor()
    // Offset: 0x108DC04
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScoreController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ScoreController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScoreController*, creationType>()));
    }
  }; // ScoreController
  #pragma pack(pop)
  static check_size<sizeof(ScoreController), 228 + sizeof(float)> __GlobalNamespace_ScoreControllerSizeCheck;
  static_assert(sizeof(ScoreController) == 0xE8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreController*, "", "ScoreController");
