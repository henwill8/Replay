// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Completed includes
// Type namespace: NUnit.Compatibility
namespace NUnit::Compatibility {
  // Autogenerated type: NUnit.Compatibility.LongLivedMarshalByRefObject
  class LongLivedMarshalByRefObject : public System::MarshalByRefObject {
    public:
    // public override System.Object InitializeLifetimeService()
    // Offset: 0x13D7EC8
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Object MarshalByRefObject::InitializeLifetimeService()
    ::Il2CppObject* InitializeLifetimeService();
    // public System.Void .ctor()
    // Offset: 0x13D7ED0
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    static LongLivedMarshalByRefObject* New_ctor();
  }; // NUnit.Compatibility.LongLivedMarshalByRefObject
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Compatibility::LongLivedMarshalByRefObject*, "NUnit.Compatibility", "LongLivedMarshalByRefObject");
#pragma pack(pop)
