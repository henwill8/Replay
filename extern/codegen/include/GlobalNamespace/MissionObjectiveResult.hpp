// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionObjective
  class MissionObjective;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionObjectiveResult
  class MissionObjectiveResult : public ::Il2CppObject {
    public:
    // private MissionObjective <missionObjective>k__BackingField
    // Offset: 0x10
    GlobalNamespace::MissionObjective* missionObjective;
    // private System.Boolean <cleared>k__BackingField
    // Offset: 0x18
    bool cleared;
    // private System.Int32 <value>k__BackingField
    // Offset: 0x1C
    int value;
    // public MissionObjective get_missionObjective()
    // Offset: 0xC0D1A8
    GlobalNamespace::MissionObjective* get_missionObjective();
    // private System.Void set_missionObjective(MissionObjective value)
    // Offset: 0xC0D1B0
    void set_missionObjective(GlobalNamespace::MissionObjective* value);
    // public System.Boolean get_cleared()
    // Offset: 0xC0D1B8
    bool get_cleared();
    // private System.Void set_cleared(System.Boolean value)
    // Offset: 0xC0D1C0
    void set_cleared(bool value);
    // public System.Int32 get_value()
    // Offset: 0xC0D1CC
    int get_value();
    // private System.Void set_value(System.Int32 value)
    // Offset: 0xC0D1D4
    void set_value(int value);
    // public System.Void .ctor(MissionObjective missionObjective, System.Boolean cleared, System.Int32 value)
    // Offset: 0xC0CBD8
    static MissionObjectiveResult* New_ctor(GlobalNamespace::MissionObjective* missionObjective, bool cleared, int value);
  }; // MissionObjectiveResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionObjectiveResult*, "", "MissionObjectiveResult");
#pragma pack(pop)
