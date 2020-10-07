// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_Text
#include "TMPro/TMP_Text.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_Text/UnicodeChar
  struct TMP_Text::UnicodeChar : public System::ValueType {
    public:
    // public System.Int32 unicode
    // Offset: 0x0
    int unicode;
    // public System.Int32 stringIndex
    // Offset: 0x4
    int stringIndex;
    // public System.Int32 length
    // Offset: 0x8
    int length;
    // Creating value type constructor for type: UnicodeChar
    constexpr UnicodeChar(int unicode_ = {}, int stringIndex_ = {}, int length_ = {}) noexcept : unicode{unicode_}, stringIndex{stringIndex_}, length{length_} {}
  }; // TMPro.TMP_Text/UnicodeChar
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Text::UnicodeChar, "TMPro", "TMP_Text/UnicodeChar");
#pragma pack(pop)
