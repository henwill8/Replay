// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.DepthTextureMode
#include "UnityEngine/DepthTextureMode.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: EnableDepthTextureMode
  class EnableDepthTextureMode : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.DepthTextureMode _depthTextureMode
    // Offset: 0x18
    UnityEngine::DepthTextureMode depthTextureMode;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0xBE9620
    void Awake();
    // public System.Void .ctor()
    // Offset: 0xBE9684
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static EnableDepthTextureMode* New_ctor();
  }; // EnableDepthTextureMode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnableDepthTextureMode*, "", "EnableDepthTextureMode");
#pragma pack(pop)
