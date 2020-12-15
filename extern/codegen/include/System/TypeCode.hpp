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
// Type namespace: System
namespace System {
  // Autogenerated type: System.TypeCode
  struct TypeCode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: TypeCode
    constexpr TypeCode(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.TypeCode Empty
    static constexpr const int Empty = 0;
    // Get static field: static public System.TypeCode Empty
    static System::TypeCode _get_Empty();
    // Set static field: static public System.TypeCode Empty
    static void _set_Empty(System::TypeCode value);
    // static field const value: static public System.TypeCode Object
    static constexpr const int Object = 1;
    // Get static field: static public System.TypeCode Object
    static System::TypeCode _get_Object();
    // Set static field: static public System.TypeCode Object
    static void _set_Object(System::TypeCode value);
    // static field const value: static public System.TypeCode DBNull
    static constexpr const int DBNull = 2;
    // Get static field: static public System.TypeCode DBNull
    static System::TypeCode _get_DBNull();
    // Set static field: static public System.TypeCode DBNull
    static void _set_DBNull(System::TypeCode value);
    // static field const value: static public System.TypeCode Boolean
    static constexpr const int Boolean = 3;
    // Get static field: static public System.TypeCode Boolean
    static System::TypeCode _get_Boolean();
    // Set static field: static public System.TypeCode Boolean
    static void _set_Boolean(System::TypeCode value);
    // static field const value: static public System.TypeCode Char
    static constexpr const int Char = 4;
    // Get static field: static public System.TypeCode Char
    static System::TypeCode _get_Char();
    // Set static field: static public System.TypeCode Char
    static void _set_Char(System::TypeCode value);
    // static field const value: static public System.TypeCode SByte
    static constexpr const int SByte = 5;
    // Get static field: static public System.TypeCode SByte
    static System::TypeCode _get_SByte();
    // Set static field: static public System.TypeCode SByte
    static void _set_SByte(System::TypeCode value);
    // static field const value: static public System.TypeCode Byte
    static constexpr const int Byte = 6;
    // Get static field: static public System.TypeCode Byte
    static System::TypeCode _get_Byte();
    // Set static field: static public System.TypeCode Byte
    static void _set_Byte(System::TypeCode value);
    // static field const value: static public System.TypeCode Int16
    static constexpr const int Int16 = 7;
    // Get static field: static public System.TypeCode Int16
    static System::TypeCode _get_Int16();
    // Set static field: static public System.TypeCode Int16
    static void _set_Int16(System::TypeCode value);
    // static field const value: static public System.TypeCode UInt16
    static constexpr const int UInt16 = 8;
    // Get static field: static public System.TypeCode UInt16
    static System::TypeCode _get_UInt16();
    // Set static field: static public System.TypeCode UInt16
    static void _set_UInt16(System::TypeCode value);
    // static field const value: static public System.TypeCode Int32
    static constexpr const int Int32 = 9;
    // Get static field: static public System.TypeCode Int32
    static System::TypeCode _get_Int32();
    // Set static field: static public System.TypeCode Int32
    static void _set_Int32(System::TypeCode value);
    // static field const value: static public System.TypeCode UInt32
    static constexpr const int UInt32 = 10;
    // Get static field: static public System.TypeCode UInt32
    static System::TypeCode _get_UInt32();
    // Set static field: static public System.TypeCode UInt32
    static void _set_UInt32(System::TypeCode value);
    // static field const value: static public System.TypeCode Int64
    static constexpr const int Int64 = 11;
    // Get static field: static public System.TypeCode Int64
    static System::TypeCode _get_Int64();
    // Set static field: static public System.TypeCode Int64
    static void _set_Int64(System::TypeCode value);
    // static field const value: static public System.TypeCode UInt64
    static constexpr const int UInt64 = 12;
    // Get static field: static public System.TypeCode UInt64
    static System::TypeCode _get_UInt64();
    // Set static field: static public System.TypeCode UInt64
    static void _set_UInt64(System::TypeCode value);
    // static field const value: static public System.TypeCode Single
    static constexpr const int Single = 13;
    // Get static field: static public System.TypeCode Single
    static System::TypeCode _get_Single();
    // Set static field: static public System.TypeCode Single
    static void _set_Single(System::TypeCode value);
    // static field const value: static public System.TypeCode Double
    static constexpr const int Double = 14;
    // Get static field: static public System.TypeCode Double
    static System::TypeCode _get_Double();
    // Set static field: static public System.TypeCode Double
    static void _set_Double(System::TypeCode value);
    // static field const value: static public System.TypeCode Decimal
    static constexpr const int Decimal = 15;
    // Get static field: static public System.TypeCode Decimal
    static System::TypeCode _get_Decimal();
    // Set static field: static public System.TypeCode Decimal
    static void _set_Decimal(System::TypeCode value);
    // static field const value: static public System.TypeCode DateTime
    static constexpr const int DateTime = 16;
    // Get static field: static public System.TypeCode DateTime
    static System::TypeCode _get_DateTime();
    // Set static field: static public System.TypeCode DateTime
    static void _set_DateTime(System::TypeCode value);
    // static field const value: static public System.TypeCode String
    static constexpr const int String = 18;
    // Get static field: static public System.TypeCode String
    static System::TypeCode _get_String();
    // Set static field: static public System.TypeCode String
    static void _set_String(System::TypeCode value);
  }; // System.TypeCode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::TypeCode, "System", "TypeCode");
#pragma pack(pop)