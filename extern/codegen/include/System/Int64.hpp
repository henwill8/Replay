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
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Int64
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CA7F10
  struct Int64/*, public System::ValueType, public System::IComparable, public System::IFormattable, public System::IConvertible, public System::IComparable_1<int64_t>, public System::IEquatable_1<int64_t>*/ {
    public:
    // System.Int64 m_value
    // Size: 0x8
    // Offset: 0x0
    int64_t m_value;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // Creating value type constructor for type: Int64
    constexpr Int64(int64_t m_value_ = {}) noexcept : m_value{m_value_} {}
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
    // Creating interface conversion operator: operator System::IComparable_1<int64_t>
    operator System::IComparable_1<int64_t>() noexcept {
      return *reinterpret_cast<System::IComparable_1<int64_t>*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<int64_t>
    operator System::IEquatable_1<int64_t>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<int64_t>*>(this);
    }
    // Creating conversion operator: operator int64_t
    constexpr operator int64_t() const noexcept {
      return m_value;
    }
    // static field const value: static public System.Int64 MaxValue
    static constexpr const int64_t MaxValue = 9223372036854775807;
    // Get static field: static public System.Int64 MaxValue
    static int64_t _get_MaxValue();
    // Set static field: static public System.Int64 MaxValue
    static void _set_MaxValue(int64_t value);
    // static field const value: static public System.Int64 MinValue
    static constexpr const int64_t MinValue = -9223372036854775807 - 1;
    // Get static field: static public System.Int64 MinValue
    static int64_t _get_MinValue();
    // Set static field: static public System.Int64 MinValue
    static void _set_MinValue(int64_t value);
    // public System.String ToString(System.String format)
    // Offset: 0xE0AFDC
    ::Il2CppString* ToString(::Il2CppString* format);
    // static public System.Int64 Parse(System.String s)
    // Offset: 0x1653B7C
    static int64_t Parse(::Il2CppString* s);
    // static public System.Int64 Parse(System.String s, System.IFormatProvider provider)
    // Offset: 0x1653BB0
    static int64_t Parse(::Il2CppString* s, System::IFormatProvider* provider);
    // static public System.Int64 Parse(System.String s, System.Globalization.NumberStyles style, System.IFormatProvider provider)
    // Offset: 0x1653BE8
    static int64_t Parse(::Il2CppString* s, System::Globalization::NumberStyles style, System::IFormatProvider* provider);
    // static public System.Boolean TryParse(System.String s, out System.Int64 result)
    // Offset: 0x1653C3C
    static bool TryParse(::Il2CppString* s, int64_t& result);
    // static public System.Boolean TryParse(System.String s, System.Globalization.NumberStyles style, System.IFormatProvider provider, out System.Int64 result)
    // Offset: 0x1653C78
    static bool TryParse(::Il2CppString* s, System::Globalization::NumberStyles style, System::IFormatProvider* provider, int64_t& result);
    // public System.Int32 CompareTo(System.Object value)
    // Offset: 0xE0AF30
    // Implemented from: System.IComparable
    // Base method: System.Int32 IComparable::CompareTo(System.Object value)
    int CompareTo(::Il2CppObject* value);
    // Creating proxy method: System_IComparable_CompareTo
    // Maps to method: CompareTo
    int System_IComparable_CompareTo(::Il2CppObject* value);
    // public System.Int32 CompareTo(System.Int64 value)
    // Offset: 0xE0AF38
    // Implemented from: System.IComparable`1
    // Base method: System.Int32 IComparable_1::CompareTo(System.Int64 value)
    int CompareTo(int64_t value);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xE0AF4C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(System.Int64 obj)
    // Offset: 0xE0AF54
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(System.Int64 obj)
    bool Equals(int64_t obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xE0AF64
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xE0AF70
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public System.String ToString(System.IFormatProvider provider)
    // Offset: 0xE0AFA4
    // Implemented from: System.IConvertible
    // Base method: System.String IConvertible::ToString(System.IFormatProvider provider)
    ::Il2CppString* ToString(System::IFormatProvider* provider);
    // public System.String ToString(System.String format, System.IFormatProvider provider)
    // Offset: 0xE0B014
    // Implemented from: System.IFormattable
    // Base method: System.String IFormattable::ToString(System.String format, System.IFormatProvider provider)
    ::Il2CppString* ToString(::Il2CppString* format, System::IFormatProvider* provider);
    // public System.TypeCode GetTypeCode()
    // Offset: 0xE0B050
    // Implemented from: System.IConvertible
    // Base method: System.TypeCode IConvertible::GetTypeCode()
    System::TypeCode GetTypeCode();
    // private System.Boolean System.IConvertible.ToBoolean(System.IFormatProvider provider)
    // Offset: 0xE0B058
    // Implemented from: System.IConvertible
    // Base method: System.Boolean IConvertible::ToBoolean(System.IFormatProvider provider)
    bool System_IConvertible_ToBoolean(System::IFormatProvider* provider);
    // private System.Char System.IConvertible.ToChar(System.IFormatProvider provider)
    // Offset: 0xE0B060
    // Implemented from: System.IConvertible
    // Base method: System.Char IConvertible::ToChar(System.IFormatProvider provider)
    ::Il2CppChar System_IConvertible_ToChar(System::IFormatProvider* provider);
    // private System.SByte System.IConvertible.ToSByte(System.IFormatProvider provider)
    // Offset: 0xE0B068
    // Implemented from: System.IConvertible
    // Base method: System.SByte IConvertible::ToSByte(System.IFormatProvider provider)
    int8_t System_IConvertible_ToSByte(System::IFormatProvider* provider);
    // private System.Byte System.IConvertible.ToByte(System.IFormatProvider provider)
    // Offset: 0xE0B070
    // Implemented from: System.IConvertible
    // Base method: System.Byte IConvertible::ToByte(System.IFormatProvider provider)
    uint8_t System_IConvertible_ToByte(System::IFormatProvider* provider);
    // private System.Int16 System.IConvertible.ToInt16(System.IFormatProvider provider)
    // Offset: 0xE0B078
    // Implemented from: System.IConvertible
    // Base method: System.Int16 IConvertible::ToInt16(System.IFormatProvider provider)
    int16_t System_IConvertible_ToInt16(System::IFormatProvider* provider);
    // private System.UInt16 System.IConvertible.ToUInt16(System.IFormatProvider provider)
    // Offset: 0xE0B080
    // Implemented from: System.IConvertible
    // Base method: System.UInt16 IConvertible::ToUInt16(System.IFormatProvider provider)
    uint16_t System_IConvertible_ToUInt16(System::IFormatProvider* provider);
    // private System.Int32 System.IConvertible.ToInt32(System.IFormatProvider provider)
    // Offset: 0xE0B088
    // Implemented from: System.IConvertible
    // Base method: System.Int32 IConvertible::ToInt32(System.IFormatProvider provider)
    int System_IConvertible_ToInt32(System::IFormatProvider* provider);
    // private System.UInt32 System.IConvertible.ToUInt32(System.IFormatProvider provider)
    // Offset: 0xE0B090
    // Implemented from: System.IConvertible
    // Base method: System.UInt32 IConvertible::ToUInt32(System.IFormatProvider provider)
    uint System_IConvertible_ToUInt32(System::IFormatProvider* provider);
    // private System.Int64 System.IConvertible.ToInt64(System.IFormatProvider provider)
    // Offset: 0xE0B098
    // Implemented from: System.IConvertible
    // Base method: System.Int64 IConvertible::ToInt64(System.IFormatProvider provider)
    int64_t System_IConvertible_ToInt64(System::IFormatProvider* provider);
    // private System.UInt64 System.IConvertible.ToUInt64(System.IFormatProvider provider)
    // Offset: 0xE0B0A0
    // Implemented from: System.IConvertible
    // Base method: System.UInt64 IConvertible::ToUInt64(System.IFormatProvider provider)
    uint64_t System_IConvertible_ToUInt64(System::IFormatProvider* provider);
    // private System.Single System.IConvertible.ToSingle(System.IFormatProvider provider)
    // Offset: 0xE0B0A8
    // Implemented from: System.IConvertible
    // Base method: System.Single IConvertible::ToSingle(System.IFormatProvider provider)
    float System_IConvertible_ToSingle(System::IFormatProvider* provider);
    // private System.Double System.IConvertible.ToDouble(System.IFormatProvider provider)
    // Offset: 0xE0B0B0
    // Implemented from: System.IConvertible
    // Base method: System.Double IConvertible::ToDouble(System.IFormatProvider provider)
    double System_IConvertible_ToDouble(System::IFormatProvider* provider);
    // private System.Decimal System.IConvertible.ToDecimal(System.IFormatProvider provider)
    // Offset: 0xE0B0B8
    // Implemented from: System.IConvertible
    // Base method: System.Decimal IConvertible::ToDecimal(System.IFormatProvider provider)
    System::Decimal System_IConvertible_ToDecimal(System::IFormatProvider* provider);
    // private System.DateTime System.IConvertible.ToDateTime(System.IFormatProvider provider)
    // Offset: 0xE0B0C0
    // Implemented from: System.IConvertible
    // Base method: System.DateTime IConvertible::ToDateTime(System.IFormatProvider provider)
    System::DateTime System_IConvertible_ToDateTime(System::IFormatProvider* provider);
    // private System.Object System.IConvertible.ToType(System.Type type, System.IFormatProvider provider)
    // Offset: 0xE0B0CC
    // Implemented from: System.IConvertible
    // Base method: System.Object IConvertible::ToType(System.Type type, System.IFormatProvider provider)
    ::Il2CppObject* System_IConvertible_ToType(System::Type* type, System::IFormatProvider* provider);
  }; // System.Int64
  #pragma pack(pop)
  static check_size<sizeof(Int64), 0 + sizeof(int64_t)> __System_Int64SizeCheck;
  static_assert(sizeof(Int64) == 0x8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Int64, "System", "Int64");
