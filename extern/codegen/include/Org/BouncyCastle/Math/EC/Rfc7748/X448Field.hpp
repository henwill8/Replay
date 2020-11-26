// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Math.EC.Rfc7748
namespace Org::BouncyCastle::Math::EC::Rfc7748 {
  // Autogenerated type: Org.BouncyCastle.Math.EC.Rfc7748.X448Field
  class X448Field : public ::Il2CppObject {
    public:
    // static public System.Void Add(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x1789008
    static void Add(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.Void Carry(System.UInt32[] z)
    // Offset: 0x1789088
    static void Carry(::Array<uint>* z);
    // static public System.Void CMov(System.Int32 cond, System.UInt32[] x, System.Int32 xOff, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0x1789214
    static void CMov(int cond, ::Array<uint>* x, int xOff, ::Array<uint>* z, int zOff);
    // static public System.Void CNegate(System.Int32 negate, System.UInt32[] z)
    // Offset: 0x17892A0
    static void CNegate(int negate, ::Array<uint>* z);
    // static public System.Void Copy(System.UInt32[] x, System.Int32 xOff, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0x17896D0
    static void Copy(::Array<uint>* x, int xOff, ::Array<uint>* z, int zOff);
    // static public System.UInt32[] Create()
    // Offset: 0x17892F0
    static ::Array<uint>* Create();
    // static public System.Void Encode(System.UInt32[] x, System.Byte[] z, System.Int32 zOff)
    // Offset: 0x178974C
    static void Encode(::Array<uint>* x, ::Array<uint8_t>* z, int zOff);
    // static private System.Void Encode24(System.UInt32 n, System.Byte[] bs, System.Int32 off)
    // Offset: 0x178988C
    static void Encode24(uint n, ::Array<uint8_t>* bs, int off);
    // static private System.Void Encode32(System.UInt32 n, System.Byte[] bs, System.Int32 off)
    // Offset: 0x17898FC
    static void Encode32(uint n, ::Array<uint8_t>* bs, int off);
    // static private System.Void Encode56(System.UInt32[] x, System.Int32 xOff, System.Byte[] bs, System.Int32 off)
    // Offset: 0x1789810
    static void Encode56(::Array<uint>* x, int xOff, ::Array<uint8_t>* bs, int off);
    // static public System.Void Inv(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x1789988
    static void Inv(::Array<uint>* x, ::Array<uint>* z);
    // static public System.Int32 IsZero(System.UInt32[] x)
    // Offset: 0x178A590
    static int IsZero(::Array<uint>* x);
    // static public System.Void Mul(System.UInt32[] x, System.UInt32 y, System.UInt32[] z)
    // Offset: 0x178A5F0
    static void Mul(::Array<uint>* x, uint y, ::Array<uint>* z);
    // static public System.Void Mul(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x1789C28
    static void Mul(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.Void Normalize(System.UInt32[] z)
    // Offset: 0x178A7F4
    static void Normalize(::Array<uint>* z);
    // static public System.Void One(System.UInt32[] z)
    // Offset: 0x178A8D8
    static void One(::Array<uint>* z);
    // static private System.Void PowPm3d4(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x17899E0
    static void PowPm3d4(::Array<uint>* x, ::Array<uint>* z);
    // static private System.Void Reduce(System.UInt32[] z, System.Int32 x)
    // Offset: 0x178A820
    static void Reduce(::Array<uint>* z, int x);
    // static public System.Void Sqr(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x178A934
    static void Sqr(::Array<uint>* x, ::Array<uint>* z);
    // static public System.Void Sqr(System.UInt32[] x, System.Int32 n, System.UInt32[] z)
    // Offset: 0x1789BDC
    static void Sqr(::Array<uint>* x, int n, ::Array<uint>* z);
    // static public System.Void Sub(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x178933C
    static void Sub(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.Void SubOne(System.UInt32[] z)
    // Offset: 0x178AEF0
    static void SubOne(::Array<uint>* z);
    // static public System.Void Zero(System.UInt32[] z)
    // Offset: 0x178AF40
    static void Zero(::Array<uint>* z);
  }; // Org.BouncyCastle.Math.EC.Rfc7748.X448Field
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Rfc7748::X448Field*, "Org.BouncyCastle.Math.EC.Rfc7748", "X448Field");
#pragma pack(pop)
