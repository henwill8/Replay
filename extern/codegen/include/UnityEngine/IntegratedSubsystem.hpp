// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ISubsystem
#include "UnityEngine/ISubsystem.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ISubsystemDescriptor
  class ISubsystemDescriptor;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.IntegratedSubsystem
  class IntegratedSubsystem : public ::Il2CppObject/*, public UnityEngine::ISubsystem*/ {
    public:
    // System.IntPtr m_Ptr
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // UnityEngine.ISubsystemDescriptor m_subsystemDescriptor
    // Offset: 0x18
    UnityEngine::ISubsystemDescriptor* m_subsystemDescriptor;
    // Creating interface conversion operator: operator UnityEngine::ISubsystem
    operator UnityEngine::ISubsystem() noexcept {
      return *reinterpret_cast<UnityEngine::ISubsystem*>(this);
    }
    // System.Void SetHandle(UnityEngine.IntegratedSubsystem inst)
    // Offset: 0x1A07528
    void SetHandle(UnityEngine::IntegratedSubsystem* inst);
    // public System.Void .ctor()
    // Offset: 0x1A07578
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static IntegratedSubsystem* New_ctor();
  }; // UnityEngine.IntegratedSubsystem
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::IntegratedSubsystem*, "UnityEngine", "IntegratedSubsystem");
#pragma pack(pop)
