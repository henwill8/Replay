// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.ConsoleKey
#include "System/ConsoleKey.hpp"
// Including type: System.ConsoleModifiers
#include "System/ConsoleModifiers.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.ConsoleKeyInfo
  struct ConsoleKeyInfo : public System::ValueType {
    public:
    // private System.Char _keyChar
    // Offset: 0x0
    ::Il2CppChar keyChar;
    // private System.ConsoleKey _key
    // Offset: 0x4
    System::ConsoleKey key;
    // private System.ConsoleModifiers _mods
    // Offset: 0x8
    System::ConsoleModifiers mods;
    // Creating value type constructor for type: ConsoleKeyInfo
    constexpr ConsoleKeyInfo(::Il2CppChar keyChar_ = {}, System::ConsoleKey key_ = {}, System::ConsoleModifiers mods_ = {}) noexcept : keyChar{keyChar_}, key{key_}, mods{mods_} {}
    // public System.Void .ctor(System.Char keyChar, System.ConsoleKey key, System.Boolean shift, System.Boolean alt, System.Boolean control)
    // Offset: 0xA40B80
    ConsoleKeyInfo(::Il2CppChar keyChar, System::ConsoleKey key, bool shift, bool alt, bool control);
    // public System.Char get_KeyChar()
    // Offset: 0xA40B94
    ::Il2CppChar get_KeyChar();
    // public System.ConsoleKey get_Key()
    // Offset: 0xA40B9C
    System::ConsoleKey get_Key();
    // public System.Boolean Equals(System.ConsoleKeyInfo obj)
    // Offset: 0xA40BAC
    bool Equals(System::ConsoleKeyInfo obj);
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0xA40BA4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA40BE0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.ConsoleKeyInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ConsoleKeyInfo, "System", "ConsoleKeyInfo");
#pragma pack(pop)
