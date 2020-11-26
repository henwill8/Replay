// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Autogenerated type: Org.BouncyCastle.Crypto.Check
  class Check : public ::Il2CppObject {
    public:
    // static System.Void DataLength(System.Boolean condition, System.String msg)
    // Offset: 0x1757C18
    static void DataLength(bool condition, ::Il2CppString* msg);
    // static System.Void DataLength(System.Byte[] buf, System.Int32 off, System.Int32 len, System.String msg)
    // Offset: 0x1757C98
    static void DataLength(::Array<uint8_t>* buf, int off, int len, ::Il2CppString* msg);
    // static System.Void OutputLength(System.Byte[] buf, System.Int32 off, System.Int32 len, System.String msg)
    // Offset: 0x1757D3C
    static void OutputLength(::Array<uint8_t>* buf, int off, int len, ::Il2CppString* msg);
  }; // Org.BouncyCastle.Crypto.Check
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Check*, "Org.BouncyCastle.Crypto", "Check");
#pragma pack(pop)
