// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: StringBuilderExtension
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class StringBuilderExtension : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: StringBuilderExtension
    StringBuilderExtension() noexcept {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD0A428
    // Get static field: static private System.Char[] charToInt
    static ::Array<::Il2CppChar>* _get_charToInt();
    // Set static field: static private System.Char[] charToInt
    static void _set_charToInt(::Array<::Il2CppChar>* value);
    // static public System.Void Swap(System.Text.StringBuilder sb, System.Int32 startIndex, System.Int32 endIndex)
    // Offset: 0x229C41C
    static void Swap(System::Text::StringBuilder* sb, int startIndex, int endIndex);
    // static public System.Void AppendNumber(System.Text.StringBuilder sb, System.Int32 number)
    // Offset: 0x229C4D4
    static void AppendNumber(System::Text::StringBuilder* sb, int number);
    // static public System.Void AppendNumber(System.Text.StringBuilder sb, System.UInt32 unumber)
    // Offset: 0x229C61C
    static void AppendNumber(System::Text::StringBuilder* sb, uint unumber);
    // static private System.Void .cctor()
    // Offset: 0x229C748
    static void _cctor();
  }; // StringBuilderExtension
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StringBuilderExtension*, "", "StringBuilderExtension");
