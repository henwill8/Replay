// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.ParseNumbers
  class ParseNumbers : public ::Il2CppObject {
    public:
    // static public System.Int32 StringToInt(System.String value, System.Int32 fromBase, System.Int32 flags)
    // Offset: 0x171D058
    static int StringToInt(::Il2CppString* value, int fromBase, int flags);
    // static public System.Int32 StringToInt(System.String value, System.Int32 fromBase, System.Int32 flags, System.Int32* parsePos)
    // Offset: 0x171D060
    static int StringToInt(::Il2CppString* value, int fromBase, int flags, int* parsePos);
    // static public System.String LongToString(System.Int64 value, System.Int32 toBase, System.Int32 width, System.Char paddingChar, System.Int32 flags)
    // Offset: 0x171D478
    static ::Il2CppString* LongToString(int64_t value, int toBase, int width, ::Il2CppChar paddingChar, int flags);
    // static public System.Int64 StringToLong(System.String value, System.Int32 fromBase, System.Int32 flags, System.Int32* parsePos)
    // Offset: 0x171DA60
    static int64_t StringToLong(::Il2CppString* value, int fromBase, int flags, int* parsePos);
    // static public System.String IntToString(System.Int32 value, System.Int32 toBase, System.Int32 width, System.Char paddingChar, System.Int32 flags)
    // Offset: 0x171DEA4
    static ::Il2CppString* IntToString(int value, int toBase, int width, ::Il2CppChar paddingChar, int flags);
    // static private System.Void EndianSwap(ref System.Byte[] value)
    // Offset: 0x171E0C8
    static void EndianSwap(::Array<uint8_t>*& value);
    // static private System.Text.StringBuilder ConvertToBase2(System.Byte[] value)
    // Offset: 0x171D598
    static System::Text::StringBuilder* ConvertToBase2(::Array<uint8_t>* value);
    // static private System.Text.StringBuilder ConvertToBase8(System.Byte[] value)
    // Offset: 0x171D6D4
    static System::Text::StringBuilder* ConvertToBase8(::Array<uint8_t>* value);
    // static private System.Text.StringBuilder ConvertToBase16(System.Byte[] value)
    // Offset: 0x171D8AC
    static System::Text::StringBuilder* ConvertToBase16(::Array<uint8_t>* value);
  }; // System.ParseNumbers
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ParseNumbers*, "System", "ParseNumbers");
#pragma pack(pop)