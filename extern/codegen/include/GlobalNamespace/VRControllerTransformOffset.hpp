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
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VRControllerTransformOffset
  class VRControllerTransformOffset : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.Vector3 get_positionOffset()
    // Offset: 0xFFFFFFFF
    UnityEngine::Vector3 get_positionOffset();
    // public UnityEngine.Vector3 get_rotationOffset()
    // Offset: 0xFFFFFFFF
    UnityEngine::Vector3 get_rotationOffset();
    // protected System.Void .ctor()
    // Offset: 0x19D0C30
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static VRControllerTransformOffset* New_ctor();
  }; // VRControllerTransformOffset
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllerTransformOffset*, "", "VRControllerTransformOffset");
#pragma pack(pop)
