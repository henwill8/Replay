// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TextCore.GlyphRect
#include "UnityEngine/TextCore/GlyphRect.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TextCore
namespace UnityEngine::TextCore {
  // Forward declaring type: Glyph
  class Glyph;
  // Forward declaring type: FaceInfo
  struct FaceInfo;
}
// Forward declaring namespace: UnityEngine::TextCore::LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Forward declaring type: GlyphMarshallingStruct
  struct GlyphMarshallingStruct;
  // Forward declaring type: GlyphPairAdjustmentRecord
  struct GlyphPairAdjustmentRecord;
  // Forward declaring type: FontEngineError
  struct FontEngineError;
  // Forward declaring type: GlyphLoadFlags
  struct GlyphLoadFlags;
  // Forward declaring type: GlyphPackingMode
  struct GlyphPackingMode;
  // Forward declaring type: GlyphRenderMode
  struct GlyphRenderMode;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: Font
  class Font;
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
// Completed forward declares
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Autogenerated type: UnityEngine.TextCore.LowLevel.FontEngine
  class FontEngine : public ::Il2CppObject {
    public:
    // Get static field: static private readonly UnityEngine.TextCore.LowLevel.FontEngine s_Instance
    static UnityEngine::TextCore::LowLevel::FontEngine* _get_s_Instance();
    // Set static field: static private readonly UnityEngine.TextCore.LowLevel.FontEngine s_Instance
    static void _set_s_Instance(UnityEngine::TextCore::LowLevel::FontEngine* value);
    // Get static field: static private UnityEngine.TextCore.Glyph[] s_Glyphs
    static ::Array<UnityEngine::TextCore::Glyph*>* _get_s_Glyphs();
    // Set static field: static private UnityEngine.TextCore.Glyph[] s_Glyphs
    static void _set_s_Glyphs(::Array<UnityEngine::TextCore::Glyph*>* value);
    // Get static field: static private System.UInt32[] s_GlyphIndexes_MarshallingArray
    static ::Array<uint>* _get_s_GlyphIndexes_MarshallingArray();
    // Set static field: static private System.UInt32[] s_GlyphIndexes_MarshallingArray
    static void _set_s_GlyphIndexes_MarshallingArray(::Array<uint>* value);
    // Get static field: static private UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct[] s_GlyphMarshallingStruct_IN
    static ::Array<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>* _get_s_GlyphMarshallingStruct_IN();
    // Set static field: static private UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct[] s_GlyphMarshallingStruct_IN
    static void _set_s_GlyphMarshallingStruct_IN(::Array<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>* value);
    // Get static field: static private UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct[] s_GlyphMarshallingStruct_OUT
    static ::Array<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>* _get_s_GlyphMarshallingStruct_OUT();
    // Set static field: static private UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct[] s_GlyphMarshallingStruct_OUT
    static void _set_s_GlyphMarshallingStruct_OUT(::Array<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>* value);
    // Get static field: static private UnityEngine.TextCore.GlyphRect[] s_FreeGlyphRects
    static ::Array<UnityEngine::TextCore::GlyphRect>* _get_s_FreeGlyphRects();
    // Set static field: static private UnityEngine.TextCore.GlyphRect[] s_FreeGlyphRects
    static void _set_s_FreeGlyphRects(::Array<UnityEngine::TextCore::GlyphRect>* value);
    // Get static field: static private UnityEngine.TextCore.GlyphRect[] s_UsedGlyphRects
    static ::Array<UnityEngine::TextCore::GlyphRect>* _get_s_UsedGlyphRects();
    // Set static field: static private UnityEngine.TextCore.GlyphRect[] s_UsedGlyphRects
    static void _set_s_UsedGlyphRects(::Array<UnityEngine::TextCore::GlyphRect>* value);
    // Get static field: static private UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord[] s_PairAdjustmentRecords_MarshallingArray
    static ::Array<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* _get_s_PairAdjustmentRecords_MarshallingArray();
    // Set static field: static private UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord[] s_PairAdjustmentRecords_MarshallingArray
    static void _set_s_PairAdjustmentRecords_MarshallingArray(::Array<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph> s_GlyphLookupDictionary
    static System::Collections::Generic::Dictionary_2<uint, UnityEngine::TextCore::Glyph*>* _get_s_GlyphLookupDictionary();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph> s_GlyphLookupDictionary
    static void _set_s_GlyphLookupDictionary(System::Collections::Generic::Dictionary_2<uint, UnityEngine::TextCore::Glyph*>* value);
    // static public UnityEngine.TextCore.LowLevel.FontEngineError InitializeFontEngine()
    // Offset: 0x19E7D28
    static UnityEngine::TextCore::LowLevel::FontEngineError InitializeFontEngine();
    // static private System.Int32 InitializeFontEngine_Internal()
    // Offset: 0x19E7DA0
    static int InitializeFontEngine_Internal();
    // static public UnityEngine.TextCore.LowLevel.FontEngineError LoadFontFace(UnityEngine.Font font, System.Int32 pointSize)
    // Offset: 0x19E7DD4
    static UnityEngine::TextCore::LowLevel::FontEngineError LoadFontFace(UnityEngine::Font* font, int pointSize);
    // static private System.Int32 LoadFontFace_With_Size_FromFont_Internal(UnityEngine.Font font, System.Int32 pointSize)
    // Offset: 0x19E7E68
    static int LoadFontFace_With_Size_FromFont_Internal(UnityEngine::Font* font, int pointSize);
    // static public UnityEngine.TextCore.FaceInfo GetFaceInfo()
    // Offset: 0x19E7EB8
    static UnityEngine::TextCore::FaceInfo GetFaceInfo();
    // static private System.Int32 GetFaceInfo_Internal(ref UnityEngine.TextCore.FaceInfo faceInfo)
    // Offset: 0x19E7F68
    static int GetFaceInfo_Internal(UnityEngine::TextCore::FaceInfo& faceInfo);
    // static System.UInt32 GetGlyphIndex(System.UInt32 unicode)
    // Offset: 0x19E7FA8
    static uint GetGlyphIndex(uint unicode);
    // static public System.Boolean TryGetGlyphWithUnicodeValue(System.UInt32 unicode, UnityEngine.TextCore.LowLevel.GlyphLoadFlags flags, out UnityEngine.TextCore.Glyph glyph)
    // Offset: 0x19E7FE8
    static bool TryGetGlyphWithUnicodeValue(uint unicode, UnityEngine::TextCore::LowLevel::GlyphLoadFlags flags, UnityEngine::TextCore::Glyph*& glyph);
    // static private System.Boolean TryGetGlyphWithUnicodeValue_Internal(System.UInt32 unicode, UnityEngine.TextCore.LowLevel.GlyphLoadFlags loadFlags, ref UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct glyphStruct)
    // Offset: 0x19E8124
    static bool TryGetGlyphWithUnicodeValue_Internal(uint unicode, UnityEngine::TextCore::LowLevel::GlyphLoadFlags loadFlags, UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct& glyphStruct);
    // static public System.Boolean TryGetGlyphWithIndexValue(System.UInt32 glyphIndex, UnityEngine.TextCore.LowLevel.GlyphLoadFlags flags, out UnityEngine.TextCore.Glyph glyph)
    // Offset: 0x19E817C
    static bool TryGetGlyphWithIndexValue(uint glyphIndex, UnityEngine::TextCore::LowLevel::GlyphLoadFlags flags, UnityEngine::TextCore::Glyph*& glyph);
    // static private System.Boolean TryGetGlyphWithIndexValue_Internal(System.UInt32 glyphIndex, UnityEngine.TextCore.LowLevel.GlyphLoadFlags loadFlags, ref UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct glyphStruct)
    // Offset: 0x19E82B8
    static bool TryGetGlyphWithIndexValue_Internal(uint glyphIndex, UnityEngine::TextCore::LowLevel::GlyphLoadFlags loadFlags, UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct& glyphStruct);
    // static System.Boolean TryPackGlyphInAtlas(UnityEngine.TextCore.Glyph glyph, System.Int32 padding, UnityEngine.TextCore.LowLevel.GlyphPackingMode packingMode, UnityEngine.TextCore.LowLevel.GlyphRenderMode renderMode, System.Int32 width, System.Int32 height, System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> freeGlyphRects, System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> usedGlyphRects)
    // Offset: 0x19E8310
    static bool TryPackGlyphInAtlas(UnityEngine::TextCore::Glyph* glyph, int padding, UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode, UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int width, int height, System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>* freeGlyphRects, System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>* usedGlyphRects);
    // static private System.Boolean TryPackGlyphInAtlas_Internal(ref UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct glyph, System.Int32 padding, UnityEngine.TextCore.LowLevel.GlyphPackingMode packingMode, UnityEngine.TextCore.LowLevel.GlyphRenderMode renderMode, System.Int32 width, System.Int32 height, out UnityEngine.TextCore.GlyphRect[] freeGlyphRects, ref System.Int32 freeGlyphRectCount, out UnityEngine.TextCore.GlyphRect[] usedGlyphRects, ref System.Int32 usedGlyphRectCount)
    // Offset: 0x19E8824
    static bool TryPackGlyphInAtlas_Internal(UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct& glyph, int padding, UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode, UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int width, int height, ::Array<UnityEngine::TextCore::GlyphRect>*& freeGlyphRects, int& freeGlyphRectCount, ::Array<UnityEngine::TextCore::GlyphRect>*& usedGlyphRects, int& usedGlyphRectCount);
    // static UnityEngine.TextCore.LowLevel.FontEngineError RenderGlyphsToTexture(System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> glyphs, System.Int32 padding, UnityEngine.TextCore.LowLevel.GlyphRenderMode renderMode, UnityEngine.Texture2D texture)
    // Offset: 0x19E88C8
    static UnityEngine::TextCore::LowLevel::FontEngineError RenderGlyphsToTexture(System::Collections::Generic::List_1<UnityEngine::TextCore::Glyph*>* glyphs, int padding, UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, UnityEngine::Texture2D* texture);
    // static private System.Int32 RenderGlyphsToTexture_Internal(UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct[] glyphs, System.Int32 glyphCount, System.Int32 padding, UnityEngine.TextCore.LowLevel.GlyphRenderMode renderMode, UnityEngine.Texture2D texture)
    // Offset: 0x19E8B34
    static int RenderGlyphsToTexture_Internal(::Array<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>* glyphs, int glyphCount, int padding, UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, UnityEngine::Texture2D* texture);
    // static System.Boolean TryAddGlyphToTexture(System.UInt32 glyphIndex, System.Int32 padding, UnityEngine.TextCore.LowLevel.GlyphPackingMode packingMode, System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> freeGlyphRects, System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> usedGlyphRects, UnityEngine.TextCore.LowLevel.GlyphRenderMode renderMode, UnityEngine.Texture2D texture, out UnityEngine.TextCore.Glyph glyph)
    // Offset: 0x19E8BA4
    static bool TryAddGlyphToTexture(uint glyphIndex, int padding, UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode, System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>* freeGlyphRects, System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>* usedGlyphRects, UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, UnityEngine::Texture2D* texture, UnityEngine::TextCore::Glyph*& glyph);
    // static private System.Boolean TryAddGlyphToTexture_Internal(System.UInt32 glyphIndex, System.Int32 padding, UnityEngine.TextCore.LowLevel.GlyphPackingMode packingMode, out UnityEngine.TextCore.GlyphRect[] freeGlyphRects, ref System.Int32 freeGlyphRectCount, out UnityEngine.TextCore.GlyphRect[] usedGlyphRects, ref System.Int32 usedGlyphRectCount, UnityEngine.TextCore.LowLevel.GlyphRenderMode renderMode, UnityEngine.Texture2D texture, out UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct glyph)
    // Offset: 0x19E90C8
    static bool TryAddGlyphToTexture_Internal(uint glyphIndex, int padding, UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode, ::Array<UnityEngine::TextCore::GlyphRect>*& freeGlyphRects, int& freeGlyphRectCount, ::Array<UnityEngine::TextCore::GlyphRect>*& usedGlyphRects, int& usedGlyphRectCount, UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, UnityEngine::Texture2D* texture, UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct& glyph);
    // static System.Boolean TryAddGlyphsToTexture(System.Collections.Generic.List`1<System.UInt32> glyphIndexes, System.Int32 padding, UnityEngine.TextCore.LowLevel.GlyphPackingMode packingMode, System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> freeGlyphRects, System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> usedGlyphRects, UnityEngine.TextCore.LowLevel.GlyphRenderMode renderMode, UnityEngine.Texture2D texture, out UnityEngine.TextCore.Glyph[] glyphs)
    // Offset: 0x19E916C
    static bool TryAddGlyphsToTexture(System::Collections::Generic::List_1<uint>* glyphIndexes, int padding, UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode, System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>* freeGlyphRects, System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>* usedGlyphRects, UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, UnityEngine::Texture2D* texture, ::Array<UnityEngine::TextCore::Glyph*>*& glyphs);
    // static private System.Boolean TryAddGlyphsToTexture_Internal(System.UInt32[] glyphIndex, System.Int32 padding, UnityEngine.TextCore.LowLevel.GlyphPackingMode packingMode, out UnityEngine.TextCore.GlyphRect[] freeGlyphRects, ref System.Int32 freeGlyphRectCount, out UnityEngine.TextCore.GlyphRect[] usedGlyphRects, ref System.Int32 usedGlyphRectCount, UnityEngine.TextCore.LowLevel.GlyphRenderMode renderMode, UnityEngine.Texture2D texture, out UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct[] glyphs, ref System.Int32 glyphCount)
    // Offset: 0x19E9B5C
    static bool TryAddGlyphsToTexture_Internal(::Array<uint>* glyphIndex, int padding, UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode, ::Array<UnityEngine::TextCore::GlyphRect>*& freeGlyphRects, int& freeGlyphRectCount, ::Array<UnityEngine::TextCore::GlyphRect>*& usedGlyphRects, int& usedGlyphRectCount, UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, UnityEngine::Texture2D* texture, ::Array<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*& glyphs, int& glyphCount);
    // static UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord[] GetGlyphPairAdjustmentTable(System.UInt32[] glyphIndexes)
    // Offset: 0x19E9C10
    static ::Array<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>* GetGlyphPairAdjustmentTable(::Array<uint>* glyphIndexes);
    // static private System.Int32 GetGlyphPairAdjustmentTable_Internal(System.UInt32[] glyphIndexes, out UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord[] glyphPairAdjustmentRecords, out System.Int32 adjustmentRecordCount)
    // Offset: 0x19E9DC4
    static int GetGlyphPairAdjustmentTable_Internal(::Array<uint>* glyphIndexes, ::Array<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*& glyphPairAdjustmentRecords, int& adjustmentRecordCount);
    // static System.Void ResetAtlasTexture(UnityEngine.Texture2D texture)
    // Offset: 0x19E9E1C
    static void ResetAtlasTexture(UnityEngine::Texture2D* texture);
    // static private System.Void .cctor()
    // Offset: 0x19E9E5C
    static void _cctor();
    // System.Void .ctor()
    // Offset: 0x19E7D20
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FontEngine* New_ctor();
  }; // UnityEngine.TextCore.LowLevel.FontEngine
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::LowLevel::FontEngine*, "UnityEngine.TextCore.LowLevel", "FontEngine");
#pragma pack(pop)
