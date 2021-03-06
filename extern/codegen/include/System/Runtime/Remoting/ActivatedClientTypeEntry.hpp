// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.TypeEntry
#include "System/Runtime/Remoting/TypeEntry.hpp"
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
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: IContextAttribute
  class IContextAttribute;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.ActivatedClientTypeEntry
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CAB744
  class ActivatedClientTypeEntry : public System::Runtime::Remoting::TypeEntry {
    public:
    // private System.String applicationUrl
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* applicationUrl;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Type obj_type
    // Size: 0x8
    // Offset: 0x28
    System::Type* obj_type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: ActivatedClientTypeEntry
    ActivatedClientTypeEntry(::Il2CppString* applicationUrl_ = {}, System::Type* obj_type_ = {}) noexcept : applicationUrl{applicationUrl_}, obj_type{obj_type_} {}
    // public System.Void .ctor(System.String typeName, System.String assemblyName, System.String appUrl)
    // Offset: 0x130CDB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActivatedClientTypeEntry* New_ctor(::Il2CppString* typeName, ::Il2CppString* assemblyName, ::Il2CppString* appUrl) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::ActivatedClientTypeEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActivatedClientTypeEntry*, creationType>(typeName, assemblyName, appUrl)));
    }
    // public System.String get_ApplicationUrl()
    // Offset: 0x130CF24
    ::Il2CppString* get_ApplicationUrl();
    // public System.Runtime.Remoting.Contexts.IContextAttribute[] get_ContextAttributes()
    // Offset: 0x130CF2C
    ::Array<System::Runtime::Remoting::Contexts::IContextAttribute*>* get_ContextAttributes();
    // public System.Type get_ObjectType()
    // Offset: 0x130CF34
    System::Type* get_ObjectType();
    // public override System.String ToString()
    // Offset: 0x130CF3C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Runtime.Remoting.ActivatedClientTypeEntry
  #pragma pack(pop)
  static check_size<sizeof(ActivatedClientTypeEntry), 40 + sizeof(System::Type*)> __System_Runtime_Remoting_ActivatedClientTypeEntrySizeCheck;
  static_assert(sizeof(ActivatedClientTypeEntry) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ActivatedClientTypeEntry*, "System.Runtime.Remoting", "ActivatedClientTypeEntry");
