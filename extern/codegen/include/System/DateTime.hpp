// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
// Including type: System.IConvertible
#include "System/IConvertible.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Int64
#include "System/Int64.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Double
#include "System/Double.hpp"
// Including type: System.UInt64
#include "System/UInt64.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: DateTimeKind
  struct DateTimeKind;
  // Forward declaring type: TimeSpan
  struct TimeSpan;
  // Forward declaring type: DayOfWeek
  struct DayOfWeek;
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
  // Forward declaring type: TypeCode
  struct TypeCode;
  // Forward declaring type: Decimal
  struct Decimal;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.DateTime
  struct DateTime : public System::ValueType, public System::IComparable, public System::IFormattable, public System::IConvertible, public System::Runtime::Serialization::ISerializable, public System::IComparable_1<System::DateTime>, public System::IEquatable_1<System::DateTime> {
    public:
    // private System.UInt64 dateData
    // Offset: 0x0
    uint64_t dateData;
    // Creating value type constructor for type: DateTime
    constexpr DateTime(uint64_t dateData_ = {}) noexcept : dateData{dateData_} {}
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return dateData;
    }
    // static field const value: static private System.Int64 TicksPerMillisecond
    static constexpr const int64_t TicksPerMillisecond = 10000;
    // Get static field: static private System.Int64 TicksPerMillisecond
    static int64_t _get_TicksPerMillisecond();
    // Set static field: static private System.Int64 TicksPerMillisecond
    static void _set_TicksPerMillisecond(int64_t value);
    // static field const value: static private System.Int64 TicksPerSecond
    static constexpr const int64_t TicksPerSecond = 10000000;
    // Get static field: static private System.Int64 TicksPerSecond
    static int64_t _get_TicksPerSecond();
    // Set static field: static private System.Int64 TicksPerSecond
    static void _set_TicksPerSecond(int64_t value);
    // static field const value: static private System.Int64 TicksPerMinute
    static constexpr const int64_t TicksPerMinute = 600000000;
    // Get static field: static private System.Int64 TicksPerMinute
    static int64_t _get_TicksPerMinute();
    // Set static field: static private System.Int64 TicksPerMinute
    static void _set_TicksPerMinute(int64_t value);
    // static field const value: static private System.Int64 TicksPerHour
    static constexpr const int64_t TicksPerHour = 36000000000;
    // Get static field: static private System.Int64 TicksPerHour
    static int64_t _get_TicksPerHour();
    // Set static field: static private System.Int64 TicksPerHour
    static void _set_TicksPerHour(int64_t value);
    // static field const value: static private System.Int64 TicksPerDay
    static constexpr const int64_t TicksPerDay = 864000000000;
    // Get static field: static private System.Int64 TicksPerDay
    static int64_t _get_TicksPerDay();
    // Set static field: static private System.Int64 TicksPerDay
    static void _set_TicksPerDay(int64_t value);
    // static field const value: static private System.Int32 MillisPerSecond
    static constexpr const int MillisPerSecond = 1000;
    // Get static field: static private System.Int32 MillisPerSecond
    static int _get_MillisPerSecond();
    // Set static field: static private System.Int32 MillisPerSecond
    static void _set_MillisPerSecond(int value);
    // static field const value: static private System.Int32 MillisPerMinute
    static constexpr const int MillisPerMinute = 60000;
    // Get static field: static private System.Int32 MillisPerMinute
    static int _get_MillisPerMinute();
    // Set static field: static private System.Int32 MillisPerMinute
    static void _set_MillisPerMinute(int value);
    // static field const value: static private System.Int32 MillisPerHour
    static constexpr const int MillisPerHour = 3600000;
    // Get static field: static private System.Int32 MillisPerHour
    static int _get_MillisPerHour();
    // Set static field: static private System.Int32 MillisPerHour
    static void _set_MillisPerHour(int value);
    // static field const value: static private System.Int32 MillisPerDay
    static constexpr const int MillisPerDay = 86400000;
    // Get static field: static private System.Int32 MillisPerDay
    static int _get_MillisPerDay();
    // Set static field: static private System.Int32 MillisPerDay
    static void _set_MillisPerDay(int value);
    // static field const value: static private System.Int32 DaysPerYear
    static constexpr const int DaysPerYear = 365;
    // Get static field: static private System.Int32 DaysPerYear
    static int _get_DaysPerYear();
    // Set static field: static private System.Int32 DaysPerYear
    static void _set_DaysPerYear(int value);
    // static field const value: static private System.Int32 DaysPer4Years
    static constexpr const int DaysPer4Years = 1461;
    // Get static field: static private System.Int32 DaysPer4Years
    static int _get_DaysPer4Years();
    // Set static field: static private System.Int32 DaysPer4Years
    static void _set_DaysPer4Years(int value);
    // static field const value: static private System.Int32 DaysPer100Years
    static constexpr const int DaysPer100Years = 36524;
    // Get static field: static private System.Int32 DaysPer100Years
    static int _get_DaysPer100Years();
    // Set static field: static private System.Int32 DaysPer100Years
    static void _set_DaysPer100Years(int value);
    // static field const value: static private System.Int32 DaysPer400Years
    static constexpr const int DaysPer400Years = 146097;
    // Get static field: static private System.Int32 DaysPer400Years
    static int _get_DaysPer400Years();
    // Set static field: static private System.Int32 DaysPer400Years
    static void _set_DaysPer400Years(int value);
    // static field const value: static private System.Int32 DaysTo1601
    static constexpr const int DaysTo1601 = 584388;
    // Get static field: static private System.Int32 DaysTo1601
    static int _get_DaysTo1601();
    // Set static field: static private System.Int32 DaysTo1601
    static void _set_DaysTo1601(int value);
    // static field const value: static private System.Int32 DaysTo1899
    static constexpr const int DaysTo1899 = 693593;
    // Get static field: static private System.Int32 DaysTo1899
    static int _get_DaysTo1899();
    // Set static field: static private System.Int32 DaysTo1899
    static void _set_DaysTo1899(int value);
    // static field const value: static System.Int32 DaysTo1970
    static constexpr const int DaysTo1970 = 719162;
    // Get static field: static System.Int32 DaysTo1970
    static int _get_DaysTo1970();
    // Set static field: static System.Int32 DaysTo1970
    static void _set_DaysTo1970(int value);
    // static field const value: static private System.Int32 DaysTo10000
    static constexpr const int DaysTo10000 = 3652059;
    // Get static field: static private System.Int32 DaysTo10000
    static int _get_DaysTo10000();
    // Set static field: static private System.Int32 DaysTo10000
    static void _set_DaysTo10000(int value);
    // static field const value: static System.Int64 MinTicks
    static constexpr const int64_t MinTicks = 0;
    // Get static field: static System.Int64 MinTicks
    static int64_t _get_MinTicks();
    // Set static field: static System.Int64 MinTicks
    static void _set_MinTicks(int64_t value);
    // static field const value: static System.Int64 MaxTicks
    static constexpr const int64_t MaxTicks = 3155378975999999999;
    // Get static field: static System.Int64 MaxTicks
    static int64_t _get_MaxTicks();
    // Set static field: static System.Int64 MaxTicks
    static void _set_MaxTicks(int64_t value);
    // static field const value: static private System.Int64 MaxMillis
    static constexpr const int64_t MaxMillis = 315537897600000;
    // Get static field: static private System.Int64 MaxMillis
    static int64_t _get_MaxMillis();
    // Set static field: static private System.Int64 MaxMillis
    static void _set_MaxMillis(int64_t value);
    // static field const value: static private System.Int64 FileTimeOffset
    static constexpr const int64_t FileTimeOffset = 504911232000000000;
    // Get static field: static private System.Int64 FileTimeOffset
    static int64_t _get_FileTimeOffset();
    // Set static field: static private System.Int64 FileTimeOffset
    static void _set_FileTimeOffset(int64_t value);
    // static field const value: static private System.Int64 DoubleDateOffset
    static constexpr const int64_t DoubleDateOffset = 599264352000000000;
    // Get static field: static private System.Int64 DoubleDateOffset
    static int64_t _get_DoubleDateOffset();
    // Set static field: static private System.Int64 DoubleDateOffset
    static void _set_DoubleDateOffset(int64_t value);
    // static field const value: static private System.Int64 OADateMinAsTicks
    static constexpr const int64_t OADateMinAsTicks = 31241376000000000;
    // Get static field: static private System.Int64 OADateMinAsTicks
    static int64_t _get_OADateMinAsTicks();
    // Set static field: static private System.Int64 OADateMinAsTicks
    static void _set_OADateMinAsTicks(int64_t value);
    // static field const value: static private System.Double OADateMinAsDouble
    static constexpr const double OADateMinAsDouble = -657435;
    // Get static field: static private System.Double OADateMinAsDouble
    static double _get_OADateMinAsDouble();
    // Set static field: static private System.Double OADateMinAsDouble
    static void _set_OADateMinAsDouble(double value);
    // static field const value: static private System.Double OADateMaxAsDouble
    static constexpr const double OADateMaxAsDouble = 2958466;
    // Get static field: static private System.Double OADateMaxAsDouble
    static double _get_OADateMaxAsDouble();
    // Set static field: static private System.Double OADateMaxAsDouble
    static void _set_OADateMaxAsDouble(double value);
    // static field const value: static private System.Int32 DatePartYear
    static constexpr const int DatePartYear = 0;
    // Get static field: static private System.Int32 DatePartYear
    static int _get_DatePartYear();
    // Set static field: static private System.Int32 DatePartYear
    static void _set_DatePartYear(int value);
    // static field const value: static private System.Int32 DatePartDayOfYear
    static constexpr const int DatePartDayOfYear = 1;
    // Get static field: static private System.Int32 DatePartDayOfYear
    static int _get_DatePartDayOfYear();
    // Set static field: static private System.Int32 DatePartDayOfYear
    static void _set_DatePartDayOfYear(int value);
    // static field const value: static private System.Int32 DatePartMonth
    static constexpr const int DatePartMonth = 2;
    // Get static field: static private System.Int32 DatePartMonth
    static int _get_DatePartMonth();
    // Set static field: static private System.Int32 DatePartMonth
    static void _set_DatePartMonth(int value);
    // static field const value: static private System.Int32 DatePartDay
    static constexpr const int DatePartDay = 3;
    // Get static field: static private System.Int32 DatePartDay
    static int _get_DatePartDay();
    // Set static field: static private System.Int32 DatePartDay
    static void _set_DatePartDay(int value);
    // Get static field: static private readonly System.Int32[] DaysToMonth365
    static ::Array<int>* _get_DaysToMonth365();
    // Set static field: static private readonly System.Int32[] DaysToMonth365
    static void _set_DaysToMonth365(::Array<int>* value);
    // Get static field: static private readonly System.Int32[] DaysToMonth366
    static ::Array<int>* _get_DaysToMonth366();
    // Set static field: static private readonly System.Int32[] DaysToMonth366
    static void _set_DaysToMonth366(::Array<int>* value);
    // Get static field: static public readonly System.DateTime MinValue
    static System::DateTime _get_MinValue();
    // Set static field: static public readonly System.DateTime MinValue
    static void _set_MinValue(System::DateTime value);
    // Get static field: static public readonly System.DateTime MaxValue
    static System::DateTime _get_MaxValue();
    // Set static field: static public readonly System.DateTime MaxValue
    static void _set_MaxValue(System::DateTime value);
    // static field const value: static private System.UInt64 TicksMask
    static constexpr const uint64_t TicksMask = 4611686018427387903u;
    // Get static field: static private System.UInt64 TicksMask
    static uint64_t _get_TicksMask();
    // Set static field: static private System.UInt64 TicksMask
    static void _set_TicksMask(uint64_t value);
    // static field const value: static private System.UInt64 FlagsMask
    static constexpr const uint64_t FlagsMask = 13835058055282163712u;
    // Get static field: static private System.UInt64 FlagsMask
    static uint64_t _get_FlagsMask();
    // Set static field: static private System.UInt64 FlagsMask
    static void _set_FlagsMask(uint64_t value);
    // static field const value: static private System.UInt64 LocalMask
    static constexpr const uint64_t LocalMask = 9223372036854775808u;
    // Get static field: static private System.UInt64 LocalMask
    static uint64_t _get_LocalMask();
    // Set static field: static private System.UInt64 LocalMask
    static void _set_LocalMask(uint64_t value);
    // static field const value: static private System.Int64 TicksCeiling
    static constexpr const int64_t TicksCeiling = 4611686018427387904;
    // Get static field: static private System.Int64 TicksCeiling
    static int64_t _get_TicksCeiling();
    // Set static field: static private System.Int64 TicksCeiling
    static void _set_TicksCeiling(int64_t value);
    // static field const value: static private System.UInt64 KindUnspecified
    static constexpr const uint64_t KindUnspecified = 0u;
    // Get static field: static private System.UInt64 KindUnspecified
    static uint64_t _get_KindUnspecified();
    // Set static field: static private System.UInt64 KindUnspecified
    static void _set_KindUnspecified(uint64_t value);
    // static field const value: static private System.UInt64 KindUtc
    static constexpr const uint64_t KindUtc = 4611686018427387904u;
    // Get static field: static private System.UInt64 KindUtc
    static uint64_t _get_KindUtc();
    // Set static field: static private System.UInt64 KindUtc
    static void _set_KindUtc(uint64_t value);
    // static field const value: static private System.UInt64 KindLocal
    static constexpr const uint64_t KindLocal = 9223372036854775808u;
    // Get static field: static private System.UInt64 KindLocal
    static uint64_t _get_KindLocal();
    // Set static field: static private System.UInt64 KindLocal
    static void _set_KindLocal(uint64_t value);
    // static field const value: static private System.UInt64 KindLocalAmbiguousDst
    static constexpr const uint64_t KindLocalAmbiguousDst = 13835058055282163712u;
    // Get static field: static private System.UInt64 KindLocalAmbiguousDst
    static uint64_t _get_KindLocalAmbiguousDst();
    // Set static field: static private System.UInt64 KindLocalAmbiguousDst
    static void _set_KindLocalAmbiguousDst(uint64_t value);
    // static field const value: static private System.Int32 KindShift
    static constexpr const int KindShift = 62;
    // Get static field: static private System.Int32 KindShift
    static int _get_KindShift();
    // Set static field: static private System.Int32 KindShift
    static void _set_KindShift(int value);
    // static field const value: static private System.String TicksField
    static constexpr const char* TicksField = "ticks";
    // Get static field: static private System.String TicksField
    static ::Il2CppString* _get_TicksField();
    // Set static field: static private System.String TicksField
    static void _set_TicksField(::Il2CppString* value);
    // static field const value: static private System.String DateDataField
    static constexpr const char* DateDataField = "dateData";
    // Get static field: static private System.String DateDataField
    static ::Il2CppString* _get_DateDataField();
    // Set static field: static private System.String DateDataField
    static void _set_DateDataField(::Il2CppString* value);
    // public System.Void .ctor(System.Int64 ticks)
    // Offset: 0xA40CC4
    DateTime(int64_t ticks);
    // private System.Void .ctor(System.UInt64 dateData)
    // Offset: 0xA40CCC
    // ABORTED: conflicts with another method.  DateTime(uint64_t dateData);
    // public System.Void .ctor(System.Int64 ticks, System.DateTimeKind kind)
    // Offset: 0xA40CD4
    DateTime(int64_t ticks, System::DateTimeKind kind);
    // System.Void .ctor(System.Int64 ticks, System.DateTimeKind kind, System.Boolean isAmbiguousDst)
    // Offset: 0xA40CDC
    DateTime(int64_t ticks, System::DateTimeKind kind, bool isAmbiguousDst);
    // public System.Void .ctor(System.Int32 year, System.Int32 month, System.Int32 day)
    // Offset: 0xA40CE8
    DateTime(int year, int month, int day);
    // public System.Void .ctor(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.DateTimeKind kind)
    // Offset: 0xA40CF0
    DateTime(int year, int month, int day, int hour, int minute, int second, System::DateTimeKind kind);
    // public System.Void .ctor(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond)
    // Offset: 0xA40CF8
    DateTime(int year, int month, int day, int hour, int minute, int second, int millisecond);
    // public System.Void .ctor(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, System.DateTimeKind kind)
    // Offset: 0xA40D00
    DateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, System::DateTimeKind kind);
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xA40D10
    DateTime(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // System.Int64 get_InternalTicks()
    // Offset: 0xA40D18
    int64_t get_InternalTicks();
    // private System.UInt64 get_InternalKind()
    // Offset: 0xA40D24
    uint64_t get_InternalKind();
    // public System.DateTime Add(System.TimeSpan value)
    // Offset: 0xA40D30
    System::DateTime Add(System::TimeSpan value);
    // private System.DateTime Add(System.Double value, System.Int32 scale)
    // Offset: 0xA40D38
    System::DateTime Add(double value, int scale);
    // public System.DateTime AddDays(System.Double value)
    // Offset: 0xA40D40
    System::DateTime AddDays(double value);
    // public System.DateTime AddMilliseconds(System.Double value)
    // Offset: 0xA40D50
    System::DateTime AddMilliseconds(double value);
    // public System.DateTime AddMonths(System.Int32 months)
    // Offset: 0xA40D5C
    System::DateTime AddMonths(int months);
    // public System.DateTime AddSeconds(System.Double value)
    // Offset: 0xA40D64
    System::DateTime AddSeconds(double value);
    // public System.DateTime AddTicks(System.Int64 value)
    // Offset: 0xA40D70
    System::DateTime AddTicks(int64_t value);
    // public System.DateTime AddYears(System.Int32 value)
    // Offset: 0xA40D78
    System::DateTime AddYears(int value);
    // static private System.Int64 DateToTicks(System.Int32 year, System.Int32 month, System.Int32 day)
    // Offset: 0x10D00A8
    static int64_t DateToTicks(int year, int month, int day);
    // static private System.Int64 TimeToTicks(System.Int32 hour, System.Int32 minute, System.Int32 second)
    // Offset: 0x10D03C0
    static int64_t TimeToTicks(int hour, int minute, int second);
    // static public System.Int32 DaysInMonth(System.Int32 year, System.Int32 month)
    // Offset: 0x10D12E8
    static int DaysInMonth(int year, int month);
    // static public System.DateTime FromBinary(System.Int64 dateData)
    // Offset: 0x10D17BC
    static System::DateTime FromBinary(int64_t dateData);
    // static System.DateTime FromBinaryRaw(System.Int64 dateData)
    // Offset: 0x10D19C4
    static System::DateTime FromBinaryRaw(int64_t dateData);
    // static public System.DateTime FromFileTime(System.Int64 fileTime)
    // Offset: 0x10D1A80
    static System::DateTime FromFileTime(int64_t fileTime);
    // static public System.DateTime FromFileTimeUtc(System.Int64 fileTime)
    // Offset: 0x10D1B04
    static System::DateTime FromFileTimeUtc(int64_t fileTime);
    // static public System.DateTime SpecifyKind(System.DateTime value, System.DateTimeKind kind)
    // Offset: 0x10D1CB0
    static System::DateTime SpecifyKind(System::DateTime value, System::DateTimeKind kind);
    // System.Int64 ToBinaryRaw()
    // Offset: 0xA40DC8
    int64_t ToBinaryRaw();
    // public System.DateTime get_Date()
    // Offset: 0xA40DD0
    System::DateTime get_Date();
    // private System.Int32 GetDatePart(System.Int32 part)
    // Offset: 0xA40E0C
    int GetDatePart(int part);
    // public System.Int32 get_Day()
    // Offset: 0xA40E14
    int get_Day();
    // public System.DayOfWeek get_DayOfWeek()
    // Offset: 0xA40E20
    System::DayOfWeek get_DayOfWeek();
    // public System.Int32 get_Hour()
    // Offset: 0xA40E7C
    int get_Hour();
    // public System.DateTimeKind get_Kind()
    // Offset: 0xA40EB8
    System::DateTimeKind get_Kind();
    // public System.Int32 get_Minute()
    // Offset: 0xA40EDC
    int get_Minute();
    // public System.Int32 get_Month()
    // Offset: 0xA40F18
    int get_Month();
    // static public System.DateTime get_Now()
    // Offset: 0x10D1E30
    static System::DateTime get_Now();
    // static public System.DateTime get_UtcNow()
    // Offset: 0x10D1F58
    static System::DateTime get_UtcNow();
    // static System.Int64 GetSystemTimeAsFileTime()
    // Offset: 0x10D1FD8
    static int64_t GetSystemTimeAsFileTime();
    // public System.Int32 get_Second()
    // Offset: 0xA40F24
    int get_Second();
    // public System.Int64 get_Ticks()
    // Offset: 0xA40F60
    int64_t get_Ticks();
    // public System.TimeSpan get_TimeOfDay()
    // Offset: 0xA40F6C
    System::TimeSpan get_TimeOfDay();
    // public System.Int32 get_Year()
    // Offset: 0xA40FA0
    int get_Year();
    // static public System.Boolean IsLeapYear(System.Int32 year)
    // Offset: 0x10D1624
    static bool IsLeapYear(int year);
    // static public System.DateTime Parse(System.String s, System.IFormatProvider provider)
    // Offset: 0x10CCF94
    static System::DateTime Parse(::Il2CppString* s, System::IFormatProvider* provider);
    // public System.TimeSpan Subtract(System.DateTime value)
    // Offset: 0xA40FAC
    System::TimeSpan Subtract(System::DateTime value);
    // public System.Int64 ToFileTimeUtc()
    // Offset: 0xA40FC0
    int64_t ToFileTimeUtc();
    // public System.DateTime ToLocalTime()
    // Offset: 0xA40FC8
    System::DateTime ToLocalTime();
    // System.DateTime ToLocalTime(System.Boolean throwOnOverflow)
    // Offset: 0xA40FD4
    System::DateTime ToLocalTime(bool throwOnOverflow);
    // public System.String ToString(System.String format)
    // Offset: 0xA40FE8
    ::Il2CppString* ToString(::Il2CppString* format);
    // public System.DateTime ToUniversalTime()
    // Offset: 0xA41000
    System::DateTime ToUniversalTime();
    // static System.Boolean TryCreate(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, out System.DateTime result)
    // Offset: 0x10D3624
    static bool TryCreate(int year, int month, int day, int hour, int minute, int second, int millisecond, System::DateTime& result);
    // static private System.Void .cctor()
    // Offset: 0x10D385C
    static void _cctor();
    // public System.Int32 CompareTo(System.Object value)
    // Offset: 0xA40D80
    // Implemented from: System.IComparable
    // Base method: System.Int32 IComparable::CompareTo(System.Object value)
    int CompareTo(::Il2CppObject* value);
    // Creating proxy method: System_IComparable_CompareTo
    // Maps to method: CompareTo
    int System_IComparable_CompareTo(::Il2CppObject* value);
    // public System.Int32 CompareTo(System.DateTime value)
    // Offset: 0xA40D88
    // Implemented from: System.IComparable`1
    // Base method: System.Int32 IComparable`1::CompareTo(System.DateTime value)
    int CompareTo(System::DateTime value);
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0xA40DA4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public System.Boolean Equals(System.DateTime value)
    // Offset: 0xA40DAC
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(System.DateTime value)
    bool Equals(System::DateTime value);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xA40DC0
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA40E6C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xA40FE0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public System.String ToString(System.IFormatProvider provider)
    // Offset: 0xA40FF0
    // Implemented from: System.IConvertible
    // Base method: System.String IConvertible::ToString(System.IFormatProvider provider)
    ::Il2CppString* ToString(System::IFormatProvider* provider);
    // public System.String ToString(System.String format, System.IFormatProvider provider)
    // Offset: 0xA40FF8
    // Implemented from: System.IFormattable
    // Base method: System.String IFormattable::ToString(System.String format, System.IFormatProvider provider)
    ::Il2CppString* ToString(::Il2CppString* format, System::IFormatProvider* provider);
    // public System.TypeCode GetTypeCode()
    // Offset: 0xA41010
    // Implemented from: System.IConvertible
    // Base method: System.TypeCode IConvertible::GetTypeCode()
    System::TypeCode GetTypeCode();
    // private System.Boolean System.IConvertible.ToBoolean(System.IFormatProvider provider)
    // Offset: 0xA41018
    // Implemented from: System.IConvertible
    // Base method: System.Boolean IConvertible::ToBoolean(System.IFormatProvider provider)
    bool System_IConvertible_ToBoolean(System::IFormatProvider* provider);
    // private System.Char System.IConvertible.ToChar(System.IFormatProvider provider)
    // Offset: 0xA41024
    // Implemented from: System.IConvertible
    // Base method: System.Char IConvertible::ToChar(System.IFormatProvider provider)
    ::Il2CppChar System_IConvertible_ToChar(System::IFormatProvider* provider);
    // private System.SByte System.IConvertible.ToSByte(System.IFormatProvider provider)
    // Offset: 0xA41030
    // Implemented from: System.IConvertible
    // Base method: System.SByte IConvertible::ToSByte(System.IFormatProvider provider)
    int8_t System_IConvertible_ToSByte(System::IFormatProvider* provider);
    // private System.Byte System.IConvertible.ToByte(System.IFormatProvider provider)
    // Offset: 0xA4103C
    // Implemented from: System.IConvertible
    // Base method: System.Byte IConvertible::ToByte(System.IFormatProvider provider)
    uint8_t System_IConvertible_ToByte(System::IFormatProvider* provider);
    // private System.Int16 System.IConvertible.ToInt16(System.IFormatProvider provider)
    // Offset: 0xA41048
    // Implemented from: System.IConvertible
    // Base method: System.Int16 IConvertible::ToInt16(System.IFormatProvider provider)
    int16_t System_IConvertible_ToInt16(System::IFormatProvider* provider);
    // private System.UInt16 System.IConvertible.ToUInt16(System.IFormatProvider provider)
    // Offset: 0xA41054
    // Implemented from: System.IConvertible
    // Base method: System.UInt16 IConvertible::ToUInt16(System.IFormatProvider provider)
    uint16_t System_IConvertible_ToUInt16(System::IFormatProvider* provider);
    // private System.Int32 System.IConvertible.ToInt32(System.IFormatProvider provider)
    // Offset: 0xA41060
    // Implemented from: System.IConvertible
    // Base method: System.Int32 IConvertible::ToInt32(System.IFormatProvider provider)
    int System_IConvertible_ToInt32(System::IFormatProvider* provider);
    // private System.UInt32 System.IConvertible.ToUInt32(System.IFormatProvider provider)
    // Offset: 0xA4106C
    // Implemented from: System.IConvertible
    // Base method: System.UInt32 IConvertible::ToUInt32(System.IFormatProvider provider)
    uint System_IConvertible_ToUInt32(System::IFormatProvider* provider);
    // private System.Int64 System.IConvertible.ToInt64(System.IFormatProvider provider)
    // Offset: 0xA41078
    // Implemented from: System.IConvertible
    // Base method: System.Int64 IConvertible::ToInt64(System.IFormatProvider provider)
    int64_t System_IConvertible_ToInt64(System::IFormatProvider* provider);
    // private System.UInt64 System.IConvertible.ToUInt64(System.IFormatProvider provider)
    // Offset: 0xA41084
    // Implemented from: System.IConvertible
    // Base method: System.UInt64 IConvertible::ToUInt64(System.IFormatProvider provider)
    uint64_t System_IConvertible_ToUInt64(System::IFormatProvider* provider);
    // private System.Single System.IConvertible.ToSingle(System.IFormatProvider provider)
    // Offset: 0xA41090
    // Implemented from: System.IConvertible
    // Base method: System.Single IConvertible::ToSingle(System.IFormatProvider provider)
    float System_IConvertible_ToSingle(System::IFormatProvider* provider);
    // private System.Double System.IConvertible.ToDouble(System.IFormatProvider provider)
    // Offset: 0xA4109C
    // Implemented from: System.IConvertible
    // Base method: System.Double IConvertible::ToDouble(System.IFormatProvider provider)
    double System_IConvertible_ToDouble(System::IFormatProvider* provider);
    // private System.Decimal System.IConvertible.ToDecimal(System.IFormatProvider provider)
    // Offset: 0xA410A8
    // Implemented from: System.IConvertible
    // Base method: System.Decimal IConvertible::ToDecimal(System.IFormatProvider provider)
    System::Decimal System_IConvertible_ToDecimal(System::IFormatProvider* provider);
    // private System.DateTime System.IConvertible.ToDateTime(System.IFormatProvider provider)
    // Offset: 0xA410B4
    // Implemented from: System.IConvertible
    // Base method: System.DateTime IConvertible::ToDateTime(System.IFormatProvider provider)
    System::DateTime System_IConvertible_ToDateTime(System::IFormatProvider* provider);
    // private System.Object System.IConvertible.ToType(System.Type type, System.IFormatProvider provider)
    // Offset: 0xA410BC
    // Implemented from: System.IConvertible
    // Base method: System.Object IConvertible::ToType(System.Type type, System.IFormatProvider provider)
    ::Il2CppObject* System_IConvertible_ToType(System::Type* type, System::IFormatProvider* provider);
  }; // System.DateTime
  // static public System.DateTime op_Addition(System.DateTime d, System.TimeSpan t)
  // Offset: 0x10D2700
  System::DateTime operator+(const System::DateTime& d, const System::TimeSpan& t);
  // static public System.DateTime op_Subtraction(System.DateTime d, System.TimeSpan t)
  // Offset: 0x10D27E0
  System::DateTime operator-(const System::DateTime& d, const System::TimeSpan& t);
  // static public System.TimeSpan op_Subtraction(System.DateTime d1, System.DateTime d2)
  // Offset: 0x10D28B8
  System::TimeSpan operator-(const System::DateTime& d1, const System::DateTime& d2);
  // static public System.Boolean op_Equality(System.DateTime d1, System.DateTime d2)
  // Offset: 0x10D28C8
  bool operator ==(const System::DateTime& d1, const System::DateTime& d2);
  // static public System.Boolean op_Inequality(System.DateTime d1, System.DateTime d2)
  // Offset: 0x10D28D8
  bool operator !=(const System::DateTime& d1, const System::DateTime& d2);
  // static public System.Boolean op_LessThan(System.DateTime t1, System.DateTime t2)
  // Offset: 0x10D28E8
  bool operator <(const System::DateTime& t1, const System::DateTime& t2);
  // static public System.Boolean op_LessThanOrEqual(System.DateTime t1, System.DateTime t2)
  // Offset: 0x10D28FC
  bool operator <=(const System::DateTime& t1, const System::DateTime& t2);
  // static public System.Boolean op_GreaterThan(System.DateTime t1, System.DateTime t2)
  // Offset: 0x10D2910
  bool operator >(const System::DateTime& t1, const System::DateTime& t2);
  // static public System.Boolean op_GreaterThanOrEqual(System.DateTime t1, System.DateTime t2)
  // Offset: 0x10D2924
  bool operator >=(const System::DateTime& t1, const System::DateTime& t2);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::DateTime, "System", "DateTime");
#pragma pack(pop)
