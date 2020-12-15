// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.ManifestEnvelope
  struct ManifestEnvelope : public System::ValueType {
    public:
    // Nested type: System::Diagnostics::Tracing::ManifestEnvelope::ManifestFormats
    struct ManifestFormats;
    // Autogenerated type: System.Diagnostics.Tracing.ManifestEnvelope/ManifestFormats
    struct ManifestFormats : public System::Enum {
      public:
      // public System.Byte value__
      // Offset: 0x0
      uint8_t value;
      // Creating value type constructor for type: ManifestFormats
      constexpr ManifestFormats(uint8_t value_ = {}) noexcept : value{value_} {}
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
    // public System.Diagnostics.Tracing.ManifestEnvelope/ManifestFormats Format
    // Offset: 0x0
    System::Diagnostics::Tracing::ManifestEnvelope::ManifestFormats Format;
    // public System.Byte MajorVersion
    // Offset: 0x1
    uint8_t MajorVersion;
    // public System.Byte MinorVersion
    // Offset: 0x2
    uint8_t MinorVersion;
    // public System.Byte Magic
    // Offset: 0x3
    uint8_t Magic;
    // public System.UInt16 TotalChunks
    // Offset: 0x4
    uint16_t TotalChunks;
    // public System.UInt16 ChunkNumber
    // Offset: 0x6
    uint16_t ChunkNumber;
    // Creating value type constructor for type: ManifestEnvelope
    constexpr ManifestEnvelope(System::Diagnostics::Tracing::ManifestEnvelope::ManifestFormats Format_ = {}, uint8_t MajorVersion_ = {}, uint8_t MinorVersion_ = {}, uint8_t Magic_ = {}, uint16_t TotalChunks_ = {}, uint16_t ChunkNumber_ = {}) noexcept : Format{Format_}, MajorVersion{MajorVersion_}, MinorVersion{MinorVersion_}, Magic{Magic_}, TotalChunks{TotalChunks_}, ChunkNumber{ChunkNumber_} {}
  }; // System.Diagnostics.Tracing.ManifestEnvelope
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::ManifestEnvelope, "System.Diagnostics.Tracing", "ManifestEnvelope");
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::ManifestEnvelope::ManifestFormats, "System.Diagnostics.Tracing", "ManifestEnvelope/ManifestFormats");
#pragma pack(pop)