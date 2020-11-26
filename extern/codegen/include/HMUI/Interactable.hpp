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
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.Interactable
  class Interactable : public UnityEngine::MonoBehaviour {
    public:
    // private System.Boolean _interactable
    // Offset: 0x18
    bool interactable;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_interactable()
    // Offset: 0x107ACB4
    bool get_interactable();
    // public System.Void set_interactable(System.Boolean value)
    // Offset: 0x107ACBC
    void set_interactable(bool value);
    // public System.Void .ctor()
    // Offset: 0x107ACC8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Interactable* New_ctor();
  }; // HMUI.Interactable
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::Interactable*, "HMUI", "Interactable");
#pragma pack(pop)
