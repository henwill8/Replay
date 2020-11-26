// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Cryptography.SymmetricTransform
#include "Mono/Security/Cryptography/SymmetricTransform.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: SymmetricAlgorithm
  class SymmetricAlgorithm;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Autogenerated type: System.Security.Cryptography.DESTransform
  class DESTransform : public Mono::Security::Cryptography::SymmetricTransform {
    public:
    // private System.Byte[] keySchedule
    // Offset: 0x58
    ::Array<uint8_t>* keySchedule;
    // private System.Byte[] byteBuff
    // Offset: 0x60
    ::Array<uint8_t>* byteBuff;
    // private System.UInt32[] dwordBuff
    // Offset: 0x68
    ::Array<uint>* dwordBuff;
    // Get static field: static readonly System.Int32 KEY_BIT_SIZE
    static int _get_KEY_BIT_SIZE();
    // Set static field: static readonly System.Int32 KEY_BIT_SIZE
    static void _set_KEY_BIT_SIZE(int value);
    // Get static field: static readonly System.Int32 KEY_BYTE_SIZE
    static int _get_KEY_BYTE_SIZE();
    // Set static field: static readonly System.Int32 KEY_BYTE_SIZE
    static void _set_KEY_BYTE_SIZE(int value);
    // Get static field: static readonly System.Int32 BLOCK_BIT_SIZE
    static int _get_BLOCK_BIT_SIZE();
    // Set static field: static readonly System.Int32 BLOCK_BIT_SIZE
    static void _set_BLOCK_BIT_SIZE(int value);
    // Get static field: static readonly System.Int32 BLOCK_BYTE_SIZE
    static int _get_BLOCK_BYTE_SIZE();
    // Set static field: static readonly System.Int32 BLOCK_BYTE_SIZE
    static void _set_BLOCK_BYTE_SIZE(int value);
    // Get static field: static private readonly System.UInt32[] spBoxes
    static ::Array<uint>* _get_spBoxes();
    // Set static field: static private readonly System.UInt32[] spBoxes
    static void _set_spBoxes(::Array<uint>* value);
    // Get static field: static private readonly System.Byte[] PC1
    static ::Array<uint8_t>* _get_PC1();
    // Set static field: static private readonly System.Byte[] PC1
    static void _set_PC1(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] leftRotTotal
    static ::Array<uint8_t>* _get_leftRotTotal();
    // Set static field: static private readonly System.Byte[] leftRotTotal
    static void _set_leftRotTotal(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] PC2
    static ::Array<uint8_t>* _get_PC2();
    // Set static field: static private readonly System.Byte[] PC2
    static void _set_PC2(::Array<uint8_t>* value);
    // Get static field: static readonly System.UInt32[] ipTab
    static ::Array<uint>* _get_ipTab();
    // Set static field: static readonly System.UInt32[] ipTab
    static void _set_ipTab(::Array<uint>* value);
    // Get static field: static readonly System.UInt32[] fpTab
    static ::Array<uint>* _get_fpTab();
    // Set static field: static readonly System.UInt32[] fpTab
    static void _set_fpTab(::Array<uint>* value);
    // System.Void .ctor(System.Security.Cryptography.SymmetricAlgorithm symmAlgo, System.Boolean encryption, System.Byte[] key, System.Byte[] iv)
    // Offset: 0x1693F64
    static DESTransform* New_ctor(System::Security::Cryptography::SymmetricAlgorithm* symmAlgo, bool encryption, ::Array<uint8_t>* key, ::Array<uint8_t>* iv);
    // private System.UInt32 CipherFunct(System.UInt32 r, System.Int32 n)
    // Offset: 0x1694958
    uint CipherFunct(uint r, int n);
    // static System.Void Permutation(System.Byte[] input, System.Byte[] output, System.UInt32[] permTab, System.Boolean preSwap)
    // Offset: 0x1694BA0
    static void Permutation(::Array<uint8_t>* input, ::Array<uint8_t>* output, ::Array<uint>* permTab, bool preSwap);
    // static private System.Void BSwap(System.Byte[] byteBuff)
    // Offset: 0x1694EF0
    static void BSwap(::Array<uint8_t>* byteBuff);
    // System.Void SetKey(System.Byte[] key)
    // Offset: 0x1694558
    void SetKey(::Array<uint8_t>* key);
    // public System.Void ProcessBlock(System.Byte[] input, System.Byte[] output)
    // Offset: 0x1694F74
    void ProcessBlock(::Array<uint8_t>* input, ::Array<uint8_t>* output);
    // static System.Byte[] GetStrongKey()
    // Offset: 0x1694464
    static ::Array<uint8_t>* GetStrongKey();
    // static private System.Void .cctor()
    // Offset: 0x16953E0
    static void _cctor();
    // protected override System.Void ECB(System.Byte[] input, System.Byte[] output)
    // Offset: 0x169532C
    // Implemented from: Mono.Security.Cryptography.SymmetricTransform
    // Base method: System.Void SymmetricTransform::ECB(System.Byte[] input, System.Byte[] output)
    void ECB(::Array<uint8_t>* input, ::Array<uint8_t>* output);
  }; // System.Security.Cryptography.DESTransform
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::DESTransform*, "System.Security.Cryptography", "DESTransform");
#pragma pack(pop)
