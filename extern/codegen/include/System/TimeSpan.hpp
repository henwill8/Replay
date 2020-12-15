// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.TimeSpan
  struct TimeSpan : public System::ValueType/*, public System::IComparable, public System::IComparable_1<System::TimeSpan>, public System::IEquatable_1<System::TimeSpan>, public System::IFormattable*/ {
    public:
    // System.Int64 _ticks
    // Offset: 0x0
    int64_t ticks;
    // Creating value type constructor for type: TimeSpan
    constexpr TimeSpan(int64_t ticks_ = {}) noexcept : ticks{ticks_} {}
    // Creating interface conversion operator: operator System::IComparable
    operator System::IComparable() noexcept {
      return *reinterpret_cast<System::IComparable*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable_1<System::TimeSpan>
    operator System::IComparable_1<System::TimeSpan>() noexcept {
      return *reinterpret_cast<System::IComparable_1<System::TimeSpan>*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<System::TimeSpan>
    operator System::IEquatable_1<System::TimeSpan>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<System::TimeSpan>*>(this);
    }
    // Creating interface conversion operator: operator System::IFormattable
    operator System::IFormattable() noexcept {
      return *reinterpret_cast<System::IFormattable*>(this);
    }
    // Creating conversion operator: operator int64_t
    constexpr operator int64_t() const noexcept {
      return ticks;
    }
    // Get static field: static public readonly System.TimeSpan Zero
    static System::TimeSpan _get_Zero();
    // Set static field: static public readonly System.TimeSpan Zero
    static void _set_Zero(System::TimeSpan value);
    // Get static field: static public readonly System.TimeSpan MaxValue
    static System::TimeSpan _get_MaxValue();
    // Set static field: static public readonly System.TimeSpan MaxValue
    static void _set_MaxValue(System::TimeSpan value);
    // Get static field: static public readonly System.TimeSpan MinValue
    static System::TimeSpan _get_MinValue();
    // Set static field: static public readonly System.TimeSpan MinValue
    static void _set_MinValue(System::TimeSpan value);
    // Get static field: static private System.Boolean _legacyConfigChecked
    static bool _get__legacyConfigChecked();
    // Set static field: static private System.Boolean _legacyConfigChecked
    static void _set__legacyConfigChecked(bool value);
    // Get static field: static private System.Boolean _legacyMode
    static bool _get__legacyMode();
    // Set static field: static private System.Boolean _legacyMode
    static void _set__legacyMode(bool value);
    // public System.Void .ctor(System.Int64 ticks)
    // Offset: 0xCA3658
    // ABORTED: conflicts with another method.  TimeSpan(int64_t ticks);
    // public System.Void .ctor(System.Int32 hours, System.Int32 minutes, System.Int32 seconds)
    // Offset: 0xCA3660
    TimeSpan(int hours, int minutes, int seconds);
    // public System.Void .ctor(System.Int32 days, System.Int32 hours, System.Int32 minutes, System.Int32 seconds, System.Int32 milliseconds)
    // Offset: 0xCA3668
    TimeSpan(int days, int hours, int minutes, int seconds, int milliseconds);
    // public System.Int64 get_Ticks()
    // Offset: 0xCA3670
    int64_t get_Ticks();
    // public System.Int32 get_Hours()
    // Offset: 0xCA3678
    int get_Hours();
    // public System.Int32 get_Minutes()
    // Offset: 0xCA36C0
    int get_Minutes();
    // public System.Int32 get_Seconds()
    // Offset: 0xCA3708
    int get_Seconds();
    // public System.Double get_TotalHours()
    // Offset: 0xCA3754
    double get_TotalHours();
    // public System.Double get_TotalMilliseconds()
    // Offset: 0xCA376C
    double get_TotalMilliseconds();
    // public System.Double get_TotalMinutes()
    // Offset: 0xCA37A0
    double get_TotalMinutes();
    // public System.Double get_TotalSeconds()
    // Offset: 0xCA37B8
    double get_TotalSeconds();
    // public System.TimeSpan Add(System.TimeSpan ts)
    // Offset: 0xCA37D0
    System::TimeSpan Add(System::TimeSpan ts);
    // static public System.TimeSpan FromDays(System.Double value)
    // Offset: 0x164AE1C
    static System::TimeSpan FromDays(double value);
    // public System.TimeSpan Duration()
    // Offset: 0xCA37F4
    System::TimeSpan Duration();
    // static public System.TimeSpan FromHours(System.Double value)
    // Offset: 0x164B164
    static System::TimeSpan FromHours(double value);
    // static private System.TimeSpan Interval(System.Double value, System.Int32 scale)
    // Offset: 0x164AE90
    static System::TimeSpan Interval(double value, int scale);
    // static public System.TimeSpan FromMilliseconds(System.Double value)
    // Offset: 0x164B1D8
    static System::TimeSpan FromMilliseconds(double value);
    // static public System.TimeSpan FromMinutes(System.Double value)
    // Offset: 0x164B248
    static System::TimeSpan FromMinutes(double value);
    // public System.TimeSpan Negate()
    // Offset: 0xCA3820
    System::TimeSpan Negate();
    // static public System.TimeSpan FromSeconds(System.Double value)
    // Offset: 0x164B390
    static System::TimeSpan FromSeconds(double value);
    // public System.TimeSpan Subtract(System.TimeSpan ts)
    // Offset: 0xCA3828
    System::TimeSpan Subtract(System::TimeSpan ts);
    // static public System.TimeSpan FromTicks(System.Int64 value)
    // Offset: 0x164B4B4
    static System::TimeSpan FromTicks(int64_t value);
    // static System.Int64 TimeToTicks(System.Int32 hour, System.Int32 minute, System.Int32 second)
    // Offset: 0x164A904
    static int64_t TimeToTicks(int hour, int minute, int second);
    // public System.String ToString(System.String format)
    // Offset: 0xCA3838
    ::Il2CppString* ToString(::Il2CppString* format);
    // static private System.Boolean GetLegacyFormatMode()
    // Offset: 0x164B81C
    static bool GetLegacyFormatMode();
    // static private System.Boolean get_LegacyMode()
    // Offset: 0x164B680
    static bool get_LegacyMode();
    // static private System.Void .cctor()
    // Offset: 0x164B86C
    static void _cctor();
    // public System.Int32 CompareTo(System.Object value)
    // Offset: 0xCA37D8
    // Implemented from: System.IComparable
    // Base method: System.Int32 IComparable::CompareTo(System.Object value)
    int CompareTo(::Il2CppObject* value);
    // Creating proxy method: System_IComparable_CompareTo
    // Maps to method: CompareTo
    int System_IComparable_CompareTo(::Il2CppObject* value);
    // public System.Int32 CompareTo(System.TimeSpan value)
    // Offset: 0xCA37E0
    // Implemented from: System.IComparable`1
    // Base method: System.Int32 IComparable_1::CompareTo(System.TimeSpan value)
    int CompareTo(System::TimeSpan value);
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0xCA37FC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public System.Boolean Equals(System.TimeSpan obj)
    // Offset: 0xCA3804
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(System.TimeSpan obj)
    bool Equals(System::TimeSpan obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xCA3814
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xCA3830
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public System.String ToString(System.String format, System.IFormatProvider formatProvider)
    // Offset: 0xCA3840
    // Implemented from: System.IFormattable
    // Base method: System.String IFormattable::ToString(System.String format, System.IFormatProvider formatProvider)
    ::Il2CppString* ToString(::Il2CppString* format, System::IFormatProvider* formatProvider);
  }; // System.TimeSpan
  // static public System.TimeSpan op_Subtraction(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0x164B78C
  System::TimeSpan operator-(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.TimeSpan op_Addition(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0x164B7B0
  System::TimeSpan operator+(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.Boolean op_Equality(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0x164B7D4
  bool operator ==(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.Boolean op_Inequality(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0x164B7E0
  bool operator !=(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.Boolean op_LessThan(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0x164B7EC
  bool operator <(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.Boolean op_LessThanOrEqual(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0x164B7F8
  bool operator <=(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.Boolean op_GreaterThan(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0x164B804
  bool operator >(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.Boolean op_GreaterThanOrEqual(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0x164B810
  bool operator >=(const System::TimeSpan& t1, const System::TimeSpan& t2);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::TimeSpan, "System", "TimeSpan");
#pragma pack(pop)