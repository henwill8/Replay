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
  // Forward declaring type: Decimal
  struct Decimal;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: NumberFormatInfo
  class NumberFormatInfo;
  // Forward declaring type: NumberStyles
  struct NumberStyles;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Number
  // [] Offset: FFFFFFFF
  // [FriendAccessAllowedAttribute] Offset: CA8098
  class Number : public ::Il2CppObject {
    public:
    // Nested type: System::Number::NumberBuffer
    struct NumberBuffer;
    // Creating value type constructor for type: Number
    Number() noexcept {}
    // static public System.Boolean NumberBufferToDecimal(System.Byte* number, ref System.Decimal value)
    // Offset: 0x1B19860
    static bool NumberBufferToDecimal(uint8_t* number, System::Decimal& value);
    // static System.Boolean NumberBufferToDouble(System.Byte* number, ref System.Double value)
    // Offset: 0x1B19864
    static bool NumberBufferToDouble(uint8_t* number, double& value);
    // static public System.String FormatDecimal(System.Decimal value, System.String format, System.Globalization.NumberFormatInfo info)
    // Offset: 0x1B19868
    static ::Il2CppString* FormatDecimal(System::Decimal value, ::Il2CppString* format, System::Globalization::NumberFormatInfo* info);
    // static public System.String FormatDouble(System.Double value, System.String format, System.Globalization.NumberFormatInfo info)
    // Offset: 0x1B199CC
    static ::Il2CppString* FormatDouble(double value, ::Il2CppString* format, System::Globalization::NumberFormatInfo* info);
    // static public System.String FormatInt32(System.Int32 value, System.String format, System.Globalization.NumberFormatInfo info)
    // Offset: 0x1B19B78
    static ::Il2CppString* FormatInt32(int value, ::Il2CppString* format, System::Globalization::NumberFormatInfo* info);
    // static public System.String FormatUInt32(System.UInt32 value, System.String format, System.Globalization.NumberFormatInfo info)
    // Offset: 0x1B19CA8
    static ::Il2CppString* FormatUInt32(uint value, ::Il2CppString* format, System::Globalization::NumberFormatInfo* info);
    // static public System.String FormatInt64(System.Int64 value, System.String format, System.Globalization.NumberFormatInfo info)
    // Offset: 0x1B19DD8
    static ::Il2CppString* FormatInt64(int64_t value, ::Il2CppString* format, System::Globalization::NumberFormatInfo* info);
    // static public System.String FormatUInt64(System.UInt64 value, System.String format, System.Globalization.NumberFormatInfo info)
    // Offset: 0x1B19F04
    static ::Il2CppString* FormatUInt64(uint64_t value, ::Il2CppString* format, System::Globalization::NumberFormatInfo* info);
    // static public System.String FormatSingle(System.Single value, System.String format, System.Globalization.NumberFormatInfo info)
    // Offset: 0x1B1A030
    static ::Il2CppString* FormatSingle(float value, ::Il2CppString* format, System::Globalization::NumberFormatInfo* info);
    // static private System.Boolean HexNumberToInt32(ref System.Number/NumberBuffer number, ref System.Int32 value)
    // Offset: 0x1B1A1DC
    static bool HexNumberToInt32(System::Number::NumberBuffer& number, int& value);
    // static private System.Boolean HexNumberToInt64(ref System.Number/NumberBuffer number, ref System.Int64 value)
    // Offset: 0x1B1A2A8
    static bool HexNumberToInt64(System::Number::NumberBuffer& number, int64_t& value);
    // static private System.Boolean HexNumberToUInt32(ref System.Number/NumberBuffer number, ref System.UInt32 value)
    // Offset: 0x1B1A210
    static bool HexNumberToUInt32(System::Number::NumberBuffer& number, uint& value);
    // static private System.Boolean HexNumberToUInt64(ref System.Number/NumberBuffer number, ref System.UInt64 value)
    // Offset: 0x1B1A2DC
    static bool HexNumberToUInt64(System::Number::NumberBuffer& number, uint64_t& value);
    // static private System.Boolean IsWhite(System.Char ch)
    // Offset: 0x1B1A378
    static bool IsWhite(::Il2CppChar ch);
    // static private System.Boolean NumberToInt32(ref System.Number/NumberBuffer number, ref System.Int32 value)
    // Offset: 0x1B1A3A0
    static bool NumberToInt32(System::Number::NumberBuffer& number, int& value);
    // static private System.Boolean NumberToInt64(ref System.Number/NumberBuffer number, ref System.Int64 value)
    // Offset: 0x1B1A42C
    static bool NumberToInt64(System::Number::NumberBuffer& number, int64_t& value);
    // static private System.Boolean NumberToUInt32(ref System.Number/NumberBuffer number, ref System.UInt32 value)
    // Offset: 0x1B1A4B0
    static bool NumberToUInt32(System::Number::NumberBuffer& number, uint& value);
    // static private System.Boolean NumberToUInt64(ref System.Number/NumberBuffer number, ref System.UInt64 value)
    // Offset: 0x1B1A534
    static bool NumberToUInt64(System::Number::NumberBuffer& number, uint64_t& value);
    // static private System.Char* MatchChars(System.Char* p, System.String str)
    // Offset: 0x1B1A5B8
    static ::Il2CppChar* MatchChars(::Il2CppChar* p, ::Il2CppString* str);
    // static private System.Char* MatchChars(System.Char* p, System.Char* str)
    // Offset: 0x1B1A62C
    static ::Il2CppChar* MatchChars(::Il2CppChar* p, ::Il2CppChar* str);
    // static System.Decimal ParseDecimal(System.String value, System.Globalization.NumberStyles options, System.Globalization.NumberFormatInfo numfmt)
    // Offset: 0x1B1A678
    static System::Decimal ParseDecimal(::Il2CppString* value, System::Globalization::NumberStyles options, System::Globalization::NumberFormatInfo* numfmt);
    // static System.Double ParseDouble(System.String value, System.Globalization.NumberStyles options, System.Globalization.NumberFormatInfo numfmt)
    // Offset: 0x1B1A994
    static double ParseDouble(::Il2CppString* value, System::Globalization::NumberStyles options, System::Globalization::NumberFormatInfo* numfmt);
    // static System.Int32 ParseInt32(System.String s, System.Globalization.NumberStyles style, System.Globalization.NumberFormatInfo info)
    // Offset: 0x1B1AC04
    static int ParseInt32(::Il2CppString* s, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info);
    // static System.Int64 ParseInt64(System.String value, System.Globalization.NumberStyles options, System.Globalization.NumberFormatInfo numfmt)
    // Offset: 0x1B1AD6C
    static int64_t ParseInt64(::Il2CppString* value, System::Globalization::NumberStyles options, System::Globalization::NumberFormatInfo* numfmt);
    // static private System.Boolean ParseNumber(ref System.Char* str, System.Globalization.NumberStyles options, ref System.Number/NumberBuffer number, System.Text.StringBuilder sb, System.Globalization.NumberFormatInfo numfmt, System.Boolean parseDecimal)
    // Offset: 0x1B1AED4
    static bool ParseNumber(::Il2CppChar*& str, System::Globalization::NumberStyles options, System::Number::NumberBuffer& number, System::Text::StringBuilder* sb, System::Globalization::NumberFormatInfo* numfmt, bool parseDecimal);
    // static System.Single ParseSingle(System.String value, System.Globalization.NumberStyles options, System.Globalization.NumberFormatInfo numfmt)
    // Offset: 0x1B1B3FC
    static float ParseSingle(::Il2CppString* value, System::Globalization::NumberStyles options, System::Globalization::NumberFormatInfo* numfmt);
    // static System.UInt32 ParseUInt32(System.String value, System.Globalization.NumberStyles options, System.Globalization.NumberFormatInfo numfmt)
    // Offset: 0x1B1B674
    static uint ParseUInt32(::Il2CppString* value, System::Globalization::NumberStyles options, System::Globalization::NumberFormatInfo* numfmt);
    // static System.UInt64 ParseUInt64(System.String value, System.Globalization.NumberStyles options, System.Globalization.NumberFormatInfo numfmt)
    // Offset: 0x1B1B7BC
    static uint64_t ParseUInt64(::Il2CppString* value, System::Globalization::NumberStyles options, System::Globalization::NumberFormatInfo* numfmt);
    // static private System.Void StringToNumber(System.String str, System.Globalization.NumberStyles options, ref System.Number/NumberBuffer number, System.Globalization.NumberFormatInfo info, System.Boolean parseDecimal)
    // Offset: 0x1B1A7E4
    static void StringToNumber(::Il2CppString* str, System::Globalization::NumberStyles options, System::Number::NumberBuffer& number, System::Globalization::NumberFormatInfo* info, bool parseDecimal);
    // static private System.Boolean TrailingZeros(System.String s, System.Int32 index)
    // Offset: 0x1B1B904
    static bool TrailingZeros(::Il2CppString* s, int index);
    // static System.Boolean TryParseDouble(System.String value, System.Globalization.NumberStyles options, System.Globalization.NumberFormatInfo numfmt, out System.Double result)
    // Offset: 0x1B1B96C
    static bool TryParseDouble(::Il2CppString* value, System::Globalization::NumberStyles options, System::Globalization::NumberFormatInfo* numfmt, double& result);
    // static System.Boolean TryParseInt32(System.String s, System.Globalization.NumberStyles style, System.Globalization.NumberFormatInfo info, out System.Int32 result)
    // Offset: 0x1B1BA8C
    static bool TryParseInt32(::Il2CppString* s, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info, int& result);
    // static System.Boolean TryParseInt64(System.String s, System.Globalization.NumberStyles style, System.Globalization.NumberFormatInfo info, out System.Int64 result)
    // Offset: 0x1B1BBC4
    static bool TryParseInt64(::Il2CppString* s, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info, int64_t& result);
    // static System.Boolean TryParseSingle(System.String value, System.Globalization.NumberStyles options, System.Globalization.NumberFormatInfo numfmt, out System.Single result)
    // Offset: 0x1B1BCF4
    static bool TryParseSingle(::Il2CppString* value, System::Globalization::NumberStyles options, System::Globalization::NumberFormatInfo* numfmt, float& result);
    // static System.Boolean TryParseUInt32(System.String s, System.Globalization.NumberStyles style, System.Globalization.NumberFormatInfo info, out System.UInt32 result)
    // Offset: 0x1B1BE4C
    static bool TryParseUInt32(::Il2CppString* s, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info, uint& result);
    // static System.Boolean TryStringToNumber(System.String str, System.Globalization.NumberStyles options, ref System.Number/NumberBuffer number, System.Globalization.NumberFormatInfo numfmt, System.Boolean parseDecimal)
    // Offset: 0x1B1ABF0
    static bool TryStringToNumber(::Il2CppString* str, System::Globalization::NumberStyles options, System::Number::NumberBuffer& number, System::Globalization::NumberFormatInfo* numfmt, bool parseDecimal);
    // static System.Boolean TryStringToNumber(System.String str, System.Globalization.NumberStyles options, ref System.Number/NumberBuffer number, System.Text.StringBuilder sb, System.Globalization.NumberFormatInfo numfmt, System.Boolean parseDecimal)
    // Offset: 0x1B1BF68
    static bool TryStringToNumber(::Il2CppString* str, System::Globalization::NumberStyles options, System::Number::NumberBuffer& number, System::Text::StringBuilder* sb, System::Globalization::NumberFormatInfo* numfmt, bool parseDecimal);
  }; // System.Number
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Number*, "System", "Number");
