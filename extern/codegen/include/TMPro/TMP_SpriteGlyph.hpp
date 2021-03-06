// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TextCore.Glyph
#include "UnityEngine/TextCore/Glyph.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_SpriteGlyph
  // [] Offset: FFFFFFFF
  class TMP_SpriteGlyph : public UnityEngine::TextCore::Glyph {
    public:
    // public UnityEngine.Sprite sprite
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Sprite* sprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // Creating value type constructor for type: TMP_SpriteGlyph
    TMP_SpriteGlyph(UnityEngine::Sprite* sprite_ = {}) noexcept : sprite{sprite_} {}
    // Creating conversion operator: operator UnityEngine::Sprite*
    constexpr operator UnityEngine::Sprite*() const noexcept {
      return sprite;
    }
    // public System.Void .ctor(System.UInt32 index, UnityEngine.TextCore.GlyphMetrics metrics, UnityEngine.TextCore.GlyphRect glyphRect, System.Single scale, System.Int32 atlasIndex, UnityEngine.Sprite sprite)
    // Offset: 0xFFB1F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_SpriteGlyph* New_ctor(uint index, UnityEngine::TextCore::GlyphMetrics metrics, UnityEngine::TextCore::GlyphRect glyphRect, float scale, int atlasIndex, UnityEngine::Sprite* sprite) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_SpriteGlyph::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_SpriteGlyph*, creationType>(index, metrics, glyphRect, scale, atlasIndex, sprite)));
    }
    // public System.Void .ctor()
    // Offset: 0xFFAE80
    // Implemented from: UnityEngine.TextCore.Glyph
    // Base method: System.Void Glyph::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_SpriteGlyph* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_SpriteGlyph::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_SpriteGlyph*, creationType>()));
    }
    // public System.Void .ctor(System.UInt32 index, UnityEngine.TextCore.GlyphMetrics metrics, UnityEngine.TextCore.GlyphRect glyphRect, System.Single scale, System.Int32 atlasIndex)
    // Offset: 0xFFB130
    // Implemented from: UnityEngine.TextCore.Glyph
    // Base method: System.Void Glyph::.ctor(System.UInt32 index, UnityEngine.TextCore.GlyphMetrics metrics, UnityEngine.TextCore.GlyphRect glyphRect, System.Single scale, System.Int32 atlasIndex)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_SpriteGlyph* New_ctor(uint index, UnityEngine::TextCore::GlyphMetrics metrics, UnityEngine::TextCore::GlyphRect glyphRect, float scale, int atlasIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_SpriteGlyph::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_SpriteGlyph*, creationType>(index, metrics, glyphRect, scale, atlasIndex)));
    }
  }; // TMPro.TMP_SpriteGlyph
  #pragma pack(pop)
  static check_size<sizeof(TMP_SpriteGlyph), 64 + sizeof(UnityEngine::Sprite*)> __TMPro_TMP_SpriteGlyphSizeCheck;
  static_assert(sizeof(TMP_SpriteGlyph) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_SpriteGlyph*, "TMPro", "TMP_SpriteGlyph");
