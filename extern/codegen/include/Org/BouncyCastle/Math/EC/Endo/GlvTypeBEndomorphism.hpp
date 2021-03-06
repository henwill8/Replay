// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Endo.GlvEndomorphism
#include "Org/BouncyCastle/Math/EC/Endo/GlvEndomorphism.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Forward declaring type: GlvTypeBParameters
  class GlvTypeBParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPointMap
  class ECPointMap;
  // Forward declaring type: ECCurve
  class ECCurve;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Endo.GlvTypeBEndomorphism
  // [] Offset: FFFFFFFF
  class GlvTypeBEndomorphism : public ::Il2CppObject/*, public Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*/ {
    public:
    // protected readonly Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters m_parameters
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters* m_parameters;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*) == 0x8);
    // protected readonly Org.BouncyCastle.Math.EC.ECPointMap m_pointMap
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Math::EC::ECPointMap* m_pointMap;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::ECPointMap*) == 0x8);
    // Creating value type constructor for type: GlvTypeBEndomorphism
    GlvTypeBEndomorphism(Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters* m_parameters_ = {}, Org::BouncyCastle::Math::EC::ECPointMap* m_pointMap_ = {}) noexcept : m_parameters{m_parameters_}, m_pointMap{m_pointMap_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism
    operator Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*>(this);
    }
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters parameters)
    // Offset: 0x2098C68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GlvTypeBEndomorphism* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GlvTypeBEndomorphism*, creationType>(curve, parameters)));
    }
    // public Org.BouncyCastle.Math.BigInteger[] DecomposeScalar(Org.BouncyCastle.Math.BigInteger k)
    // Offset: 0x2098D38
    // Implemented from: Org.BouncyCastle.Math.EC.Endo.GlvEndomorphism
    // Base method: Org.BouncyCastle.Math.BigInteger[] GlvEndomorphism::DecomposeScalar(Org.BouncyCastle.Math.BigInteger k)
    ::Array<Org::BouncyCastle::Math::BigInteger*>* DecomposeScalar(Org::BouncyCastle::Math::BigInteger* k);
    // public Org.BouncyCastle.Math.EC.ECPointMap get_PointMap()
    // Offset: 0x2098DCC
    // Implemented from: Org.BouncyCastle.Math.EC.Endo.ECEndomorphism
    // Base method: Org.BouncyCastle.Math.EC.ECPointMap ECEndomorphism::get_PointMap()
    Org::BouncyCastle::Math::EC::ECPointMap* get_PointMap();
    // public System.Boolean get_HasEfficientPointMap()
    // Offset: 0x2098DD4
    // Implemented from: Org.BouncyCastle.Math.EC.Endo.ECEndomorphism
    // Base method: System.Boolean ECEndomorphism::get_HasEfficientPointMap()
    bool get_HasEfficientPointMap();
  }; // Org.BouncyCastle.Math.EC.Endo.GlvTypeBEndomorphism
  #pragma pack(pop)
  static check_size<sizeof(GlvTypeBEndomorphism), 24 + sizeof(Org::BouncyCastle::Math::EC::ECPointMap*)> __Org_BouncyCastle_Math_EC_Endo_GlvTypeBEndomorphismSizeCheck;
  static_assert(sizeof(GlvTypeBEndomorphism) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism*, "Org.BouncyCastle.Math.EC.Endo", "GlvTypeBEndomorphism");
