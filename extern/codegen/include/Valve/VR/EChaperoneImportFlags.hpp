// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.EChaperoneImportFlags
  // [] Offset: FFFFFFFF
  struct EChaperoneImportFlags/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EChaperoneImportFlags
    constexpr EChaperoneImportFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EChaperoneImportFlags EChaperoneImport_BoundsOnly
    static constexpr const int EChaperoneImport_BoundsOnly = 1;
    // Get static field: static public Valve.VR.EChaperoneImportFlags EChaperoneImport_BoundsOnly
    static Valve::VR::EChaperoneImportFlags _get_EChaperoneImport_BoundsOnly();
    // Set static field: static public Valve.VR.EChaperoneImportFlags EChaperoneImport_BoundsOnly
    static void _set_EChaperoneImport_BoundsOnly(Valve::VR::EChaperoneImportFlags value);
  }; // Valve.VR.EChaperoneImportFlags
  #pragma pack(pop)
  static check_size<sizeof(EChaperoneImportFlags), 0 + sizeof(int)> __Valve_VR_EChaperoneImportFlagsSizeCheck;
  static_assert(sizeof(EChaperoneImportFlags) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EChaperoneImportFlags, "Valve.VR", "EChaperoneImportFlags");
