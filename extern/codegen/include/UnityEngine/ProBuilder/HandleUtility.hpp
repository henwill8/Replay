// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Ray
  struct Ray;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: RaycastHit
  class RaycastHit;
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: CullingMode
  struct CullingMode;
  // Forward declaring type: SimpleTuple`2<T1, T2>
  template<typename T1, typename T2>
  struct SimpleTuple_2;
  // Forward declaring type: HandleOrientation
  struct HandleOrientation;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.HandleUtility
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class HandleUtility : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: HandleUtility
    HandleUtility() noexcept {}
    // static UnityEngine.Vector3 ScreenToGuiPoint(UnityEngine.Camera camera, UnityEngine.Vector3 point, System.Single pixelsPerPoint)
    // Offset: 0x19B70AC
    static UnityEngine::Vector3 ScreenToGuiPoint(UnityEngine::Camera* camera, UnityEngine::Vector3 point, float pixelsPerPoint);
    // static System.Boolean FaceRaycast(UnityEngine.Ray worldRay, UnityEngine.ProBuilder.ProBuilderMesh mesh, out UnityEngine.ProBuilder.RaycastHit hit, System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face> ignore)
    // Offset: 0x19B7124
    static bool FaceRaycast(UnityEngine::Ray worldRay, UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::RaycastHit*& hit, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>* ignore);
    // static System.Boolean FaceRaycast(UnityEngine.Ray worldRay, UnityEngine.ProBuilder.ProBuilderMesh mesh, out UnityEngine.ProBuilder.RaycastHit hit, System.Single distance, UnityEngine.ProBuilder.CullingMode cullingMode, System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face> ignore)
    // Offset: 0x19B7168
    static bool FaceRaycast(UnityEngine::Ray worldRay, UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::RaycastHit*& hit, float distance, UnityEngine::ProBuilder::CullingMode cullingMode, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>* ignore);
    // static System.Boolean FaceRaycastBothCullModes(UnityEngine.Ray worldRay, UnityEngine.ProBuilder.ProBuilderMesh mesh, ref UnityEngine.ProBuilder.SimpleTuple`2<UnityEngine.ProBuilder.Face,UnityEngine.Vector3> back, ref UnityEngine.ProBuilder.SimpleTuple`2<UnityEngine.ProBuilder.Face,UnityEngine.Vector3> front)
    // Offset: 0x19B7B54
    static bool FaceRaycastBothCullModes(UnityEngine::Ray worldRay, UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::Face*, UnityEngine::Vector3>& back, UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::Face*, UnityEngine::Vector3>& front);
    // static System.Boolean FaceRaycast(UnityEngine.Ray InWorldRay, UnityEngine.ProBuilder.ProBuilderMesh mesh, out System.Collections.Generic.List`1<UnityEngine.ProBuilder.RaycastHit> hits, UnityEngine.ProBuilder.CullingMode cullingMode, System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face> ignore)
    // Offset: 0x19B8110
    static bool FaceRaycast(UnityEngine::Ray InWorldRay, UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::List_1<UnityEngine::ProBuilder::RaycastHit*>*& hits, UnityEngine::ProBuilder::CullingMode cullingMode, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>* ignore);
    // static UnityEngine.Ray InverseTransformRay(UnityEngine.Transform transform, UnityEngine.Ray InWorldRay)
    // Offset: 0x19B8740
    static UnityEngine::Ray InverseTransformRay(UnityEngine::Transform* transform, UnityEngine::Ray InWorldRay);
    // static System.Boolean MeshRaycast(UnityEngine.Ray InWorldRay, UnityEngine.GameObject gameObject, out UnityEngine.ProBuilder.RaycastHit hit, System.Single distance)
    // Offset: 0x19B8960
    static bool MeshRaycast(UnityEngine::Ray InWorldRay, UnityEngine::GameObject* gameObject, UnityEngine::ProBuilder::RaycastHit*& hit, float distance);
    // static System.Boolean MeshRaycast(UnityEngine.Ray InRay, UnityEngine.Vector3[] mesh, System.Int32[] triangles, out UnityEngine.ProBuilder.RaycastHit hit, System.Single distance)
    // Offset: 0x19B8AF0
    static bool MeshRaycast(UnityEngine::Ray InRay, ::Array<UnityEngine::Vector3>* mesh, ::Array<int>* triangles, UnityEngine::ProBuilder::RaycastHit*& hit, float distance);
    // static System.Boolean PointIsOccluded(UnityEngine.Camera cam, UnityEngine.ProBuilder.ProBuilderMesh pb, UnityEngine.Vector3 worldPoint)
    // Offset: 0x19B9118
    static bool PointIsOccluded(UnityEngine::Camera* cam, UnityEngine::ProBuilder::ProBuilderMesh* pb, UnityEngine::Vector3 worldPoint);
    // static public UnityEngine.Quaternion GetRotation(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<System.Int32> indices)
    // Offset: 0x19B92D0
    static UnityEngine::Quaternion GetRotation(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<int>* indices);
    // static public UnityEngine.Quaternion GetFaceRotation(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.HandleOrientation orientation, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x19B98FC
    static UnityEngine::Quaternion GetFaceRotation(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::HandleOrientation orientation, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces);
    // static public UnityEngine.Quaternion GetFaceRotation(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face)
    // Offset: 0x19B9A0C
    static UnityEngine::Quaternion GetFaceRotation(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face);
    // static public UnityEngine.Quaternion GetEdgeRotation(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.HandleOrientation orientation, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges)
    // Offset: 0x19BA180
    static UnityEngine::Quaternion GetEdgeRotation(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::HandleOrientation orientation, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges);
    // static public UnityEngine.Quaternion GetEdgeRotation(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Edge edge)
    // Offset: 0x19BA290
    static UnityEngine::Quaternion GetEdgeRotation(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Edge edge);
    // static public UnityEngine.Quaternion GetVertexRotation(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.HandleOrientation orientation, System.Collections.Generic.IEnumerable`1<System.Int32> vertices)
    // Offset: 0x19BA358
    static UnityEngine::Quaternion GetVertexRotation(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::HandleOrientation orientation, System::Collections::Generic::IEnumerable_1<int>* vertices);
    // static public UnityEngine.Quaternion GetVertexRotation(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32 vertex)
    // Offset: 0x19BA46C
    static UnityEngine::Quaternion GetVertexRotation(UnityEngine::ProBuilder::ProBuilderMesh* mesh, int vertex);
    // static UnityEngine.Vector3 GetActiveElementPosition(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x19BA588
    static UnityEngine::Vector3 GetActiveElementPosition(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces);
    // static UnityEngine.Vector3 GetActiveElementPosition(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges)
    // Offset: 0x19BAE30
    static UnityEngine::Vector3 GetActiveElementPosition(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges);
    // static UnityEngine.Vector3 GetActiveElementPosition(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<System.Int32> vertices)
    // Offset: 0x19BAF40
    static UnityEngine::Vector3 GetActiveElementPosition(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<int>* vertices);
  }; // UnityEngine.ProBuilder.HandleUtility
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::HandleUtility*, "UnityEngine.ProBuilder", "HandleUtility");
