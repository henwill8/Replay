// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRExtendedDisplay
#include "OVR/OpenVR/IVRExtendedDisplay.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVREye
  struct EVREye;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.CVRExtendedDisplay
  // [] Offset: FFFFFFFF
  class CVRExtendedDisplay : public ::Il2CppObject {
    public:
    // private OVR.OpenVR.IVRExtendedDisplay FnTable
    // Size: 0x18
    // Offset: 0x10
    OVR::OpenVR::IVRExtendedDisplay FnTable;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRExtendedDisplay) == 0x18);
    // Creating value type constructor for type: CVRExtendedDisplay
    CVRExtendedDisplay(OVR::OpenVR::IVRExtendedDisplay FnTable_ = {}) noexcept : FnTable{FnTable_} {}
    // Creating conversion operator: operator OVR::OpenVR::IVRExtendedDisplay
    constexpr operator OVR::OpenVR::IVRExtendedDisplay() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x1426CC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRExtendedDisplay* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::CVRExtendedDisplay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRExtendedDisplay*, creationType>(pInterface)));
    }
    // public System.Void GetWindowBounds(ref System.Int32 pnX, ref System.Int32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0x1426DD8
    void GetWindowBounds(int& pnX, int& pnY, uint& pnWidth, uint& pnHeight);
    // public System.Void GetEyeOutputViewport(OVR.OpenVR.EVREye eEye, ref System.UInt32 pnX, ref System.UInt32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0x1426E04
    void GetEyeOutputViewport(OVR::OpenVR::EVREye eEye, uint& pnX, uint& pnY, uint& pnWidth, uint& pnHeight);
    // public System.Void GetDXGIOutputInfo(ref System.Int32 pnAdapterIndex, ref System.Int32 pnAdapterOutputIndex)
    // Offset: 0x1426E30
    void GetDXGIOutputInfo(int& pnAdapterIndex, int& pnAdapterOutputIndex);
  }; // OVR.OpenVR.CVRExtendedDisplay
  #pragma pack(pop)
  static check_size<sizeof(CVRExtendedDisplay), 16 + sizeof(OVR::OpenVR::IVRExtendedDisplay)> __OVR_OpenVR_CVRExtendedDisplaySizeCheck;
  static_assert(sizeof(CVRExtendedDisplay) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRExtendedDisplay*, "OVR.OpenVR", "CVRExtendedDisplay");
