// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshOperations.Bevel
#include "UnityEngine/ProBuilder/MeshOperations/Bevel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: SharedVertex
  class SharedVertex;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.Bevel/<>c__DisplayClass0_0
  class Bevel::$$c__DisplayClass0_0 : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.Face,System.Collections.Generic.List`1<System.Int32>> ignore
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Face*, System::Collections::Generic::List_1<int>*>* ignore;
    // public UnityEngine.ProBuilder.SharedVertex[] sharedIndexes
    // Offset: 0x18
    ::Array<UnityEngine::ProBuilder::SharedVertex*>* sharedIndexes;
    // public System.Func`2<System.Int32,System.Int32> <>9__7
    // Offset: 0x20
    System::Func_2<int, int>* $$9__7;
    // public System.Func`2<System.Int32,System.Int32> <>9__8
    // Offset: 0x28
    System::Func_2<int, int>* $$9__8;
    // System.Int32 <BevelEdges>b__7(System.Int32 x)
    // Offset: 0x124B5A8
    int $BevelEdges$b__7(int x);
    // System.Int32 <BevelEdges>b__8(System.Int32 x)
    // Offset: 0x124B5F0
    int $BevelEdges$b__8(int x);
    // public System.Void .ctor()
    // Offset: 0x124A828
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Bevel::$$c__DisplayClass0_0* New_ctor();
  }; // UnityEngine.ProBuilder.MeshOperations.Bevel/<>c__DisplayClass0_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_0*, "UnityEngine.ProBuilder.MeshOperations", "Bevel/<>c__DisplayClass0_0");
#pragma pack(pop)
