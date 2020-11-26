// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MissionObjectiveChecker
#include "GlobalNamespace/MissionObjectiveChecker.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScoreController
  class ScoreController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FullComboMissionObjectiveChecker
  class FullComboMissionObjectiveChecker : public GlobalNamespace::MissionObjectiveChecker {
    public:
    // private ScoreController _scoreController
    // Offset: 0x48
    GlobalNamespace::ScoreController* scoreController;
    // protected System.Void OnDestroy()
    // Offset: 0x1A1742C
    void OnDestroy();
    // private System.Void HandleComboBreakingEventHappened()
    // Offset: 0x1A17500
    void HandleComboBreakingEventHappened();
    // protected override System.Void Init()
    // Offset: 0x1A17354
    // Implemented from: MissionObjectiveChecker
    // Base method: System.Void MissionObjectiveChecker::Init()
    void Init();
    // public System.Void .ctor()
    // Offset: 0x1A1750C
    // Implemented from: MissionObjectiveChecker
    // Base method: System.Void MissionObjectiveChecker::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FullComboMissionObjectiveChecker* New_ctor();
  }; // FullComboMissionObjectiveChecker
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FullComboMissionObjectiveChecker*, "", "FullComboMissionObjectiveChecker");
#pragma pack(pop)
