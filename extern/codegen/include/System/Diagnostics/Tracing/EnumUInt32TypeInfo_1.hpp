// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
#include "System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.hpp"
// Including type: System.Diagnostics.Tracing.EventFieldFormat
#include "System/Diagnostics/Tracing/EventFieldFormat.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: TraceLoggingMetadataCollector
  class TraceLoggingMetadataCollector;
  // Forward declaring type: TraceLoggingDataCollector
  class TraceLoggingDataCollector;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Diagnostics.Tracing.EnumUInt32TypeInfo`1
  // [] Offset: FFFFFFFF
  template<typename EnumType>
  class EnumUInt32TypeInfo_1 : public System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<EnumType> {
    public:
    // Creating value type constructor for type: EnumUInt32TypeInfo_1
    EnumUInt32TypeInfo_1() noexcept {}
    // public override System.Void WriteMetadata(System.Diagnostics.Tracing.TraceLoggingMetadataCollector collector, System.String name, System.Diagnostics.Tracing.EventFieldFormat format)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo
    // Base method: System.Void TraceLoggingTypeInfo::WriteMetadata(System.Diagnostics.Tracing.TraceLoggingMetadataCollector collector, System.String name, System.Diagnostics.Tracing.EventFieldFormat format)
    void WriteMetadata(System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::Il2CppString* name, System::Diagnostics::Tracing::EventFieldFormat format) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::EnumUInt32TypeInfo_1::WriteMetadata");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "WriteMetadata", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(collector, name, format)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, collector, name, format);
    }
    // public override System.Void WriteData(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, ref EnumType value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
    // Base method: System.Void TraceLoggingTypeInfo_1::WriteData(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, ref EnumType value)
    void WriteData(System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, EnumType& value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::EnumUInt32TypeInfo_1::WriteData");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "WriteData", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(collector, value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, collector, value);
    }
    // public override System.Object GetData(System.Object value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo
    // Base method: System.Object TraceLoggingTypeInfo::GetData(System.Object value)
    ::Il2CppObject* GetData(::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::EnumUInt32TypeInfo_1::GetData");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetData", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method, value);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
    // Base method: System.Void TraceLoggingTypeInfo_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumUInt32TypeInfo_1<EnumType>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::EnumUInt32TypeInfo_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumUInt32TypeInfo_1<EnumType>*, creationType>()));
    }
  }; // System.Diagnostics.Tracing.EnumUInt32TypeInfo`1
  // Could not write size check! Type: System.Diagnostics.Tracing.EnumUInt32TypeInfo`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Diagnostics::Tracing::EnumUInt32TypeInfo_1, "System.Diagnostics.Tracing", "EnumUInt32TypeInfo`1");
