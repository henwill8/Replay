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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRNativeBuffer
  class OVRNativeBuffer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRBoundary
  class OVRBoundary : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::OVRBoundary::Node
    struct Node;
    // Nested type: GlobalNamespace::OVRBoundary::BoundaryType
    struct BoundaryType;
    // Nested type: GlobalNamespace::OVRBoundary::BoundaryTestResult
    struct BoundaryTestResult;
    // private System.Collections.Generic.List`1<UnityEngine.Vector3> cachedGeometryList
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::Vector3>* cachedGeometryList;
    // Creating conversion operator: operator System::Collections::Generic::List_1<UnityEngine::Vector3>*
    constexpr operator System::Collections::Generic::List_1<UnityEngine::Vector3>*() const noexcept {
      return cachedGeometryList;
    }
    // Get static field: static private System.Int32 cachedVector3fSize
    static int _get_cachedVector3fSize();
    // Set static field: static private System.Int32 cachedVector3fSize
    static void _set_cachedVector3fSize(int value);
    // Get static field: static private OVRNativeBuffer cachedGeometryNativeBuffer
    static GlobalNamespace::OVRNativeBuffer* _get_cachedGeometryNativeBuffer();
    // Set static field: static private OVRNativeBuffer cachedGeometryNativeBuffer
    static void _set_cachedGeometryNativeBuffer(GlobalNamespace::OVRNativeBuffer* value);
    // Get static field: static private System.Single[] cachedGeometryManagedBuffer
    static ::Array<float>* _get_cachedGeometryManagedBuffer();
    // Set static field: static private System.Single[] cachedGeometryManagedBuffer
    static void _set_cachedGeometryManagedBuffer(::Array<float>* value);
    // public System.Boolean GetConfigured()
    // Offset: 0xCC887C
    bool GetConfigured();
    // public OVRBoundary/BoundaryTestResult TestNode(OVRBoundary/Node node, OVRBoundary/BoundaryType boundaryType)
    // Offset: 0xCC8920
    GlobalNamespace::OVRBoundary::BoundaryTestResult TestNode(GlobalNamespace::OVRBoundary::Node node, GlobalNamespace::OVRBoundary::BoundaryType boundaryType);
    // public OVRBoundary/BoundaryTestResult TestPoint(UnityEngine.Vector3 point, OVRBoundary/BoundaryType boundaryType)
    // Offset: 0xCC89FC
    GlobalNamespace::OVRBoundary::BoundaryTestResult TestPoint(UnityEngine::Vector3 point, GlobalNamespace::OVRBoundary::BoundaryType boundaryType);
    // public UnityEngine.Vector3[] GetGeometry(OVRBoundary/BoundaryType boundaryType)
    // Offset: 0xCC8AFC
    ::Array<UnityEngine::Vector3>* GetGeometry(GlobalNamespace::OVRBoundary::BoundaryType boundaryType);
    // public UnityEngine.Vector3 GetDimensions(OVRBoundary/BoundaryType boundaryType)
    // Offset: 0xCC8F1C
    UnityEngine::Vector3 GetDimensions(GlobalNamespace::OVRBoundary::BoundaryType boundaryType);
    // public System.Boolean GetVisible()
    // Offset: 0xCC9020
    bool GetVisible();
    // public System.Void SetVisible(System.Boolean value)
    // Offset: 0xCC90C4
    void SetVisible(bool value);
    // static private System.Void .cctor()
    // Offset: 0xCC91F0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0xCC9174
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OVRBoundary* New_ctor();
  }; // OVRBoundary
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRBoundary*, "", "OVRBoundary");
#pragma pack(pop)
