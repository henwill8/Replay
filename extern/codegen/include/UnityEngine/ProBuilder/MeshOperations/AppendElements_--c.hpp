// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshOperations.AppendElements
#include "UnityEngine/ProBuilder/MeshOperations/AppendElements.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Vertex
  class Vertex;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.AppendElements/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D556B8
  class AppendElements::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.ProBuilder.MeshOperations.AppendElements/<>c <>9
    static UnityEngine::ProBuilder::MeshOperations::AppendElements::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ProBuilder.MeshOperations.AppendElements/<>c <>9
    static void _set_$$9(UnityEngine::ProBuilder::MeshOperations::AppendElements::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.Vector3[],System.Int32> <>9__7_0
    static System::Func_2<::Array<UnityEngine::Vector3>*, int>* _get_$$9__7_0();
    // Set static field: static public System.Func`2<UnityEngine.Vector3[],System.Int32> <>9__7_0
    static void _set_$$9__7_0(System::Func_2<::Array<UnityEngine::Vector3>*, int>* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Vertex,UnityEngine.Vector3> <>9__14_1
    static System::Func_2<UnityEngine::ProBuilder::Vertex*, UnityEngine::Vector3>* _get_$$9__14_1();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Vertex,UnityEngine.Vector3> <>9__14_1
    static void _set_$$9__14_1(System::Func_2<UnityEngine::ProBuilder::Vertex*, UnityEngine::Vector3>* value);
    // static private System.Void .cctor()
    // Offset: 0x14651D8
    static void _cctor();
    // System.Int32 <CreateShapeFromPolygon>b__7_0(UnityEngine.Vector3[] arr)
    // Offset: 0x1465248
    int $CreateShapeFromPolygon$b__7_0(::Array<UnityEngine::Vector3>* arr);
    // UnityEngine.Vector3 <AppendVerticesToEdge>b__14_1(UnityEngine.ProBuilder.Vertex x)
    // Offset: 0x1465260
    UnityEngine::Vector3 $AppendVerticesToEdge$b__14_1(UnityEngine::ProBuilder::Vertex* x);
    // public System.Void .ctor()
    // Offset: 0x1465240
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AppendElements::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshOperations::AppendElements::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AppendElements::$$c*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.MeshOperations.AppendElements/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::AppendElements::$$c*, "UnityEngine.ProBuilder.MeshOperations", "AppendElements/<>c");
