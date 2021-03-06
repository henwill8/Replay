// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_FontAsset
  class TMP_FontAsset;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.TMP_FontWeightPair
  // [] Offset: FFFFFFFF
  struct TMP_FontWeightPair/*, public System::ValueType*/ {
    public:
    // public TMPro.TMP_FontAsset regularTypeface
    // Size: 0x8
    // Offset: 0x0
    TMPro::TMP_FontAsset* regularTypeface;
    // Field size check
    static_assert(sizeof(TMPro::TMP_FontAsset*) == 0x8);
    // public TMPro.TMP_FontAsset italicTypeface
    // Size: 0x8
    // Offset: 0x8
    TMPro::TMP_FontAsset* italicTypeface;
    // Field size check
    static_assert(sizeof(TMPro::TMP_FontAsset*) == 0x8);
    // Creating value type constructor for type: TMP_FontWeightPair
    constexpr TMP_FontWeightPair(TMPro::TMP_FontAsset* regularTypeface_ = {}, TMPro::TMP_FontAsset* italicTypeface_ = {}) noexcept : regularTypeface{regularTypeface_}, italicTypeface{italicTypeface_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // TMPro.TMP_FontWeightPair
  #pragma pack(pop)
  static check_size<sizeof(TMP_FontWeightPair), 8 + sizeof(TMPro::TMP_FontAsset*)> __TMPro_TMP_FontWeightPairSizeCheck;
  static_assert(sizeof(TMP_FontWeightPair) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_FontWeightPair, "TMPro", "TMP_FontWeightPair");
