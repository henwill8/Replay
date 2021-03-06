// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVREye
  struct EVREye;
  // Forward declaring type: DistortionCoordinates_t
  struct DistortionCoordinates_t;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRSystem/_ComputeDistortion
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CFAAD4
  class IVRSystem::_ComputeDistortion : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _ComputeDistortion
    _ComputeDistortion() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2023D60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_ComputeDistortion* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_ComputeDistortion::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_ComputeDistortion*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(Valve.VR.EVREye eEye, System.Single fU, System.Single fV, ref Valve.VR.DistortionCoordinates_t pDistortionCoordinates)
    // Offset: 0x2023D74
    bool Invoke(Valve::VR::EVREye eEye, float fU, float fV, Valve::VR::DistortionCoordinates_t& pDistortionCoordinates);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVREye eEye, System.Single fU, System.Single fV, ref Valve.VR.DistortionCoordinates_t pDistortionCoordinates, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2024040
    System::IAsyncResult* BeginInvoke(Valve::VR::EVREye eEye, float fU, float fV, Valve::VR::DistortionCoordinates_t& pDistortionCoordinates, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.DistortionCoordinates_t pDistortionCoordinates, System.IAsyncResult result)
    // Offset: 0x202412C
    bool EndInvoke(Valve::VR::DistortionCoordinates_t& pDistortionCoordinates, System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_ComputeDistortion
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_ComputeDistortion*, "Valve.VR", "IVRSystem/_ComputeDistortion");
