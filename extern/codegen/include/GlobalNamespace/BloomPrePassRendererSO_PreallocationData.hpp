// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BloomPrePassRendererSO
#include "GlobalNamespace/BloomPrePassRendererSO.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassLightTypeSO
  class BloomPrePassLightTypeSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BloomPrePassRendererSO/PreallocationData
  class BloomPrePassRendererSO::PreallocationData : public ::Il2CppObject {
    public:
    // public BloomPrePassLightTypeSO lightType
    // Offset: 0x10
    GlobalNamespace::BloomPrePassLightTypeSO* lightType;
    // public System.Int32 preallocateCount
    // Offset: 0x18
    int preallocateCount;
    // public System.Void .ctor()
    // Offset: 0x1877DE0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BloomPrePassRendererSO::PreallocationData* New_ctor();
  }; // BloomPrePassRendererSO/PreallocationData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassRendererSO::PreallocationData*, "", "BloomPrePassRendererSO/PreallocationData");
#pragma pack(pop)
