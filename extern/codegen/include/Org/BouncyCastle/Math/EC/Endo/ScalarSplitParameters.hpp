// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Endo.ScalarSplitParameters
  // [] Offset: FFFFFFFF
  class ScalarSplitParameters : public ::Il2CppObject {
    public:
    // protected readonly Org.BouncyCastle.Math.BigInteger m_v1A
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::BigInteger* m_v1A;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // protected readonly Org.BouncyCastle.Math.BigInteger m_v1B
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Math::BigInteger* m_v1B;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // protected readonly Org.BouncyCastle.Math.BigInteger m_v2A
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Math::BigInteger* m_v2A;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // protected readonly Org.BouncyCastle.Math.BigInteger m_v2B
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Math::BigInteger* m_v2B;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // protected readonly Org.BouncyCastle.Math.BigInteger m_g1
    // Size: 0x8
    // Offset: 0x30
    Org::BouncyCastle::Math::BigInteger* m_g1;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // protected readonly Org.BouncyCastle.Math.BigInteger m_g2
    // Size: 0x8
    // Offset: 0x38
    Org::BouncyCastle::Math::BigInteger* m_g2;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // protected readonly System.Int32 m_bits
    // Size: 0x4
    // Offset: 0x40
    int m_bits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ScalarSplitParameters
    ScalarSplitParameters(Org::BouncyCastle::Math::BigInteger* m_v1A_ = {}, Org::BouncyCastle::Math::BigInteger* m_v1B_ = {}, Org::BouncyCastle::Math::BigInteger* m_v2A_ = {}, Org::BouncyCastle::Math::BigInteger* m_v2B_ = {}, Org::BouncyCastle::Math::BigInteger* m_g1_ = {}, Org::BouncyCastle::Math::BigInteger* m_g2_ = {}, int m_bits_ = {}) noexcept : m_v1A{m_v1A_}, m_v1B{m_v1B_}, m_v2A{m_v2A_}, m_v2B{m_v2B_}, m_g1{m_g1_}, m_g2{m_g2_}, m_bits{m_bits_} {}
    // static private System.Void CheckVector(Org.BouncyCastle.Math.BigInteger[] v, System.String name)
    // Offset: 0x2098E50
    static void CheckVector(::Array<Org::BouncyCastle::Math::BigInteger*>* v, ::Il2CppString* name);
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger[] v1, Org.BouncyCastle.Math.BigInteger[] v2, Org.BouncyCastle.Math.BigInteger g1, Org.BouncyCastle.Math.BigInteger g2, System.Int32 bits)
    // Offset: 0x2098EFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScalarSplitParameters* New_ctor(::Array<Org::BouncyCastle::Math::BigInteger*>* v1, ::Array<Org::BouncyCastle::Math::BigInteger*>* v2, Org::BouncyCastle::Math::BigInteger* g1, Org::BouncyCastle::Math::BigInteger* g2, int bits) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScalarSplitParameters*, creationType>(v1, v2, g1, g2, bits)));
    }
    // public Org.BouncyCastle.Math.BigInteger get_V1A()
    // Offset: 0x2099040
    Org::BouncyCastle::Math::BigInteger* get_V1A();
    // public Org.BouncyCastle.Math.BigInteger get_V1B()
    // Offset: 0x2099048
    Org::BouncyCastle::Math::BigInteger* get_V1B();
    // public Org.BouncyCastle.Math.BigInteger get_V2A()
    // Offset: 0x2099050
    Org::BouncyCastle::Math::BigInteger* get_V2A();
    // public Org.BouncyCastle.Math.BigInteger get_V2B()
    // Offset: 0x2099058
    Org::BouncyCastle::Math::BigInteger* get_V2B();
    // public Org.BouncyCastle.Math.BigInteger get_G1()
    // Offset: 0x2099060
    Org::BouncyCastle::Math::BigInteger* get_G1();
    // public Org.BouncyCastle.Math.BigInteger get_G2()
    // Offset: 0x2099068
    Org::BouncyCastle::Math::BigInteger* get_G2();
    // public System.Int32 get_Bits()
    // Offset: 0x2099070
    int get_Bits();
  }; // Org.BouncyCastle.Math.EC.Endo.ScalarSplitParameters
  #pragma pack(pop)
  static check_size<sizeof(ScalarSplitParameters), 64 + sizeof(int)> __Org_BouncyCastle_Math_EC_Endo_ScalarSplitParametersSizeCheck;
  static_assert(sizeof(ScalarSplitParameters) == 0x44);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*, "Org.BouncyCastle.Math.EC.Endo", "ScalarSplitParameters");
