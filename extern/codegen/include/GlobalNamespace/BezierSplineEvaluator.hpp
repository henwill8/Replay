// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BezierCurve
#include "GlobalNamespace/BezierCurve.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BezierSpline
  class BezierSpline;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BezierSplineEvaluator
  class BezierSplineEvaluator : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BezierSplineEvaluator::CubicSolveResult
    struct CubicSolveResult;
    // private readonly System.Collections.Generic.List`1<BezierCurve> _segments
    // Offset: 0x10
    System::Collections::Generic::List_1<GlobalNamespace::BezierCurve>* segments;
    // private System.Int32 _currentSegmentIndex
    // Offset: 0x18
    int currentSegmentIndex;
    // static field const value: static private System.Single kSlightAboveOne
    static constexpr const float kSlightAboveOne = 1.0005;
    // Get static field: static private System.Single kSlightAboveOne
    static float _get_kSlightAboveOne();
    // Set static field: static private System.Single kSlightAboveOne
    static void _set_kSlightAboveOne(float value);
    // static field const value: static private System.Single kSlightBelowZero
    static constexpr const float kSlightBelowZero = -0.0005;
    // Get static field: static private System.Single kSlightBelowZero
    static float _get_kSlightBelowZero();
    // Set static field: static private System.Single kSlightBelowZero
    static void _set_kSlightBelowZero(float value);
    // public System.Void .ctor(BezierSpline spline)
    // Offset: 0x1A2CD70
    static BezierSplineEvaluator* New_ctor(GlobalNamespace::BezierSpline* spline);
    // public UnityEngine.Vector3 EvaluatePosition(System.Single time)
    // Offset: 0x1A24464
    UnityEngine::Vector3 EvaluatePosition(float time);
    // private UnityEngine.Vector3 Evaluate(System.Single t)
    // Offset: 0x1A2E1BC
    UnityEngine::Vector3 Evaluate(float t);
    // private UnityEngine.Vector3 EvaluateFirstDerivation(System.Single t)
    // Offset: 0x1A2E3F8
    UnityEngine::Vector3 EvaluateFirstDerivation(float t);
    // private UnityEngine.Vector3 EvaluateSecondDerivation(System.Single t)
    // Offset: 0x1A2E64C
    UnityEngine::Vector3 EvaluateSecondDerivation(float t);
    // public System.Single OffsetSegmentAndGetT(System.Single time)
    // Offset: 0x1A2E0A8
    float OffsetSegmentAndGetT(float time);
    // private System.Single GetTForSegment(System.Int32 segmentIndex, System.Single time)
    // Offset: 0x1A2E9D4
    float GetTForSegment(int segmentIndex, float time);
    // public System.Void GetTimeValuesForSegment(System.Int32 segmentIndex, out System.Single t0Value, out System.Single t1Value)
    // Offset: 0x1A2EFE4
    void GetTimeValuesForSegment(int segmentIndex, float& t0Value, float& t1Value);
    // private System.Void OffsetStartIndexToDistance(System.Single time)
    // Offset: 0x1A2E890
    void OffsetStartIndexToDistance(float time);
    // static private System.Single CubeRoot(System.Single x)
    // Offset: 0x1A2F0C0
    static float CubeRoot(float x);
    // static private BezierSplineEvaluator/CubicSolveResult SolveCubic(System.Single a, System.Single b, System.Single c, System.Single d)
    // Offset: 0x1A2EB44
    static GlobalNamespace::BezierSplineEvaluator::CubicSolveResult SolveCubic(float a, float b, float c, float d);
  }; // BezierSplineEvaluator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BezierSplineEvaluator*, "", "BezierSplineEvaluator");
#pragma pack(pop)
