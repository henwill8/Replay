// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Globalization.HebrewNumber/HS
#include "System/Globalization/HebrewNumber_HS.hpp"
// Completed includes
// Type namespace: System.Globalization
namespace System::Globalization {
  // Autogenerated type: System.Globalization.HebrewNumberParsingContext
  struct HebrewNumberParsingContext : public System::ValueType {
    public:
    // System.Globalization.HebrewNumber/HS state
    // Offset: 0x0
    System::Globalization::HebrewNumber::HS state;
    // System.Int32 result
    // Offset: 0x4
    int result;
    // Creating value type constructor for type: HebrewNumberParsingContext
    constexpr HebrewNumberParsingContext(System::Globalization::HebrewNumber::HS state_ = {}, int result_ = {}) noexcept : state{state_}, result{result_} {}
    // public System.Void .ctor(System.Int32 result)
    // Offset: 0xCA3374
    HebrewNumberParsingContext(int result);
  }; // System.Globalization.HebrewNumberParsingContext
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::HebrewNumberParsingContext, "System.Globalization", "HebrewNumberParsingContext");
#pragma pack(pop)