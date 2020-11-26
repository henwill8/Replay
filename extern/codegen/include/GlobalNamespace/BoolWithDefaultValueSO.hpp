// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BoolSO
#include "GlobalNamespace/BoolSO.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BoolWithDefaultValueSO
  class BoolWithDefaultValueSO : public GlobalNamespace::BoolSO {
    public:
    // private System.Boolean _defaultValue
    // Offset: 0x21
    bool defaultValue;
    // protected override System.Void OnEnable()
    // Offset: 0x102AB00
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x102ABA0
    // Implemented from: BoolSO
    // Base method: System.Void BoolSO::.ctor()
    // Base method: System.Void ObservableVariableSO_1::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BoolWithDefaultValueSO* New_ctor();
  }; // BoolWithDefaultValueSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BoolWithDefaultValueSO*, "", "BoolWithDefaultValueSO");
#pragma pack(pop)
