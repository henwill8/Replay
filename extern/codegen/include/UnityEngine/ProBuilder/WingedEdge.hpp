// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.ProBuilder.EdgeLookup
#include "UnityEngine/ProBuilder/EdgeLookup.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
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
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.WingedEdge
  class WingedEdge : public ::Il2CppObject/*, public System::IEquatable_1<UnityEngine::ProBuilder::WingedEdge*>*/ {
    public:
    // Nested type: UnityEngine::ProBuilder::WingedEdge::$$c__DisplayClass32_0
    class $$c__DisplayClass32_0;
    // Nested type: UnityEngine::ProBuilder::WingedEdge::$$c
    class $$c;
    // private UnityEngine.ProBuilder.EdgeLookup <edge>k__BackingField
    // Offset: 0x10
    UnityEngine::ProBuilder::EdgeLookup edge;
    // private UnityEngine.ProBuilder.Face <face>k__BackingField
    // Offset: 0x20
    UnityEngine::ProBuilder::Face* face;
    // private UnityEngine.ProBuilder.WingedEdge <next>k__BackingField
    // Offset: 0x28
    UnityEngine::ProBuilder::WingedEdge* next;
    // private UnityEngine.ProBuilder.WingedEdge <previous>k__BackingField
    // Offset: 0x30
    UnityEngine::ProBuilder::WingedEdge* previous;
    // private UnityEngine.ProBuilder.WingedEdge <opposite>k__BackingField
    // Offset: 0x38
    UnityEngine::ProBuilder::WingedEdge* opposite;
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::ProBuilder::WingedEdge*>
    operator System::IEquatable_1<UnityEngine::ProBuilder::WingedEdge*>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::ProBuilder::WingedEdge*>*>(this);
    }
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.Edge,UnityEngine.ProBuilder.WingedEdge> k_OppositeEdgeDictionary
    static System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Edge, UnityEngine::ProBuilder::WingedEdge*>* _get_k_OppositeEdgeDictionary();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.Edge,UnityEngine.ProBuilder.WingedEdge> k_OppositeEdgeDictionary
    static void _set_k_OppositeEdgeDictionary(System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Edge, UnityEngine::ProBuilder::WingedEdge*>* value);
    // public UnityEngine.ProBuilder.EdgeLookup get_edge()
    // Offset: 0x1955DAC
    UnityEngine::ProBuilder::EdgeLookup get_edge();
    // private System.Void set_edge(UnityEngine.ProBuilder.EdgeLookup value)
    // Offset: 0x1955DB8
    void set_edge(UnityEngine::ProBuilder::EdgeLookup value);
    // public UnityEngine.ProBuilder.Face get_face()
    // Offset: 0x1955DC0
    UnityEngine::ProBuilder::Face* get_face();
    // private System.Void set_face(UnityEngine.ProBuilder.Face value)
    // Offset: 0x1955DC8
    void set_face(UnityEngine::ProBuilder::Face* value);
    // public UnityEngine.ProBuilder.WingedEdge get_next()
    // Offset: 0x1955DD0
    UnityEngine::ProBuilder::WingedEdge* get_next();
    // private System.Void set_next(UnityEngine.ProBuilder.WingedEdge value)
    // Offset: 0x1955DD8
    void set_next(UnityEngine::ProBuilder::WingedEdge* value);
    // public UnityEngine.ProBuilder.WingedEdge get_previous()
    // Offset: 0x1955DE0
    UnityEngine::ProBuilder::WingedEdge* get_previous();
    // private System.Void set_previous(UnityEngine.ProBuilder.WingedEdge value)
    // Offset: 0x1955DE8
    void set_previous(UnityEngine::ProBuilder::WingedEdge* value);
    // public UnityEngine.ProBuilder.WingedEdge get_opposite()
    // Offset: 0x1955DF0
    UnityEngine::ProBuilder::WingedEdge* get_opposite();
    // private System.Void set_opposite(UnityEngine.ProBuilder.WingedEdge value)
    // Offset: 0x1955DF8
    void set_opposite(UnityEngine::ProBuilder::WingedEdge* value);
    // public System.Int32 Count()
    // Offset: 0x1955F50
    int Count();
    // static System.Int32[] MakeQuad(UnityEngine.ProBuilder.WingedEdge left, UnityEngine.ProBuilder.WingedEdge right)
    // Offset: 0x1956178
    static ::Array<int>* MakeQuad(UnityEngine::ProBuilder::WingedEdge* left, UnityEngine::ProBuilder::WingedEdge* right);
    // public UnityEngine.ProBuilder.WingedEdge GetAdjacentEdgeWithCommonIndex(System.Int32 common)
    // Offset: 0x1956594
    UnityEngine::ProBuilder::WingedEdge* GetAdjacentEdgeWithCommonIndex(int common);
    // static public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Edge> SortEdgesByAdjacency(UnityEngine.ProBuilder.Face face)
    // Offset: 0x195661C
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>* SortEdgesByAdjacency(UnityEngine::ProBuilder::Face* face);
    // static public System.Void SortEdgesByAdjacency(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Edge> edges)
    // Offset: 0x1956714
    static void SortEdgesByAdjacency(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>* edges);
    // static public System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge>> GetSpokes(System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge> wings)
    // Offset: 0x19568D4
    static System::Collections::Generic::Dictionary_2<int, System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>*>* GetSpokes(System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>* wings);
    // static System.Collections.Generic.List`1<System.Int32> SortCommonIndexesByAdjacency(System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge> wings, System.Collections.Generic.HashSet`1<System.Int32> common)
    // Offset: 0x1956BD0
    static System::Collections::Generic::List_1<int>* SortCommonIndexesByAdjacency(System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>* wings, System::Collections::Generic::HashSet_1<int>* common);
    // static public System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge> GetWingedEdges(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Boolean oneWingPerFace)
    // Offset: 0x1956E90
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>* GetWingedEdges(UnityEngine::ProBuilder::ProBuilderMesh* mesh, bool oneWingPerFace);
    // static public System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge> GetWingedEdges(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, System.Boolean oneWingPerFace)
    // Offset: 0x194A2B0
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>* GetWingedEdges(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces, bool oneWingPerFace);
    // static private System.Void .cctor()
    // Offset: 0x1956F84
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0x1955E00
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static WingedEdge* New_ctor();
    // public System.Boolean Equals(UnityEngine.ProBuilder.WingedEdge other)
    // Offset: 0x1955E08
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.ProBuilder.WingedEdge other)
    bool Equals(UnityEngine::ProBuilder::WingedEdge* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1955E4C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1955F24
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1955F84
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.WingedEdge
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::WingedEdge*, "UnityEngine.ProBuilder", "WingedEdge");
#pragma pack(pop)
