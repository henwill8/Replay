// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapObjectExecutionRatingsRecorder/CutScoreHandler
#include "GlobalNamespace/BeatmapObjectExecutionRatingsRecorder_CutScoreHandler.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapObjectExecutionRatingsRecorder/CutScoreHandler/DidFinishCallback
  class BeatmapObjectExecutionRatingsRecorder::CutScoreHandler::DidFinishCallback : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A27590
    static BeatmapObjectExecutionRatingsRecorder::CutScoreHandler::DidFinishCallback* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(BeatmapObjectExecutionRatingsRecorder/CutScoreHandler cutScoreHandler)
    // Offset: 0x1A282A4
    void Invoke(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::CutScoreHandler* cutScoreHandler);
    // public System.IAsyncResult BeginInvoke(BeatmapObjectExecutionRatingsRecorder/CutScoreHandler cutScoreHandler, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A2865C
    System::IAsyncResult* BeginInvoke(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::CutScoreHandler* cutScoreHandler, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1A28680
    void EndInvoke(System::IAsyncResult* result);
  }; // BeatmapObjectExecutionRatingsRecorder/CutScoreHandler/DidFinishCallback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::CutScoreHandler::DidFinishCallback*, "", "BeatmapObjectExecutionRatingsRecorder/CutScoreHandler/DidFinishCallback");
#pragma pack(pop)
