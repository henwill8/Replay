// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Autogenerated type: System.Runtime.Remoting.IRemotingTypeInfo
  class IRemotingTypeInfo {
    public:
    // public System.String get_TypeName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_TypeName();
    // public System.Boolean CanCastTo(System.Type fromType, System.Object o)
    // Offset: 0xFFFFFFFF
    bool CanCastTo(System::Type* fromType, ::Il2CppObject* o);
  }; // System.Runtime.Remoting.IRemotingTypeInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::IRemotingTypeInfo*, "System.Runtime.Remoting", "IRemotingTypeInfo");
#pragma pack(pop)