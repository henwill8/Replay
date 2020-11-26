// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Rfc8032.Ed25519
#include "Org/BouncyCastle/Math/EC/Rfc8032/Ed25519.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Math.EC.Rfc8032
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
  // Autogenerated type: Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt
  class Ed25519::PointExt : public ::Il2CppObject {
    public:
    // System.Int32[] x
    // Offset: 0x10
    ::Array<int>* x;
    // System.Int32[] y
    // Offset: 0x18
    ::Array<int>* y;
    // System.Int32[] z
    // Offset: 0x20
    ::Array<int>* z;
    // System.Int32[] t
    // Offset: 0x28
    ::Array<int>* t;
    // public System.Void .ctor()
    // Offset: 0x178CF2C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Ed25519::PointExt* New_ctor();
  }; // Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExt*, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed25519/PointExt");
#pragma pack(pop)
