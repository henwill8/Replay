// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_Asset
#include "TMPro/TMP_Asset.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_SpriteCharacter
  class TMP_SpriteCharacter;
  // Forward declaring type: TMP_SpriteGlyph
  class TMP_SpriteGlyph;
  // Forward declaring type: TMP_Sprite
  class TMP_Sprite;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_SpriteAsset
  class TMP_SpriteAsset : public TMPro::TMP_Asset {
    public:
    // Nested type: TMPro::TMP_SpriteAsset::$$c
    class $$c;
    // System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32> m_UnicodeLookup
    // Offset: 0x30
    System::Collections::Generic::Dictionary_2<uint, int>* m_UnicodeLookup;
    // System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> m_NameLookup
    // Offset: 0x38
    System::Collections::Generic::Dictionary_2<int, int>* m_NameLookup;
    // System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32> m_GlyphIndexLookup
    // Offset: 0x40
    System::Collections::Generic::Dictionary_2<uint, int>* m_GlyphIndexLookup;
    // private System.String m_Version
    // Offset: 0x48
    ::Il2CppString* m_Version;
    // public UnityEngine.Texture spriteSheet
    // Offset: 0x50
    UnityEngine::Texture* spriteSheet;
    // private System.Collections.Generic.List`1<TMPro.TMP_SpriteCharacter> m_SpriteCharacterTable
    // Offset: 0x58
    System::Collections::Generic::List_1<TMPro::TMP_SpriteCharacter*>* m_SpriteCharacterTable;
    // private System.Collections.Generic.List`1<TMPro.TMP_SpriteGlyph> m_SpriteGlyphTable
    // Offset: 0x60
    System::Collections::Generic::List_1<TMPro::TMP_SpriteGlyph*>* m_SpriteGlyphTable;
    // public System.Collections.Generic.List`1<TMPro.TMP_Sprite> spriteInfoList
    // Offset: 0x68
    System::Collections::Generic::List_1<TMPro::TMP_Sprite*>* spriteInfoList;
    // public System.Collections.Generic.List`1<TMPro.TMP_SpriteAsset> fallbackSpriteAssets
    // Offset: 0x70
    System::Collections::Generic::List_1<TMPro::TMP_SpriteAsset*>* fallbackSpriteAssets;
    // System.Boolean m_IsSpriteAssetLookupTablesDirty
    // Offset: 0x78
    bool m_IsSpriteAssetLookupTablesDirty;
    // Get static field: static private System.Collections.Generic.List`1<System.Int32> k_searchedSpriteAssets
    static System::Collections::Generic::List_1<int>* _get_k_searchedSpriteAssets();
    // Set static field: static private System.Collections.Generic.List`1<System.Int32> k_searchedSpriteAssets
    static void _set_k_searchedSpriteAssets(System::Collections::Generic::List_1<int>* value);
    // public System.String get_version()
    // Offset: 0xF8A908
    ::Il2CppString* get_version();
    // System.Void set_version(System.String value)
    // Offset: 0xF8A910
    void set_version(::Il2CppString* value);
    // public System.Collections.Generic.List`1<TMPro.TMP_SpriteCharacter> get_spriteCharacterTable()
    // Offset: 0xF8A868
    System::Collections::Generic::List_1<TMPro::TMP_SpriteCharacter*>* get_spriteCharacterTable();
    // System.Void set_spriteCharacterTable(System.Collections.Generic.List`1<TMPro.TMP_SpriteCharacter> value)
    // Offset: 0xF8AD34
    void set_spriteCharacterTable(System::Collections::Generic::List_1<TMPro::TMP_SpriteCharacter*>* value);
    // public System.Collections.Generic.List`1<TMPro.TMP_SpriteGlyph> get_spriteGlyphTable()
    // Offset: 0xF8AD3C
    System::Collections::Generic::List_1<TMPro::TMP_SpriteGlyph*>* get_spriteGlyphTable();
    // System.Void set_spriteGlyphTable(System.Collections.Generic.List`1<TMPro.TMP_SpriteGlyph> value)
    // Offset: 0xF8AD44
    void set_spriteGlyphTable(System::Collections::Generic::List_1<TMPro::TMP_SpriteGlyph*>* value);
    // private System.Void Awake()
    // Offset: 0xF8AD4C
    void Awake();
    // private UnityEngine.Material GetDefaultSpriteMaterial()
    // Offset: 0xF8B1FC
    UnityEngine::Material* GetDefaultSpriteMaterial();
    // public System.Void UpdateLookupTables()
    // Offset: 0xF8A918
    void UpdateLookupTables();
    // public System.Int32 GetSpriteIndexFromHashcode(System.Int32 hashCode)
    // Offset: 0xF8B2E0
    int GetSpriteIndexFromHashcode(int hashCode);
    // public System.Int32 GetSpriteIndexFromUnicode(System.UInt32 unicode)
    // Offset: 0xF8B370
    int GetSpriteIndexFromUnicode(uint unicode);
    // public System.Int32 GetSpriteIndexFromName(System.String name)
    // Offset: 0xF8B400
    int GetSpriteIndexFromName(::Il2CppString* name);
    // static public TMPro.TMP_SpriteAsset SearchForSpriteByUnicode(TMPro.TMP_SpriteAsset spriteAsset, System.UInt32 unicode, System.Boolean includeFallbacks, out System.Int32 spriteIndex)
    // Offset: 0xF8B490
    static TMPro::TMP_SpriteAsset* SearchForSpriteByUnicode(TMPro::TMP_SpriteAsset* spriteAsset, uint unicode, bool includeFallbacks, int& spriteIndex);
    // static private TMPro.TMP_SpriteAsset SearchForSpriteByUnicodeInternal(System.Collections.Generic.List`1<TMPro.TMP_SpriteAsset> spriteAssets, System.UInt32 unicode, System.Boolean includeFallbacks, out System.Int32 spriteIndex)
    // Offset: 0xF8B6A8
    static TMPro::TMP_SpriteAsset* SearchForSpriteByUnicodeInternal(System::Collections::Generic::List_1<TMPro::TMP_SpriteAsset*>* spriteAssets, uint unicode, bool includeFallbacks, int& spriteIndex);
    // static private TMPro.TMP_SpriteAsset SearchForSpriteByUnicodeInternal(TMPro.TMP_SpriteAsset spriteAsset, System.UInt32 unicode, System.Boolean includeFallbacks, out System.Int32 spriteIndex)
    // Offset: 0xF8B854
    static TMPro::TMP_SpriteAsset* SearchForSpriteByUnicodeInternal(TMPro::TMP_SpriteAsset* spriteAsset, uint unicode, bool includeFallbacks, int& spriteIndex);
    // static public TMPro.TMP_SpriteAsset SearchForSpriteByHashCode(TMPro.TMP_SpriteAsset spriteAsset, System.Int32 hashCode, System.Boolean includeFallbacks, out System.Int32 spriteIndex)
    // Offset: 0xF8B918
    static TMPro::TMP_SpriteAsset* SearchForSpriteByHashCode(TMPro::TMP_SpriteAsset* spriteAsset, int hashCode, bool includeFallbacks, int& spriteIndex);
    // static private TMPro.TMP_SpriteAsset SearchForSpriteByHashCodeInternal(System.Collections.Generic.List`1<TMPro.TMP_SpriteAsset> spriteAssets, System.Int32 hashCode, System.Boolean searchFallbacks, out System.Int32 spriteIndex)
    // Offset: 0xF8BB30
    static TMPro::TMP_SpriteAsset* SearchForSpriteByHashCodeInternal(System::Collections::Generic::List_1<TMPro::TMP_SpriteAsset*>* spriteAssets, int hashCode, bool searchFallbacks, int& spriteIndex);
    // static private TMPro.TMP_SpriteAsset SearchForSpriteByHashCodeInternal(TMPro.TMP_SpriteAsset spriteAsset, System.Int32 hashCode, System.Boolean searchFallbacks, out System.Int32 spriteIndex)
    // Offset: 0xF8BCDC
    static TMPro::TMP_SpriteAsset* SearchForSpriteByHashCodeInternal(TMPro::TMP_SpriteAsset* spriteAsset, int hashCode, bool searchFallbacks, int& spriteIndex);
    // public System.Void SortGlyphTable()
    // Offset: 0xF8BDA0
    void SortGlyphTable();
    // System.Void SortCharacterTable()
    // Offset: 0xF8BEE0
    void SortCharacterTable();
    // System.Void SortGlyphAndCharacterTables()
    // Offset: 0xF8C024
    void SortGlyphAndCharacterTables();
    // private System.Void UpgradeSpriteAsset()
    // Offset: 0xF8ADE4
    void UpgradeSpriteAsset();
    // public System.Void .ctor()
    // Offset: 0xF8C168
    // Implemented from: TMPro.TMP_Asset
    // Base method: System.Void TMP_Asset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TMP_SpriteAsset* New_ctor();
  }; // TMPro.TMP_SpriteAsset
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_SpriteAsset*, "TMPro", "TMP_SpriteAsset");
#pragma pack(pop)
