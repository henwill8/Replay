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
  // Autogenerated type: SceneInfo
  class SceneInfo : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private System.String _sceneName
    // Offset: 0x18
    ::Il2CppString* sceneName;
    // private System.Boolean _disabledRootObjects
    // Offset: 0x20
    bool disabledRootObjects;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.String get_sceneName()
    // Offset: 0x103CA40
    ::Il2CppString* get_sceneName();
    // public System.Boolean get_disabledRootObjects()
    // Offset: 0x103CA48
    bool get_disabledRootObjects();
    // public System.Void .ctor()
    // Offset: 0x103CA50
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SceneInfo* New_ctor();
  }; // SceneInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SceneInfo*, "", "SceneInfo");
#pragma pack(pop)