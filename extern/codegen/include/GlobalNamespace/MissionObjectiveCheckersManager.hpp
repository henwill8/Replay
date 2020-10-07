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
  // Forward declaring type: MissionObjectiveChecker
  class MissionObjectiveChecker;
  // Forward declaring type: ILevelEndActions
  class ILevelEndActions;
  // Forward declaring type: MissionObjectiveTypeSO
  class MissionObjectiveTypeSO;
  // Forward declaring type: MissionObjectiveResult
  class MissionObjectiveResult;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionObjectiveCheckersManager
  class MissionObjectiveCheckersManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MissionObjectiveCheckersManager::InitData
    class InitData;
    // private MissionObjectiveChecker[] _missionObjectiveCheckers
    // Offset: 0x18
    ::Array<GlobalNamespace::MissionObjectiveChecker*>* missionObjectiveCheckers;
    // private MissionObjectiveCheckersManager/InitData _initData
    // Offset: 0x20
    GlobalNamespace::MissionObjectiveCheckersManager::InitData* initData;
    // private ILevelEndActions _gameplayManager
    // Offset: 0x28
    GlobalNamespace::ILevelEndActions* gameplayManager;
    // private System.Action objectiveDidFailEvent
    // Offset: 0x30
    System::Action* objectiveDidFailEvent;
    // private System.Action objectiveWasClearedEvent
    // Offset: 0x38
    System::Action* objectiveWasClearedEvent;
    // private System.Action objectivesListDidChangeEvent
    // Offset: 0x40
    System::Action* objectivesListDidChangeEvent;
    // private MissionObjectiveChecker[] _activeMissionObjectiveCheckers
    // Offset: 0x48
    ::Array<GlobalNamespace::MissionObjectiveChecker*>* activeMissionObjectiveCheckers;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_objectiveDidFailEvent(System.Action value)
    // Offset: 0xC0BE8C
    void add_objectiveDidFailEvent(System::Action* value);
    // public System.Void remove_objectiveDidFailEvent(System.Action value)
    // Offset: 0xC0BF30
    void remove_objectiveDidFailEvent(System::Action* value);
    // public System.Void add_objectiveWasClearedEvent(System.Action value)
    // Offset: 0xC0BFD4
    void add_objectiveWasClearedEvent(System::Action* value);
    // public System.Void remove_objectiveWasClearedEvent(System.Action value)
    // Offset: 0xC0C078
    void remove_objectiveWasClearedEvent(System::Action* value);
    // public System.Void add_objectivesListDidChangeEvent(System.Action value)
    // Offset: 0xC0C11C
    void add_objectivesListDidChangeEvent(System::Action* value);
    // public System.Void remove_objectivesListDidChangeEvent(System.Action value)
    // Offset: 0xC0C1C0
    void remove_objectivesListDidChangeEvent(System::Action* value);
    // public MissionObjectiveChecker[] get_activeMissionObjectiveCheckers()
    // Offset: 0xC0C264
    ::Array<GlobalNamespace::MissionObjectiveChecker*>* get_activeMissionObjectiveCheckers();
    // protected System.Void Start()
    // Offset: 0xC0C26C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xC0C77C
    void OnDestroy();
    // private System.Void HandleMissionObjectiveCheckerStatusDidChange(MissionObjectiveChecker missionObjectiveChecker)
    // Offset: 0xC0C918
    void HandleMissionObjectiveCheckerStatusDidChange(GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker);
    // public MissionObjectiveChecker GetMissionObjectiveChecker(MissionObjectiveTypeSO missionObjectiveType)
    // Offset: 0xC0C958
    GlobalNamespace::MissionObjectiveChecker* GetMissionObjectiveChecker(GlobalNamespace::MissionObjectiveTypeSO* missionObjectiveType);
    // public MissionObjectiveResult[] GetResults()
    // Offset: 0xC0CA38
    ::Array<GlobalNamespace::MissionObjectiveResult*>* GetResults();
    // private System.Void HandleLevelFailed()
    // Offset: 0xC0CC2C
    void HandleLevelFailed();
    // private System.Void HandleLevelFinished()
    // Offset: 0xC0CD18
    void HandleLevelFinished();
    // private System.Void StopChecking()
    // Offset: 0xC0CC30
    void StopChecking();
    // public System.Void .ctor()
    // Offset: 0xC0CD1C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissionObjectiveCheckersManager* New_ctor();
  }; // MissionObjectiveCheckersManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionObjectiveCheckersManager*, "", "MissionObjectiveCheckersManager");
#pragma pack(pop)
