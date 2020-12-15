// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Math::Prime
namespace Mono::Math::Prime {
  // Forward declaring type: ConfidenceFactor
  struct ConfidenceFactor;
  // Forward declaring type: PrimalityTest
  class PrimalityTest;
}
// Forward declaring namespace: Mono::Math
namespace Mono::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Mono.Math.Prime.Generator
namespace Mono::Math::Prime::Generator {
  // Autogenerated type: Mono.Math.Prime.Generator.PrimeGeneratorBase
  class PrimeGeneratorBase : public ::Il2CppObject {
    public:
    // public Mono.Math.Prime.ConfidenceFactor get_Confidence()
    // Offset: 0x17ADF1C
    Mono::Math::Prime::ConfidenceFactor get_Confidence();
    // public Mono.Math.Prime.PrimalityTest get_PrimalityTest()
    // Offset: 0x17ADF24
    Mono::Math::Prime::PrimalityTest* get_PrimalityTest();
    // public System.Int32 get_TrialDivisionBounds()
    // Offset: 0x17ADFB0
    int get_TrialDivisionBounds();
    // public Mono.Math.BigInteger GenerateNewPrime(System.Int32 bits)
    // Offset: 0xFFFFFFFF
    Mono::Math::BigInteger* GenerateNewPrime(int bits);
    // protected System.Void .ctor()
    // Offset: 0x17ADFB8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PrimeGeneratorBase* New_ctor();
  }; // Mono.Math.Prime.Generator.PrimeGeneratorBase
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Math::Prime::Generator::PrimeGeneratorBase*, "Mono.Math.Prime.Generator", "PrimeGeneratorBase");
#pragma pack(pop)