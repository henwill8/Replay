// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.EventKeywords
#include "System/Diagnostics/Tracing/EventKeywords.hpp"
// Including type: System.Diagnostics.Tracing.EventLevel
#include "System/Diagnostics/Tracing/EventLevel.hpp"
// Including type: System.Diagnostics.Tracing.EventOpcode
#include "System/Diagnostics/Tracing/EventOpcode.hpp"
// Including type: System.Diagnostics.Tracing.EventTags
#include "System/Diagnostics/Tracing/EventTags.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: TraceLoggingMetadataCollector
  class TraceLoggingMetadataCollector;
  // Forward declaring type: EventFieldFormat
  struct EventFieldFormat;
  // Forward declaring type: TraceLoggingDataCollector
  class TraceLoggingDataCollector;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.TraceLoggingTypeInfo
  // [] Offset: FFFFFFFF
  class TraceLoggingTypeInfo : public ::Il2CppObject {
    public:
    // private readonly System.String name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.Diagnostics.Tracing.EventKeywords keywords
    // Size: 0x8
    // Offset: 0x18
    System::Diagnostics::Tracing::EventKeywords keywords;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Tracing::EventKeywords) == 0x8);
    // private readonly System.Diagnostics.Tracing.EventLevel level
    // Size: 0x4
    // Offset: 0x20
    System::Diagnostics::Tracing::EventLevel level;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Tracing::EventLevel) == 0x4);
    // private readonly System.Diagnostics.Tracing.EventOpcode opcode
    // Size: 0x4
    // Offset: 0x24
    System::Diagnostics::Tracing::EventOpcode opcode;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Tracing::EventOpcode) == 0x4);
    // private readonly System.Diagnostics.Tracing.EventTags tags
    // Size: 0x4
    // Offset: 0x28
    System::Diagnostics::Tracing::EventTags tags;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Tracing::EventTags) == 0x4);
    // Padding between fields: tags and: dataType
    char __padding4[0x4] = {};
    // private readonly System.Type dataType
    // Size: 0x8
    // Offset: 0x30
    System::Type* dataType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: TraceLoggingTypeInfo
    TraceLoggingTypeInfo(::Il2CppString* name_ = {}, System::Diagnostics::Tracing::EventKeywords keywords_ = {}, System::Diagnostics::Tracing::EventLevel level_ = {}, System::Diagnostics::Tracing::EventOpcode opcode_ = {}, System::Diagnostics::Tracing::EventTags tags_ = {}, System::Type* dataType_ = {}) noexcept : name{name_}, keywords{keywords_}, level{level_}, opcode{opcode_}, tags{tags_}, dataType{dataType_} {}
    // System.Void .ctor(System.Type dataType)
    // Offset: 0x12A8FFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TraceLoggingTypeInfo* New_ctor(System::Type* dataType) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::TraceLoggingTypeInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TraceLoggingTypeInfo*, creationType>(dataType)));
    }
    // System.Void .ctor(System.Type dataType, System.String name, System.Diagnostics.Tracing.EventLevel level, System.Diagnostics.Tracing.EventOpcode opcode, System.Diagnostics.Tracing.EventKeywords keywords, System.Diagnostics.Tracing.EventTags tags)
    // Offset: 0x12A9100
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TraceLoggingTypeInfo* New_ctor(System::Type* dataType, ::Il2CppString* name, System::Diagnostics::Tracing::EventLevel level, System::Diagnostics::Tracing::EventOpcode opcode, System::Diagnostics::Tracing::EventKeywords keywords, System::Diagnostics::Tracing::EventTags tags) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::TraceLoggingTypeInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TraceLoggingTypeInfo*, creationType>(dataType, name, level, opcode, keywords, tags)));
    }
    // public System.String get_Name()
    // Offset: 0x12A9264
    ::Il2CppString* get_Name();
    // public System.Diagnostics.Tracing.EventLevel get_Level()
    // Offset: 0x12A926C
    System::Diagnostics::Tracing::EventLevel get_Level();
    // public System.Diagnostics.Tracing.EventOpcode get_Opcode()
    // Offset: 0x12A9274
    System::Diagnostics::Tracing::EventOpcode get_Opcode();
    // public System.Diagnostics.Tracing.EventKeywords get_Keywords()
    // Offset: 0x12A927C
    System::Diagnostics::Tracing::EventKeywords get_Keywords();
    // public System.Diagnostics.Tracing.EventTags get_Tags()
    // Offset: 0x12A9284
    System::Diagnostics::Tracing::EventTags get_Tags();
    // System.Type get_DataType()
    // Offset: 0x12A928C
    System::Type* get_DataType();
    // public System.Void WriteMetadata(System.Diagnostics.Tracing.TraceLoggingMetadataCollector collector, System.String name, System.Diagnostics.Tracing.EventFieldFormat format)
    // Offset: 0xFFFFFFFF
    void WriteMetadata(System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::Il2CppString* name, System::Diagnostics::Tracing::EventFieldFormat format);
    // public System.Void WriteObjectData(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, System.Object value)
    // Offset: 0xFFFFFFFF
    void WriteObjectData(System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ::Il2CppObject* value);
    // public System.Object GetData(System.Object value)
    // Offset: 0x12A7400
    ::Il2CppObject* GetData(::Il2CppObject* value);
  }; // System.Diagnostics.Tracing.TraceLoggingTypeInfo
  #pragma pack(pop)
  static check_size<sizeof(TraceLoggingTypeInfo), 48 + sizeof(System::Type*)> __System_Diagnostics_Tracing_TraceLoggingTypeInfoSizeCheck;
  static_assert(sizeof(TraceLoggingTypeInfo) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::TraceLoggingTypeInfo*, "System.Diagnostics.Tracing", "TraceLoggingTypeInfo");
