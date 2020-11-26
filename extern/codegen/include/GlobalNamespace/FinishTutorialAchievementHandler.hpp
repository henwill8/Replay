// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AchievementsModelSO
  class AchievementsModelSO;
  // Forward declaring type: Signal
  class Signal;
  // Forward declaring type: AchievementSO
  class AchievementSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FinishTutorialAchievementHandler
  class FinishTutorialAchievementHandler : public UnityEngine::MonoBehaviour {
    public:
    // private AchievementsModelSO _achievementsModel
    // Offset: 0x18
    GlobalNamespace::AchievementsModelSO* achievementsModel;
    // private Signal _tutorialFinishedSignal
    // Offset: 0x20
    GlobalNamespace::Signal* tutorialFinishedSignal;
    // private AchievementSO _finishTutorialAchievement
    // Offset: 0x28
    GlobalNamespace::AchievementSO* finishTutorialAchievement;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1A12900
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1A1298C
    void OnDestroy();
    // private System.Void HandleTutorialFinished()
    // Offset: 0x1A12A18
    void HandleTutorialFinished();
    // public System.Void .ctor()
    // Offset: 0x1A12A3C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FinishTutorialAchievementHandler* New_ctor();
  }; // FinishTutorialAchievementHandler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FinishTutorialAchievementHandler*, "", "FinishTutorialAchievementHandler");
#pragma pack(pop)
