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
  // Forward declaring type: Animator
  class Animator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MarkableUIButton
  class MarkableUIButton : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Animator _animator
    // Offset: 0x18
    UnityEngine::Animator* animator;
    // private System.Boolean _marked
    // Offset: 0x20
    bool marked;
    // private System.Int32 _markedTriggerId
    // Offset: 0x24
    int markedTriggerId;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_marked()
    // Offset: 0x103789C
    bool get_marked();
    // public System.Void set_marked(System.Boolean value)
    // Offset: 0x10378A4
    void set_marked(bool value);
    // protected System.Void Awake()
    // Offset: 0x10378D0
    void Awake();
    // public System.Void ToggleMarked()
    // Offset: 0x1037928
    void ToggleMarked();
    // public System.Void .ctor()
    // Offset: 0x1037938
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MarkableUIButton* New_ctor();
  }; // MarkableUIButton
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MarkableUIButton*, "", "MarkableUIButton");
#pragma pack(pop)
