// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Math
namespace Mono::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Mono::Math::Prime
namespace Mono::Math::Prime {
  // Forward declaring type: ConfidenceFactor
  struct ConfidenceFactor;
}
// Completed forward declares
// Type namespace: Mono.Math.Prime
namespace Mono::Math::Prime {
  // Autogenerated type: Mono.Math.Prime.PrimalityTests
  class PrimalityTests : public ::Il2CppObject {
    public:
    // static private System.Int32 GetSPPRounds(Mono.Math.BigInteger bi, Mono.Math.Prime.ConfidenceFactor confidence)
    // Offset: 0x17AE858
    static int GetSPPRounds(Mono::Math::BigInteger* bi, Mono::Math::Prime::ConfidenceFactor confidence);
    // static public System.Boolean RabinMillerTest(Mono.Math.BigInteger n, Mono.Math.Prime.ConfidenceFactor confidence)
    // Offset: 0x17AEA0C
    static bool RabinMillerTest(Mono::Math::BigInteger* n, Mono::Math::Prime::ConfidenceFactor confidence);
  }; // Mono.Math.Prime.PrimalityTests
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Math::Prime::PrimalityTests*, "Mono.Math.Prime", "PrimalityTests");
#pragma pack(pop)