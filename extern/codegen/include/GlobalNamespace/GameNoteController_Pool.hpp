// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameNoteController
#include "GlobalNamespace/GameNoteController.hpp"
// Including type: Zenject.MonoMemoryPool`1
#include "Zenject/MonoMemoryPool_1.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameNoteController/Pool
  class GameNoteController::Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::GameNoteController*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x1A1A2BC
    // Implemented from: Zenject.MonoMemoryPool`1
    // Base method: System.Void MonoMemoryPool_1::.ctor()
    // Base method: System.Void MemoryPool_1::.ctor()
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    static GameNoteController::Pool* New_ctor();
  }; // GameNoteController/Pool
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameNoteController::Pool*, "", "GameNoteController/Pool");
#pragma pack(pop)