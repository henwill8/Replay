// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo
#include "Org/BouncyCastle/Math/EC/Multiplier/PreCompInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Autogenerated type: Org.BouncyCastle.Math.EC.Multiplier.WNafPreCompInfo
  class WNafPreCompInfo : public ::Il2CppObject/*, public Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*/ {
    public:
    // System.Int32 m_promotionCountdown
    // Offset: 0x10
    int m_promotionCountdown;
    // protected System.Int32 m_confWidth
    // Offset: 0x14
    int m_confWidth;
    // protected Org.BouncyCastle.Math.EC.ECPoint[] m_preComp
    // Offset: 0x18
    ::Array<Org::BouncyCastle::Math::EC::ECPoint*>* m_preComp;
    // protected Org.BouncyCastle.Math.EC.ECPoint[] m_preCompNeg
    // Offset: 0x20
    ::Array<Org::BouncyCastle::Math::EC::ECPoint*>* m_preCompNeg;
    // protected Org.BouncyCastle.Math.EC.ECPoint m_twice
    // Offset: 0x28
    Org::BouncyCastle::Math::EC::ECPoint* m_twice;
    // protected System.Int32 m_width
    // Offset: 0x30
    int m_width;
    // Creating interface conversion operator: operator Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo
    operator Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>(this);
    }
    // System.Int32 DecrementPromotionCountdown()
    // Offset: 0x1784FA8
    int DecrementPromotionCountdown();
    // System.Int32 get_PromotionCountdown()
    // Offset: 0x1784FEC
    int get_PromotionCountdown();
    // System.Void set_PromotionCountdown(System.Int32 value)
    // Offset: 0x1785010
    void set_PromotionCountdown(int value);
    // public System.Boolean get_IsPromoted()
    // Offset: 0x1785038
    bool get_IsPromoted();
    // public System.Int32 get_ConfWidth()
    // Offset: 0x1785060
    int get_ConfWidth();
    // public System.Void set_ConfWidth(System.Int32 value)
    // Offset: 0x1785068
    void set_ConfWidth(int value);
    // public Org.BouncyCastle.Math.EC.ECPoint[] get_PreComp()
    // Offset: 0x1785070
    ::Array<Org::BouncyCastle::Math::EC::ECPoint*>* get_PreComp();
    // public System.Void set_PreComp(Org.BouncyCastle.Math.EC.ECPoint[] value)
    // Offset: 0x1785078
    void set_PreComp(::Array<Org::BouncyCastle::Math::EC::ECPoint*>* value);
    // public Org.BouncyCastle.Math.EC.ECPoint[] get_PreCompNeg()
    // Offset: 0x1785080
    ::Array<Org::BouncyCastle::Math::EC::ECPoint*>* get_PreCompNeg();
    // public System.Void set_PreCompNeg(Org.BouncyCastle.Math.EC.ECPoint[] value)
    // Offset: 0x1785088
    void set_PreCompNeg(::Array<Org::BouncyCastle::Math::EC::ECPoint*>* value);
    // public Org.BouncyCastle.Math.EC.ECPoint get_Twice()
    // Offset: 0x1785090
    Org::BouncyCastle::Math::EC::ECPoint* get_Twice();
    // public System.Void set_Twice(Org.BouncyCastle.Math.EC.ECPoint value)
    // Offset: 0x1785098
    void set_Twice(Org::BouncyCastle::Math::EC::ECPoint* value);
    // public System.Int32 get_Width()
    // Offset: 0x17850A0
    int get_Width();
    // public System.Void set_Width(System.Int32 value)
    // Offset: 0x17850A8
    void set_Width(int value);
    // public System.Void .ctor()
    // Offset: 0x17850B0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static WNafPreCompInfo* New_ctor();
  }; // Org.BouncyCastle.Math.EC.Multiplier.WNafPreCompInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*, "Org.BouncyCastle.Math.EC.Multiplier", "WNafPreCompInfo");
#pragma pack(pop)
