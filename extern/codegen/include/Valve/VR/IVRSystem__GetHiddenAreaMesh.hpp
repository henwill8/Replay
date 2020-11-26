// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: HiddenAreaMesh_t
  struct HiddenAreaMesh_t;
  // Forward declaring type: EVREye
  struct EVREye;
  // Forward declaring type: EHiddenAreaMeshType
  struct EHiddenAreaMeshType;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRSystem/_GetHiddenAreaMesh
  class IVRSystem::_GetHiddenAreaMesh : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x192B7C0
    static IVRSystem::_GetHiddenAreaMesh* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.HiddenAreaMesh_t Invoke(Valve.VR.EVREye eEye, Valve.VR.EHiddenAreaMeshType type)
    // Offset: 0x192B7D4
    Valve::VR::HiddenAreaMesh_t Invoke(Valve::VR::EVREye eEye, Valve::VR::EHiddenAreaMeshType type);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVREye eEye, Valve.VR.EHiddenAreaMeshType type, System.AsyncCallback callback, System.Object object)
    // Offset: 0x192BA68
    System::IAsyncResult* BeginInvoke(Valve::VR::EVREye eEye, Valve::VR::EHiddenAreaMeshType type, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.HiddenAreaMesh_t EndInvoke(System.IAsyncResult result)
    // Offset: 0x192BB10
    Valve::VR::HiddenAreaMesh_t EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetHiddenAreaMesh
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetHiddenAreaMesh*, "Valve.VR", "IVRSystem/_GetHiddenAreaMesh");
#pragma pack(pop)
