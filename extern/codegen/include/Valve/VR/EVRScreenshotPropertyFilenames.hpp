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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.EVRScreenshotPropertyFilenames
  struct EVRScreenshotPropertyFilenames : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: EVRScreenshotPropertyFilenames
    constexpr EVRScreenshotPropertyFilenames(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVRScreenshotPropertyFilenames Preview
    static constexpr const int Preview = 0;
    // Get static field: static public Valve.VR.EVRScreenshotPropertyFilenames Preview
    static Valve::VR::EVRScreenshotPropertyFilenames _get_Preview();
    // Set static field: static public Valve.VR.EVRScreenshotPropertyFilenames Preview
    static void _set_Preview(Valve::VR::EVRScreenshotPropertyFilenames value);
    // static field const value: static public Valve.VR.EVRScreenshotPropertyFilenames VR
    static constexpr const int VR = 1;
    // Get static field: static public Valve.VR.EVRScreenshotPropertyFilenames VR
    static Valve::VR::EVRScreenshotPropertyFilenames _get_VR();
    // Set static field: static public Valve.VR.EVRScreenshotPropertyFilenames VR
    static void _set_VR(Valve::VR::EVRScreenshotPropertyFilenames value);
  }; // Valve.VR.EVRScreenshotPropertyFilenames
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRScreenshotPropertyFilenames, "Valve.VR", "EVRScreenshotPropertyFilenames");
#pragma pack(pop)
