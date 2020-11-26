// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Face
  class Face;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.SceneSelection
  class SceneSelection : public ::Il2CppObject/*, public System::IEquatable_1<UnityEngine::ProBuilder::SceneSelection*>*/ {
    public:
    // public UnityEngine.GameObject gameObject
    // Offset: 0x10
    UnityEngine::GameObject* gameObject;
    // public UnityEngine.ProBuilder.ProBuilderMesh mesh
    // Offset: 0x18
    UnityEngine::ProBuilder::ProBuilderMesh* mesh;
    // public System.Int32 vertex
    // Offset: 0x20
    int vertex;
    // public UnityEngine.ProBuilder.Edge edge
    // Offset: 0x24
    UnityEngine::ProBuilder::Edge edge;
    // public UnityEngine.ProBuilder.Face face
    // Offset: 0x30
    UnityEngine::ProBuilder::Face* face;
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::ProBuilder::SceneSelection*>
    operator System::IEquatable_1<UnityEngine::ProBuilder::SceneSelection*>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::ProBuilder::SceneSelection*>*>(this);
    }
    // public System.Void .ctor(UnityEngine.GameObject gameObject)
    // Offset: 0x13C56F8
    static SceneSelection* New_ctor(UnityEngine::GameObject* gameObject);
    // public System.Void .ctor(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32 vertex)
    // Offset: 0x13C572C
    static SceneSelection* New_ctor(UnityEngine::ProBuilder::ProBuilderMesh* mesh, int vertex);
    // public System.Void .ctor(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Edge edge)
    // Offset: 0x13C5840
    static SceneSelection* New_ctor(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Edge edge);
    // public System.Void .ctor(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face)
    // Offset: 0x13C5928
    static SceneSelection* New_ctor(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face);
    // public System.Void Clear()
    // Offset: 0x13C5A40
    void Clear();
    // public System.Void CopyTo(UnityEngine.ProBuilder.SceneSelection dst)
    // Offset: 0x13C5AE8
    void CopyTo(UnityEngine::ProBuilder::SceneSelection* dst);
    // public override System.String ToString()
    // Offset: 0x13C5B50
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public System.Boolean Equals(UnityEngine.ProBuilder.SceneSelection other)
    // Offset: 0x13C5D84
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.ProBuilder.SceneSelection other)
    bool Equals(UnityEngine::ProBuilder::SceneSelection* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x13C5E20
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x13C5F30
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.ProBuilder.SceneSelection
  // static public System.Boolean op_Equality(UnityEngine.ProBuilder.SceneSelection left, UnityEngine.ProBuilder.SceneSelection right)
  // Offset: 0x13C6070
  bool operator ==(UnityEngine::ProBuilder::SceneSelection* left, UnityEngine::ProBuilder::SceneSelection& right);
  // static public System.Boolean op_Inequality(UnityEngine.ProBuilder.SceneSelection left, UnityEngine.ProBuilder.SceneSelection right)
  // Offset: 0x13C6078
  bool operator !=(UnityEngine::ProBuilder::SceneSelection* left, UnityEngine::ProBuilder::SceneSelection& right);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SceneSelection*, "UnityEngine.ProBuilder", "SceneSelection");
#pragma pack(pop)
