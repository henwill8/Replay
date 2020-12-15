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
  // Forward declaring type: MissionStageLockView
  class MissionStageLockView;
  // Forward declaring type: MissionStage
  class MissionStage;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionStagesManager
  class MissionStagesManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MissionStagesManager::$$c
    class $$c;
    // private MissionStageLockView _missionStageLockView
    // Offset: 0x18
    GlobalNamespace::MissionStageLockView* missionStageLockView;
    // private MissionStage[] _missionStages
    // Offset: 0x20
    ::Array<GlobalNamespace::MissionStage*>* missionStages;
    // private MissionStage _firstLockedMissionStage
    // Offset: 0x28
    GlobalNamespace::MissionStage* firstLockedMissionStage;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public MissionStage get_firstLockedMissionStage()
    // Offset: 0x10219C0
    GlobalNamespace::MissionStage* get_firstLockedMissionStage();
    // public System.Void UpdateFirtsLockedMissionStage(System.Int32 numberOfClearedMissions)
    // Offset: 0x101DE48
    void UpdateFirtsLockedMissionStage(int numberOfClearedMissions);
    // public System.Void InitStages()
    // Offset: 0x10219C8
    void InitStages();
    // public System.Void UpdateStageLockPosition()
    // Offset: 0x101E114
    void UpdateStageLockPosition();
    // public System.Void UpdateStageLockPositionAnimated(System.Boolean animated, System.Single animationDuration)
    // Offset: 0x101C050
    void UpdateStageLockPositionAnimated(bool animated, float animationDuration);
    // public System.Void UpdateStageLockText(System.Int32 numberOfClearedMissions)
    // Offset: 0x101DF00
    void UpdateStageLockText(int numberOfClearedMissions);
    // public System.Void .ctor()
    // Offset: 0x1021B10
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissionStagesManager* New_ctor();
  }; // MissionStagesManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionStagesManager*, "", "MissionStagesManager");
#pragma pack(pop)