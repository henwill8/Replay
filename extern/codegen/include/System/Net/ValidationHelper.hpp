// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ValidationHelper
  // [] Offset: FFFFFFFF
  class ValidationHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ValidationHelper
    ValidationHelper() noexcept {}
    // Get static field: static public System.String[] EmptyArray
    static ::Array<::Il2CppString*>* _get_EmptyArray();
    // Set static field: static public System.String[] EmptyArray
    static void _set_EmptyArray(::Array<::Il2CppString*>* value);
    // Get static field: static readonly System.Char[] InvalidMethodChars
    static ::Array<::Il2CppChar>* _get_InvalidMethodChars();
    // Set static field: static readonly System.Char[] InvalidMethodChars
    static void _set_InvalidMethodChars(::Array<::Il2CppChar>* value);
    // Get static field: static readonly System.Char[] InvalidParamChars
    static ::Array<::Il2CppChar>* _get_InvalidParamChars();
    // Set static field: static readonly System.Char[] InvalidParamChars
    static void _set_InvalidParamChars(::Array<::Il2CppChar>* value);
    // static public System.String MakeStringNull(System.String stringValue)
    // Offset: 0x1435008
    static ::Il2CppString* MakeStringNull(::Il2CppString* stringValue);
    // static public System.Boolean IsBlankString(System.String stringValue)
    // Offset: 0x143501C
    static bool IsBlankString(::Il2CppString* stringValue);
    // static public System.Boolean ValidateTcpPort(System.Int32 port)
    // Offset: 0x14325F4
    static bool ValidateTcpPort(int port);
    // static private System.Void .cctor()
    // Offset: 0x1435038
    static void _cctor();
  }; // System.Net.ValidationHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::ValidationHelper*, "System.Net", "ValidationHelper");
