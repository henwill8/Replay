// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SteamVR_TrackedObject/EIndex
#include "GlobalNamespace/SteamVR_TrackedObject.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_Frustum
  class SteamVR_Frustum : public UnityEngine::MonoBehaviour {
    public:
    // public SteamVR_TrackedObject/EIndex index
    // Offset: 0x18
    GlobalNamespace::SteamVR_TrackedObject::EIndex index;
    // public System.Single fovLeft
    // Offset: 0x1C
    float fovLeft;
    // public System.Single fovRight
    // Offset: 0x20
    float fovRight;
    // public System.Single fovTop
    // Offset: 0x24
    float fovTop;
    // public System.Single fovBottom
    // Offset: 0x28
    float fovBottom;
    // public System.Single nearZ
    // Offset: 0x2C
    float nearZ;
    // public System.Single farZ
    // Offset: 0x30
    float farZ;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void UpdateModel()
    // Offset: 0x1109238
    void UpdateModel();
    // private System.Void OnDeviceConnected(System.Int32 i, System.Boolean connected)
    // Offset: 0x1109A20
    void OnDeviceConnected(int i, bool connected);
    // private System.Void OnEnable()
    // Offset: 0x1109BDC
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x1109CC4
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x1109DAC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SteamVR_Frustum* New_ctor();
  }; // SteamVR_Frustum
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Frustum*, "", "SteamVR_Frustum");
#pragma pack(pop)