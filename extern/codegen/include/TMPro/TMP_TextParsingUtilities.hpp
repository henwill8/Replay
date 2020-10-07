// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_TextParsingUtilities
  class TMP_TextParsingUtilities : public ::Il2CppObject {
    public:
    // Get static field: static private readonly TMPro.TMP_TextParsingUtilities s_Instance
    static TMPro::TMP_TextParsingUtilities* _get_s_Instance();
    // Set static field: static private readonly TMPro.TMP_TextParsingUtilities s_Instance
    static void _set_s_Instance(TMPro::TMP_TextParsingUtilities* value);
    // static field const value: static private System.String k_LookupStringL
    static constexpr const char* k_LookupStringL = "-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[-]^_`abcdefghijklmnopqrstuvwxyz{|}~-";
    // Get static field: static private System.String k_LookupStringL
    static ::Il2CppString* _get_k_LookupStringL();
    // Set static field: static private System.String k_LookupStringL
    static void _set_k_LookupStringL(::Il2CppString* value);
    // static field const value: static private System.String k_LookupStringU
    static constexpr const char* k_LookupStringU = "-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[-]^_`ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~-";
    // Get static field: static private System.String k_LookupStringU
    static ::Il2CppString* _get_k_LookupStringU();
    // Set static field: static private System.String k_LookupStringU
    static void _set_k_LookupStringU(::Il2CppString* value);
    // static private System.Void .cctor()
    // Offset: 0xDC3840
    static void _cctor();
    // static public TMPro.TMP_TextParsingUtilities get_instance()
    // Offset: 0xDC38B0
    static TMPro::TMP_TextParsingUtilities* get_instance();
    // static public System.UInt32 GetHashCode(System.String s)
    // Offset: 0xDC3918
    static uint GetHashCode(::Il2CppString* s);
    // static public System.Int32 GetHashCodeCaseSensitive(System.String s)
    // Offset: 0xDC3A68
    static int GetHashCodeCaseSensitive(::Il2CppString* s);
    // static public System.Char ToLowerASCIIFast(System.Char c)
    // Offset: 0xDC3AE0
    static ::Il2CppChar ToLowerASCIIFast(::Il2CppChar c);
    // static public System.Char ToUpperASCIIFast(System.Char c)
    // Offset: 0xDC39EC
    static ::Il2CppChar ToUpperASCIIFast(::Il2CppChar c);
    // static public System.UInt32 ToUpperASCIIFast(System.UInt32 c)
    // Offset: 0xDC3B5C
    static uint ToUpperASCIIFast(uint c);
    // static public System.UInt32 ToLowerASCIIFast(System.UInt32 c)
    // Offset: 0xDC3BD8
    static uint ToLowerASCIIFast(uint c);
    // static public System.Boolean IsHighSurrogate(System.UInt32 c)
    // Offset: 0xDC3C54
    static bool IsHighSurrogate(uint c);
    // static public System.Boolean IsLowSurrogate(System.UInt32 c)
    // Offset: 0xDC3C68
    static bool IsLowSurrogate(uint c);
    // public System.Void .ctor()
    // Offset: 0xDC38A8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TMP_TextParsingUtilities* New_ctor();
  }; // TMPro.TMP_TextParsingUtilities
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_TextParsingUtilities*, "TMPro", "TMP_TextParsingUtilities");
#pragma pack(pop)
