// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.ParameterizedStrings
  class ParameterizedStrings : public ::Il2CppObject {
    public:
    // Nested type: System::ParameterizedStrings::FormatParam
    struct FormatParam;
    // Nested type: System::ParameterizedStrings::LowLevelStack
    class LowLevelStack;
    // Get static field: static private System.ParameterizedStrings/LowLevelStack _cachedStack
    static System::ParameterizedStrings::LowLevelStack* _get__cachedStack();
    // Set static field: static private System.ParameterizedStrings/LowLevelStack _cachedStack
    static void _set__cachedStack(System::ParameterizedStrings::LowLevelStack* value);
    // static public System.String Evaluate(System.String format, params System.ParameterizedStrings/FormatParam[] args)
    // Offset: 0x171B7E0
    static ::Il2CppString* Evaluate(::Il2CppString* format, ::Array<System::ParameterizedStrings::FormatParam>* args);
    // Creating initializer_list -> params proxy for: System.String Evaluate(System.String format, params System.ParameterizedStrings/FormatParam[] args)
    static ::Il2CppString* Evaluate(::Il2CppString* format, std::initializer_list<System::ParameterizedStrings::FormatParam> args);
    // Creating TArgs -> initializer_list proxy for: System.String Evaluate(System.String format, params System.ParameterizedStrings/FormatParam[] args)
    template<class ...TParams>
    static ::Il2CppString* Evaluate(::Il2CppString* format, TParams&&... args) {
      return Evaluate(format, {args...});
    }
    // static private System.String EvaluateInternal(System.String format, ref System.Int32 pos, System.ParameterizedStrings/FormatParam[] args, System.ParameterizedStrings/LowLevelStack stack, ref System.ParameterizedStrings/FormatParam[] dynamicVars, ref System.ParameterizedStrings/FormatParam[] staticVars)
    // Offset: 0x171B9B4
    static ::Il2CppString* EvaluateInternal(::Il2CppString* format, int& pos, ::Array<System::ParameterizedStrings::FormatParam>* args, System::ParameterizedStrings::LowLevelStack* stack, ::Array<System::ParameterizedStrings::FormatParam>*& dynamicVars, ::Array<System::ParameterizedStrings::FormatParam>*& staticVars);
    // static private System.Boolean AsBool(System.Int32 i)
    // Offset: 0x171C95C
    static bool AsBool(int i);
    // static private System.Int32 AsInt(System.Boolean b)
    // Offset: 0x171C954
    static int AsInt(bool b);
    // static private System.String StringFromAsciiBytes(System.Byte[] buffer, System.Int32 offset, System.Int32 length)
    // Offset: 0x171C968
    static ::Il2CppString* StringFromAsciiBytes(::Array<uint8_t>* buffer, int offset, int length);
    // static private System.Int32 snprintf(System.Byte* str, System.IntPtr size, System.String format, System.String arg1)
    // Offset: 0x171CA64
    static int snprintf(uint8_t* str, System::IntPtr size, ::Il2CppString* format, ::Il2CppString* arg1);
    // static private System.Int32 snprintf(System.Byte* str, System.IntPtr size, System.String format, System.Int32 arg1)
    // Offset: 0x171CB3C
    static int snprintf(uint8_t* str, System::IntPtr size, ::Il2CppString* format, int arg1);
    // static private System.String FormatPrintF(System.String format, System.Object arg)
    // Offset: 0x171C4D4
    static ::Il2CppString* FormatPrintF(::Il2CppString* format, ::Il2CppObject* arg);
    // static private System.ParameterizedStrings/FormatParam[] GetDynamicOrStaticVariables(System.Char c, ref System.ParameterizedStrings/FormatParam[] dynamicVars, ref System.ParameterizedStrings/FormatParam[] staticVars, out System.Int32 index)
    // Offset: 0x171C828
    static ::Array<System::ParameterizedStrings::FormatParam>* GetDynamicOrStaticVariables(::Il2CppChar c, ::Array<System::ParameterizedStrings::FormatParam>*& dynamicVars, ::Array<System::ParameterizedStrings::FormatParam>*& staticVars, int& index);
  }; // System.ParameterizedStrings
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ParameterizedStrings*, "System", "ParameterizedStrings");
#pragma pack(pop)
