// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentSingleton`1
#include "GlobalNamespace/PersistentSingleton_1.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SharedCoroutineStarter
  class SharedCoroutineStarter : public GlobalNamespace::PersistentSingleton_1<GlobalNamespace::SharedCoroutineStarter*> {
    public:
    // static protected System.Void NoDomainReloadInit()
    // Offset: 0xCBC5F8
    // Implemented from: PersistentSingleton`1
    // Base method: System.Void PersistentSingleton`1::NoDomainReloadInit()
    static void NoDomainReloadInit();
    // public System.Void .ctor()
    // Offset: 0xCBC660
    // Implemented from: PersistentSingleton`1
    // Base method: System.Void PersistentSingleton`1::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SharedCoroutineStarter* New_ctor();
  }; // SharedCoroutineStarter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SharedCoroutineStarter*, "", "SharedCoroutineStarter");
#pragma pack(pop)
