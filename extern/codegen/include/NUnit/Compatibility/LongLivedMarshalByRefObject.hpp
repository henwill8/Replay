// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: NUnit.Compatibility
namespace NUnit::Compatibility {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Compatibility.LongLivedMarshalByRefObject
  // [] Offset: FFFFFFFF
  class LongLivedMarshalByRefObject : public System::MarshalByRefObject {
    public:
    // Creating value type constructor for type: LongLivedMarshalByRefObject
    LongLivedMarshalByRefObject() noexcept {}
    // public override System.Object InitializeLifetimeService()
    // Offset: 0x16949E8
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Object MarshalByRefObject::InitializeLifetimeService()
    ::Il2CppObject* InitializeLifetimeService();
    // public System.Void .ctor()
    // Offset: 0x16949F0
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LongLivedMarshalByRefObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Compatibility::LongLivedMarshalByRefObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LongLivedMarshalByRefObject*, creationType>()));
    }
  }; // NUnit.Compatibility.LongLivedMarshalByRefObject
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Compatibility::LongLivedMarshalByRefObject*, "NUnit.Compatibility", "LongLivedMarshalByRefObject");
