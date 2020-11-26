// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.X509.PKCS12
#include "Mono/Security/X509/PKCS12.hpp"
// Completed includes
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Autogenerated type: Mono.Security.X509.PKCS12/DeriveBytes
  class PKCS12::DeriveBytes : public ::Il2CppObject {
    public:
    // private System.String _hashName
    // Offset: 0x10
    ::Il2CppString* hashName;
    // private System.Int32 _iterations
    // Offset: 0x18
    int iterations;
    // private System.Byte[] _password
    // Offset: 0x20
    ::Array<uint8_t>* password;
    // private System.Byte[] _salt
    // Offset: 0x28
    ::Array<uint8_t>* salt;
    // Get static field: static private System.Byte[] keyDiversifier
    static ::Array<uint8_t>* _get_keyDiversifier();
    // Set static field: static private System.Byte[] keyDiversifier
    static void _set_keyDiversifier(::Array<uint8_t>* value);
    // Get static field: static private System.Byte[] ivDiversifier
    static ::Array<uint8_t>* _get_ivDiversifier();
    // Set static field: static private System.Byte[] ivDiversifier
    static void _set_ivDiversifier(::Array<uint8_t>* value);
    // Get static field: static private System.Byte[] macDiversifier
    static ::Array<uint8_t>* _get_macDiversifier();
    // Set static field: static private System.Byte[] macDiversifier
    static void _set_macDiversifier(::Array<uint8_t>* value);
    // public System.Void set_HashName(System.String value)
    // Offset: 0x19C0114
    void set_HashName(::Il2CppString* value);
    // public System.Void set_IterationCount(System.Int32 value)
    // Offset: 0x19C011C
    void set_IterationCount(int value);
    // public System.Void set_Password(System.Byte[] value)
    // Offset: 0x19C0124
    void set_Password(::Array<uint8_t>* value);
    // public System.Void set_Salt(System.Byte[] value)
    // Offset: 0x19C01DC
    void set_Salt(::Array<uint8_t>* value);
    // private System.Void Adjust(System.Byte[] a, System.Int32 aOff, System.Byte[] b)
    // Offset: 0x19C0284
    void Adjust(::Array<uint8_t>* a, int aOff, ::Array<uint8_t>* b);
    // private System.Byte[] Derive(System.Byte[] diversifier, System.Int32 n)
    // Offset: 0x19C036C
    ::Array<uint8_t>* Derive(::Array<uint8_t>* diversifier, int n);
    // public System.Byte[] DeriveKey(System.Int32 size)
    // Offset: 0x19C07B8
    ::Array<uint8_t>* DeriveKey(int size);
    // public System.Byte[] DeriveIV(System.Int32 size)
    // Offset: 0x19C0838
    ::Array<uint8_t>* DeriveIV(int size);
    // public System.Byte[] DeriveMAC(System.Int32 size)
    // Offset: 0x19C08B8
    ::Array<uint8_t>* DeriveMAC(int size);
    // static private System.Void .cctor()
    // Offset: 0x19C0938
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x19C010C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PKCS12::DeriveBytes* New_ctor();
  }; // Mono.Security.X509.PKCS12/DeriveBytes
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::PKCS12::DeriveBytes*, "Mono.Security.X509", "PKCS12/DeriveBytes");
#pragma pack(pop)
