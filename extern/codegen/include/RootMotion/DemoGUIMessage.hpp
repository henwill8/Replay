// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Type namespace: RootMotion
namespace RootMotion {
  // Autogenerated type: RootMotion.DemoGUIMessage
  class DemoGUIMessage : public UnityEngine::MonoBehaviour {
    public:
    // public System.String text
    // Offset: 0x18
    ::Il2CppString* text;
    // public UnityEngine.Color color
    // Offset: 0x20
    UnityEngine::Color color;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void OnGUI()
    // Offset: 0x1748C44
    void OnGUI();
    // public System.Void .ctor()
    // Offset: 0x1748D84
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static DemoGUIMessage* New_ctor();
  }; // RootMotion.DemoGUIMessage
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::DemoGUIMessage*, "RootMotion", "DemoGUIMessage");
#pragma pack(pop)
