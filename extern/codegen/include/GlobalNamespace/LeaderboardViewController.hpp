// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
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
  // Autogenerated type: LeaderboardViewController
  class LeaderboardViewController : public HMUI::ViewController {
    public:
    // public System.Void SetData(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0xFFFFFFFF
    void SetData(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Void RefreshLevelStats()
    // Offset: 0xF1E9B4
    void RefreshLevelStats();
    // protected System.Void .ctor()
    // Offset: 0xF1E9B8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LeaderboardViewController* New_ctor();
  }; // LeaderboardViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardViewController*, "", "LeaderboardViewController");
#pragma pack(pop)