// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionHelpSO
  class MissionHelpSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private System.String _missionHelpId
    // Offset: 0x18
    ::Il2CppString* missionHelpId;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.String get_missionHelpId()
    // Offset: 0x1017C9C
    ::Il2CppString* get_missionHelpId();
    // public System.Void .ctor()
    // Offset: 0x1017CA4
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissionHelpSO* New_ctor();
  }; // MissionHelpSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionHelpSO*, "", "MissionHelpSO");
#pragma pack(pop)