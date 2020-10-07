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
  // Autogenerated type: Valve.VR.EVRSubmitFlags
  struct EVRSubmitFlags : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: EVRSubmitFlags
    constexpr EVRSubmitFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVRSubmitFlags Submit_Default
    static constexpr const int Submit_Default = 0;
    // Get static field: static public Valve.VR.EVRSubmitFlags Submit_Default
    static Valve::VR::EVRSubmitFlags _get_Submit_Default();
    // Set static field: static public Valve.VR.EVRSubmitFlags Submit_Default
    static void _set_Submit_Default(Valve::VR::EVRSubmitFlags value);
    // static field const value: static public Valve.VR.EVRSubmitFlags Submit_LensDistortionAlreadyApplied
    static constexpr const int Submit_LensDistortionAlreadyApplied = 1;
    // Get static field: static public Valve.VR.EVRSubmitFlags Submit_LensDistortionAlreadyApplied
    static Valve::VR::EVRSubmitFlags _get_Submit_LensDistortionAlreadyApplied();
    // Set static field: static public Valve.VR.EVRSubmitFlags Submit_LensDistortionAlreadyApplied
    static void _set_Submit_LensDistortionAlreadyApplied(Valve::VR::EVRSubmitFlags value);
    // static field const value: static public Valve.VR.EVRSubmitFlags Submit_GlRenderBuffer
    static constexpr const int Submit_GlRenderBuffer = 2;
    // Get static field: static public Valve.VR.EVRSubmitFlags Submit_GlRenderBuffer
    static Valve::VR::EVRSubmitFlags _get_Submit_GlRenderBuffer();
    // Set static field: static public Valve.VR.EVRSubmitFlags Submit_GlRenderBuffer
    static void _set_Submit_GlRenderBuffer(Valve::VR::EVRSubmitFlags value);
    // static field const value: static public Valve.VR.EVRSubmitFlags Submit_Reserved
    static constexpr const int Submit_Reserved = 4;
    // Get static field: static public Valve.VR.EVRSubmitFlags Submit_Reserved
    static Valve::VR::EVRSubmitFlags _get_Submit_Reserved();
    // Set static field: static public Valve.VR.EVRSubmitFlags Submit_Reserved
    static void _set_Submit_Reserved(Valve::VR::EVRSubmitFlags value);
    // static field const value: static public Valve.VR.EVRSubmitFlags Submit_TextureWithPose
    static constexpr const int Submit_TextureWithPose = 8;
    // Get static field: static public Valve.VR.EVRSubmitFlags Submit_TextureWithPose
    static Valve::VR::EVRSubmitFlags _get_Submit_TextureWithPose();
    // Set static field: static public Valve.VR.EVRSubmitFlags Submit_TextureWithPose
    static void _set_Submit_TextureWithPose(Valve::VR::EVRSubmitFlags value);
    // static field const value: static public Valve.VR.EVRSubmitFlags Submit_TextureWithDepth
    static constexpr const int Submit_TextureWithDepth = 16;
    // Get static field: static public Valve.VR.EVRSubmitFlags Submit_TextureWithDepth
    static Valve::VR::EVRSubmitFlags _get_Submit_TextureWithDepth();
    // Set static field: static public Valve.VR.EVRSubmitFlags Submit_TextureWithDepth
    static void _set_Submit_TextureWithDepth(Valve::VR::EVRSubmitFlags value);
  }; // Valve.VR.EVRSubmitFlags
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRSubmitFlags, "Valve.VR", "EVRSubmitFlags");
#pragma pack(pop)
