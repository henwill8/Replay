// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapObjectExecutionRatingsRecorder
#include "GlobalNamespace/BeatmapObjectExecutionRatingsRecorder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteExecutionRating
  class NoteExecutionRating;
  // Forward declaring type: NoteCutInfo
  class NoteCutInfo;
  // Forward declaring type: ISaberSwingRatingCounter
  class ISaberSwingRatingCounter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapObjectExecutionRatingsRecorder/CutScoreHandler
  class BeatmapObjectExecutionRatingsRecorder::CutScoreHandler : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::CutScoreHandler::DidFinishCallback
    class DidFinishCallback;
    // private readonly BeatmapObjectExecutionRatingsRecorder/CutScoreHandler/DidFinishCallback _finishCallback
    // Offset: 0x10
    GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::CutScoreHandler::DidFinishCallback* finishCallback;
    // private NoteExecutionRating _noteExecutionRating
    // Offset: 0x18
    GlobalNamespace::NoteExecutionRating* noteExecutionRating;
    // private NoteCutInfo _noteCutInfo
    // Offset: 0x20
    GlobalNamespace::NoteCutInfo* noteCutInfo;
    // public System.Void .ctor(BeatmapObjectExecutionRatingsRecorder/CutScoreHandler/DidFinishCallback finishCallback)
    // Offset: 0x1A275A4
    static BeatmapObjectExecutionRatingsRecorder::CutScoreHandler* New_ctor(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::CutScoreHandler::DidFinishCallback* finishCallback);
    // public System.Void Set(NoteCutInfo noteCutInfo, NoteExecutionRating noteExecutionRating, ISaberSwingRatingCounter swingRatingCounter)
    // Offset: 0x1A27D08
    void Set(GlobalNamespace::NoteCutInfo* noteCutInfo, GlobalNamespace::NoteExecutionRating* noteExecutionRating, GlobalNamespace::ISaberSwingRatingCounter* swingRatingCounter);
    // private System.Void HandleSwingRatingCounterDidFinish(ISaberSwingRatingCounter swingRatingCounter)
    // Offset: 0x1A28150
    void HandleSwingRatingCounterDidFinish(GlobalNamespace::ISaberSwingRatingCounter* swingRatingCounter);
  }; // BeatmapObjectExecutionRatingsRecorder/CutScoreHandler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::CutScoreHandler*, "", "BeatmapObjectExecutionRatingsRecorder/CutScoreHandler");
#pragma pack(pop)
