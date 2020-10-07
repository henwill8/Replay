// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationEvents
  class SerializationEvents;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Autogenerated type: System.Runtime.Serialization.SerializationEventsCache
  class SerializationEventsCache : public ::Il2CppObject {
    public:
    // Get static field: static private System.Collections.Hashtable cache
    static System::Collections::Hashtable* _get_cache();
    // Set static field: static private System.Collections.Hashtable cache
    static void _set_cache(System::Collections::Hashtable* value);
    // static System.Runtime.Serialization.SerializationEvents GetSerializationEventsForType(System.Type t)
    // Offset: 0xFFF1E8
    static System::Runtime::Serialization::SerializationEvents* GetSerializationEventsForType(System::Type* t);
    // static private System.Void .cctor()
    // Offset: 0x10016C4
    static void _cctor();
  }; // System.Runtime.Serialization.SerializationEventsCache
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SerializationEventsCache*, "System.Runtime.Serialization", "SerializationEventsCache");
#pragma pack(pop)
