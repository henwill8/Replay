// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.TagAttribute
  // [] Offset: FFFFFFFF
  struct TagAttribute/*, public System::ValueType*/ {
    public:
    // public System.Int32 startIndex
    // Size: 0x4
    // Offset: 0x0
    int startIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 length
    // Size: 0x4
    // Offset: 0x4
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 hashCode
    // Size: 0x4
    // Offset: 0x8
    int hashCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TagAttribute
    constexpr TagAttribute(int startIndex_ = {}, int length_ = {}, int hashCode_ = {}) noexcept : startIndex{startIndex_}, length{length_}, hashCode{hashCode_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // TMPro.TagAttribute
  #pragma pack(pop)
  static check_size<sizeof(TagAttribute), 8 + sizeof(int)> __TMPro_TagAttributeSizeCheck;
  static_assert(sizeof(TagAttribute) == 0xC);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TagAttribute, "TMPro", "TagAttribute");
