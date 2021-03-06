// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security
namespace System::Security {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.SecureString
  // [] Offset: FFFFFFFF
  // [MonoTODOAttribute] Offset: CAABC0
  class SecureString : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private System.Int32 length
    // Size: 0x4
    // Offset: 0x10
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x14
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: data
    char __padding1[0x3] = {};
    // private System.Byte[] data
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* data;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: SecureString
    SecureString(int length_ = {}, bool disposed_ = {}, ::Array<uint8_t>* data_ = {}) noexcept : length{length_}, disposed{disposed_}, data{data_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void .ctor(System.Char* value, System.Int32 length)
    // Offset: 0x14D1B50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecureString* New_ctor(::Il2CppChar* value, int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::SecureString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecureString*, creationType>(value, length)));
    }
    // public System.Int32 get_Length()
    // Offset: 0x14D1CB8
    int get_Length();
    // private System.Void Encrypt()
    // Offset: 0x14D1CB4
    void Encrypt();
    // private System.Void Decrypt()
    // Offset: 0x14D1D94
    void Decrypt();
    // private System.Void Alloc(System.Int32 length, System.Boolean realloc)
    // Offset: 0x14D19C4
    void Alloc(int length, bool realloc);
    // System.Byte[] GetBuffer()
    // Offset: 0x14D1D98
    ::Array<uint8_t>* GetBuffer();
    // public System.Void .ctor()
    // Offset: 0x14D1994
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecureString* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::SecureString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecureString*, creationType>()));
    }
    // public System.Void Dispose()
    // Offset: 0x14D1D40
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // System.Security.SecureString
  #pragma pack(pop)
  static check_size<sizeof(SecureString), 24 + sizeof(::Array<uint8_t>*)> __System_Security_SecureStringSizeCheck;
  static_assert(sizeof(SecureString) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::SecureString*, "System.Security", "SecureString");
