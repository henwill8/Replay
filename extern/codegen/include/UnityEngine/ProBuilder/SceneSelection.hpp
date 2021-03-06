// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.SceneSelection
  // [] Offset: FFFFFFFF
  class SceneSelection : public ::Il2CppObject/*, public System::IEquatable_1<UnityEngine::ProBuilder::SceneSelection*>*/ {
    public:
    // public UnityEngine.GameObject gameObject
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::GameObject* gameObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.ProBuilder.ProBuilderMesh mesh
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::ProBuilder::ProBuilderMesh* mesh;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::ProBuilderMesh*) == 0x8);
    // public System.Int32 vertex
    // Size: 0x4
    // Offset: 0x20
    int vertex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.ProBuilder.Edge edge
    // Size: 0x8
    // Offset: 0x24
    UnityEngine::ProBuilder::Edge edge;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Edge) == 0x8);
    // Padding between fields: edge and: face
    char __padding3[0x4] = {};
    // public UnityEngine.ProBuilder.Face face
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::ProBuilder::Face* face;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Face*) == 0x8);
    // Creating value type constructor for type: SceneSelection
    SceneSelection(UnityEngine::GameObject* gameObject_ = {}, UnityEngine::ProBuilder::ProBuilderMesh* mesh_ = {}, int vertex_ = {}, UnityEngine::ProBuilder::Edge edge_ = {}, UnityEngine::ProBuilder::Face* face_ = {}) noexcept : gameObject{gameObject_}, mesh{mesh_}, vertex{vertex_}, edge{edge_}, face{face_} {}
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::ProBuilder::SceneSelection*>
    operator System::IEquatable_1<UnityEngine::ProBuilder::SceneSelection*>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::ProBuilder::SceneSelection*>*>(this);
    }
    // public System.Void .ctor(UnityEngine.GameObject gameObject)
    // Offset: 0x1666724
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneSelection* New_ctor(UnityEngine::GameObject* gameObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SceneSelection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneSelection*, creationType>(gameObject)));
    }
    // public System.Void .ctor(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32 vertex)
    // Offset: 0x1666758
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneSelection* New_ctor(UnityEngine::ProBuilder::ProBuilderMesh* mesh, int vertex) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SceneSelection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneSelection*, creationType>(mesh, vertex)));
    }
    // public System.Void .ctor(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Edge edge)
    // Offset: 0x166686C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneSelection* New_ctor(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Edge edge) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SceneSelection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneSelection*, creationType>(mesh, edge)));
    }
    // public System.Void .ctor(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face)
    // Offset: 0x1666954
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneSelection* New_ctor(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SceneSelection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneSelection*, creationType>(mesh, face)));
    }
    // public System.Void Clear()
    // Offset: 0x1666A6C
    void Clear();
    // public System.Void CopyTo(UnityEngine.ProBuilder.SceneSelection dst)
    // Offset: 0x1666B14
    void CopyTo(UnityEngine::ProBuilder::SceneSelection* dst);
    // public override System.String ToString()
    // Offset: 0x1666B7C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public System.Boolean Equals(UnityEngine.ProBuilder.SceneSelection other)
    // Offset: 0x1666DB0
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.ProBuilder.SceneSelection other)
    bool Equals(UnityEngine::ProBuilder::SceneSelection* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1666E4C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1666F5C
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.ProBuilder.SceneSelection
  #pragma pack(pop)
  static check_size<sizeof(SceneSelection), 48 + sizeof(UnityEngine::ProBuilder::Face*)> __UnityEngine_ProBuilder_SceneSelectionSizeCheck;
  static_assert(sizeof(SceneSelection) == 0x38);
  // static public System.Boolean op_Equality(UnityEngine.ProBuilder.SceneSelection left, UnityEngine.ProBuilder.SceneSelection right)
  // Offset: 0x166709C
  bool operator ==(UnityEngine::ProBuilder::SceneSelection* left, UnityEngine::ProBuilder::SceneSelection& right);
  // static public System.Boolean op_Inequality(UnityEngine.ProBuilder.SceneSelection left, UnityEngine.ProBuilder.SceneSelection right)
  // Offset: 0x16670A4
  bool operator !=(UnityEngine::ProBuilder::SceneSelection* left, UnityEngine::ProBuilder::SceneSelection& right);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SceneSelection*, "UnityEngine.ProBuilder", "SceneSelection");
