// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: FireworkItemController
#include "GlobalNamespace/FireworkItemController.hpp"
// Including type: Zenject.MonoMemoryPool`1
#include "Zenject/MonoMemoryPool_1.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FireworkItemController/Pool
  class FireworkItemController::Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::FireworkItemController*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x1A13154
    // Implemented from: Zenject.MonoMemoryPool`1
    // Base method: System.Void MonoMemoryPool_1::.ctor()
    // Base method: System.Void MemoryPool_1::.ctor()
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    static FireworkItemController::Pool* New_ctor();
  }; // FireworkItemController/Pool
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FireworkItemController::Pool*, "", "FireworkItemController/Pool");
#pragma pack(pop)
