// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext
#include "UnityEngine/ProBuilder/Poly2Tri/TriangulationDebugContext.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: DelaunayTriangle
  class DelaunayTriangle;
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
  // Forward declaring type: AdvancingFrontNode
  class AdvancingFrontNode;
  // Forward declaring type: DTSweepConstraint
  class DTSweepConstraint;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext
  class DTSweepDebugContext : public UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext {
    public:
    // private UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle _primaryTriangle
    // Offset: 0x18
    UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* primaryTriangle;
    // private UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle _secondaryTriangle
    // Offset: 0x20
    UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* secondaryTriangle;
    // private UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint _activePoint
    // Offset: 0x28
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* activePoint;
    // private UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode _activeNode
    // Offset: 0x30
    UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* activeNode;
    // private UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint _activeConstraint
    // Offset: 0x38
    UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* activeConstraint;
    // Deleting conversion operator: operator UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*
    constexpr operator UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*() const noexcept = delete;
    // public System.Void set_PrimaryTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle value)
    // Offset: 0x19AD9B0
    void set_PrimaryTriangle(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* value);
    // public System.Void set_SecondaryTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle value)
    // Offset: 0x19AEBF8
    void set_SecondaryTriangle(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* value);
    // public System.Void set_ActivePoint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint value)
    // Offset: 0x19B0538
    void set_ActivePoint(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);
    // public System.Void set_ActiveNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode value)
    // Offset: 0x19ACF20
    void set_ActiveNode(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* value);
    // public System.Void set_ActiveConstraint(UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint value)
    // Offset: 0x19AC10C
    void set_ActiveConstraint(UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* value);
    // public override System.Void Clear()
    // Offset: 0x19B05A0
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext
    // Base method: System.Void TriangulationDebugContext::Clear()
    void Clear();
  }; // UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweepDebugContext");
#pragma pack(pop)
