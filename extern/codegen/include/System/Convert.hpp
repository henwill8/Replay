// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
  // Forward declaring type: TypeCode
  struct TypeCode;
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
  // Forward declaring type: IConvertible
  class IConvertible;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Decimal
  struct Decimal;
  // Forward declaring type: DateTime
  struct DateTime;
  // Forward declaring type: Base64FormattingOptions
  struct Base64FormattingOptions;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Convert
  // [] Offset: FFFFFFFF
  class Convert : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Convert
    Convert() noexcept {}
    // Get static field: static readonly System.RuntimeType[] ConvertTypes
    static ::Array<System::RuntimeType*>* _get_ConvertTypes();
    // Set static field: static readonly System.RuntimeType[] ConvertTypes
    static void _set_ConvertTypes(::Array<System::RuntimeType*>* value);
    // Get static field: static private readonly System.RuntimeType EnumType
    static System::RuntimeType* _get_EnumType();
    // Set static field: static private readonly System.RuntimeType EnumType
    static void _set_EnumType(System::RuntimeType* value);
    // Get static field: static readonly System.Char[] base64Table
    static ::Array<::Il2CppChar>* _get_base64Table();
    // Set static field: static readonly System.Char[] base64Table
    static void _set_base64Table(::Array<::Il2CppChar>* value);
    // Get static field: static public readonly System.Object DBNull
    static ::Il2CppObject* _get_DBNull();
    // Set static field: static public readonly System.Object DBNull
    static void _set_DBNull(::Il2CppObject* value);
    // static public System.TypeCode GetTypeCode(System.Object value)
    // Offset: 0x18A1420
    static System::TypeCode GetTypeCode(::Il2CppObject* value);
    // static public System.Object ChangeType(System.Object value, System.TypeCode typeCode, System.IFormatProvider provider)
    // Offset: 0x18A14F4
    static ::Il2CppObject* ChangeType(::Il2CppObject* value, System::TypeCode typeCode, System::IFormatProvider* provider);
    // static System.Object DefaultToType(System.IConvertible value, System.Type targetType, System.IFormatProvider provider)
    // Offset: 0x18A1D78
    static ::Il2CppObject* DefaultToType(System::IConvertible* value, System::Type* targetType, System::IFormatProvider* provider);
    // static public System.Object ChangeType(System.Object value, System.Type conversionType)
    // Offset: 0x18A2F60
    static ::Il2CppObject* ChangeType(::Il2CppObject* value, System::Type* conversionType);
    // static public System.Object ChangeType(System.Object value, System.Type conversionType, System.IFormatProvider provider)
    // Offset: 0x18A2FF8
    static ::Il2CppObject* ChangeType(::Il2CppObject* value, System::Type* conversionType, System::IFormatProvider* provider);
    // static public System.Boolean ToBoolean(System.Object value, System.IFormatProvider provider)
    // Offset: 0x18A3FE0
    static bool ToBoolean(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.Boolean ToBoolean(System.SByte value)
    // Offset: 0x18A40F4
    static bool ToBoolean(int8_t value);
    // static public System.Boolean ToBoolean(System.Byte value)
    // Offset: 0x18A4100
    static bool ToBoolean(uint8_t value);
    // static public System.Boolean ToBoolean(System.Int16 value)
    // Offset: 0x18A410C
    static bool ToBoolean(int16_t value);
    // static public System.Boolean ToBoolean(System.UInt16 value)
    // Offset: 0x18A4118
    static bool ToBoolean(uint16_t value);
    // static public System.Boolean ToBoolean(System.Int32 value)
    // Offset: 0x18A4124
    static bool ToBoolean(int value);
    // static public System.Boolean ToBoolean(System.UInt32 value)
    // Offset: 0x18A4130
    static bool ToBoolean(uint value);
    // static public System.Boolean ToBoolean(System.Int64 value)
    // Offset: 0x18A413C
    static bool ToBoolean(int64_t value);
    // static public System.Boolean ToBoolean(System.UInt64 value)
    // Offset: 0x18A4148
    static bool ToBoolean(uint64_t value);
    // static public System.Boolean ToBoolean(System.String value)
    // Offset: 0x18A4154
    static bool ToBoolean(::Il2CppString* value);
    // static public System.Boolean ToBoolean(System.String value, System.IFormatProvider provider)
    // Offset: 0x18A41D0
    static bool ToBoolean(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.Boolean ToBoolean(System.Single value)
    // Offset: 0x18A424C
    static bool ToBoolean(float value);
    // static public System.Boolean ToBoolean(System.Double value)
    // Offset: 0x18A4258
    static bool ToBoolean(double value);
    // static public System.Boolean ToBoolean(System.Decimal value)
    // Offset: 0x18A4264
    static bool ToBoolean(System::Decimal value);
    // static public System.Char ToChar(System.Object value, System.IFormatProvider provider)
    // Offset: 0x18A42E8
    static ::Il2CppChar ToChar(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.Char ToChar(System.SByte value)
    // Offset: 0x18A43FC
    static ::Il2CppChar ToChar(int8_t value);
    // static public System.Char ToChar(System.Byte value)
    // Offset: 0x18A4494
    static ::Il2CppChar ToChar(uint8_t value);
    // static public System.Char ToChar(System.Int16 value)
    // Offset: 0x18A449C
    static ::Il2CppChar ToChar(int16_t value);
    // static public System.Char ToChar(System.UInt16 value)
    // Offset: 0x18A4538
    static ::Il2CppChar ToChar(uint16_t value);
    // static public System.Char ToChar(System.Int32 value)
    // Offset: 0x18A453C
    static ::Il2CppChar ToChar(int value);
    // static public System.Char ToChar(System.UInt32 value)
    // Offset: 0x18A45D8
    static ::Il2CppChar ToChar(uint value);
    // static public System.Char ToChar(System.Int64 value)
    // Offset: 0x18A4674
    static ::Il2CppChar ToChar(int64_t value);
    // static public System.Char ToChar(System.UInt64 value)
    // Offset: 0x18A4710
    static ::Il2CppChar ToChar(uint64_t value);
    // static public System.Char ToChar(System.String value, System.IFormatProvider provider)
    // Offset: 0x18A47AC
    static ::Il2CppChar ToChar(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.SByte ToSByte(System.Object value, System.IFormatProvider provider)
    // Offset: 0x18A4894
    static int8_t ToSByte(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.SByte ToSByte(System.Boolean value)
    // Offset: 0x18A49A8
    static int8_t ToSByte(bool value);
    // static public System.SByte ToSByte(System.Char value)
    // Offset: 0x18A49B0
    static int8_t ToSByte(::Il2CppChar value);
    // static public System.SByte ToSByte(System.Byte value)
    // Offset: 0x18A4A50
    static int8_t ToSByte(uint8_t value);
    // static public System.SByte ToSByte(System.Int16 value)
    // Offset: 0x18A4AEC
    static int8_t ToSByte(int16_t value);
    // static public System.SByte ToSByte(System.UInt16 value)
    // Offset: 0x18A4B90
    static int8_t ToSByte(uint16_t value);
    // static public System.SByte ToSByte(System.Int32 value)
    // Offset: 0x18A4C30
    static int8_t ToSByte(int value);
    // static public System.SByte ToSByte(System.UInt32 value)
    // Offset: 0x18A4CD0
    static int8_t ToSByte(uint value);
    // static public System.SByte ToSByte(System.Int64 value)
    // Offset: 0x18A4D6C
    static int8_t ToSByte(int64_t value);
    // static public System.SByte ToSByte(System.UInt64 value)
    // Offset: 0x18A4E0C
    static int8_t ToSByte(uint64_t value);
    // static public System.SByte ToSByte(System.Single value)
    // Offset: 0x18A4EA8
    static int8_t ToSByte(float value);
    // static public System.SByte ToSByte(System.Double value)
    // Offset: 0x18A4F14
    static int8_t ToSByte(double value);
    // static public System.SByte ToSByte(System.Decimal value)
    // Offset: 0x18A5098
    static int8_t ToSByte(System::Decimal value);
    // static public System.SByte ToSByte(System.String value, System.IFormatProvider provider)
    // Offset: 0x18A511C
    static int8_t ToSByte(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.Byte ToByte(System.Object value, System.IFormatProvider provider)
    // Offset: 0x18A512C
    static uint8_t ToByte(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.Byte ToByte(System.Boolean value)
    // Offset: 0x18A5240
    static uint8_t ToByte(bool value);
    // static public System.Byte ToByte(System.Char value)
    // Offset: 0x18A5248
    static uint8_t ToByte(::Il2CppChar value);
    // static public System.Byte ToByte(System.SByte value)
    // Offset: 0x18A52E8
    static uint8_t ToByte(int8_t value);
    // static public System.Byte ToByte(System.Int16 value)
    // Offset: 0x18A5384
    static uint8_t ToByte(int16_t value);
    // static public System.Byte ToByte(System.UInt16 value)
    // Offset: 0x18A5424
    static uint8_t ToByte(uint16_t value);
    // static public System.Byte ToByte(System.Int32 value)
    // Offset: 0x18A54C4
    static uint8_t ToByte(int value);
    // static public System.Byte ToByte(System.UInt32 value)
    // Offset: 0x18A5560
    static uint8_t ToByte(uint value);
    // static public System.Byte ToByte(System.Int64 value)
    // Offset: 0x18A55FC
    static uint8_t ToByte(int64_t value);
    // static public System.Byte ToByte(System.UInt64 value)
    // Offset: 0x18A5698
    static uint8_t ToByte(uint64_t value);
    // static public System.Byte ToByte(System.Single value)
    // Offset: 0x18A5734
    static uint8_t ToByte(float value);
    // static public System.Byte ToByte(System.Double value)
    // Offset: 0x18A57A0
    static uint8_t ToByte(double value);
    // static public System.Byte ToByte(System.Decimal value)
    // Offset: 0x18A5810
    static uint8_t ToByte(System::Decimal value);
    // static public System.Byte ToByte(System.String value)
    // Offset: 0x18A5894
    static uint8_t ToByte(::Il2CppString* value);
    // static public System.Byte ToByte(System.String value, System.IFormatProvider provider)
    // Offset: 0x18A591C
    static uint8_t ToByte(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.Int16 ToInt16(System.Object value, System.IFormatProvider provider)
    // Offset: 0x18A5934
    static int16_t ToInt16(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.Int16 ToInt16(System.Boolean value)
    // Offset: 0x18A5A48
    static int16_t ToInt16(bool value);
    // static public System.Int16 ToInt16(System.Char value)
    // Offset: 0x18A5A50
    static int16_t ToInt16(::Il2CppChar value);
    // static public System.Int16 ToInt16(System.SByte value)
    // Offset: 0x18A5AEC
    static int16_t ToInt16(int8_t value);
    // static public System.Int16 ToInt16(System.Byte value)
    // Offset: 0x18A5AF4
    static int16_t ToInt16(uint8_t value);
    // static public System.Int16 ToInt16(System.UInt16 value)
    // Offset: 0x18A5AFC
    static int16_t ToInt16(uint16_t value);
    // static public System.Int16 ToInt16(System.Int32 value)
    // Offset: 0x18A5B98
    static int16_t ToInt16(int value);
    // static public System.Int16 ToInt16(System.UInt32 value)
    // Offset: 0x18A5C38
    static int16_t ToInt16(uint value);
    // static public System.Int16 ToInt16(System.Int64 value)
    // Offset: 0x18A5CD4
    static int16_t ToInt16(int64_t value);
    // static public System.Int16 ToInt16(System.UInt64 value)
    // Offset: 0x18A5D74
    static int16_t ToInt16(uint64_t value);
    // static public System.Int16 ToInt16(System.Single value)
    // Offset: 0x18A5E10
    static int16_t ToInt16(float value);
    // static public System.Int16 ToInt16(System.Double value)
    // Offset: 0x18A5E7C
    static int16_t ToInt16(double value);
    // static public System.Int16 ToInt16(System.Decimal value)
    // Offset: 0x18A5EEC
    static int16_t ToInt16(System::Decimal value);
    // static public System.Int16 ToInt16(System.String value, System.IFormatProvider provider)
    // Offset: 0x18A5F70
    static int16_t ToInt16(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.UInt16 ToUInt16(System.Object value, System.IFormatProvider provider)
    // Offset: 0x18A5F88
    static uint16_t ToUInt16(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.UInt16 ToUInt16(System.Boolean value)
    // Offset: 0x18A609C
    static uint16_t ToUInt16(bool value);
    // static public System.UInt16 ToUInt16(System.Char value)
    // Offset: 0x18A60A4
    static uint16_t ToUInt16(::Il2CppChar value);
    // static public System.UInt16 ToUInt16(System.SByte value)
    // Offset: 0x18A60A8
    static uint16_t ToUInt16(int8_t value);
    // static public System.UInt16 ToUInt16(System.Byte value)
    // Offset: 0x18A6140
    static uint16_t ToUInt16(uint8_t value);
    // static public System.UInt16 ToUInt16(System.Int16 value)
    // Offset: 0x18A6148
    static uint16_t ToUInt16(int16_t value);
    // static public System.UInt16 ToUInt16(System.Int32 value)
    // Offset: 0x18A61E4
    static uint16_t ToUInt16(int value);
    // static public System.UInt16 ToUInt16(System.UInt32 value)
    // Offset: 0x18A6280
    static uint16_t ToUInt16(uint value);
    // static public System.UInt16 ToUInt16(System.Int64 value)
    // Offset: 0x18A631C
    static uint16_t ToUInt16(int64_t value);
    // static public System.UInt16 ToUInt16(System.UInt64 value)
    // Offset: 0x18A63B8
    static uint16_t ToUInt16(uint64_t value);
    // static public System.UInt16 ToUInt16(System.Single value)
    // Offset: 0x18A6454
    static uint16_t ToUInt16(float value);
    // static public System.UInt16 ToUInt16(System.Double value)
    // Offset: 0x18A64C0
    static uint16_t ToUInt16(double value);
    // static public System.UInt16 ToUInt16(System.Decimal value)
    // Offset: 0x18A6530
    static uint16_t ToUInt16(System::Decimal value);
    // static public System.UInt16 ToUInt16(System.String value, System.IFormatProvider provider)
    // Offset: 0x18A65B4
    static uint16_t ToUInt16(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.Int32 ToInt32(System.Object value)
    // Offset: 0x18A65CC
    static int ToInt32(::Il2CppObject* value);
    // static public System.Int32 ToInt32(System.Object value, System.IFormatProvider provider)
    // Offset: 0x18A66DC
    static int ToInt32(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.Int32 ToInt32(System.Boolean value)
    // Offset: 0x18A67F0
    static int ToInt32(bool value);
    // static public System.Int32 ToInt32(System.Char value)
    // Offset: 0x18A67F8
    static int ToInt32(::Il2CppChar value);
    // static public System.Int32 ToInt32(System.Byte value)
    // Offset: 0x18A6800
    static int ToInt32(uint8_t value);
    // static public System.Int32 ToInt32(System.Int16 value)
    // Offset: 0x18A6808
    static int ToInt32(int16_t value);
    // static public System.Int32 ToInt32(System.UInt16 value)
    // Offset: 0x18A6810
    static int ToInt32(uint16_t value);
    // static public System.Int32 ToInt32(System.UInt32 value)
    // Offset: 0x18A6818
    static int ToInt32(uint value);
    // static public System.Int32 ToInt32(System.Int64 value)
    // Offset: 0x18A68B0
    static int ToInt32(int64_t value);
    // static public System.Int32 ToInt32(System.UInt64 value)
    // Offset: 0x18A6950
    static int ToInt32(uint64_t value);
    // static public System.Int32 ToInt32(System.Single value)
    // Offset: 0x18A69EC
    static int ToInt32(float value);
    // static public System.Int32 ToInt32(System.Double value)
    // Offset: 0x18A4F84
    static int ToInt32(double value);
    // static public System.Int32 ToInt32(System.Decimal value)
    // Offset: 0x18A6A58
    static int ToInt32(System::Decimal value);
    // static public System.Int32 ToInt32(System.String value, System.IFormatProvider provider)
    // Offset: 0x18A6AD0
    static int ToInt32(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.UInt32 ToUInt32(System.Object value)
    // Offset: 0x18A6AE8
    static uint ToUInt32(::Il2CppObject* value);
    // static public System.UInt32 ToUInt32(System.Object value, System.IFormatProvider provider)
    // Offset: 0x18A6BF8
    static uint ToUInt32(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.UInt32 ToUInt32(System.Boolean value)
    // Offset: 0x18A6D0C
    static uint ToUInt32(bool value);
    // static public System.UInt32 ToUInt32(System.Char value)
    // Offset: 0x18A6D14
    static uint ToUInt32(::Il2CppChar value);
    // static public System.UInt32 ToUInt32(System.SByte value)
    // Offset: 0x18A6D1C
    static uint ToUInt32(int8_t value);
    // static public System.UInt32 ToUInt32(System.Byte value)
    // Offset: 0x18A6DB4
    static uint ToUInt32(uint8_t value);
    // static public System.UInt32 ToUInt32(System.Int16 value)
    // Offset: 0x18A6DBC
    static uint ToUInt32(int16_t value);
    // static public System.UInt32 ToUInt32(System.UInt16 value)
    // Offset: 0x18A6E54
    static uint ToUInt32(uint16_t value);
    // static public System.UInt32 ToUInt32(System.Int32 value)
    // Offset: 0x18A6E5C
    static uint ToUInt32(int value);
    // static public System.UInt32 ToUInt32(System.Int64 value)
    // Offset: 0x18A6EF4
    static uint ToUInt32(int64_t value);
    // static public System.UInt32 ToUInt32(System.UInt64 value)
    // Offset: 0x18A6F90
    static uint ToUInt32(uint64_t value);
    // static public System.UInt32 ToUInt32(System.Single value)
    // Offset: 0x18A702C
    static uint ToUInt32(float value);
    // static public System.UInt32 ToUInt32(System.Double value)
    // Offset: 0x18A7098
    static uint ToUInt32(double value);
    // static public System.UInt32 ToUInt32(System.Decimal value)
    // Offset: 0x18A7180
    static uint ToUInt32(System::Decimal value);
    // static public System.UInt32 ToUInt32(System.String value, System.IFormatProvider provider)
    // Offset: 0x18A7204
    static uint ToUInt32(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.Int64 ToInt64(System.Object value)
    // Offset: 0x18A721C
    static int64_t ToInt64(::Il2CppObject* value);
    // static public System.Int64 ToInt64(System.Object value, System.IFormatProvider provider)
    // Offset: 0x18A732C
    static int64_t ToInt64(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.Int64 ToInt64(System.Boolean value)
    // Offset: 0x18A7440
    static int64_t ToInt64(bool value);
    // static public System.Int64 ToInt64(System.Char value)
    // Offset: 0x18A7448
    static int64_t ToInt64(::Il2CppChar value);
    // static public System.Int64 ToInt64(System.SByte value)
    // Offset: 0x18A7450
    static int64_t ToInt64(int8_t value);
    // static public System.Int64 ToInt64(System.Byte value)
    // Offset: 0x18A7458
    static int64_t ToInt64(uint8_t value);
    // static public System.Int64 ToInt64(System.Int16 value)
    // Offset: 0x18A7460
    static int64_t ToInt64(int16_t value);
    // static public System.Int64 ToInt64(System.UInt16 value)
    // Offset: 0x18A7468
    static int64_t ToInt64(uint16_t value);
    // static public System.Int64 ToInt64(System.Int32 value)
    // Offset: 0x18A7470
    static int64_t ToInt64(int value);
    // static public System.Int64 ToInt64(System.UInt32 value)
    // Offset: 0x18A7478
    static int64_t ToInt64(uint value);
    // static public System.Int64 ToInt64(System.UInt64 value)
    // Offset: 0x18A7480
    static int64_t ToInt64(uint64_t value);
    // static public System.Int64 ToInt64(System.Single value)
    // Offset: 0x18A7518
    static int64_t ToInt64(float value);
    // static public System.Int64 ToInt64(System.Double value)
    // Offset: 0x18A7584
    static int64_t ToInt64(double value);
    // static public System.Int64 ToInt64(System.Decimal value)
    // Offset: 0x18A767C
    static int64_t ToInt64(System::Decimal value);
    // static public System.Int64 ToInt64(System.String value)
    // Offset: 0x18A7700
    static int64_t ToInt64(::Il2CppString* value);
    // static public System.Int64 ToInt64(System.String value, System.IFormatProvider provider)
    // Offset: 0x18A7788
    static int64_t ToInt64(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.UInt64 ToUInt64(System.Object value)
    // Offset: 0x18A77A0
    static uint64_t ToUInt64(::Il2CppObject* value);
    // static public System.UInt64 ToUInt64(System.Object value, System.IFormatProvider provider)
    // Offset: 0x18A78B0
    static uint64_t ToUInt64(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.UInt64 ToUInt64(System.Boolean value)
    // Offset: 0x18A79C4
    static uint64_t ToUInt64(bool value);
    // static public System.UInt64 ToUInt64(System.Char value)
    // Offset: 0x18A79CC
    static uint64_t ToUInt64(::Il2CppChar value);
    // static public System.UInt64 ToUInt64(System.SByte value)
    // Offset: 0x18A79D4
    static uint64_t ToUInt64(int8_t value);
    // static public System.UInt64 ToUInt64(System.Byte value)
    // Offset: 0x18A7A70
    static uint64_t ToUInt64(uint8_t value);
    // static public System.UInt64 ToUInt64(System.Int16 value)
    // Offset: 0x18A7A78
    static uint64_t ToUInt64(int16_t value);
    // static public System.UInt64 ToUInt64(System.UInt16 value)
    // Offset: 0x18A7B14
    static uint64_t ToUInt64(uint16_t value);
    // static public System.UInt64 ToUInt64(System.Int32 value)
    // Offset: 0x18A7B1C
    static uint64_t ToUInt64(int value);
    // static public System.UInt64 ToUInt64(System.UInt32 value)
    // Offset: 0x18A7BB4
    static uint64_t ToUInt64(uint value);
    // static public System.UInt64 ToUInt64(System.Int64 value)
    // Offset: 0x18A7BBC
    static uint64_t ToUInt64(int64_t value);
    // static public System.UInt64 ToUInt64(System.Single value)
    // Offset: 0x18A7C54
    static uint64_t ToUInt64(float value);
    // static public System.UInt64 ToUInt64(System.Double value)
    // Offset: 0x18A7CC0
    static uint64_t ToUInt64(double value);
    // static public System.UInt64 ToUInt64(System.Decimal value)
    // Offset: 0x18A7DB8
    static uint64_t ToUInt64(System::Decimal value);
    // static public System.UInt64 ToUInt64(System.String value, System.IFormatProvider provider)
    // Offset: 0x18A7E3C
    static uint64_t ToUInt64(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.Single ToSingle(System.Object value)
    // Offset: 0x18A7E54
    static float ToSingle(::Il2CppObject* value);
    // static public System.Single ToSingle(System.Object value, System.IFormatProvider provider)
    // Offset: 0x18A7F64
    static float ToSingle(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.Single ToSingle(System.SByte value)
    // Offset: 0x18A8078
    static float ToSingle(int8_t value);
    // static public System.Single ToSingle(System.Byte value)
    // Offset: 0x18A8084
    static float ToSingle(uint8_t value);
    // static public System.Single ToSingle(System.Int16 value)
    // Offset: 0x18A8090
    static float ToSingle(int16_t value);
    // static public System.Single ToSingle(System.UInt16 value)
    // Offset: 0x18A809C
    static float ToSingle(uint16_t value);
    // static public System.Single ToSingle(System.Int32 value)
    // Offset: 0x18A80A8
    static float ToSingle(int value);
    // static public System.Single ToSingle(System.UInt32 value)
    // Offset: 0x18A80B0
    static float ToSingle(uint value);
    // static public System.Single ToSingle(System.Int64 value)
    // Offset: 0x18A80BC
    static float ToSingle(int64_t value);
    // static public System.Single ToSingle(System.UInt64 value)
    // Offset: 0x18A80C4
    static float ToSingle(uint64_t value);
    // static public System.Single ToSingle(System.Double value)
    // Offset: 0x18A80D0
    static float ToSingle(double value);
    // static public System.Single ToSingle(System.Decimal value)
    // Offset: 0x18A80D8
    static float ToSingle(System::Decimal value);
    // static public System.Single ToSingle(System.String value, System.IFormatProvider provider)
    // Offset: 0x18A8150
    static float ToSingle(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.Single ToSingle(System.Boolean value)
    // Offset: 0x18A816C
    static float ToSingle(bool value);
    // static public System.Double ToDouble(System.Object value)
    // Offset: 0x18A8180
    static double ToDouble(::Il2CppObject* value);
    // static public System.Double ToDouble(System.Object value, System.IFormatProvider provider)
    // Offset: 0x18A8290
    static double ToDouble(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.Double ToDouble(System.SByte value)
    // Offset: 0x18A83A4
    static double ToDouble(int8_t value);
    // static public System.Double ToDouble(System.Byte value)
    // Offset: 0x18A83B0
    static double ToDouble(uint8_t value);
    // static public System.Double ToDouble(System.Int16 value)
    // Offset: 0x18A83BC
    static double ToDouble(int16_t value);
    // static public System.Double ToDouble(System.UInt16 value)
    // Offset: 0x18A83C8
    static double ToDouble(uint16_t value);
    // static public System.Double ToDouble(System.Int32 value)
    // Offset: 0x18A83D4
    static double ToDouble(int value);
    // static public System.Double ToDouble(System.UInt32 value)
    // Offset: 0x18A83DC
    static double ToDouble(uint value);
    // static public System.Double ToDouble(System.Int64 value)
    // Offset: 0x18A83E4
    static double ToDouble(int64_t value);
    // static public System.Double ToDouble(System.UInt64 value)
    // Offset: 0x18A83EC
    static double ToDouble(uint64_t value);
    // static public System.Double ToDouble(System.Single value)
    // Offset: 0x18A83F4
    static double ToDouble(float value);
    // static public System.Double ToDouble(System.Decimal value)
    // Offset: 0x18A83FC
    static double ToDouble(System::Decimal value);
    // static public System.Double ToDouble(System.String value, System.IFormatProvider provider)
    // Offset: 0x18A8474
    static double ToDouble(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.Double ToDouble(System.Boolean value)
    // Offset: 0x18A8508
    static double ToDouble(bool value);
    // static public System.Decimal ToDecimal(System.Object value)
    // Offset: 0x18A851C
    static System::Decimal ToDecimal(::Il2CppObject* value);
    // static public System.Decimal ToDecimal(System.Object value, System.IFormatProvider provider)
    // Offset: 0x18A864C
    static System::Decimal ToDecimal(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.Decimal ToDecimal(System.SByte value)
    // Offset: 0x18A8780
    static System::Decimal ToDecimal(int8_t value);
    // static public System.Decimal ToDecimal(System.Byte value)
    // Offset: 0x18A87E8
    static System::Decimal ToDecimal(uint8_t value);
    // static public System.Decimal ToDecimal(System.Int16 value)
    // Offset: 0x18A8850
    static System::Decimal ToDecimal(int16_t value);
    // static public System.Decimal ToDecimal(System.UInt16 value)
    // Offset: 0x18A88B8
    static System::Decimal ToDecimal(uint16_t value);
    // static public System.Decimal ToDecimal(System.Int32 value)
    // Offset: 0x18A8920
    static System::Decimal ToDecimal(int value);
    // static public System.Decimal ToDecimal(System.UInt32 value)
    // Offset: 0x18A8988
    static System::Decimal ToDecimal(uint value);
    // static public System.Decimal ToDecimal(System.Int64 value)
    // Offset: 0x18A89F0
    static System::Decimal ToDecimal(int64_t value);
    // static public System.Decimal ToDecimal(System.UInt64 value)
    // Offset: 0x18A8A58
    static System::Decimal ToDecimal(uint64_t value);
    // static public System.Decimal ToDecimal(System.Single value)
    // Offset: 0x18A8AC0
    static System::Decimal ToDecimal(float value);
    // static public System.Decimal ToDecimal(System.Double value)
    // Offset: 0x18A8B30
    static System::Decimal ToDecimal(double value);
    // static public System.Decimal ToDecimal(System.String value, System.IFormatProvider provider)
    // Offset: 0x18A8BA0
    static System::Decimal ToDecimal(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.Decimal ToDecimal(System.Boolean value)
    // Offset: 0x18A8C44
    static System::Decimal ToDecimal(bool value);
    // static public System.DateTime ToDateTime(System.String value, System.IFormatProvider provider)
    // Offset: 0x18A8CB0
    static System::DateTime ToDateTime(::Il2CppString* value, System::IFormatProvider* provider);
    // static public System.String ToString(System.Object value, System.IFormatProvider provider)
    // Offset: 0x18A8ED4
    static ::Il2CppString* ToString(::Il2CppObject* value, System::IFormatProvider* provider);
    // static public System.String ToString(System.Char value, System.IFormatProvider provider)
    // Offset: 0x18A9074
    static ::Il2CppString* ToString(::Il2CppChar value, System::IFormatProvider* provider);
    // static public System.String ToString(System.Int32 value, System.IFormatProvider provider)
    // Offset: 0x18A909C
    static ::Il2CppString* ToString(int value, System::IFormatProvider* provider);
    // static public System.Int32 ToInt32(System.String value, System.Int32 fromBase)
    // Offset: 0x18A90C4
    static int ToInt32(::Il2CppString* value, int fromBase);
    // static public System.String ToString(System.Int32 value, System.Int32 toBase)
    // Offset: 0x18A9194
    static ::Il2CppString* ToString(int value, int toBase);
    // static public System.String ToString(System.Int64 value, System.Int32 toBase)
    // Offset: 0x18A926C
    static ::Il2CppString* ToString(int64_t value, int toBase);
    // static public System.String ToBase64String(System.Byte[] inArray)
    // Offset: 0x18A9344
    static ::Il2CppString* ToBase64String(::Array<uint8_t>* inArray);
    // static public System.String ToBase64String(System.Byte[] inArray, System.Int32 offset, System.Int32 length)
    // Offset: 0x18A96AC
    static ::Il2CppString* ToBase64String(::Array<uint8_t>* inArray, int offset, int length);
    // static public System.String ToBase64String(System.Byte[] inArray, System.Int32 offset, System.Int32 length, System.Base64FormattingOptions options)
    // Offset: 0x18A93F4
    static ::Il2CppString* ToBase64String(::Array<uint8_t>* inArray, int offset, int length, System::Base64FormattingOptions options);
    // static public System.Int32 ToBase64CharArray(System.Byte[] inArray, System.Int32 offsetIn, System.Int32 length, System.Char[] outArray, System.Int32 offsetOut)
    // Offset: 0x18A9A6C
    static int ToBase64CharArray(::Array<uint8_t>* inArray, int offsetIn, int length, ::Array<::Il2CppChar>* outArray, int offsetOut);
    // static public System.Int32 ToBase64CharArray(System.Byte[] inArray, System.Int32 offsetIn, System.Int32 length, System.Char[] outArray, System.Int32 offsetOut, System.Base64FormattingOptions options)
    // Offset: 0x18A9B04
    static int ToBase64CharArray(::Array<uint8_t>* inArray, int offsetIn, int length, ::Array<::Il2CppChar>* outArray, int offsetOut, System::Base64FormattingOptions options);
    // static private System.Int32 ConvertToBase64Array(System.Char* outChars, System.Byte* inData, System.Int32 offset, System.Int32 length, System.Boolean insertLineBreaks)
    // Offset: 0x18A981C
    static int ConvertToBase64Array(::Il2CppChar* outChars, uint8_t* inData, int offset, int length, bool insertLineBreaks);
    // static private System.Int32 ToBase64_CalculateAndValidateOutputLength(System.Int32 inputLength, System.Boolean insertLineBreaks)
    // Offset: 0x18A972C
    static int ToBase64_CalculateAndValidateOutputLength(int inputLength, bool insertLineBreaks);
    // static public System.Byte[] FromBase64String(System.String s)
    // Offset: 0x18A9E40
    static ::Array<uint8_t>* FromBase64String(::Il2CppString* s);
    // static private System.Byte[] FromBase64CharPtr(System.Char* inputPtr, System.Int32 inputLength)
    // Offset: 0x18A9EFC
    static ::Array<uint8_t>* FromBase64CharPtr(::Il2CppChar* inputPtr, int inputLength);
    // static private System.Int32 FromBase64_Decode(System.Char* startInputPtr, System.Int32 inputLength, System.Byte* startDestPtr, System.Int32 destLength)
    // Offset: 0x18AA138
    static int FromBase64_Decode(::Il2CppChar* startInputPtr, int inputLength, uint8_t* startDestPtr, int destLength);
    // static private System.Int32 FromBase64_ComputeResultLength(System.Char* inputPtr, System.Int32 inputLength)
    // Offset: 0x18AA034
    static int FromBase64_ComputeResultLength(::Il2CppChar* inputPtr, int inputLength);
    // static private System.Void .cctor()
    // Offset: 0x18AA39C
    static void _cctor();
  }; // System.Convert
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Convert*, "System", "Convert");
