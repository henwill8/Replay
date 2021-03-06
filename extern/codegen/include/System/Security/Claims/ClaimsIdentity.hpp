// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Principal.IIdentity
#include "System/Security/Principal/IIdentity.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Claims
namespace System::Security::Claims {
  // Forward declaring type: Claim
  class Claim;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: Collection`1<T>
  template<typename T>
  class Collection_1;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Security.Claims
namespace System::Security::Claims {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Claims.ClaimsIdentity
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CAAD60
  class ClaimsIdentity : public ::Il2CppObject/*, public System::Security::Principal::IIdentity*/ {
    public:
    // Nested type: System::Security::Claims::ClaimsIdentity::$get_Claims$d__51
    class $get_Claims$d__51;
    // private System.Byte[] m_userSerializationData
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* m_userSerializationData;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Security.Claims.Claim> m_instanceClaims
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<System::Security::Claims::Claim*>* m_instanceClaims;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Security::Claims::Claim*>*) == 0x8);
    // private System.Collections.ObjectModel.Collection`1<System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim>> m_externalClaims
    // Size: 0x8
    // Offset: 0x20
    System::Collections::ObjectModel::Collection_1<System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>*>* m_externalClaims;
    // Field size check
    static_assert(sizeof(System::Collections::ObjectModel::Collection_1<System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>*>*) == 0x8);
    // private System.String m_nameType
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* m_nameType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_roleType
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* m_roleType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xCAF9A4
    // private System.String m_version
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* m_version;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xCAF9DC
    // private System.Security.Claims.ClaimsIdentity m_actor
    // Size: 0x8
    // Offset: 0x40
    System::Security::Claims::ClaimsIdentity* m_actor;
    // Field size check
    static_assert(sizeof(System::Security::Claims::ClaimsIdentity*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xCAFA14
    // private System.String m_authenticationType
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* m_authenticationType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xCAFA4C
    // private System.Object m_bootstrapContext
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppObject* m_bootstrapContext;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xCAFA84
    // private System.String m_label
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* m_label;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xCAFABC
    // private System.String m_serializedNameType
    // Size: 0x8
    // Offset: 0x60
    ::Il2CppString* m_serializedNameType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xCAFAF4
    // private System.String m_serializedRoleType
    // Size: 0x8
    // Offset: 0x68
    ::Il2CppString* m_serializedRoleType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xCAFB2C
    // private System.String m_serializedClaims
    // Size: 0x8
    // Offset: 0x70
    ::Il2CppString* m_serializedClaims;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: ClaimsIdentity
    ClaimsIdentity(::Array<uint8_t>* m_userSerializationData_ = {}, System::Collections::Generic::List_1<System::Security::Claims::Claim*>* m_instanceClaims_ = {}, System::Collections::ObjectModel::Collection_1<System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>*>* m_externalClaims_ = {}, ::Il2CppString* m_nameType_ = {}, ::Il2CppString* m_roleType_ = {}, ::Il2CppString* m_version_ = {}, System::Security::Claims::ClaimsIdentity* m_actor_ = {}, ::Il2CppString* m_authenticationType_ = {}, ::Il2CppObject* m_bootstrapContext_ = {}, ::Il2CppString* m_label_ = {}, ::Il2CppString* m_serializedNameType_ = {}, ::Il2CppString* m_serializedRoleType_ = {}, ::Il2CppString* m_serializedClaims_ = {}) noexcept : m_userSerializationData{m_userSerializationData_}, m_instanceClaims{m_instanceClaims_}, m_externalClaims{m_externalClaims_}, m_nameType{m_nameType_}, m_roleType{m_roleType_}, m_version{m_version_}, m_actor{m_actor_}, m_authenticationType{m_authenticationType_}, m_bootstrapContext{m_bootstrapContext_}, m_label{m_label_}, m_serializedNameType{m_serializedNameType_}, m_serializedRoleType{m_serializedRoleType_}, m_serializedClaims{m_serializedClaims_} {}
    // Creating interface conversion operator: operator System::Security::Principal::IIdentity
    operator System::Security::Principal::IIdentity() noexcept {
      return *reinterpret_cast<System::Security::Principal::IIdentity*>(this);
    }
    // public System.Void .ctor(System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim> claims)
    // Offset: 0x1768190
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClaimsIdentity* New_ctor(System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* claims) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Claims::ClaimsIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClaimsIdentity*, creationType>(claims)));
    }
    // public System.Void .ctor(System.Security.Principal.IIdentity identity, System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim> claims, System.String authenticationType, System.String nameType, System.String roleType)
    // Offset: 0x17681AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClaimsIdentity* New_ctor(System::Security::Principal::IIdentity* identity, System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* claims, ::Il2CppString* authenticationType, ::Il2CppString* nameType, ::Il2CppString* roleType) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Claims::ClaimsIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClaimsIdentity*, creationType>(identity, claims, authenticationType, nameType, roleType)));
    }
    // System.Void .ctor(System.Security.Principal.IIdentity identity, System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim> claims, System.String authenticationType, System.String nameType, System.String roleType, System.Boolean checkAuthType)
    // Offset: 0x17681B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClaimsIdentity* New_ctor(System::Security::Principal::IIdentity* identity, System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* claims, ::Il2CppString* authenticationType, ::Il2CppString* nameType, ::Il2CppString* roleType, bool checkAuthType) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Claims::ClaimsIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClaimsIdentity*, creationType>(identity, claims, authenticationType, nameType, roleType, checkAuthType)));
    }
    // protected System.Void .ctor(System.Security.Claims.ClaimsIdentity other)
    // Offset: 0x1768C18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClaimsIdentity* New_ctor(System::Security::Claims::ClaimsIdentity* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Claims::ClaimsIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClaimsIdentity*, creationType>(other)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1768E20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClaimsIdentity* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Claims::ClaimsIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClaimsIdentity*, creationType>(info, context)));
    }
    // public System.Security.Claims.ClaimsIdentity get_Actor()
    // Offset: 0x1769688
    System::Security::Claims::ClaimsIdentity* get_Actor();
    // public System.Void set_Actor(System.Security.Claims.ClaimsIdentity value)
    // Offset: 0x1769690
    void set_Actor(System::Security::Claims::ClaimsIdentity* value);
    // public System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim> get_Claims()
    // Offset: 0x1769758
    System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* get_Claims();
    // public System.String get_NameClaimType()
    // Offset: 0x1769844
    ::Il2CppString* get_NameClaimType();
    // public System.Security.Claims.ClaimsIdentity Clone()
    // Offset: 0x176984C
    System::Security::Claims::ClaimsIdentity* Clone();
    // public System.Void AddClaim(System.Security.Claims.Claim claim)
    // Offset: 0x17699D4
    void AddClaim(System::Security::Claims::Claim* claim);
    // private System.Void SafeAddClaims(System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim> claims)
    // Offset: 0x1768890
    void SafeAddClaims(System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* claims);
    // private System.Void SafeAddClaim(System.Security.Claims.Claim claim)
    // Offset: 0x1768B70
    void SafeAddClaim(System::Security::Claims::Claim* claim);
    // public System.Security.Claims.Claim FindFirst(System.String type)
    // Offset: 0x1769AB8
    System::Security::Claims::Claim* FindFirst(::Il2CppString* type);
    // private System.Void OnSerializingMethod(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1769DE0
    void OnSerializingMethod(System::Runtime::Serialization::StreamingContext context);
    // private System.Void OnDeserializedMethod(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x176A050
    void OnDeserializedMethod(System::Runtime::Serialization::StreamingContext context);
    // private System.Void OnDeserializingMethod(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x176A3F0
    void OnDeserializingMethod(System::Runtime::Serialization::StreamingContext context);
    // protected System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x176A4B8
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // private System.Void DeserializeClaims(System.String serializedClaims)
    // Offset: 0x176A13C
    void DeserializeClaims(::Il2CppString* serializedClaims);
    // private System.String SerializeClaims()
    // Offset: 0x1769E78
    ::Il2CppString* SerializeClaims();
    // private System.Boolean IsCircular(System.Security.Claims.ClaimsIdentity subject)
    // Offset: 0x1768858
    bool IsCircular(System::Security::Claims::ClaimsIdentity* subject);
    // private System.Void Deserialize(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context, System.Boolean useContext)
    // Offset: 0x1768F8C
    void Deserialize(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context, bool useContext);
    // public System.Void .ctor()
    // Offset: 0x1768174
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClaimsIdentity* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Claims::ClaimsIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClaimsIdentity*, creationType>()));
    }
    // public System.String get_AuthenticationType()
    // Offset: 0x1769680
    // Implemented from: System.Security.Principal.IIdentity
    // Base method: System.String IIdentity::get_AuthenticationType()
    ::Il2CppString* get_AuthenticationType();
    // public System.String get_Name()
    // Offset: 0x176981C
    // Implemented from: System.Security.Principal.IIdentity
    // Base method: System.String IIdentity::get_Name()
    ::Il2CppString* get_Name();
  }; // System.Security.Claims.ClaimsIdentity
  #pragma pack(pop)
  static check_size<sizeof(ClaimsIdentity), 112 + sizeof(::Il2CppString*)> __System_Security_Claims_ClaimsIdentitySizeCheck;
  static_assert(sizeof(ClaimsIdentity) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Claims::ClaimsIdentity*, "System.Security.Claims", "ClaimsIdentity");
