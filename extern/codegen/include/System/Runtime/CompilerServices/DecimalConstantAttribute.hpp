// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Decimal
#include "System/Decimal.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.DecimalConstantAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: CAC278
  // [ComVisibleAttribute] Offset: CAC278
  class DecimalConstantAttribute : public System::Attribute {
    public:
    // private System.Decimal dec
    // Size: 0x10
    // Offset: 0x10
    System::Decimal dec;
    // Field size check
    static_assert(sizeof(System::Decimal) == 0x10);
    // Creating value type constructor for type: DecimalConstantAttribute
    DecimalConstantAttribute(System::Decimal dec_ = {}) noexcept : dec{dec_} {}
    // Creating conversion operator: operator System::Decimal
    constexpr operator System::Decimal() const noexcept {
      return dec;
    }
    // public System.Void .ctor(System.Byte scale, System.Byte sign, System.UInt32 hi, System.UInt32 mid, System.UInt32 low)
    // Offset: 0x1309AC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecimalConstantAttribute* New_ctor(uint8_t scale, uint8_t sign, uint hi, uint mid, uint low) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::DecimalConstantAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecimalConstantAttribute*, creationType>(scale, sign, hi, mid, low)));
    }
    // public System.Decimal get_Value()
    // Offset: 0x1309B48
    System::Decimal get_Value();
  }; // System.Runtime.CompilerServices.DecimalConstantAttribute
  #pragma pack(pop)
  static check_size<sizeof(DecimalConstantAttribute), 16 + sizeof(System::Decimal)> __System_Runtime_CompilerServices_DecimalConstantAttributeSizeCheck;
  static_assert(sizeof(DecimalConstantAttribute) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::DecimalConstantAttribute*, "System.Runtime.CompilerServices", "DecimalConstantAttribute");
