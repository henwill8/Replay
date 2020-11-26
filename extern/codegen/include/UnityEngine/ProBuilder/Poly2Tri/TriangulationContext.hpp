// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Poly2Tri.TriangulationMode
#include "UnityEngine/ProBuilder/Poly2Tri/TriangulationMode.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: TriangulationDebugContext
  class TriangulationDebugContext;
  // Forward declaring type: DelaunayTriangle
  class DelaunayTriangle;
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
  // Forward declaring type: Triangulatable
  class Triangulatable;
  // Forward declaring type: TriangulationConstraint
  class TriangulationConstraint;
  // Forward declaring type: DTSweepDebugContext
  class DTSweepDebugContext;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
  class TriangulationContext : public ::Il2CppObject {
    public:
    // private UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext <DebugContext>k__BackingField
    // Offset: 0x10
    UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext* DebugContext;
    // public readonly System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> Triangles
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* Triangles;
    // public readonly System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> Points
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* Points;
    // private UnityEngine.ProBuilder.Poly2Tri.TriangulationMode <TriangulationMode>k__BackingField
    // Offset: 0x28
    UnityEngine::ProBuilder::Poly2Tri::TriangulationMode TriangulationMode;
    // private UnityEngine.ProBuilder.Poly2Tri.Triangulatable <Triangulatable>k__BackingField
    // Offset: 0x30
    UnityEngine::ProBuilder::Poly2Tri::Triangulatable* Triangulatable;
    // private System.Int32 <StepCount>k__BackingField
    // Offset: 0x38
    int StepCount;
    // private System.Boolean <IsDebugEnabled>k__BackingField
    // Offset: 0x3C
    bool IsDebugEnabled;
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext get_DebugContext()
    // Offset: 0x19B1D6C
    UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext* get_DebugContext();
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationMode get_TriangulationMode()
    // Offset: 0x19B1D74
    UnityEngine::ProBuilder::Poly2Tri::TriangulationMode get_TriangulationMode();
    // protected System.Void set_TriangulationMode(UnityEngine.ProBuilder.Poly2Tri.TriangulationMode value)
    // Offset: 0x19B1D7C
    void set_TriangulationMode(UnityEngine::ProBuilder::Poly2Tri::TriangulationMode value);
    // public UnityEngine.ProBuilder.Poly2Tri.Triangulatable get_Triangulatable()
    // Offset: 0x19B1D84
    UnityEngine::ProBuilder::Poly2Tri::Triangulatable* get_Triangulatable();
    // private System.Void set_Triangulatable(UnityEngine.ProBuilder.Poly2Tri.Triangulatable value)
    // Offset: 0x19B1D8C
    void set_Triangulatable(UnityEngine::ProBuilder::Poly2Tri::Triangulatable* value);
    // public System.Int32 get_StepCount()
    // Offset: 0x19B1D94
    int get_StepCount();
    // private System.Void set_StepCount(System.Int32 value)
    // Offset: 0x19B1D9C
    void set_StepCount(int value);
    // public System.Void Done()
    // Offset: 0x19ABF44
    void Done();
    // public System.Void PrepareTriangulation(UnityEngine.ProBuilder.Poly2Tri.Triangulatable t)
    // Offset: 0x19B0354
    void PrepareTriangulation(UnityEngine::ProBuilder::Poly2Tri::Triangulatable* t);
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint NewConstraint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint a, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint b)
    // Offset: 0xFFFFFFFF
    UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint* NewConstraint(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* b);
    // public System.Void Update(System.String message)
    // Offset: 0x19AC344
    void Update(::Il2CppString* message);
    // public System.Void Clear()
    // Offset: 0x19B00A0
    void Clear();
    // public System.Boolean get_IsDebugEnabled()
    // Offset: 0x19B1DA4
    bool get_IsDebugEnabled();
    // public UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext get_DTDebugContext()
    // Offset: 0x19AC088
    UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext* get_DTDebugContext();
    // protected System.Void .ctor()
    // Offset: 0x19AFE58
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TriangulationContext* New_ctor();
  }; // UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationContext");
#pragma pack(pop)
