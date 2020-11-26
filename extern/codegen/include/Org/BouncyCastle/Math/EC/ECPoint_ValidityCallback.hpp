// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.ECPoint
#include "Org/BouncyCastle/Math/EC/ECPoint.hpp"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.IPreCompCallback
#include "Org/BouncyCastle/Math/EC/Multiplier/IPreCompCallback.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Forward declaring type: PreCompInfo
  class PreCompInfo;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Autogenerated type: Org.BouncyCastle.Math.EC.ECPoint/ValidityCallback
  class ECPoint::ValidityCallback : public ::Il2CppObject/*, public Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*/ {
    public:
    // private readonly Org.BouncyCastle.Math.EC.ECPoint m_outer
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::ECPoint* m_outer;
    // private readonly System.Boolean m_decompressed
    // Offset: 0x18
    bool m_decompressed;
    // private readonly System.Boolean m_checkOrder
    // Offset: 0x19
    bool m_checkOrder;
    // Creating interface conversion operator: operator Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback
    operator Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(this);
    }
    // System.Void .ctor(Org.BouncyCastle.Math.EC.ECPoint outer, System.Boolean decompressed, System.Boolean checkOrder)
    // Offset: 0x193C46C
    static ECPoint::ValidityCallback* New_ctor(Org::BouncyCastle::Math::EC::ECPoint* outer, bool decompressed, bool checkOrder);
    // public Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo Precompute(Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo existing)
    // Offset: 0x193CD84
    // Implemented from: Org.BouncyCastle.Math.EC.Multiplier.IPreCompCallback
    // Base method: Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo IPreCompCallback::Precompute(Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo existing)
    Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);
  }; // Org.BouncyCastle.Math.EC.ECPoint/ValidityCallback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::ECPoint::ValidityCallback*, "Org.BouncyCastle.Math.EC", "ECPoint/ValidityCallback");
#pragma pack(pop)
