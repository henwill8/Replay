// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: PropertyAnalysis
  class PropertyAnalysis;
  // Forward declaring type: EventDataAttribute
  class EventDataAttribute;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.TypeAnalysis
  class TypeAnalysis : public ::Il2CppObject {
    public:
    // readonly System.Diagnostics.Tracing.PropertyAnalysis[] properties
    // Offset: 0x10
    ::Array<System::Diagnostics::Tracing::PropertyAnalysis*>* properties;
    // readonly System.String name
    // Offset: 0x18
    ::Il2CppString* name;
    // readonly System.Diagnostics.Tracing.EventKeywords keywords
    // Offset: 0x20
    System::Diagnostics::Tracing::EventKeywords keywords;
    // readonly System.Diagnostics.Tracing.EventLevel level
    // Offset: 0x28
    System::Diagnostics::Tracing::EventLevel level;
    // readonly System.Diagnostics.Tracing.EventOpcode opcode
    // Offset: 0x2C
    System::Diagnostics::Tracing::EventOpcode opcode;
    // readonly System.Diagnostics.Tracing.EventTags tags
    // Offset: 0x30
    System::Diagnostics::Tracing::EventTags tags;
    // public System.Void .ctor(System.Type dataType, System.Diagnostics.Tracing.EventDataAttribute eventAttrib, System.Collections.Generic.List`1<System.Type> recursionCheck)
    // Offset: 0xDA0D80
    static TypeAnalysis* New_ctor(System::Type* dataType, System::Diagnostics::Tracing::EventDataAttribute* eventAttrib, System::Collections::Generic::List_1<System::Type*>* recursionCheck);
  }; // System.Diagnostics.Tracing.TypeAnalysis
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::TypeAnalysis*, "System.Diagnostics.Tracing", "TypeAnalysis");
#pragma pack(pop)
