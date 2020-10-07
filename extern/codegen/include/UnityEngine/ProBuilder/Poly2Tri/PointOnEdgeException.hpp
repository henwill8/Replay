// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.NotImplementedException
#include "System/NotImplementedException.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException
  class PointOnEdgeException : public System::NotImplementedException {
    public:
    // public readonly UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint A
    // Offset: 0x88
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* A;
    // public readonly UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint B
    // Offset: 0x90
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* B;
    // public readonly UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint C
    // Offset: 0x98
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* C;
    // public System.Void .ctor(System.String message, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint a, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint b, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint c)
    // Offset: 0x19304D0
    static PointOnEdgeException* New_ctor(::Il2CppString* message, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* b, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* c);
  }; // UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException*, "UnityEngine.ProBuilder.Poly2Tri", "PointOnEdgeException");
#pragma pack(pop)
