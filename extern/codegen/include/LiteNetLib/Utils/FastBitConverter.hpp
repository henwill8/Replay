// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
}
// Completed forward declares
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Autogenerated type: LiteNetLib.Utils.FastBitConverter
  class FastBitConverter : public ::Il2CppObject {
    public:
    // Nested type: LiteNetLib::Utils::FastBitConverter::ConverterHelperDouble
    struct ConverterHelperDouble;
    // Nested type: LiteNetLib::Utils::FastBitConverter::ConverterHelperFloat
    struct ConverterHelperFloat;
    // static private System.Void WriteLittleEndian(System.Byte[] buffer, System.Int32 offset, System.UInt64 data)
    // Offset: 0x1DD2BEC
    static void WriteLittleEndian(::Array<uint8_t>* buffer, int offset, uint64_t data);
    // static private System.Void WriteLittleEndian(System.Byte[] buffer, System.Int32 offset, System.Int32 data)
    // Offset: 0x1DD2CE8
    static void WriteLittleEndian(::Array<uint8_t>* buffer, int offset, int data);
    // static public System.Void WriteLittleEndian(System.Byte[] buffer, System.Int32 offset, System.Int16 data)
    // Offset: 0x1DD2D74
    static void WriteLittleEndian(::Array<uint8_t>* buffer, int offset, int16_t data);
    // static public System.Void GetBytes(System.Byte[] bytes, System.Int32 startIndex, System.Double value)
    // Offset: 0x1DD2DC8
    static void GetBytes(::Array<uint8_t>* bytes, int startIndex, double value);
    // static public System.Void GetBytes(System.Byte[] bytes, System.Int32 startIndex, System.Single value)
    // Offset: 0x1DD2DD0
    static void GetBytes(::Array<uint8_t>* bytes, int startIndex, float value);
    // static public System.Void GetBytes(System.Byte[] bytes, System.Int32 startIndex, System.Int16 value)
    // Offset: 0x1DD2DD8
    static void GetBytes(::Array<uint8_t>* bytes, int startIndex, int16_t value);
    // static public System.Void GetBytes(System.Byte[] bytes, System.Int32 startIndex, System.UInt16 value)
    // Offset: 0x1DCD3D8
    static void GetBytes(::Array<uint8_t>* bytes, int startIndex, uint16_t value);
    // static public System.Void GetBytes(System.Byte[] bytes, System.Int32 startIndex, System.Int32 value)
    // Offset: 0x1DC66A8
    static void GetBytes(::Array<uint8_t>* bytes, int startIndex, int value);
    // static public System.Void GetBytes(System.Byte[] bytes, System.Int32 startIndex, System.UInt32 value)
    // Offset: 0x1DC4784
    static void GetBytes(::Array<uint8_t>* bytes, int startIndex, uint value);
    // static public System.Void GetBytes(System.Byte[] bytes, System.Int32 startIndex, System.Int64 value)
    // Offset: 0x1DC6220
    static void GetBytes(::Array<uint8_t>* bytes, int startIndex, int64_t value);
    // static public System.Void GetBytes(System.Byte[] bytes, System.Int32 startIndex, System.UInt64 value)
    // Offset: 0x1DD2DDC
    static void GetBytes(::Array<uint8_t>* bytes, int startIndex, uint64_t value);
  }; // LiteNetLib.Utils.FastBitConverter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::FastBitConverter*, "LiteNetLib.Utils", "FastBitConverter");
#pragma pack(pop)
