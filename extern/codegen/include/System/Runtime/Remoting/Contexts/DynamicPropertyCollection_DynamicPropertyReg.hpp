// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Contexts.DynamicPropertyCollection
#include "System/Runtime/Remoting/Contexts/DynamicPropertyCollection.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: IDynamicProperty
  class IDynamicProperty;
  // Forward declaring type: IDynamicMessageSink
  class IDynamicMessageSink;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Autogenerated type: System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg
  class DynamicPropertyCollection::DynamicPropertyReg : public ::Il2CppObject {
    public:
    // public System.Runtime.Remoting.Contexts.IDynamicProperty Property
    // Offset: 0x10
    System::Runtime::Remoting::Contexts::IDynamicProperty* Property;
    // public System.Runtime.Remoting.Contexts.IDynamicMessageSink Sink
    // Offset: 0x18
    System::Runtime::Remoting::Contexts::IDynamicMessageSink* Sink;
    // public System.Void .ctor()
    // Offset: 0x1174D24
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DynamicPropertyCollection::DynamicPropertyReg* New_ctor();
  }; // System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::DynamicPropertyCollection::DynamicPropertyReg*, "System.Runtime.Remoting.Contexts", "DynamicPropertyCollection/DynamicPropertyReg");
#pragma pack(pop)
