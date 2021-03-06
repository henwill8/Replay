// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Diagnostics.Tracing.ManifestEnvelope
  // [] Offset: FFFFFFFF
  struct ManifestEnvelope/*, public System::ValueType*/ {
    public:
    // Nested type: System::Diagnostics::Tracing::ManifestEnvelope::ManifestFormats
    struct ManifestFormats;
    // Size: 0x1
    #pragma pack(push, 1)
    // Autogenerated type: System.Diagnostics.Tracing.ManifestEnvelope/ManifestFormats
    // [] Offset: FFFFFFFF
    struct ManifestFormats/*, public System::Enum*/ {
      public:
      // public System.Byte value__
      // Size: 0x1
      // Offset: 0x0
      uint8_t value;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      // Creating value type constructor for type: ManifestFormats
      constexpr ManifestFormats(uint8_t value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator uint8_t
      constexpr operator uint8_t() const noexcept {
        return value;
      }
      // static field const value: static public System.Diagnostics.Tracing.ManifestEnvelope/ManifestFormats SimpleXmlFormat
      static constexpr const uint8_t SimpleXmlFormat = 1u;
      // Get static field: static public System.Diagnostics.Tracing.ManifestEnvelope/ManifestFormats SimpleXmlFormat
      static System::Diagnostics::Tracing::ManifestEnvelope::ManifestFormats _get_SimpleXmlFormat();
      // Set static field: static public System.Diagnostics.Tracing.ManifestEnvelope/ManifestFormats SimpleXmlFormat
      static void _set_SimpleXmlFormat(System::Diagnostics::Tracing::ManifestEnvelope::ManifestFormats value);
    }; // System.Diagnostics.Tracing.ManifestEnvelope/ManifestFormats
    #pragma pack(pop)
    static check_size<sizeof(ManifestEnvelope::ManifestFormats), 0 + sizeof(uint8_t)> __System_Diagnostics_Tracing_ManifestEnvelope_ManifestFormatsSizeCheck;
    static_assert(sizeof(ManifestEnvelope::ManifestFormats) == 0x1);
    // public System.Diagnostics.Tracing.ManifestEnvelope/ManifestFormats Format
    // Size: 0x1
    // Offset: 0x0
    System::Diagnostics::Tracing::ManifestEnvelope::ManifestFormats Format;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Tracing::ManifestEnvelope::ManifestFormats) == 0x1);
    // public System.Byte MajorVersion
    // Size: 0x1
    // Offset: 0x1
    uint8_t MajorVersion;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte MinorVersion
    // Size: 0x1
    // Offset: 0x2
    uint8_t MinorVersion;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Magic
    // Size: 0x1
    // Offset: 0x3
    uint8_t Magic;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.UInt16 TotalChunks
    // Size: 0x2
    // Offset: 0x4
    uint16_t TotalChunks;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // public System.UInt16 ChunkNumber
    // Size: 0x2
    // Offset: 0x6
    uint16_t ChunkNumber;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // Creating value type constructor for type: ManifestEnvelope
    constexpr ManifestEnvelope(System::Diagnostics::Tracing::ManifestEnvelope::ManifestFormats Format_ = {}, uint8_t MajorVersion_ = {}, uint8_t MinorVersion_ = {}, uint8_t Magic_ = {}, uint16_t TotalChunks_ = {}, uint16_t ChunkNumber_ = {}) noexcept : Format{Format_}, MajorVersion{MajorVersion_}, MinorVersion{MinorVersion_}, Magic{Magic_}, TotalChunks{TotalChunks_}, ChunkNumber{ChunkNumber_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // System.Diagnostics.Tracing.ManifestEnvelope
  #pragma pack(pop)
  static check_size<sizeof(ManifestEnvelope), 6 + sizeof(uint16_t)> __System_Diagnostics_Tracing_ManifestEnvelopeSizeCheck;
  static_assert(sizeof(ManifestEnvelope) == 0x8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::ManifestEnvelope, "System.Diagnostics.Tracing", "ManifestEnvelope");
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::ManifestEnvelope::ManifestFormats, "System.Diagnostics.Tracing", "ManifestEnvelope/ManifestFormats");
