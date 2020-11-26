// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Decimal
#include "System/Decimal.hpp"
// Completed includes
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Autogenerated type: System.Runtime.CompilerServices.DecimalConstantAttribute
  class DecimalConstantAttribute : public System::Attribute {
    public:
    // private System.Decimal dec
    // Offset: 0x10
    System::Decimal dec;
    // Creating conversion operator: operator System::Decimal
    constexpr operator System::Decimal() const noexcept {
      return dec;
    }
    // public System.Void .ctor(System.Byte scale, System.Byte sign, System.UInt32 hi, System.UInt32 mid, System.UInt32 low)
    // Offset: 0x11630C4
    static DecimalConstantAttribute* New_ctor(uint8_t scale, uint8_t sign, uint hi, uint mid, uint low);
    // public System.Decimal get_Value()
    // Offset: 0x1163144
    System::Decimal get_Value();
  }; // System.Runtime.CompilerServices.DecimalConstantAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::DecimalConstantAttribute*, "System.Runtime.CompilerServices", "DecimalConstantAttribute");
#pragma pack(pop)
