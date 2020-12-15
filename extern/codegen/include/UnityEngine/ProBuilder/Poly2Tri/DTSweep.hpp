// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: DTSweepContext
  class DTSweepContext;
  // Forward declaring type: AdvancingFrontNode
  class AdvancingFrontNode;
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
  // Forward declaring type: DTSweepConstraint
  class DTSweepConstraint;
  // Forward declaring type: DelaunayTriangle
  class DelaunayTriangle;
  // Forward declaring type: Orientation
  struct Orientation;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.DTSweep
  class DTSweep : public ::Il2CppObject {
    public:
    // static public System.Void Triangulate(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx)
    // Offset: 0x19AB7B8
    static void Triangulate(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx);
    // static private System.Void Sweep(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx)
    // Offset: 0x19ABA28
    static void Sweep(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx);
    // static private System.Void FinalizationConvexHull(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx)
    // Offset: 0x19ABCB8
    static void FinalizationConvexHull(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx);
    // static private System.Void TurnAdvancingFrontConvex(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode b, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode c)
    // Offset: 0x19AC348
    static void TurnAdvancingFrontConvex(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* b, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* c);
    // static private System.Void FinalizationPolygon(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx)
    // Offset: 0x19ABC04
    static void FinalizationPolygon(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx);
    // static private UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode PointEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x19ABF54
    static UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* PointEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // static private UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode NewFrontTriangle(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x19AD234
    static UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* NewFrontTriangle(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Void EdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint edge, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x19AC174
    static void EdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Void FillEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint edge, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x19ADAE0
    static void FillEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Void FillRightConcaveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint edge, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x19ADF44
    static void FillRightConcaveEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Void FillRightConvexEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint edge, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x19AE068
    static void FillRightConvexEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Void FillRightBelowEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint edge, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x19AE1B4
    static void FillRightBelowEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Void FillRightAboveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint edge, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x19ADD00
    static void FillRightAboveEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Void FillLeftConvexEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint edge, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x19AE304
    static void FillLeftConvexEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Void FillLeftConcaveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint edge, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x19AE448
    static void FillLeftConcaveEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Void FillLeftBelowEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint edge, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x19AE564
    static void FillLeftBelowEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Void FillLeftAboveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint edge, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x19ADE24
    static void FillLeftAboveEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Boolean IsEdgeSideOfTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle triangle, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint ep, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint eq)
    // Offset: 0x19ADA18
    static bool IsEdgeSideOfTriangle(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq);
    // static private System.Void EdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint ep, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint eq, UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle triangle, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x19ADB10
    static void EdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // static private System.Void FlipEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint ep, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint eq, UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x19AE850
    static void FlipEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // static private UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint NextFlipPoint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint ep, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint eq, UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle ot, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint op)
    // Offset: 0x19AED94
    static UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* NextFlipPoint(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* ot, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* op);
    // static private UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle NextFlipTriangle(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.Orientation o, UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t, UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle ot, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint op)
    // Offset: 0x19AECE0
    static UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NextFlipTriangle(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::Orientation o, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* ot, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* op);
    // static private System.Void FlipScanEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint ep, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint eq, UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle flipTriangle, UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x19AEEE4
    static void FlipScanEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* flipTriangle, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // static private System.Void FillAdvancingFront(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode n)
    // Offset: 0x19AD3D0
    static void FillAdvancingFront(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* n);
    // static private System.Void FillBasin(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x19AF2D0
    static void FillBasin(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Void FillBasinReq(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x19AF4FC
    static void FillBasinReq(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Boolean IsShallow(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x19AF688
    static bool IsShallow(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Double HoleAngle(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x19AF150
    static double HoleAngle(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Double BasinAngle(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x19AF224
    static double BasinAngle(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Void Fill(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x19AD088
    static void Fill(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // static private System.Boolean Legalize(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext tcx, UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t)
    // Offset: 0x19AD754
    static bool Legalize(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);
    // static private System.Void RotateTrianglePair(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p, UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle ot, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint op)
    // Offset: 0x19AC5E0
    static void RotateTrianglePair(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* ot, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* op);
  }; // UnityEngine.ProBuilder.Poly2Tri.DTSweep
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::DTSweep*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweep");
#pragma pack(pop)