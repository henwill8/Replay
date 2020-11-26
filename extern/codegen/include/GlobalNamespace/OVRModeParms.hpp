// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRInput/RawButton
#include "GlobalNamespace/OVRInput_RawButton.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRModeParms
  class OVRModeParms : public UnityEngine::MonoBehaviour {
    public:
    // public OVRInput/RawButton resetButton
    // Offset: 0x18
    GlobalNamespace::OVRInput::RawButton resetButton;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Start()
    // Offset: 0x1231C50
    void Start();
    // private System.Void Update()
    // Offset: 0x1231CF0
    void Update();
    // private System.Void TestPowerStateMode()
    // Offset: 0x1231E70
    void TestPowerStateMode();
    // public System.Void .ctor()
    // Offset: 0x1231FAC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRModeParms* New_ctor();
  }; // OVRModeParms
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRModeParms*, "", "OVRModeParms");
#pragma pack(pop)
