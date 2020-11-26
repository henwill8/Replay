// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NoteDebrisPhysics
#include "GlobalNamespace/NoteDebrisPhysics.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NoteDebrisSimplePhysics
  class NoteDebrisSimplePhysics : public GlobalNamespace::NoteDebrisPhysics {
    public:
    // private UnityEngine.Vector3 _currentForce
    // Offset: 0x18
    UnityEngine::Vector3 currentForce;
    // private UnityEngine.Vector3 _currentTorque
    // Offset: 0x24
    UnityEngine::Vector3 currentTorque;
    // private UnityEngine.Transform _transform
    // Offset: 0x30
    UnityEngine::Transform* transform;
    // private UnityEngine.Vector3 _gravity
    // Offset: 0x38
    UnityEngine::Vector3 gravity;
    // private System.Boolean _firstUpdate
    // Offset: 0x44
    bool firstUpdate;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xFE5ED0
    void Start();
    // protected System.Void LateUpdate()
    // Offset: 0xFE5F14
    void LateUpdate();
    // public override System.Void SetVelocity(UnityEngine.Vector3 force)
    // Offset: 0xFE6110
    // Implemented from: NoteDebrisPhysics
    // Base method: System.Void NoteDebrisPhysics::SetVelocity(UnityEngine.Vector3 force)
    void SetVelocity(UnityEngine::Vector3 force);
    // public override System.Void SetAngularVelocity(UnityEngine.Vector3 torque)
    // Offset: 0xFE6124
    // Implemented from: NoteDebrisPhysics
    // Base method: System.Void NoteDebrisPhysics::SetAngularVelocity(UnityEngine.Vector3 torque)
    void SetAngularVelocity(UnityEngine::Vector3 torque);
    // public System.Void .ctor()
    // Offset: 0xFE61C4
    // Implemented from: NoteDebrisPhysics
    // Base method: System.Void NoteDebrisPhysics::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NoteDebrisSimplePhysics* New_ctor();
  }; // NoteDebrisSimplePhysics
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteDebrisSimplePhysics*, "", "NoteDebrisSimplePhysics");
#pragma pack(pop)
