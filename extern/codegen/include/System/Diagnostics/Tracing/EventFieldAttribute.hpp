// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Diagnostics.Tracing.EventFieldTags
#include "System/Diagnostics/Tracing/EventFieldTags.hpp"
// Including type: System.Diagnostics.Tracing.EventFieldFormat
#include "System/Diagnostics/Tracing/EventFieldFormat.hpp"
// Completed includes
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.EventFieldAttribute
  class EventFieldAttribute : public System::Attribute {
    public:
    // private System.Diagnostics.Tracing.EventFieldTags <Tags>k__BackingField
    // Offset: 0x10
    System::Diagnostics::Tracing::EventFieldTags Tags;
    // private System.String <Name>k__BackingField
    // Offset: 0x18
    ::Il2CppString* Name;
    // private System.Diagnostics.Tracing.EventFieldFormat <Format>k__BackingField
    // Offset: 0x20
    System::Diagnostics::Tracing::EventFieldFormat Format;
    // public System.Diagnostics.Tracing.EventFieldTags get_Tags()
    // Offset: 0x12C6EB0
    System::Diagnostics::Tracing::EventFieldTags get_Tags();
    // System.String get_Name()
    // Offset: 0x12C6EB8
    ::Il2CppString* get_Name();
    // public System.Diagnostics.Tracing.EventFieldFormat get_Format()
    // Offset: 0x12C6EC0
    System::Diagnostics::Tracing::EventFieldFormat get_Format();
  }; // System.Diagnostics.Tracing.EventFieldAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventFieldAttribute*, "System.Diagnostics.Tracing", "EventFieldAttribute");
#pragma pack(pop)
