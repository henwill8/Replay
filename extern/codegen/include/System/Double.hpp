// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
  // Forward declaring type: TypeCode
  struct TypeCode;
  // Forward declaring type: Decimal
  struct Decimal;
  // Forward declaring type: DateTime
  struct DateTime;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: NumberStyles
  struct NumberStyles;
  // Forward declaring type: NumberFormatInfo
  class NumberFormatInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Double
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CA7BEC
  struct Double/*, public System::ValueType, public System::IComparable, public System::IFormattable, public System::IConvertible, public System::IComparable_1<double>, public System::IEquatable_1<double>*/ {
    public:
    // System.Double m_value
    // Size: 0x8
    // Offset: 0x0
    double m_value;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // Creating value type constructor for type: Double
    constexpr Double(double m_value_ = {}) noexcept : m_value{m_value_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable
    operator System::IComparable() noexcept {
      return *reinterpret_cast<System::IComparable*>(this);
    }
    // Creating interface conversion operator: operator System::IFormattable
    operator System::IFormattable() noexcept {
      return *reinterpret_cast<System::IFormattable*>(this);
    }
    // Creating interface conversion operator: operator System::IConvertible
    operator System::IConvertible() noexcept {
      return *reinterpret_cast<System::IConvertible*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable_1<double>
    operator System::IComparable_1<double>() noexcept {
      return *reinterpret_cast<System::IComparable_1<double>*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<double>
    operator System::IEquatable_1<double>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<double>*>(this);
    }
    // Creating conversion operator: operator double
    constexpr operator double() const noexcept {
      return m_value;
    }
    // static field const value: static public System.Double MinValue
    static constexpr const double MinValue = -1.7976931348623157e+308;
    // Get static field: static public System.Double MinValue
    static double _get_MinValue();
    // Set static field: static public System.Double MinValue
    static void _set_MinValue(double value);
    // static field const value: static public System.Double MaxValue
    static constexpr const double MaxValue = 1.7976931348623157e+308;
    // Get static field: static public System.Double MaxValue
    static double _get_MaxValue();
    // Set static field: static public System.Double MaxValue
    static void _set_MaxValue(double value);
    // static field const value: static public System.Double Epsilon
    static constexpr const double Epsilon = 5e-324;
    // Get static field: static public System.Double Epsilon
    static double _get_Epsilon();
    // Set static field: static public System.Double Epsilon
    static void _set_Epsilon(double value);
    // Get static field: static public System.Double NegativeInfinity
    static double _get_NegativeInfinity();
    // Set static field: static public System.Double NegativeInfinity
    static void _set_NegativeInfinity(double value);
    // Get static field: static public System.Double PositiveInfinity
    static double _get_PositiveInfinity();
    // Set static field: static public System.Double PositiveInfinity
    static void _set_PositiveInfinity(double value);
    // Get static field: static public System.Double NaN
    static double _get_NaN();
    // Set static field: static public System.Double NaN
    static void _set_NaN(double value);
    // Get static field: static System.Double NegativeZero
    static double _get_NegativeZero();
    // Set static field: static System.Double NegativeZero
    static void _set_NegativeZero(double value);
    // static public System.Boolean IsInfinity(System.Double d)
    // Offset: 0x12AA2B0
    static bool IsInfinity(double d);
    // static public System.Boolean IsPositiveInfinity(System.Double d)
    // Offset: 0x12AA2C8
    static bool IsPositiveInfinity(double d);
    // static public System.Boolean IsNegativeInfinity(System.Double d)
    // Offset: 0x12AA2DC
    static bool IsNegativeInfinity(double d);
    // static public System.Boolean IsNaN(System.Double d)
    // Offset: 0x12AA2F0
    static bool IsNaN(double d);
    // public System.String ToString(System.String format)
    // Offset: 0xDF8DA4
    ::Il2CppString* ToString(::Il2CppString* format);
    // static public System.Double Parse(System.String s)
    // Offset: 0x12AA7F0
    static double Parse(::Il2CppString* s);
    // static public System.Double Parse(System.String s, System.IFormatProvider provider)
    // Offset: 0x12AA878
    static double Parse(::Il2CppString* s, System::IFormatProvider* provider);
    // static public System.Double Parse(System.String s, System.Globalization.NumberStyles style, System.IFormatProvider provider)
    // Offset: 0x12AA908
    static double Parse(::Il2CppString* s, System::Globalization::NumberStyles style, System::IFormatProvider* provider);
    // static private System.Double Parse(System.String s, System.Globalization.NumberStyles style, System.Globalization.NumberFormatInfo info)
    // Offset: 0x12AA870
    static double Parse(::Il2CppString* s, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info);
    // static public System.Boolean TryParse(System.String s, System.Globalization.NumberStyles style, System.IFormatProvider provider, out System.Double result)
    // Offset: 0x12AA9A8
    static bool TryParse(::Il2CppString* s, System::Globalization::NumberStyles style, System::IFormatProvider* provider, double& result);
    // static private System.Boolean TryParse(System.String s, System.Globalization.NumberStyles style, System.Globalization.NumberFormatInfo info, out System.Double result)
    // Offset: 0x12AAA54
    static bool TryParse(::Il2CppString* s, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info, double& result);
    // static private System.Void .cctor()
    // Offset: 0x12AB2AC
    static void _cctor();
    // public System.Int32 CompareTo(System.Object value)
    // Offset: 0xDF8D44
    // Implemented from: System.IComparable
    // Base method: System.Int32 IComparable::CompareTo(System.Object value)
    int CompareTo(::Il2CppObject* value);
    // Creating proxy method: System_IComparable_CompareTo
    // Maps to method: CompareTo
    int System_IComparable_CompareTo(::Il2CppObject* value);
    // public System.Int32 CompareTo(System.Double value)
    // Offset: 0xDF8D4C
    // Implemented from: System.IComparable`1
    // Base method: System.Int32 IComparable_1::CompareTo(System.Double value)
    int CompareTo(double value);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xDF8D54
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(System.Double obj)
    // Offset: 0xDF8D5C
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(System.Double obj)
    bool Equals(double obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xDF8D64
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xDF8D70
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public System.String ToString(System.IFormatProvider provider)
    // Offset: 0xDF8DE4
    // Implemented from: System.IConvertible
    // Base method: System.String IConvertible::ToString(System.IFormatProvider provider)
    ::Il2CppString* ToString(System::IFormatProvider* provider);
    // public System.String ToString(System.String format, System.IFormatProvider provider)
    // Offset: 0xDF8E1C
    // Implemented from: System.IFormattable
    // Base method: System.String IFormattable::ToString(System.String format, System.IFormatProvider provider)
    ::Il2CppString* ToString(::Il2CppString* format, System::IFormatProvider* provider);
    // public System.TypeCode GetTypeCode()
    // Offset: 0xDF8E60
    // Implemented from: System.IConvertible
    // Base method: System.TypeCode IConvertible::GetTypeCode()
    System::TypeCode GetTypeCode();
    // private System.Boolean System.IConvertible.ToBoolean(System.IFormatProvider provider)
    // Offset: 0xDF8E68
    // Implemented from: System.IConvertible
    // Base method: System.Boolean IConvertible::ToBoolean(System.IFormatProvider provider)
    bool System_IConvertible_ToBoolean(System::IFormatProvider* provider);
    // private System.Char System.IConvertible.ToChar(System.IFormatProvider provider)
    // Offset: 0xDF8E70
    // Implemented from: System.IConvertible
    // Base method: System.Char IConvertible::ToChar(System.IFormatProvider provider)
    ::Il2CppChar System_IConvertible_ToChar(System::IFormatProvider* provider);
    // private System.SByte System.IConvertible.ToSByte(System.IFormatProvider provider)
    // Offset: 0xDF8E7C
    // Implemented from: System.IConvertible
    // Base method: System.SByte IConvertible::ToSByte(System.IFormatProvider provider)
    int8_t System_IConvertible_ToSByte(System::IFormatProvider* provider);
    // private System.Byte System.IConvertible.ToByte(System.IFormatProvider provider)
    // Offset: 0xDF8E84
    // Implemented from: System.IConvertible
    // Base method: System.Byte IConvertible::ToByte(System.IFormatProvider provider)
    uint8_t System_IConvertible_ToByte(System::IFormatProvider* provider);
    // private System.Int16 System.IConvertible.ToInt16(System.IFormatProvider provider)
    // Offset: 0xDF8E8C
    // Implemented from: System.IConvertible
    // Base method: System.Int16 IConvertible::ToInt16(System.IFormatProvider provider)
    int16_t System_IConvertible_ToInt16(System::IFormatProvider* provider);
    // private System.UInt16 System.IConvertible.ToUInt16(System.IFormatProvider provider)
    // Offset: 0xDF8E94
    // Implemented from: System.IConvertible
    // Base method: System.UInt16 IConvertible::ToUInt16(System.IFormatProvider provider)
    uint16_t System_IConvertible_ToUInt16(System::IFormatProvider* provider);
    // private System.Int32 System.IConvertible.ToInt32(System.IFormatProvider provider)
    // Offset: 0xDF8E9C
    // Implemented from: System.IConvertible
    // Base method: System.Int32 IConvertible::ToInt32(System.IFormatProvider provider)
    int System_IConvertible_ToInt32(System::IFormatProvider* provider);
    // private System.UInt32 System.IConvertible.ToUInt32(System.IFormatProvider provider)
    // Offset: 0xDF8EA4
    // Implemented from: System.IConvertible
    // Base method: System.UInt32 IConvertible::ToUInt32(System.IFormatProvider provider)
    uint System_IConvertible_ToUInt32(System::IFormatProvider* provider);
    // private System.Int64 System.IConvertible.ToInt64(System.IFormatProvider provider)
    // Offset: 0xDF8EAC
    // Implemented from: System.IConvertible
    // Base method: System.Int64 IConvertible::ToInt64(System.IFormatProvider provider)
    int64_t System_IConvertible_ToInt64(System::IFormatProvider* provider);
    // private System.UInt64 System.IConvertible.ToUInt64(System.IFormatProvider provider)
    // Offset: 0xDF8EB4
    // Implemented from: System.IConvertible
    // Base method: System.UInt64 IConvertible::ToUInt64(System.IFormatProvider provider)
    uint64_t System_IConvertible_ToUInt64(System::IFormatProvider* provider);
    // private System.Single System.IConvertible.ToSingle(System.IFormatProvider provider)
    // Offset: 0xDF8EBC
    // Implemented from: System.IConvertible
    // Base method: System.Single IConvertible::ToSingle(System.IFormatProvider provider)
    float System_IConvertible_ToSingle(System::IFormatProvider* provider);
    // private System.Double System.IConvertible.ToDouble(System.IFormatProvider provider)
    // Offset: 0xDF8EC4
    // Implemented from: System.IConvertible
    // Base method: System.Double IConvertible::ToDouble(System.IFormatProvider provider)
    double System_IConvertible_ToDouble(System::IFormatProvider* provider);
    // private System.Decimal System.IConvertible.ToDecimal(System.IFormatProvider provider)
    // Offset: 0xDF8ECC
    // Implemented from: System.IConvertible
    // Base method: System.Decimal IConvertible::ToDecimal(System.IFormatProvider provider)
    System::Decimal System_IConvertible_ToDecimal(System::IFormatProvider* provider);
    // private System.DateTime System.IConvertible.ToDateTime(System.IFormatProvider provider)
    // Offset: 0xDF8ED4
    // Implemented from: System.IConvertible
    // Base method: System.DateTime IConvertible::ToDateTime(System.IFormatProvider provider)
    System::DateTime System_IConvertible_ToDateTime(System::IFormatProvider* provider);
    // private System.Object System.IConvertible.ToType(System.Type type, System.IFormatProvider provider)
    // Offset: 0xDF8EE0
    // Implemented from: System.IConvertible
    // Base method: System.Object IConvertible::ToType(System.Type type, System.IFormatProvider provider)
    ::Il2CppObject* System_IConvertible_ToType(System::Type* type, System::IFormatProvider* provider);
  }; // System.Double
  #pragma pack(pop)
  static check_size<sizeof(Double), 0 + sizeof(double)> __System_DoubleSizeCheck;
  static_assert(sizeof(Double) == 0x8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Double, "System", "Double");
