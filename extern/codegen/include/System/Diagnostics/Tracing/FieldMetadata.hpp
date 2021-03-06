// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.EventFieldTags
#include "System/Diagnostics/Tracing/EventFieldTags.hpp"
// Including type: System.Diagnostics.Tracing.TraceLoggingDataType
#include "System/Diagnostics/Tracing/TraceLoggingDataType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.FieldMetadata
  // [] Offset: FFFFFFFF
  class FieldMetadata : public ::Il2CppObject {
    public:
    // private readonly System.String name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.Int32 nameSize
    // Size: 0x4
    // Offset: 0x18
    int nameSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Diagnostics.Tracing.EventFieldTags tags
    // Size: 0x4
    // Offset: 0x1C
    System::Diagnostics::Tracing::EventFieldTags tags;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Tracing::EventFieldTags) == 0x4);
    // private readonly System.Byte[] custom
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* custom;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private readonly System.UInt16 fixedCount
    // Size: 0x2
    // Offset: 0x28
    uint16_t fixedCount;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // private System.Byte inType
    // Size: 0x1
    // Offset: 0x2A
    uint8_t inType;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte outType
    // Size: 0x1
    // Offset: 0x2B
    uint8_t outType;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Creating value type constructor for type: FieldMetadata
    FieldMetadata(::Il2CppString* name_ = {}, int nameSize_ = {}, System::Diagnostics::Tracing::EventFieldTags tags_ = {}, ::Array<uint8_t>* custom_ = {}, uint16_t fixedCount_ = {}, uint8_t inType_ = {}, uint8_t outType_ = {}) noexcept : name{name_}, nameSize{nameSize_}, tags{tags_}, custom{custom_}, fixedCount{fixedCount_}, inType{inType_}, outType{outType_} {}
    // public System.Void .ctor(System.String name, System.Diagnostics.Tracing.TraceLoggingDataType type, System.Diagnostics.Tracing.EventFieldTags tags, System.Boolean variableCount)
    // Offset: 0x129FA28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FieldMetadata* New_ctor(::Il2CppString* name, System::Diagnostics::Tracing::TraceLoggingDataType type, System::Diagnostics::Tracing::EventFieldTags tags, bool variableCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::FieldMetadata::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FieldMetadata*, creationType>(name, type, tags, variableCount)));
    }
    // private System.Void .ctor(System.String name, System.Diagnostics.Tracing.TraceLoggingDataType dataType, System.Diagnostics.Tracing.EventFieldTags tags, System.Byte countFlags, System.UInt16 fixedCount, System.Byte[] custom)
    // Offset: 0x129FA50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FieldMetadata* New_ctor(::Il2CppString* name, System::Diagnostics::Tracing::TraceLoggingDataType dataType, System::Diagnostics::Tracing::EventFieldTags tags, uint8_t countFlags, uint16_t fixedCount, ::Array<uint8_t>* custom) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::FieldMetadata::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FieldMetadata*, creationType>(name, dataType, tags, countFlags, fixedCount, custom)));
    }
    // public System.Void IncrementStructFieldCount()
    // Offset: 0x129FCDC
    void IncrementStructFieldCount();
    // public System.Void Encode(ref System.Int32 pos, System.Byte[] metadata)
    // Offset: 0x129FD7C
    void Encode(int& pos, ::Array<uint8_t>* metadata);
  }; // System.Diagnostics.Tracing.FieldMetadata
  #pragma pack(pop)
  static check_size<sizeof(FieldMetadata), 43 + sizeof(uint8_t)> __System_Diagnostics_Tracing_FieldMetadataSizeCheck;
  static_assert(sizeof(FieldMetadata) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::FieldMetadata*, "System.Diagnostics.Tracing", "FieldMetadata");
