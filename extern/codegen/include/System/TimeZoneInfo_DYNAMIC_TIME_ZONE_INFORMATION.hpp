// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.TimeZoneInfo
#include "System/TimeZoneInfo.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.TimeZoneInfo/TIME_ZONE_INFORMATION
#include "System/TimeZoneInfo_TIME_ZONE_INFORMATION.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x51
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION
  // [] Offset: FFFFFFFF
  struct TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION/*, public System::ValueType*/ {
    public:
    // System.TimeZoneInfo/TIME_ZONE_INFORMATION TZI
    // Size: 0x44
    // Offset: 0x0
    System::TimeZoneInfo::TIME_ZONE_INFORMATION TZI;
    // Field size check
    static_assert(sizeof(System::TimeZoneInfo::TIME_ZONE_INFORMATION) == 0x44);
    // Padding between fields: TZI and: TimeZoneKeyName
    char __padding0[0x4] = {};
    // System.String TimeZoneKeyName
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* TimeZoneKeyName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Byte DynamicDaylightTimeDisabled
    // Size: 0x1
    // Offset: 0x50
    uint8_t DynamicDaylightTimeDisabled;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Creating value type constructor for type: DYNAMIC_TIME_ZONE_INFORMATION
    constexpr DYNAMIC_TIME_ZONE_INFORMATION(System::TimeZoneInfo::TIME_ZONE_INFORMATION TZI_ = {}, ::Il2CppString* TimeZoneKeyName_ = {}, uint8_t DynamicDaylightTimeDisabled_ = {}) noexcept : TZI{TZI_}, TimeZoneKeyName{TimeZoneKeyName_}, DynamicDaylightTimeDisabled{DynamicDaylightTimeDisabled_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION
  #pragma pack(pop)
  static check_size<sizeof(TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION), 80 + sizeof(uint8_t)> __System_TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATIONSizeCheck;
  static_assert(sizeof(TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION) == 0x51);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::TimeZoneInfo::DYNAMIC_TIME_ZONE_INFORMATION, "System", "TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION");
