// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshUtility
#include "UnityEngine/ProBuilder/MeshUtility.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Vertex
  class Vertex;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.MeshUtility/<>c
  class MeshUtility::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.ProBuilder.MeshUtility/<>c <>9
    static UnityEngine::ProBuilder::MeshUtility::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ProBuilder.MeshUtility/<>c <>9
    static void _set_$$9(UnityEngine::ProBuilder::MeshUtility::$$c* value);
    // Get static field: static public System.Func`2<System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.Vertex,System.Int32>,System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Vertex>> <>9__10_0
    static System::Func_2<System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Vertex*, int>*, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Vertex*>*>* _get_$$9__10_0();
    // Set static field: static public System.Func`2<System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.Vertex,System.Int32>,System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Vertex>> <>9__10_0
    static void _set_$$9__10_0(System::Func_2<System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Vertex*, int>*, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Vertex*>*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1030A48
    static void _cctor();
    // System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Vertex> <CollapseSharedVertices>b__10_0(System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.Vertex,System.Int32> x)
    // Offset: 0x1030AB8
    System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Vertex*>* $CollapseSharedVertices$b__10_0(System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Vertex*, int>* x);
    // public System.Void .ctor()
    // Offset: 0x1030AB0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MeshUtility::$$c* New_ctor();
  }; // UnityEngine.ProBuilder.MeshUtility/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshUtility::$$c*, "UnityEngine.ProBuilder", "MeshUtility/<>c");
#pragma pack(pop)
