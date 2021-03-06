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
  // Forward declaring type: FlyingScoreSpawner
  class FlyingScoreSpawner;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: ScoreController
  class ScoreController;
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: NoteCutInfo
  class NoteCutInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: NoteCutScoreSpawner
  // [] Offset: FFFFFFFF
  class NoteCutScoreSpawner : public UnityEngine::MonoBehaviour {
    public:
    // private FlyingScoreSpawner _flyingScoreSpawner
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::FlyingScoreSpawner* flyingScoreSpawner;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FlyingScoreSpawner*) == 0x8);
    // [InjectAttribute] Offset: 0xD384C4
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0xD384D4
    // private readonly ScoreController _scoreController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ScoreController* scoreController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScoreController*) == 0x8);
    // Creating value type constructor for type: NoteCutScoreSpawner
    NoteCutScoreSpawner(GlobalNamespace::FlyingScoreSpawner* flyingScoreSpawner_ = {}, GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}, GlobalNamespace::ScoreController* scoreController_ = {}) noexcept : flyingScoreSpawner{flyingScoreSpawner_}, beatmapObjectManager{beatmapObjectManager_}, scoreController{scoreController_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xF91320
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xF913B4
    void OnDestroy();
    // private System.Void HandleNoteWasCut(NoteController noteController, NoteCutInfo noteCutInfo)
    // Offset: 0xF91454
    void HandleNoteWasCut(GlobalNamespace::NoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo);
    // public System.Void .ctor()
    // Offset: 0xF915CC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteCutScoreSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteCutScoreSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteCutScoreSpawner*, creationType>()));
    }
  }; // NoteCutScoreSpawner
  #pragma pack(pop)
  static check_size<sizeof(NoteCutScoreSpawner), 40 + sizeof(GlobalNamespace::ScoreController*)> __GlobalNamespace_NoteCutScoreSpawnerSizeCheck;
  static_assert(sizeof(NoteCutScoreSpawner) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutScoreSpawner*, "", "NoteCutScoreSpawner");
