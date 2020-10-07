// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.UnicodeCharacter
  struct UnicodeCharacter : public System::Enum {
    public:
    // public System.UInt32 value__
    // Offset: 0x0
    uint value;
    // Creating value type constructor for type: UnicodeCharacter
    constexpr UnicodeCharacter(uint value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // static field const value: static public TMPro.UnicodeCharacter HYPHEN_MINUS
    static constexpr const uint HYPHEN_MINUS = 45u;
    // Get static field: static public TMPro.UnicodeCharacter HYPHEN_MINUS
    static TMPro::UnicodeCharacter _get_HYPHEN_MINUS();
    // Set static field: static public TMPro.UnicodeCharacter HYPHEN_MINUS
    static void _set_HYPHEN_MINUS(TMPro::UnicodeCharacter value);
    // static field const value: static public TMPro.UnicodeCharacter SOFT_HYPHEN
    static constexpr const uint SOFT_HYPHEN = 173u;
    // Get static field: static public TMPro.UnicodeCharacter SOFT_HYPHEN
    static TMPro::UnicodeCharacter _get_SOFT_HYPHEN();
    // Set static field: static public TMPro.UnicodeCharacter SOFT_HYPHEN
    static void _set_SOFT_HYPHEN(TMPro::UnicodeCharacter value);
    // static field const value: static public TMPro.UnicodeCharacter HYPHEN
    static constexpr const uint HYPHEN = 8208u;
    // Get static field: static public TMPro.UnicodeCharacter HYPHEN
    static TMPro::UnicodeCharacter _get_HYPHEN();
    // Set static field: static public TMPro.UnicodeCharacter HYPHEN
    static void _set_HYPHEN(TMPro::UnicodeCharacter value);
    // static field const value: static public TMPro.UnicodeCharacter NON_BREAKING_HYPHEN
    static constexpr const uint NON_BREAKING_HYPHEN = 8209u;
    // Get static field: static public TMPro.UnicodeCharacter NON_BREAKING_HYPHEN
    static TMPro::UnicodeCharacter _get_NON_BREAKING_HYPHEN();
    // Set static field: static public TMPro.UnicodeCharacter NON_BREAKING_HYPHEN
    static void _set_NON_BREAKING_HYPHEN(TMPro::UnicodeCharacter value);
    // static field const value: static public TMPro.UnicodeCharacter ZERO_WIDTH_SPACE
    static constexpr const uint ZERO_WIDTH_SPACE = 8203u;
    // Get static field: static public TMPro.UnicodeCharacter ZERO_WIDTH_SPACE
    static TMPro::UnicodeCharacter _get_ZERO_WIDTH_SPACE();
    // Set static field: static public TMPro.UnicodeCharacter ZERO_WIDTH_SPACE
    static void _set_ZERO_WIDTH_SPACE(TMPro::UnicodeCharacter value);
    // static field const value: static public TMPro.UnicodeCharacter RIGHT_SINGLE_QUOTATION
    static constexpr const uint RIGHT_SINGLE_QUOTATION = 8217u;
    // Get static field: static public TMPro.UnicodeCharacter RIGHT_SINGLE_QUOTATION
    static TMPro::UnicodeCharacter _get_RIGHT_SINGLE_QUOTATION();
    // Set static field: static public TMPro.UnicodeCharacter RIGHT_SINGLE_QUOTATION
    static void _set_RIGHT_SINGLE_QUOTATION(TMPro::UnicodeCharacter value);
    // static field const value: static public TMPro.UnicodeCharacter APOSTROPHE
    static constexpr const uint APOSTROPHE = 39u;
    // Get static field: static public TMPro.UnicodeCharacter APOSTROPHE
    static TMPro::UnicodeCharacter _get_APOSTROPHE();
    // Set static field: static public TMPro.UnicodeCharacter APOSTROPHE
    static void _set_APOSTROPHE(TMPro::UnicodeCharacter value);
    // static field const value: static public TMPro.UnicodeCharacter WORD_JOINER
    static constexpr const uint WORD_JOINER = 8288u;
    // Get static field: static public TMPro.UnicodeCharacter WORD_JOINER
    static TMPro::UnicodeCharacter _get_WORD_JOINER();
    // Set static field: static public TMPro.UnicodeCharacter WORD_JOINER
    static void _set_WORD_JOINER(TMPro::UnicodeCharacter value);
  }; // TMPro.UnicodeCharacter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::UnicodeCharacter, "TMPro", "UnicodeCharacter");
#pragma pack(pop)
