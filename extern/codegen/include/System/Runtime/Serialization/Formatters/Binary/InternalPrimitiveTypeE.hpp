// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE
  // [] Offset: FFFFFFFF
  struct InternalPrimitiveTypeE/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: InternalPrimitiveTypeE
    constexpr InternalPrimitiveTypeE(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Invalid
    static constexpr const int Invalid = 0;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Invalid
    static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE _get_Invalid();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Invalid
    static void _set_Invalid(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Boolean
    static constexpr const int Boolean = 1;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Boolean
    static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE _get_Boolean();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Boolean
    static void _set_Boolean(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Byte
    static constexpr const int Byte = 2;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Byte
    static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE _get_Byte();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Byte
    static void _set_Byte(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Char
    static constexpr const int Char = 3;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Char
    static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE _get_Char();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Char
    static void _set_Char(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Currency
    static constexpr const int Currency = 4;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Currency
    static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE _get_Currency();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Currency
    static void _set_Currency(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Decimal
    static constexpr const int Decimal = 5;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Decimal
    static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE _get_Decimal();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Decimal
    static void _set_Decimal(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Double
    static constexpr const int Double = 6;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Double
    static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE _get_Double();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Double
    static void _set_Double(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Int16
    static constexpr const int Int16 = 7;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Int16
    static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE _get_Int16();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Int16
    static void _set_Int16(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Int32
    static constexpr const int Int32 = 8;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Int32
    static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE _get_Int32();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Int32
    static void _set_Int32(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Int64
    static constexpr const int Int64 = 9;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Int64
    static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE _get_Int64();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Int64
    static void _set_Int64(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE SByte
    static constexpr const int SByte = 10;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE SByte
    static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE _get_SByte();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE SByte
    static void _set_SByte(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Single
    static constexpr const int Single = 11;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Single
    static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE _get_Single();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Single
    static void _set_Single(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE TimeSpan
    static constexpr const int TimeSpan = 12;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE TimeSpan
    static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE _get_TimeSpan();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE TimeSpan
    static void _set_TimeSpan(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE DateTime
    static constexpr const int DateTime = 13;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE DateTime
    static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE _get_DateTime();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE DateTime
    static void _set_DateTime(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE UInt16
    static constexpr const int UInt16 = 14;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE UInt16
    static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE _get_UInt16();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE UInt16
    static void _set_UInt16(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE UInt32
    static constexpr const int UInt32 = 15;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE UInt32
    static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE _get_UInt32();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE UInt32
    static void _set_UInt32(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE UInt64
    static constexpr const int UInt64 = 16;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE UInt64
    static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE _get_UInt64();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE UInt64
    static void _set_UInt64(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Null
    static constexpr const int Null = 17;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Null
    static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE _get_Null();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE Null
    static void _set_Null(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE String
    static constexpr const int String = 18;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE String
    static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE _get_String();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE String
    static void _set_String(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);
  }; // System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE
  #pragma pack(pop)
  static check_size<sizeof(InternalPrimitiveTypeE), 0 + sizeof(int)> __System_Runtime_Serialization_Formatters_Binary_InternalPrimitiveTypeESizeCheck;
  static_assert(sizeof(InternalPrimitiveTypeE) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, "System.Runtime.Serialization.Formatters.Binary", "InternalPrimitiveTypeE");
