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
  // Forward declaring type: GetActiveRT
  class GetActiveRT;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SetActiveRT
  class SetActiveRT : public UnityEngine::MonoBehaviour {
    public:
    // private GetActiveRT _getActiveRT
    // Offset: 0x18
    GlobalNamespace::GetActiveRT* getActiveRT;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void OnPreRender()
    // Offset: 0xFCC004
    void OnPreRender();
    // public System.Void .ctor()
    // Offset: 0xFCC094
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SetActiveRT* New_ctor();
  }; // SetActiveRT
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SetActiveRT*, "", "SetActiveRT");
#pragma pack(pop)
