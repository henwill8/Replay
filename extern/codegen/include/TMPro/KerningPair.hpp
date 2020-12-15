// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.GlyphValueRecord_Legacy
#include "TMPro/GlyphValueRecord_Legacy.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.KerningPair
  class KerningPair : public ::Il2CppObject {
    public:
    // private System.UInt32 m_FirstGlyph
    // Offset: 0x10
    uint m_FirstGlyph;
    // private TMPro.GlyphValueRecord_Legacy m_FirstGlyphAdjustments
    // Offset: 0x14
    TMPro::GlyphValueRecord_Legacy m_FirstGlyphAdjustments;
    // private System.UInt32 m_SecondGlyph
    // Offset: 0x24
    uint m_SecondGlyph;
    // private TMPro.GlyphValueRecord_Legacy m_SecondGlyphAdjustments
    // Offset: 0x28
    TMPro::GlyphValueRecord_Legacy m_SecondGlyphAdjustments;
    // public System.Single xOffset
    // Offset: 0x38
    float xOffset;
    // private System.Boolean m_IgnoreSpacingAdjustments
    // Offset: 0x3C
    bool m_IgnoreSpacingAdjustments;
    // Get static field: static TMPro.KerningPair empty
    static TMPro::KerningPair* _get_empty();
    // Set static field: static TMPro.KerningPair empty
    static void _set_empty(TMPro::KerningPair* value);
    // public System.UInt32 get_firstGlyph()
    // Offset: 0xF4E098
    uint get_firstGlyph();
    // public System.Void set_firstGlyph(System.UInt32 value)
    // Offset: 0xF4E0A0
    void set_firstGlyph(uint value);
    // public TMPro.GlyphValueRecord_Legacy get_firstGlyphAdjustments()
    // Offset: 0xF4E0A8
    TMPro::GlyphValueRecord_Legacy get_firstGlyphAdjustments();
    // public System.UInt32 get_secondGlyph()
    // Offset: 0xF4E0B4
    uint get_secondGlyph();
    // public System.Void set_secondGlyph(System.UInt32 value)
    // Offset: 0xF4E0BC
    void set_secondGlyph(uint value);
    // public TMPro.GlyphValueRecord_Legacy get_secondGlyphAdjustments()
    // Offset: 0xF4E0C4
    TMPro::GlyphValueRecord_Legacy get_secondGlyphAdjustments();
    // public System.Boolean get_ignoreSpacingAdjustments()
    // Offset: 0xF4E0D0
    bool get_ignoreSpacingAdjustments();
    // public System.Void .ctor(System.UInt32 left, System.UInt32 right, System.Single offset)
    // Offset: 0xF4E108
    static KerningPair* New_ctor(uint left, uint right, float offset);
    // public System.Void .ctor(System.UInt32 firstGlyph, TMPro.GlyphValueRecord_Legacy firstGlyphAdjustments, System.UInt32 secondGlyph, TMPro.GlyphValueRecord_Legacy secondGlyphAdjustments)
    // Offset: 0xF4E154
    static KerningPair* New_ctor(uint firstGlyph, TMPro::GlyphValueRecord_Legacy firstGlyphAdjustments, uint secondGlyph, TMPro::GlyphValueRecord_Legacy secondGlyphAdjustments);
    // System.Void ConvertLegacyKerningData()
    // Offset: 0xF4E1E0
    void ConvertLegacyKerningData();
    // static private System.Void .cctor()
    // Offset: 0xF4E1EC
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0xF4E0D8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static KerningPair* New_ctor();
  }; // TMPro.KerningPair
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::KerningPair*, "TMPro", "KerningPair");
#pragma pack(pop)