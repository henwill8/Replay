// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Vertex
  class Vertex;
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: MeshTopology
  struct MeshTopology;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.MeshUtility
  class MeshUtility : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::MeshUtility::$$c
    class $$c;
    // static UnityEngine.ProBuilder.Vertex[] GeneratePerTriangleMesh(UnityEngine.Mesh mesh)
    // Offset: 0x102D530
    static ::Array<UnityEngine::ProBuilder::Vertex*>* GeneratePerTriangleMesh(UnityEngine::Mesh* mesh);
    // static public System.Void GenerateTangent(UnityEngine.Mesh mesh)
    // Offset: 0x102D8A8
    static void GenerateTangent(UnityEngine::Mesh* mesh);
    // static public UnityEngine.Mesh DeepCopy(UnityEngine.Mesh source)
    // Offset: 0x102DF10
    static UnityEngine::Mesh* DeepCopy(UnityEngine::Mesh* source);
    // static public System.Void CopyTo(UnityEngine.Mesh source, UnityEngine.Mesh destination)
    // Offset: 0x102DF7C
    static void CopyTo(UnityEngine::Mesh* source, UnityEngine::Mesh* destination);
    // static T GetMeshChannel(UnityEngine.GameObject gameObject, System.Func`2<UnityEngine.Mesh,T> attributeGetter)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T GetMeshChannel(UnityEngine::GameObject* gameObject, System::Func_2<UnityEngine::Mesh*, T>* attributeGetter) {
      static_assert(std::is_base_of_v<System::Collections::IList, std::remove_pointer_t<T>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>("UnityEngine.ProBuilder", "MeshUtility", "GetMeshChannel", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, gameObject, attributeGetter)));
    }
    // static public System.String Print(UnityEngine.Mesh mesh)
    // Offset: 0x102E414
    static ::Il2CppString* Print(UnityEngine::Mesh* mesh);
    // static public System.UInt32 GetIndexCount(UnityEngine.Mesh mesh)
    // Offset: 0x102FDF0
    static uint GetIndexCount(UnityEngine::Mesh* mesh);
    // static public System.UInt32 GetPrimitiveCount(UnityEngine.Mesh mesh)
    // Offset: 0x102FEC0
    static uint GetPrimitiveCount(UnityEngine::Mesh* mesh);
    // static public System.Void Compile(UnityEngine.ProBuilder.ProBuilderMesh probuilderMesh, UnityEngine.Mesh targetMesh, UnityEngine.MeshTopology preferredTopology)
    // Offset: 0x102FFEC
    static void Compile(UnityEngine::ProBuilder::ProBuilderMesh* probuilderMesh, UnityEngine::Mesh* targetMesh, UnityEngine::MeshTopology preferredTopology);
    // static public UnityEngine.ProBuilder.Vertex[] GetVertices(UnityEngine.Mesh mesh)
    // Offset: 0x101FCF8
    static ::Array<UnityEngine::ProBuilder::Vertex*>* GetVertices(UnityEngine::Mesh* mesh);
    // static public System.Void CollapseSharedVertices(UnityEngine.Mesh mesh, UnityEngine.ProBuilder.Vertex[] vertices)
    // Offset: 0x1030364
    static void CollapseSharedVertices(UnityEngine::Mesh* mesh, ::Array<UnityEngine::ProBuilder::Vertex*>* vertices);
    // static System.String SanityCheck(UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0x1030790
    static ::Il2CppString* SanityCheck(UnityEngine::ProBuilder::ProBuilderMesh* mesh);
    // static System.String SanityCheck(UnityEngine.Mesh mesh)
    // Offset: 0x1030A34
    static ::Il2CppString* SanityCheck(UnityEngine::Mesh* mesh);
    // static System.String SanityCheck(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Vertex> vertices)
    // Offset: 0x10307B4
    static ::Il2CppString* SanityCheck(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex*>* vertices);
  }; // UnityEngine.ProBuilder.MeshUtility
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshUtility*, "UnityEngine.ProBuilder", "MeshUtility");
#pragma pack(pop)
