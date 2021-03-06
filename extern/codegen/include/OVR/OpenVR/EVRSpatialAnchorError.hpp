// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.EVRSpatialAnchorError
  // [] Offset: FFFFFFFF
  struct EVRSpatialAnchorError/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EVRSpatialAnchorError
    constexpr EVRSpatialAnchorError(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EVRSpatialAnchorError Success
    static constexpr const int Success = 0;
    // Get static field: static public OVR.OpenVR.EVRSpatialAnchorError Success
    static OVR::OpenVR::EVRSpatialAnchorError _get_Success();
    // Set static field: static public OVR.OpenVR.EVRSpatialAnchorError Success
    static void _set_Success(OVR::OpenVR::EVRSpatialAnchorError value);
    // static field const value: static public OVR.OpenVR.EVRSpatialAnchorError Internal
    static constexpr const int Internal = 1;
    // Get static field: static public OVR.OpenVR.EVRSpatialAnchorError Internal
    static OVR::OpenVR::EVRSpatialAnchorError _get_Internal();
    // Set static field: static public OVR.OpenVR.EVRSpatialAnchorError Internal
    static void _set_Internal(OVR::OpenVR::EVRSpatialAnchorError value);
    // static field const value: static public OVR.OpenVR.EVRSpatialAnchorError UnknownHandle
    static constexpr const int UnknownHandle = 2;
    // Get static field: static public OVR.OpenVR.EVRSpatialAnchorError UnknownHandle
    static OVR::OpenVR::EVRSpatialAnchorError _get_UnknownHandle();
    // Set static field: static public OVR.OpenVR.EVRSpatialAnchorError UnknownHandle
    static void _set_UnknownHandle(OVR::OpenVR::EVRSpatialAnchorError value);
    // static field const value: static public OVR.OpenVR.EVRSpatialAnchorError ArrayTooSmall
    static constexpr const int ArrayTooSmall = 3;
    // Get static field: static public OVR.OpenVR.EVRSpatialAnchorError ArrayTooSmall
    static OVR::OpenVR::EVRSpatialAnchorError _get_ArrayTooSmall();
    // Set static field: static public OVR.OpenVR.EVRSpatialAnchorError ArrayTooSmall
    static void _set_ArrayTooSmall(OVR::OpenVR::EVRSpatialAnchorError value);
    // static field const value: static public OVR.OpenVR.EVRSpatialAnchorError InvalidDescriptorChar
    static constexpr const int InvalidDescriptorChar = 4;
    // Get static field: static public OVR.OpenVR.EVRSpatialAnchorError InvalidDescriptorChar
    static OVR::OpenVR::EVRSpatialAnchorError _get_InvalidDescriptorChar();
    // Set static field: static public OVR.OpenVR.EVRSpatialAnchorError InvalidDescriptorChar
    static void _set_InvalidDescriptorChar(OVR::OpenVR::EVRSpatialAnchorError value);
    // static field const value: static public OVR.OpenVR.EVRSpatialAnchorError NotYetAvailable
    static constexpr const int NotYetAvailable = 5;
    // Get static field: static public OVR.OpenVR.EVRSpatialAnchorError NotYetAvailable
    static OVR::OpenVR::EVRSpatialAnchorError _get_NotYetAvailable();
    // Set static field: static public OVR.OpenVR.EVRSpatialAnchorError NotYetAvailable
    static void _set_NotYetAvailable(OVR::OpenVR::EVRSpatialAnchorError value);
    // static field const value: static public OVR.OpenVR.EVRSpatialAnchorError NotAvailableInThisUniverse
    static constexpr const int NotAvailableInThisUniverse = 6;
    // Get static field: static public OVR.OpenVR.EVRSpatialAnchorError NotAvailableInThisUniverse
    static OVR::OpenVR::EVRSpatialAnchorError _get_NotAvailableInThisUniverse();
    // Set static field: static public OVR.OpenVR.EVRSpatialAnchorError NotAvailableInThisUniverse
    static void _set_NotAvailableInThisUniverse(OVR::OpenVR::EVRSpatialAnchorError value);
    // static field const value: static public OVR.OpenVR.EVRSpatialAnchorError PermanentlyUnavailable
    static constexpr const int PermanentlyUnavailable = 7;
    // Get static field: static public OVR.OpenVR.EVRSpatialAnchorError PermanentlyUnavailable
    static OVR::OpenVR::EVRSpatialAnchorError _get_PermanentlyUnavailable();
    // Set static field: static public OVR.OpenVR.EVRSpatialAnchorError PermanentlyUnavailable
    static void _set_PermanentlyUnavailable(OVR::OpenVR::EVRSpatialAnchorError value);
    // static field const value: static public OVR.OpenVR.EVRSpatialAnchorError WrongDriver
    static constexpr const int WrongDriver = 8;
    // Get static field: static public OVR.OpenVR.EVRSpatialAnchorError WrongDriver
    static OVR::OpenVR::EVRSpatialAnchorError _get_WrongDriver();
    // Set static field: static public OVR.OpenVR.EVRSpatialAnchorError WrongDriver
    static void _set_WrongDriver(OVR::OpenVR::EVRSpatialAnchorError value);
    // static field const value: static public OVR.OpenVR.EVRSpatialAnchorError DescriptorTooLong
    static constexpr const int DescriptorTooLong = 9;
    // Get static field: static public OVR.OpenVR.EVRSpatialAnchorError DescriptorTooLong
    static OVR::OpenVR::EVRSpatialAnchorError _get_DescriptorTooLong();
    // Set static field: static public OVR.OpenVR.EVRSpatialAnchorError DescriptorTooLong
    static void _set_DescriptorTooLong(OVR::OpenVR::EVRSpatialAnchorError value);
    // static field const value: static public OVR.OpenVR.EVRSpatialAnchorError Unknown
    static constexpr const int Unknown = 10;
    // Get static field: static public OVR.OpenVR.EVRSpatialAnchorError Unknown
    static OVR::OpenVR::EVRSpatialAnchorError _get_Unknown();
    // Set static field: static public OVR.OpenVR.EVRSpatialAnchorError Unknown
    static void _set_Unknown(OVR::OpenVR::EVRSpatialAnchorError value);
    // static field const value: static public OVR.OpenVR.EVRSpatialAnchorError NoRoomCalibration
    static constexpr const int NoRoomCalibration = 11;
    // Get static field: static public OVR.OpenVR.EVRSpatialAnchorError NoRoomCalibration
    static OVR::OpenVR::EVRSpatialAnchorError _get_NoRoomCalibration();
    // Set static field: static public OVR.OpenVR.EVRSpatialAnchorError NoRoomCalibration
    static void _set_NoRoomCalibration(OVR::OpenVR::EVRSpatialAnchorError value);
    // static field const value: static public OVR.OpenVR.EVRSpatialAnchorError InvalidArgument
    static constexpr const int InvalidArgument = 12;
    // Get static field: static public OVR.OpenVR.EVRSpatialAnchorError InvalidArgument
    static OVR::OpenVR::EVRSpatialAnchorError _get_InvalidArgument();
    // Set static field: static public OVR.OpenVR.EVRSpatialAnchorError InvalidArgument
    static void _set_InvalidArgument(OVR::OpenVR::EVRSpatialAnchorError value);
    // static field const value: static public OVR.OpenVR.EVRSpatialAnchorError UnknownDriver
    static constexpr const int UnknownDriver = 13;
    // Get static field: static public OVR.OpenVR.EVRSpatialAnchorError UnknownDriver
    static OVR::OpenVR::EVRSpatialAnchorError _get_UnknownDriver();
    // Set static field: static public OVR.OpenVR.EVRSpatialAnchorError UnknownDriver
    static void _set_UnknownDriver(OVR::OpenVR::EVRSpatialAnchorError value);
  }; // OVR.OpenVR.EVRSpatialAnchorError
  #pragma pack(pop)
  static check_size<sizeof(EVRSpatialAnchorError), 0 + sizeof(int)> __OVR_OpenVR_EVRSpatialAnchorErrorSizeCheck;
  static_assert(sizeof(EVRSpatialAnchorError) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRSpatialAnchorError, "OVR.OpenVR", "EVRSpatialAnchorError");
