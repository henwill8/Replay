// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.RIPEMD160
#include "System/Security/Cryptography/RIPEMD160.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Autogenerated type: System.Security.Cryptography.RIPEMD160Managed
  class RIPEMD160Managed : public System::Security::Cryptography::RIPEMD160 {
    public:
    // private System.Byte[] _buffer
    // Offset: 0x28
    ::Array<uint8_t>* buffer;
    // private System.Int64 _count
    // Offset: 0x30
    int64_t count;
    // private System.UInt32[] _stateMD160
    // Offset: 0x38
    ::Array<uint>* stateMD160;
    // private System.UInt32[] _blockDWords
    // Offset: 0x40
    ::Array<uint>* blockDWords;
    // private System.Void InitializeState()
    // Offset: 0x169BBCC
    void InitializeState();
    // private System.Void _HashData(System.Byte[] partIn, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x169BCE0
    void _HashData(::Array<uint8_t>* partIn, int ibStart, int cbSize);
    // private System.Byte[] _EndHash()
    // Offset: 0x169BE94
    ::Array<uint8_t>* _EndHash();
    // static private System.Void MDTransform(System.UInt32* blockDWords, System.UInt32* state, System.Byte* block)
    // Offset: 0x169C060
    static void MDTransform(uint* blockDWords, uint* state, uint8_t* block);
    // static private System.UInt32 F(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x169D760
    static uint F(uint x, uint y, uint z);
    // static private System.UInt32 G(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x169D76C
    static uint G(uint x, uint y, uint z);
    // static private System.UInt32 H(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x169D77C
    static uint H(uint x, uint y, uint z);
    // static private System.UInt32 I(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x169D788
    static uint I(uint x, uint y, uint z);
    // static private System.UInt32 J(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x169D798
    static uint J(uint x, uint y, uint z);
    // public System.Void .ctor()
    // Offset: 0x1697B54
    // Implemented from: System.Security.Cryptography.RIPEMD160
    // Base method: System.Void RIPEMD160::.ctor()
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    static RIPEMD160Managed* New_ctor();
    // public override System.Void Initialize()
    // Offset: 0x169BC8C
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Initialize()
    void Initialize();
    // protected override System.Void HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x169BCDC
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    void HashCore(::Array<uint8_t>* rgb, int ibStart, int cbSize);
    // protected override System.Byte[] HashFinal()
    // Offset: 0x169BE90
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Byte[] HashAlgorithm::HashFinal()
    ::Array<uint8_t>* HashFinal();
  }; // System.Security.Cryptography.RIPEMD160Managed
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RIPEMD160Managed*, "System.Security.Cryptography", "RIPEMD160Managed");
#pragma pack(pop)
