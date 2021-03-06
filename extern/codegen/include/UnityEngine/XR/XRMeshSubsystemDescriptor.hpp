// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.IntegratedSubsystemDescriptor`1
#include "UnityEngine/IntegratedSubsystemDescriptor_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRMeshSubsystem
  class XRMeshSubsystem;
}
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.XR.XRMeshSubsystemDescriptor
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: CE0AD8
  // [UsedByNativeCodeAttribute] Offset: CE0AD8
  // [NativeTypeAttribute] Offset: CE0AD8
  class XRMeshSubsystemDescriptor : public UnityEngine::IntegratedSubsystemDescriptor_1<UnityEngine::XR::XRMeshSubsystem*> {
    public:
    // Creating value type constructor for type: XRMeshSubsystemDescriptor
    XRMeshSubsystemDescriptor() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x22C4420
    // Implemented from: UnityEngine.IntegratedSubsystemDescriptor`1
    // Base method: System.Void IntegratedSubsystemDescriptor_1::.ctor()
    // Base method: System.Void IntegratedSubsystemDescriptor::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRMeshSubsystemDescriptor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::XR::XRMeshSubsystemDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRMeshSubsystemDescriptor*, creationType>()));
    }
  }; // UnityEngine.XR.XRMeshSubsystemDescriptor
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::XRMeshSubsystemDescriptor*, "UnityEngine.XR", "XRMeshSubsystemDescriptor");
