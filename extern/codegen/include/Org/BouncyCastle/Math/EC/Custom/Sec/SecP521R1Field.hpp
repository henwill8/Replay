// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1Field
  class SecP521R1Field : public ::Il2CppObject {
    public:
    // Get static field: static readonly System.UInt32[] P
    static ::Array<uint>* _get_P();
    // Set static field: static readonly System.UInt32[] P
    static void _set_P(::Array<uint>* value);
    // static public System.Void Add(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x17F970C
    static void Add(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.Void AddOne(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x17F9834
    static void AddOne(::Array<uint>* x, ::Array<uint>* z);
    // static public System.UInt32[] FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x17F993C
    static ::Array<uint>* FromBigInteger(Org::BouncyCastle::Math::BigInteger* x);
    // static public System.Void Inv(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x17F99E8
    static void Inv(::Array<uint>* x, ::Array<uint>* z);
    // static public System.Int32 IsZero(System.UInt32[] x)
    // Offset: 0x17F9CA0
    static int IsZero(::Array<uint>* x);
    // static public System.Void Multiply(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x17F9D94
    static void Multiply(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.Void Negate(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x17FA100
    static void Negate(::Array<uint>* x, ::Array<uint>* z);
    // static public System.Void Random(Org.BouncyCastle.Security.SecureRandom r, System.UInt32[] z)
    // Offset: 0x17FA1DC
    static void Random(Org::BouncyCastle::Security::SecureRandom* r, ::Array<uint>* z);
    // static public System.Void RandomMult(Org.BouncyCastle.Security.SecureRandom r, System.UInt32[] z)
    // Offset: 0x17F91EC
    static void RandomMult(Org::BouncyCastle::Security::SecureRandom* r, ::Array<uint>* z);
    // static public System.Void Reduce(System.UInt32[] xx, System.UInt32[] z)
    // Offset: 0x17F9FCC
    static void Reduce(::Array<uint>* xx, ::Array<uint>* z);
    // static public System.Void Reduce23(System.UInt32[] z)
    // Offset: 0x17FA2E0
    static void Reduce23(::Array<uint>* z);
    // static public System.Void Square(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x17F9D00
    static void Square(::Array<uint>* x, ::Array<uint>* z);
    // static public System.Void SquareN(System.UInt32[] x, System.Int32 n, System.UInt32[] z)
    // Offset: 0x17F9E30
    static void SquareN(::Array<uint>* x, int n, ::Array<uint>* z);
    // static public System.Void Subtract(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x17FA470
    static void Subtract(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.Void Twice(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x17FA524
    static void Twice(::Array<uint>* x, ::Array<uint>* z);
    // static protected System.Void ImplMultiply(System.UInt32[] x, System.UInt32[] y, System.UInt32[] zz)
    // Offset: 0x17F9F1C
    static void ImplMultiply(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* zz);
    // static protected System.Void ImplSquare(System.UInt32[] x, System.UInt32[] zz)
    // Offset: 0x17FA3E4
    static void ImplSquare(::Array<uint>* x, ::Array<uint>* zz);
    // static private System.Void .cctor()
    // Offset: 0x17FA598
    static void _cctor();
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1Field
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP521R1Field");
#pragma pack(pop)
