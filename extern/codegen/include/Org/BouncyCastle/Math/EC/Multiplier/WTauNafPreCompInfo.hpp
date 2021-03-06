// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo
#include "Org/BouncyCastle/Math/EC/Multiplier/PreCompInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: AbstractF2mPoint
  class AbstractF2mPoint;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Multiplier.WTauNafPreCompInfo
  // [] Offset: FFFFFFFF
  class WTauNafPreCompInfo : public ::Il2CppObject/*, public Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*/ {
    public:
    // protected Org.BouncyCastle.Math.EC.AbstractF2mPoint[] m_preComp
    // Size: 0x8
    // Offset: 0x10
    ::Array<Org::BouncyCastle::Math::EC::AbstractF2mPoint*>* m_preComp;
    // Field size check
    static_assert(sizeof(::Array<Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*) == 0x8);
    // Creating value type constructor for type: WTauNafPreCompInfo
    WTauNafPreCompInfo(::Array<Org::BouncyCastle::Math::EC::AbstractF2mPoint*>* m_preComp_ = {}) noexcept : m_preComp{m_preComp_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo
    operator Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>(this);
    }
    // Creating conversion operator: operator ::Array<Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*
    constexpr operator ::Array<Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*() const noexcept {
      return m_preComp;
    }
    // public Org.BouncyCastle.Math.EC.AbstractF2mPoint[] get_PreComp()
    // Offset: 0x1BBF378
    ::Array<Org::BouncyCastle::Math::EC::AbstractF2mPoint*>* get_PreComp();
    // public System.Void set_PreComp(Org.BouncyCastle.Math.EC.AbstractF2mPoint[] value)
    // Offset: 0x1BBF380
    void set_PreComp(::Array<Org::BouncyCastle::Math::EC::AbstractF2mPoint*>* value);
    // public System.Void .ctor()
    // Offset: 0x1BBF370
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WTauNafPreCompInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WTauNafPreCompInfo*, creationType>()));
    }
  }; // Org.BouncyCastle.Math.EC.Multiplier.WTauNafPreCompInfo
  #pragma pack(pop)
  static check_size<sizeof(WTauNafPreCompInfo), 16 + sizeof(::Array<Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*)> __Org_BouncyCastle_Math_EC_Multiplier_WTauNafPreCompInfoSizeCheck;
  static_assert(sizeof(WTauNafPreCompInfo) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo*, "Org.BouncyCastle.Math.EC.Multiplier", "WTauNafPreCompInfo");
