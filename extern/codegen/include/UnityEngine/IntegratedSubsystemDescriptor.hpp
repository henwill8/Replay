// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ISubsystemDescriptorImpl
#include "UnityEngine/ISubsystemDescriptorImpl.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.IntegratedSubsystemDescriptor
  class IntegratedSubsystemDescriptor : public ::Il2CppObject/*, public UnityEngine::ISubsystemDescriptorImpl*/ {
    public:
    // System.IntPtr m_Ptr
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Creating interface conversion operator: operator UnityEngine::ISubsystemDescriptorImpl
    operator UnityEngine::ISubsystemDescriptorImpl() noexcept {
      return *reinterpret_cast<UnityEngine::ISubsystemDescriptorImpl*>(this);
    }
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // private System.Void UnityEngine.ISubsystemDescriptorImpl.set_ptr(System.IntPtr value)
    // Offset: 0x1A07580
    // Implemented from: UnityEngine.ISubsystemDescriptorImpl
    // Base method: System.Void ISubsystemDescriptorImpl::set_ptr(System.IntPtr value)
    void UnityEngine_ISubsystemDescriptorImpl_set_ptr(System::IntPtr value);
    // protected System.Void .ctor()
    // Offset: 0x1A07588
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static IntegratedSubsystemDescriptor* New_ctor();
  }; // UnityEngine.IntegratedSubsystemDescriptor
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::IntegratedSubsystemDescriptor*, "UnityEngine", "IntegratedSubsystemDescriptor");
#pragma pack(pop)