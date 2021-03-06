// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.AbstractFpPoint
#include "Org/BouncyCastle/Math/EC/AbstractFpPoint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
  // Forward declaring type: ECCurve
  class ECCurve;
  // Skipping declaration: ECPoint because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.FpPoint
  // [] Offset: FFFFFFFF
  class FpPoint : public Org::BouncyCastle::Math::EC::AbstractFpPoint {
    public:
    // Creating value type constructor for type: FpPoint
    FpPoint() noexcept {}
    // protected Org.BouncyCastle.Math.EC.ECFieldElement Two(Org.BouncyCastle.Math.EC.ECFieldElement x)
    // Offset: 0x20A1AFC
    Org::BouncyCastle::Math::EC::ECFieldElement* Two(Org::BouncyCastle::Math::EC::ECFieldElement* x);
    // protected Org.BouncyCastle.Math.EC.ECFieldElement Three(Org.BouncyCastle.Math.EC.ECFieldElement x)
    // Offset: 0x20A1B1C
    Org::BouncyCastle::Math::EC::ECFieldElement* Three(Org::BouncyCastle::Math::EC::ECFieldElement* x);
    // protected Org.BouncyCastle.Math.EC.ECFieldElement Four(Org.BouncyCastle.Math.EC.ECFieldElement x)
    // Offset: 0x20A1B5C
    Org::BouncyCastle::Math::EC::ECFieldElement* Four(Org::BouncyCastle::Math::EC::ECFieldElement* x);
    // protected Org.BouncyCastle.Math.EC.ECFieldElement Eight(Org.BouncyCastle.Math.EC.ECFieldElement x)
    // Offset: 0x20A1B9C
    Org::BouncyCastle::Math::EC::ECFieldElement* Eight(Org::BouncyCastle::Math::EC::ECFieldElement* x);
    // protected Org.BouncyCastle.Math.EC.ECFieldElement CalculateJacobianModifiedW(Org.BouncyCastle.Math.EC.ECFieldElement Z, Org.BouncyCastle.Math.EC.ECFieldElement ZSquared)
    // Offset: 0x20A1CFC
    Org::BouncyCastle::Math::EC::ECFieldElement* CalculateJacobianModifiedW(Org::BouncyCastle::Math::EC::ECFieldElement* Z, Org::BouncyCastle::Math::EC::ECFieldElement* ZSquared);
    // protected Org.BouncyCastle.Math.EC.ECFieldElement GetJacobianModifiedW()
    // Offset: 0x20A1E4C
    Org::BouncyCastle::Math::EC::ECFieldElement* GetJacobianModifiedW();
    // protected Org.BouncyCastle.Math.EC.FpPoint TwiceJacobianModified(System.Boolean calculateW)
    // Offset: 0x20A1EFC
    Org::BouncyCastle::Math::EC::FpPoint* TwiceJacobianModified(bool calculateW);
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Offset: 0x209CEF8
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractFpPoint
    // Base method: System.Void AbstractFpPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Base method: System.Void ECPointBase::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Base method: System.Void ECPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FpPoint* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::FpPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FpPoint*, creationType>(curve, x, y, withCompression)));
    }
    // System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Offset: 0x209D454
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractFpPoint
    // Base method: System.Void AbstractFpPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Base method: System.Void ECPointBase::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Base method: System.Void ECPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FpPoint* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* zs, bool withCompression) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::FpPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FpPoint*, creationType>(curve, x, y, zs, withCompression)));
    }
    // public override Org.BouncyCastle.Math.EC.ECFieldElement GetZCoord(System.Int32 index)
    // Offset: 0x209F434
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECPoint::GetZCoord(System.Int32 index)
    Org::BouncyCastle::Math::EC::ECFieldElement* GetZCoord(int index);
    // public override Org.BouncyCastle.Math.EC.ECPoint Add(Org.BouncyCastle.Math.EC.ECPoint b)
    // Offset: 0x209F498
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::Add(Org.BouncyCastle.Math.EC.ECPoint b)
    Org::BouncyCastle::Math::EC::ECPoint* Add(Org::BouncyCastle::Math::EC::ECPoint* b);
    // public override Org.BouncyCastle.Math.EC.ECPoint Twice()
    // Offset: 0x20A0030
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::Twice()
    Org::BouncyCastle::Math::EC::ECPoint* Twice();
    // public override Org.BouncyCastle.Math.EC.ECPoint TwicePlus(Org.BouncyCastle.Math.EC.ECPoint b)
    // Offset: 0x20A0AB4
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::TwicePlus(Org.BouncyCastle.Math.EC.ECPoint b)
    Org::BouncyCastle::Math::EC::ECPoint* TwicePlus(Org::BouncyCastle::Math::EC::ECPoint* b);
    // public override Org.BouncyCastle.Math.EC.ECPoint ThreeTimes()
    // Offset: 0x20A0F30
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::ThreeTimes()
    Org::BouncyCastle::Math::EC::ECPoint* ThreeTimes();
    // public override Org.BouncyCastle.Math.EC.ECPoint TimesPow2(System.Int32 e)
    // Offset: 0x20A1318
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::TimesPow2(System.Int32 e)
    Org::BouncyCastle::Math::EC::ECPoint* TimesPow2(int e);
    // public override Org.BouncyCastle.Math.EC.ECPoint Negate()
    // Offset: 0x20A1BDC
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::Negate()
    Org::BouncyCastle::Math::EC::ECPoint* Negate();
  }; // Org.BouncyCastle.Math.EC.FpPoint
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::FpPoint*, "Org.BouncyCastle.Math.EC", "FpPoint");
