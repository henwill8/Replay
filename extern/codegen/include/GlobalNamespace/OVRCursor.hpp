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
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRCursor
  class OVRCursor : public UnityEngine::MonoBehaviour {
    public:
    // public System.Void SetCursorRay(UnityEngine.Transform ray)
    // Offset: 0xFFFFFFFF
    void SetCursorRay(UnityEngine::Transform* ray);
    // public System.Void SetCursorStartDest(UnityEngine.Vector3 start, UnityEngine.Vector3 dest, UnityEngine.Vector3 normal)
    // Offset: 0xFFFFFFFF
    void SetCursorStartDest(UnityEngine::Vector3 start, UnityEngine::Vector3 dest, UnityEngine::Vector3 normal);
    // protected System.Void .ctor()
    // Offset: 0x106E5AC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRCursor* New_ctor();
  }; // OVRCursor
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRCursor*, "", "OVRCursor");
#pragma pack(pop)
