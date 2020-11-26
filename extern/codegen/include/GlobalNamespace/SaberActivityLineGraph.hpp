// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberActivityCounter
  class SaberActivityCounter;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LineRenderer
  class LineRenderer;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SaberActivityLineGraph
  class SaberActivityLineGraph : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::SaberActivityLineGraph::$UpdateGraphCoroutine$d__12
    class $UpdateGraphCoroutine$d__12;
    // private SaberActivityCounter _saberActivityCounter
    // Offset: 0x18
    GlobalNamespace::SaberActivityCounter* saberActivityCounter;
    // private UnityEngine.LineRenderer _lineRenderer
    // Offset: 0x20
    UnityEngine::LineRenderer* lineRenderer;
    // private UnityEngine.LineRenderer _lineRenderer2
    // Offset: 0x28
    UnityEngine::LineRenderer* lineRenderer2;
    // private System.Int32 _pointCount
    // Offset: 0x30
    int pointCount;
    // private System.Single _pointDistance
    // Offset: 0x34
    float pointDistance;
    // private System.Single _scale
    // Offset: 0x38
    float scale;
    // private System.Single _updateFps
    // Offset: 0x3C
    float updateFps;
    // private UnityEngine.Vector3[] _pointPositions
    // Offset: 0x40
    ::Array<UnityEngine::Vector3>* pointPositions;
    // private System.Collections.Generic.Queue`1<System.Single> _pointsValues
    // Offset: 0x48
    System::Collections::Generic::Queue_1<float>* pointsValues;
    // private System.Collections.Generic.Queue`1<System.Single> _pointsValues2
    // Offset: 0x50
    System::Collections::Generic::Queue_1<float>* pointsValues2;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0xFBCE44
    void Awake();
    // protected System.Void Start()
    // Offset: 0xFBD040
    void Start();
    // private System.Collections.IEnumerator UpdateGraphCoroutine()
    // Offset: 0xFBD06C
    System::Collections::IEnumerator* UpdateGraphCoroutine();
    // public System.Void .ctor()
    // Offset: 0xFBD114
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SaberActivityLineGraph* New_ctor();
  }; // SaberActivityLineGraph
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberActivityLineGraph*, "", "SaberActivityLineGraph");
#pragma pack(pop)
