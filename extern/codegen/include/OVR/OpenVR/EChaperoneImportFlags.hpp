// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.EChaperoneImportFlags
  struct EChaperoneImportFlags : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: EChaperoneImportFlags
    constexpr EChaperoneImportFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EChaperoneImportFlags EChaperoneImport_BoundsOnly
    static constexpr const int EChaperoneImport_BoundsOnly = 1;
    // Get static field: static public OVR.OpenVR.EChaperoneImportFlags EChaperoneImport_BoundsOnly
    static OVR::OpenVR::EChaperoneImportFlags _get_EChaperoneImport_BoundsOnly();
    // Set static field: static public OVR.OpenVR.EChaperoneImportFlags EChaperoneImport_BoundsOnly
    static void _set_EChaperoneImport_BoundsOnly(OVR::OpenVR::EChaperoneImportFlags value);
  }; // OVR.OpenVR.EChaperoneImportFlags
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EChaperoneImportFlags, "OVR.OpenVR", "EChaperoneImportFlags");
#pragma pack(pop)
