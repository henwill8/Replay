// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Rfc8032.Ed25519
#include "Org/BouncyCastle/Math/EC/Rfc8032/Ed25519.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Math.EC.Rfc8032
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/Algorithm
  // [] Offset: FFFFFFFF
  struct Ed25519::Algorithm/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Algorithm
    constexpr Algorithm(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/Algorithm Ed25519
    static constexpr const int Ed25519 = 0;
    // Get static field: static public Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/Algorithm Ed25519
    static Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Algorithm _get_Ed25519();
    // Set static field: static public Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/Algorithm Ed25519
    static void _set_Ed25519(Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Algorithm value);
    // static field const value: static public Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/Algorithm Ed25519ctx
    static constexpr const int Ed25519ctx = 1;
    // Get static field: static public Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/Algorithm Ed25519ctx
    static Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Algorithm _get_Ed25519ctx();
    // Set static field: static public Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/Algorithm Ed25519ctx
    static void _set_Ed25519ctx(Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Algorithm value);
    // static field const value: static public Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/Algorithm Ed25519ph
    static constexpr const int Ed25519ph = 2;
    // Get static field: static public Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/Algorithm Ed25519ph
    static Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Algorithm _get_Ed25519ph();
    // Set static field: static public Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/Algorithm Ed25519ph
    static void _set_Ed25519ph(Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Algorithm value);
  }; // Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/Algorithm
  #pragma pack(pop)
  static check_size<sizeof(Ed25519::Algorithm), 0 + sizeof(int)> __Org_BouncyCastle_Math_EC_Rfc8032_Ed25519_AlgorithmSizeCheck;
  static_assert(sizeof(Ed25519::Algorithm) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Algorithm, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed25519/Algorithm");
