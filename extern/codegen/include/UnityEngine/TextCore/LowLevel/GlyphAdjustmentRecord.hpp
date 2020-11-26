// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.TextCore.LowLevel.GlyphValueRecord
#include "UnityEngine/TextCore/LowLevel/GlyphValueRecord.hpp"
// Completed includes
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Autogenerated type: UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord
  struct GlyphAdjustmentRecord : public System::ValueType {
    public:
    // private System.UInt32 m_GlyphIndex
    // Offset: 0x0
    uint m_GlyphIndex;
    // private UnityEngine.TextCore.LowLevel.GlyphValueRecord m_GlyphValueRecord
    // Offset: 0x4
    UnityEngine::TextCore::LowLevel::GlyphValueRecord m_GlyphValueRecord;
    // Creating value type constructor for type: GlyphAdjustmentRecord
    constexpr GlyphAdjustmentRecord(uint m_GlyphIndex_ = {}, UnityEngine::TextCore::LowLevel::GlyphValueRecord m_GlyphValueRecord_ = {}) noexcept : m_GlyphIndex{m_GlyphIndex_}, m_GlyphValueRecord{m_GlyphValueRecord_} {}
    // public System.UInt32 get_glyphIndex()
    // Offset: 0xCB8154
    uint get_glyphIndex();
    // public UnityEngine.TextCore.LowLevel.GlyphValueRecord get_glyphValueRecord()
    // Offset: 0xCB815C
    UnityEngine::TextCore::LowLevel::GlyphValueRecord get_glyphValueRecord();
  }; // UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord, "UnityEngine.TextCore.LowLevel", "GlyphAdjustmentRecord");
#pragma pack(pop)
