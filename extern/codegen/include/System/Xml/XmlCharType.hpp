// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.XmlCharType
  struct XmlCharType : public System::ValueType {
    public:
    // System.Byte[] charProperties
    // Offset: 0x0
    ::Array<uint8_t>* charProperties;
    // Creating value type constructor for type: XmlCharType
    constexpr XmlCharType(::Array<uint8_t>* charProperties_ = {}) noexcept : charProperties{charProperties_} {}
    // Creating conversion operator: operator ::Array<uint8_t>*
    constexpr operator ::Array<uint8_t>*() const noexcept {
      return charProperties;
    }
    // Get static field: static private System.Object s_Lock
    static ::Il2CppObject* _get_s_Lock();
    // Set static field: static private System.Object s_Lock
    static void _set_s_Lock(::Il2CppObject* value);
    // Get static field: static private System.Byte[] s_CharProperties
    static ::Array<uint8_t>* _get_s_CharProperties();
    // Set static field: static private System.Byte[] s_CharProperties
    static void _set_s_CharProperties(::Array<uint8_t>* value);
    // static private System.Object get_StaticLock()
    // Offset: 0x14E97C8
    static ::Il2CppObject* get_StaticLock();
    // static private System.Void InitInstance()
    // Offset: 0x14E9858
    static void InitInstance();
    // static private System.Void SetProperties(System.String ranges, System.Byte value)
    // Offset: 0x14E9A1C
    static void SetProperties(::Il2CppString* ranges, uint8_t value);
    // private System.Void .ctor(System.Byte[] charProperties)
    // Offset: 0xCA0744
    // ABORTED: conflicts with another method.  XmlCharType(::Array<uint8_t>* charProperties);
    // static public System.Xml.XmlCharType get_Instance()
    // Offset: 0x14E7B60
    static System::Xml::XmlCharType get_Instance();
    // public System.Boolean IsWhiteSpace(System.Char ch)
    // Offset: 0xCA074C
    bool IsWhiteSpace(::Il2CppChar ch);
    // public System.Boolean IsCharData(System.Char ch)
    // Offset: 0xCA0754
    bool IsCharData(::Il2CppChar ch);
    // public System.Boolean IsPubidChar(System.Char ch)
    // Offset: 0xCA075C
    bool IsPubidChar(::Il2CppChar ch);
    // System.Boolean IsTextChar(System.Char ch)
    // Offset: 0xCA0760
    bool IsTextChar(::Il2CppChar ch);
    // static System.Boolean IsHighSurrogate(System.Int32 ch)
    // Offset: 0x14E9C88
    static bool IsHighSurrogate(int ch);
    // static System.Boolean IsLowSurrogate(System.Int32 ch)
    // Offset: 0x14E9CAC
    static bool IsLowSurrogate(int ch);
    // static System.Boolean IsSurrogate(System.Int32 ch)
    // Offset: 0x14E9CBC
    static bool IsSurrogate(int ch);
    // static System.Int32 CombineSurrogateChar(System.Int32 lowChar, System.Int32 highChar)
    // Offset: 0x14DFAF4
    static int CombineSurrogateChar(int lowChar, int highChar);
    // System.Boolean IsOnlyWhitespace(System.String str)
    // Offset: 0xCA0768
    bool IsOnlyWhitespace(::Il2CppString* str);
    // System.Int32 IsOnlyWhitespaceWithPos(System.String str)
    // Offset: 0xCA0788
    int IsOnlyWhitespaceWithPos(::Il2CppString* str);
    // System.Int32 IsOnlyCharData(System.String str)
    // Offset: 0xCA0790
    int IsOnlyCharData(::Il2CppString* str);
    // System.Int32 IsPublicId(System.String str)
    // Offset: 0xCA0798
    int IsPublicId(::Il2CppString* str);
    // static private System.Boolean InRange(System.Int32 value, System.Int32 start, System.Int32 end)
    // Offset: 0x14E9C98
    static bool InRange(int value, int start, int end);
  }; // System.Xml.XmlCharType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlCharType, "System.Xml", "XmlCharType");
#pragma pack(pop)