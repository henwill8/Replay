// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Xft
namespace Xft {
  // Forward declaring type: Spline
  class Spline;
}
// Completed forward declares
// Type namespace: Xft
namespace Xft {
  // Autogenerated type: Xft.SplineControlPoint
  class SplineControlPoint : public ::Il2CppObject {
    public:
    // public UnityEngine.Vector3 Position
    // Offset: 0x10
    UnityEngine::Vector3 Position;
    // public UnityEngine.Vector3 Normal
    // Offset: 0x1C
    UnityEngine::Vector3 Normal;
    // public System.Int32 ControlPointIndex
    // Offset: 0x28
    int ControlPointIndex;
    // public System.Int32 SegmentIndex
    // Offset: 0x2C
    int SegmentIndex;
    // public System.Single Dist
    // Offset: 0x30
    float Dist;
    // protected Xft.Spline mSpline
    // Offset: 0x38
    Xft::Spline* mSpline;
    // public Xft.SplineControlPoint get_NextControlPoint()
    // Offset: 0xC575B8
    Xft::SplineControlPoint* get_NextControlPoint();
    // public Xft.SplineControlPoint get_PreviousControlPoint()
    // Offset: 0xC575D4
    Xft::SplineControlPoint* get_PreviousControlPoint();
    // public UnityEngine.Vector3 get_NextPosition()
    // Offset: 0xC575F0
    UnityEngine::Vector3 get_NextPosition();
    // public UnityEngine.Vector3 get_PreviousPosition()
    // Offset: 0xC5760C
    UnityEngine::Vector3 get_PreviousPosition();
    // public UnityEngine.Vector3 get_NextNormal()
    // Offset: 0xC57628
    UnityEngine::Vector3 get_NextNormal();
    // public UnityEngine.Vector3 get_PreviousNormal()
    // Offset: 0xC57644
    UnityEngine::Vector3 get_PreviousNormal();
    // public System.Boolean get_IsValid()
    // Offset: 0xC574F4
    bool get_IsValid();
    // private UnityEngine.Vector3 GetNext2Position()
    // Offset: 0xC57660
    UnityEngine::Vector3 GetNext2Position();
    // private UnityEngine.Vector3 GetNext2Normal()
    // Offset: 0xC57688
    UnityEngine::Vector3 GetNext2Normal();
    // public UnityEngine.Vector3 Interpolate(System.Single localF)
    // Offset: 0xC56E00
    UnityEngine::Vector3 Interpolate(float localF);
    // public UnityEngine.Vector3 InterpolateNormal(System.Single localF)
    // Offset: 0xC56F30
    UnityEngine::Vector3 InterpolateNormal(float localF);
    // public System.Void Init(Xft.Spline owner)
    // Offset: 0xC5713C
    void Init(Xft::Spline* owner);
    // public System.Void .ctor()
    // Offset: 0xC5712C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SplineControlPoint* New_ctor();
  }; // Xft.SplineControlPoint
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Xft::SplineControlPoint*, "Xft", "SplineControlPoint");
#pragma pack(pop)
