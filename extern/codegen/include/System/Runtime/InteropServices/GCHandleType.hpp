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
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Autogenerated type: System.Runtime.InteropServices.GCHandleType
  struct GCHandleType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: GCHandleType
    constexpr GCHandleType(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.InteropServices.GCHandleType Weak
    static constexpr const int Weak = 0;
    // Get static field: static public System.Runtime.InteropServices.GCHandleType Weak
    static System::Runtime::InteropServices::GCHandleType _get_Weak();
    // Set static field: static public System.Runtime.InteropServices.GCHandleType Weak
    static void _set_Weak(System::Runtime::InteropServices::GCHandleType value);
    // static field const value: static public System.Runtime.InteropServices.GCHandleType WeakTrackResurrection
    static constexpr const int WeakTrackResurrection = 1;
    // Get static field: static public System.Runtime.InteropServices.GCHandleType WeakTrackResurrection
    static System::Runtime::InteropServices::GCHandleType _get_WeakTrackResurrection();
    // Set static field: static public System.Runtime.InteropServices.GCHandleType WeakTrackResurrection
    static void _set_WeakTrackResurrection(System::Runtime::InteropServices::GCHandleType value);
    // static field const value: static public System.Runtime.InteropServices.GCHandleType Normal
    static constexpr const int Normal = 2;
    // Get static field: static public System.Runtime.InteropServices.GCHandleType Normal
    static System::Runtime::InteropServices::GCHandleType _get_Normal();
    // Set static field: static public System.Runtime.InteropServices.GCHandleType Normal
    static void _set_Normal(System::Runtime::InteropServices::GCHandleType value);
    // static field const value: static public System.Runtime.InteropServices.GCHandleType Pinned
    static constexpr const int Pinned = 3;
    // Get static field: static public System.Runtime.InteropServices.GCHandleType Pinned
    static System::Runtime::InteropServices::GCHandleType _get_Pinned();
    // Set static field: static public System.Runtime.InteropServices.GCHandleType Pinned
    static void _set_Pinned(System::Runtime::InteropServices::GCHandleType value);
  }; // System.Runtime.InteropServices.GCHandleType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::GCHandleType, "System.Runtime.InteropServices", "GCHandleType");
#pragma pack(pop)
