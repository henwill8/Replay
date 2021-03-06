// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IPv4AddressHelper
  // [] Offset: FFFFFFFF
  class IPv4AddressHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IPv4AddressHelper
    IPv4AddressHelper() noexcept {}
    // static System.String ParseCanonicalName(System.String str, System.Int32 start, System.Int32 end, ref System.Boolean isLoopback)
    // Offset: 0x17A592C
    static ::Il2CppString* ParseCanonicalName(::Il2CppString* str, int start, int end, bool& isLoopback);
    // static System.Int32 ParseHostNumber(System.String str, System.Int32 start, System.Int32 end)
    // Offset: 0x17A5C8C
    static int ParseHostNumber(::Il2CppString* str, int start, int end);
    // static System.Boolean IsValid(System.Char* name, System.Int32 start, ref System.Int32 end, System.Boolean allowIPv6, System.Boolean notImplicitFile, System.Boolean unknownScheme)
    // Offset: 0x17A5D7C
    static bool IsValid(::Il2CppChar* name, int start, int& end, bool allowIPv6, bool notImplicitFile, bool unknownScheme);
    // static System.Boolean IsValidCanonical(System.Char* name, System.Int32 start, ref System.Int32 end, System.Boolean allowIPv6, System.Boolean notImplicitFile)
    // Offset: 0x17A5DB0
    static bool IsValidCanonical(::Il2CppChar* name, int start, int& end, bool allowIPv6, bool notImplicitFile);
    // static System.Int64 ParseNonCanonical(System.Char* name, System.Int32 start, ref System.Int32 end, System.Boolean notImplicitFile)
    // Offset: 0x17A5EF0
    static int64_t ParseNonCanonical(::Il2CppChar* name, int start, int& end, bool notImplicitFile);
    // static private System.Boolean Parse(System.String name, System.Byte* numbers, System.Int32 start, System.Int32 end)
    // Offset: 0x17A5BFC
    static bool Parse(::Il2CppString* name, uint8_t* numbers, int start, int end);
    // static private System.Boolean ParseCanonical(System.String name, System.Byte* numbers, System.Int32 start, System.Int32 end)
    // Offset: 0x17A5CC0
    static bool ParseCanonical(::Il2CppString* name, uint8_t* numbers, int start, int end);
  }; // System.IPv4AddressHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IPv4AddressHelper*, "System", "IPv4AddressHelper");
