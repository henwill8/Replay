// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Autogenerated type: System.Runtime.Serialization.FixupHolder
  class FixupHolder : public ::Il2CppObject {
    public:
    // System.Int64 m_id
    // Offset: 0x10
    int64_t m_id;
    // System.Object m_fixupInfo
    // Offset: 0x18
    ::Il2CppObject* m_fixupInfo;
    // System.Int32 m_fixupType
    // Offset: 0x20
    int m_fixupType;
    // System.Void .ctor(System.Int64 id, System.Object fixupInfo, System.Int32 fixupType)
    // Offset: 0x133D374
    static FixupHolder* New_ctor(int64_t id, ::Il2CppObject* fixupInfo, int fixupType);
  }; // System.Runtime.Serialization.FixupHolder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::FixupHolder*, "System.Runtime.Serialization", "FixupHolder");
#pragma pack(pop)