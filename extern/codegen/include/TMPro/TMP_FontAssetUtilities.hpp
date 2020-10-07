// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Character
  class TMP_Character;
  // Forward declaring type: TMP_FontAsset
  class TMP_FontAsset;
  // Forward declaring type: FontStyles
  struct FontStyles;
  // Forward declaring type: FontWeight
  struct FontWeight;
}
// Forward declaring namespace: UnityEngine::TextCore
namespace UnityEngine::TextCore {
  // Forward declaring type: Glyph
  class Glyph;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_FontAssetUtilities
  class TMP_FontAssetUtilities : public ::Il2CppObject {
    public:
    // Get static field: static private readonly TMPro.TMP_FontAssetUtilities s_Instance
    static TMPro::TMP_FontAssetUtilities* _get_s_Instance();
    // Set static field: static private readonly TMPro.TMP_FontAssetUtilities s_Instance
    static void _set_s_Instance(TMPro::TMP_FontAssetUtilities* value);
    // Get static field: static private System.Collections.Generic.List`1<System.Int32> k_SearchedFontAssets
    static System::Collections::Generic::List_1<int>* _get_k_SearchedFontAssets();
    // Set static field: static private System.Collections.Generic.List`1<System.Int32> k_SearchedFontAssets
    static void _set_k_SearchedFontAssets(System::Collections::Generic::List_1<int>* value);
    // Get static field: static private System.Boolean k_IsFontEngineInitialized
    static bool _get_k_IsFontEngineInitialized();
    // Set static field: static private System.Boolean k_IsFontEngineInitialized
    static void _set_k_IsFontEngineInitialized(bool value);
    // static private System.Void .cctor()
    // Offset: 0xB5FEA0
    static void _cctor();
    // static public TMPro.TMP_FontAssetUtilities get_instance()
    // Offset: 0xB5FF10
    static TMPro::TMP_FontAssetUtilities* get_instance();
    // static public TMPro.TMP_Character GetCharacterFromFontAsset(System.UInt32 unicode, TMPro.TMP_FontAsset sourceFontAsset, System.Boolean includeFallbacks, TMPro.FontStyles fontStyle, TMPro.FontWeight fontWeight, out System.Boolean isAlternativeTypeface, out TMPro.TMP_FontAsset fontAsset)
    // Offset: 0xB5FF78
    static TMPro::TMP_Character* GetCharacterFromFontAsset(uint unicode, TMPro::TMP_FontAsset* sourceFontAsset, bool includeFallbacks, TMPro::FontStyles fontStyle, TMPro::FontWeight fontWeight, bool& isAlternativeTypeface, TMPro::TMP_FontAsset*& fontAsset);
    // static private TMPro.TMP_Character GetCharacterFromFontAsset_Internal(System.UInt32 unicode, TMPro.TMP_FontAsset sourceFontAsset, System.Boolean includeFallbacks, TMPro.FontStyles fontStyle, TMPro.FontWeight fontWeight, out System.Boolean isAlternativeTypeface, out TMPro.TMP_FontAsset fontAsset)
    // Offset: 0xB600F0
    static TMPro::TMP_Character* GetCharacterFromFontAsset_Internal(uint unicode, TMPro::TMP_FontAsset* sourceFontAsset, bool includeFallbacks, TMPro::FontStyles fontStyle, TMPro::FontWeight fontWeight, bool& isAlternativeTypeface, TMPro::TMP_FontAsset*& fontAsset);
    // static public TMPro.TMP_Character GetCharacterFromFontAssets(System.UInt32 unicode, System.Collections.Generic.List`1<TMPro.TMP_FontAsset> fontAssets, System.Boolean includeFallbacks, TMPro.FontStyles fontStyle, TMPro.FontWeight fontWeight, out System.Boolean isAlternativeTypeface, out TMPro.TMP_FontAsset fontAsset)
    // Offset: 0xB60520
    static TMPro::TMP_Character* GetCharacterFromFontAssets(uint unicode, System::Collections::Generic::List_1<TMPro::TMP_FontAsset*>* fontAssets, bool includeFallbacks, TMPro::FontStyles fontStyle, TMPro::FontWeight fontWeight, bool& isAlternativeTypeface, TMPro::TMP_FontAsset*& fontAsset);
    // static private System.Boolean TryGetCharacterFromFontFile(System.UInt32 unicode, TMPro.TMP_FontAsset fontAsset, out TMPro.TMP_Character character)
    // Offset: 0xB6075C
    static bool TryGetCharacterFromFontFile(uint unicode, TMPro::TMP_FontAsset* fontAsset, TMPro::TMP_Character*& character);
    // static public System.Boolean TryGetGlyphFromFontFile(System.UInt32 glyphIndex, TMPro.TMP_FontAsset fontAsset, out UnityEngine.TextCore.Glyph glyph)
    // Offset: 0xB60980
    static bool TryGetGlyphFromFontFile(uint glyphIndex, TMPro::TMP_FontAsset* fontAsset, UnityEngine::TextCore::Glyph*& glyph);
    // public System.Void .ctor()
    // Offset: 0xB5FF08
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TMP_FontAssetUtilities* New_ctor();
  }; // TMPro.TMP_FontAssetUtilities
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_FontAssetUtilities*, "TMPro", "TMP_FontAssetUtilities");
#pragma pack(pop)
