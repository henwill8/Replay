// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord
#include "UnityEngine/TextCore/LowLevel/GlyphAdjustmentRecord.hpp"
// Completed includes
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord
  // [] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: CEC418
  struct GlyphPairAdjustmentRecord/*, public System::ValueType*/ {
    public:
    // [NativeNameAttribute] Offset: 0xCED034
    // private UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord m_FirstAdjustmentRecord
    // Size: 0x14
    // Offset: 0x0
    UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord m_FirstAdjustmentRecord;
    // Field size check
    static_assert(sizeof(UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord) == 0x14);
    // [NativeNameAttribute] Offset: 0xCED080
    // private UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord m_SecondAdjustmentRecord
    // Size: 0x14
    // Offset: 0x14
    UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord m_SecondAdjustmentRecord;
    // Field size check
    static_assert(sizeof(UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord) == 0x14);
    // Creating value type constructor for type: GlyphPairAdjustmentRecord
    constexpr GlyphPairAdjustmentRecord(UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord m_FirstAdjustmentRecord_ = {}, UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord m_SecondAdjustmentRecord_ = {}) noexcept : m_FirstAdjustmentRecord{m_FirstAdjustmentRecord_}, m_SecondAdjustmentRecord{m_SecondAdjustmentRecord_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord get_firstAdjustmentRecord()
    // Offset: 0xE30920
    UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord get_firstAdjustmentRecord();
    // public UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord get_secondAdjustmentRecord()
    // Offset: 0xE30934
    UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord get_secondAdjustmentRecord();
  }; // UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord
  #pragma pack(pop)
  static check_size<sizeof(GlyphPairAdjustmentRecord), 20 + sizeof(UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord)> __UnityEngine_TextCore_LowLevel_GlyphPairAdjustmentRecordSizeCheck;
  static_assert(sizeof(GlyphPairAdjustmentRecord) == 0x28);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, "UnityEngine.TextCore.LowLevel", "GlyphPairAdjustmentRecord");
