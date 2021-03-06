// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.IntegratedSubsystem`1
#include "UnityEngine/IntegratedSubsystem_1.hpp"
// Including type: UnityEngine.XR.MeshGenerationResult
#include "UnityEngine/XR/MeshGenerationResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRMeshSubsystemDescriptor
  class XRMeshSubsystemDescriptor;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.XR.XRMeshSubsystem
  // [] Offset: FFFFFFFF
  // [NativeConditionalAttribute] Offset: CE0A44
  // [NativeHeaderAttribute] Offset: CE0A44
  // [NativeHeaderAttribute] Offset: CE0A44
  // [UsedByNativeCodeAttribute] Offset: CE0A44
  class XRMeshSubsystem : public UnityEngine::IntegratedSubsystem_1<UnityEngine::XR::XRMeshSubsystemDescriptor*> {
    public:
    // Creating value type constructor for type: XRMeshSubsystem
    XRMeshSubsystem() noexcept {}
    // private System.Void InvokeMeshReadyDelegate(UnityEngine.XR.MeshGenerationResult result, System.Action`1<UnityEngine.XR.MeshGenerationResult> onMeshGenerationComplete)
    // Offset: 0x22C4344
    void InvokeMeshReadyDelegate(UnityEngine::XR::MeshGenerationResult result, System::Action_1<UnityEngine::XR::MeshGenerationResult>* onMeshGenerationComplete);
    // public System.Void .ctor()
    // Offset: 0x22C43D0
    // Implemented from: UnityEngine.IntegratedSubsystem`1
    // Base method: System.Void IntegratedSubsystem_1::.ctor()
    // Base method: System.Void IntegratedSubsystem::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRMeshSubsystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::XR::XRMeshSubsystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRMeshSubsystem*, creationType>()));
    }
  }; // UnityEngine.XR.XRMeshSubsystem
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::XRMeshSubsystem*, "UnityEngine.XR", "XRMeshSubsystem");
