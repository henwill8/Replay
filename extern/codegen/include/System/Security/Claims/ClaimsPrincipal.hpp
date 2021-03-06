// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Principal.IPrincipal
#include "System/Security/Principal/IPrincipal.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Security::Claims
namespace System::Security::Claims {
  // Forward declaring type: ClaimsIdentity
  class ClaimsIdentity;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Security.Claims
namespace System::Security::Claims {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Claims.ClaimsPrincipal
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CAAD84
  class ClaimsPrincipal : public ::Il2CppObject/*, public System::Security::Principal::IPrincipal*/ {
    public:
    // [OptionalFieldAttribute] Offset: 0xCAFB64
    // private System.String m_version
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_version;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xCAFB9C
    // private System.String m_serializedClaimsIdentities
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_serializedClaimsIdentities;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Collections.Generic.List`1<System.Security.Claims.ClaimsIdentity> m_identities
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<System::Security::Claims::ClaimsIdentity*>* m_identities;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Security::Claims::ClaimsIdentity*>*) == 0x8);
    // Creating value type constructor for type: ClaimsPrincipal
    ClaimsPrincipal(::Il2CppString* m_version_ = {}, ::Il2CppString* m_serializedClaimsIdentities_ = {}, System::Collections::Generic::List_1<System::Security::Claims::ClaimsIdentity*>* m_identities_ = {}) noexcept : m_version{m_version_}, m_serializedClaimsIdentities{m_serializedClaimsIdentities_}, m_identities{m_identities_} {}
    // Creating interface conversion operator: operator System::Security::Principal::IPrincipal
    operator System::Security::Principal::IPrincipal() noexcept {
      return *reinterpret_cast<System::Security::Principal::IPrincipal*>(this);
    }
    // Get static field: static private System.Func`2<System.Collections.Generic.IEnumerable`1<System.Security.Claims.ClaimsIdentity>,System.Security.Claims.ClaimsIdentity> s_identitySelector
    static System::Func_2<System::Collections::Generic::IEnumerable_1<System::Security::Claims::ClaimsIdentity*>*, System::Security::Claims::ClaimsIdentity*>* _get_s_identitySelector();
    // Set static field: static private System.Func`2<System.Collections.Generic.IEnumerable`1<System.Security.Claims.ClaimsIdentity>,System.Security.Claims.ClaimsIdentity> s_identitySelector
    static void _set_s_identitySelector(System::Func_2<System::Collections::Generic::IEnumerable_1<System::Security::Claims::ClaimsIdentity*>*, System::Security::Claims::ClaimsIdentity*>* value);
    // Get static field: static private System.Func`1<System.Security.Claims.ClaimsPrincipal> s_principalSelector
    static System::Func_1<System::Security::Claims::ClaimsPrincipal*>* _get_s_principalSelector();
    // Set static field: static private System.Func`1<System.Security.Claims.ClaimsPrincipal> s_principalSelector
    static void _set_s_principalSelector(System::Func_1<System::Security::Claims::ClaimsPrincipal*>* value);
    // static private System.Security.Claims.ClaimsIdentity SelectPrimaryIdentity(System.Collections.Generic.IEnumerable`1<System.Security.Claims.ClaimsIdentity> identities)
    // Offset: 0x176AF28
    static System::Security::Claims::ClaimsIdentity* SelectPrimaryIdentity(System::Collections::Generic::IEnumerable_1<System::Security::Claims::ClaimsIdentity*>* identities);
    // static public System.Func`1<System.Security.Claims.ClaimsPrincipal> get_ClaimsPrincipalSelector()
    // Offset: 0x176B250
    static System::Func_1<System::Security::Claims::ClaimsPrincipal*>* get_ClaimsPrincipalSelector();
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x176B34C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClaimsPrincipal* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Claims::ClaimsPrincipal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClaimsPrincipal*, creationType>(info, context)));
    }
    // private System.Void OnSerializingMethod(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x176B590
    void OnSerializingMethod(System::Runtime::Serialization::StreamingContext context);
    // private System.Void OnDeserializedMethod(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x176BDE4
    void OnDeserializedMethod(System::Runtime::Serialization::StreamingContext context);
    // private System.Void Deserialize(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x176B438
    void Deserialize(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // private System.Void DeserializeIdentities(System.String identities)
    // Offset: 0x176BE64
    void DeserializeIdentities(::Il2CppString* identities);
    // private System.String SerializeIdentities()
    // Offset: 0x176B608
    ::Il2CppString* SerializeIdentities();
    // static private System.Void .cctor()
    // Offset: 0x176C430
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x176B2B8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClaimsPrincipal* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Claims::ClaimsPrincipal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClaimsPrincipal*, creationType>()));
    }
  }; // System.Security.Claims.ClaimsPrincipal
  #pragma pack(pop)
  static check_size<sizeof(ClaimsPrincipal), 32 + sizeof(System::Collections::Generic::List_1<System::Security::Claims::ClaimsIdentity*>*)> __System_Security_Claims_ClaimsPrincipalSizeCheck;
  static_assert(sizeof(ClaimsPrincipal) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Claims::ClaimsPrincipal*, "System.Security.Claims", "ClaimsPrincipal");
