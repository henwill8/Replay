// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Security.Cryptography.HashAlgorithmName
  // [] Offset: FFFFFFFF
  struct HashAlgorithmName/*, public System::ValueType, public System::IEquatable_1<System::Security::Cryptography::HashAlgorithmName>*/ {
    public:
    // private readonly System.String _name
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: HashAlgorithmName
    constexpr HashAlgorithmName(::Il2CppString* name_ = {}) noexcept : name{name_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<System::Security::Cryptography::HashAlgorithmName>
    operator System::IEquatable_1<System::Security::Cryptography::HashAlgorithmName>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<System::Security::Cryptography::HashAlgorithmName>*>(this);
    }
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return name;
    }
    // static public System.Security.Cryptography.HashAlgorithmName get_SHA256()
    // Offset: 0x1A465C0
    static System::Security::Cryptography::HashAlgorithmName get_SHA256();
    // public System.Void .ctor(System.String name)
    // Offset: 0xE137D8
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  HashAlgorithmName(::Il2CppString* name)
    // public System.String get_Name()
    // Offset: 0xE137E0
    ::Il2CppString* get_Name();
    // public override System.String ToString()
    // Offset: 0xE137E8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xE13844
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(System.Security.Cryptography.HashAlgorithmName other)
    // Offset: 0xE1384C
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(System.Security.Cryptography.HashAlgorithmName other)
    bool Equals(System::Security::Cryptography::HashAlgorithmName other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xE13858
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.Security.Cryptography.HashAlgorithmName
  #pragma pack(pop)
  static check_size<sizeof(HashAlgorithmName), 0 + sizeof(::Il2CppString*)> __System_Security_Cryptography_HashAlgorithmNameSizeCheck;
  static_assert(sizeof(HashAlgorithmName) == 0x8);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::HashAlgorithmName, "System.Security.Cryptography", "HashAlgorithmName");
