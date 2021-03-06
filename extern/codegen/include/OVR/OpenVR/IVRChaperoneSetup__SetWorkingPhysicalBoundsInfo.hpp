// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperoneSetup
#include "OVR/OpenVR/IVRChaperoneSetup.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.HmdQuad_t
#include "OVR/OpenVR/HmdQuad_t.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRChaperoneSetup/_SetWorkingPhysicalBoundsInfo
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CF668C
  class IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetWorkingPhysicalBoundsInfo
    _SetWorkingPhysicalBoundsInfo() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x142DA18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(in OVR.OpenVR.HmdQuad_t[] pQuadsBuffer, System.UInt32 unQuadsCount)
    // Offset: 0x1425738
    bool Invoke(::Array<OVR::OpenVR::HmdQuad_t>*& pQuadsBuffer, uint unQuadsCount);
    // public System.IAsyncResult BeginInvoke(in OVR.OpenVR.HmdQuad_t[] pQuadsBuffer, System.UInt32 unQuadsCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x142DA2C
    System::IAsyncResult* BeginInvoke(::Array<OVR::OpenVR::HmdQuad_t>*& pQuadsBuffer, uint unQuadsCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x142DAC8
    bool EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperoneSetup/_SetWorkingPhysicalBoundsInfo
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo*, "OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingPhysicalBoundsInfo");
