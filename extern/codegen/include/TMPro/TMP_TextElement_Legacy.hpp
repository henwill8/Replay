// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_TextElement_Legacy
  // [] Offset: FFFFFFFF
  class TMP_TextElement_Legacy : public ::Il2CppObject {
    public:
    // public System.Int32 id
    // Size: 0x4
    // Offset: 0x10
    int id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single x
    // Size: 0x4
    // Offset: 0x14
    float x;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single y
    // Size: 0x4
    // Offset: 0x18
    float y;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single width
    // Size: 0x4
    // Offset: 0x1C
    float width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single height
    // Size: 0x4
    // Offset: 0x20
    float height;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single xOffset
    // Size: 0x4
    // Offset: 0x24
    float xOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single yOffset
    // Size: 0x4
    // Offset: 0x28
    float yOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single xAdvance
    // Size: 0x4
    // Offset: 0x2C
    float xAdvance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single scale
    // Size: 0x4
    // Offset: 0x30
    float scale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: TMP_TextElement_Legacy
    TMP_TextElement_Legacy(int id_ = {}, float x_ = {}, float y_ = {}, float width_ = {}, float height_ = {}, float xOffset_ = {}, float yOffset_ = {}, float xAdvance_ = {}, float scale_ = {}) noexcept : id{id_}, x{x_}, y{y_}, width{width_}, height{height_}, xOffset{xOffset_}, yOffset{yOffset_}, xAdvance{xAdvance_}, scale{scale_} {}
    // public System.Void .ctor()
    // Offset: 0x12BA084
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_TextElement_Legacy* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_TextElement_Legacy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_TextElement_Legacy*, creationType>()));
    }
  }; // TMPro.TMP_TextElement_Legacy
  #pragma pack(pop)
  static check_size<sizeof(TMP_TextElement_Legacy), 48 + sizeof(float)> __TMPro_TMP_TextElement_LegacySizeCheck;
  static_assert(sizeof(TMP_TextElement_Legacy) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_TextElement_Legacy*, "TMPro", "TMP_TextElement_Legacy");
