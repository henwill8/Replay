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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AlwaysVisibleQuad
  class AlwaysVisibleQuad : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Mesh _mesh
    // Offset: 0x18
    UnityEngine::Mesh* mesh;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnEnable()
    // Offset: 0x1987CBC
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1987FA0
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x1987FAC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AlwaysVisibleQuad* New_ctor();
  }; // AlwaysVisibleQuad
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AlwaysVisibleQuad*, "", "AlwaysVisibleQuad");
#pragma pack(pop)
