// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Endo.EndoUtilities
#include "Org/BouncyCastle/Math/EC/Endo/EndoUtilities.hpp"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.IPreCompCallback
#include "Org/BouncyCastle/Math/EC/Multiplier/IPreCompCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Forward declaring type: ECEndomorphism
  class ECEndomorphism;
  // Forward declaring type: EndoPreCompInfo
  class EndoPreCompInfo;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Forward declaring type: PreCompInfo
  class PreCompInfo;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Endo.EndoUtilities/MapPointCallback
  // [] Offset: FFFFFFFF
  class EndoUtilities::MapPointCallback : public ::Il2CppObject/*, public Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*/ {
    public:
    // private readonly Org.BouncyCastle.Math.EC.Endo.ECEndomorphism m_endomorphism
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* m_endomorphism;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*) == 0x8);
    // private readonly Org.BouncyCastle.Math.EC.ECPoint m_point
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Math::EC::ECPoint* m_point;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::ECPoint*) == 0x8);
    // Creating value type constructor for type: MapPointCallback
    MapPointCallback(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* m_endomorphism_ = {}, Org::BouncyCastle::Math::EC::ECPoint* m_point_ = {}) noexcept : m_endomorphism{m_endomorphism_}, m_point{m_point_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback
    operator Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(this);
    }
    // System.Void .ctor(Org.BouncyCastle.Math.EC.Endo.ECEndomorphism endomorphism, Org.BouncyCastle.Math.EC.ECPoint point)
    // Offset: 0x2098960
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EndoUtilities::MapPointCallback* New_ctor(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism, Org::BouncyCastle::Math::EC::ECPoint* point) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Endo::EndoUtilities::MapPointCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EndoUtilities::MapPointCallback*, creationType>(endomorphism, point)));
    }
    // private System.Boolean CheckExisting(Org.BouncyCastle.Math.EC.Endo.EndoPreCompInfo existingEndo, Org.BouncyCastle.Math.EC.Endo.ECEndomorphism endomorphism)
    // Offset: 0x2098C0C
    bool CheckExisting(Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo* existingEndo, Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism);
    // public Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo Precompute(Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo existing)
    // Offset: 0x2098A0C
    // Implemented from: Org.BouncyCastle.Math.EC.Multiplier.IPreCompCallback
    // Base method: Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo IPreCompCallback::Precompute(Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo existing)
    Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);
  }; // Org.BouncyCastle.Math.EC.Endo.EndoUtilities/MapPointCallback
  #pragma pack(pop)
  static check_size<sizeof(EndoUtilities::MapPointCallback), 24 + sizeof(Org::BouncyCastle::Math::EC::ECPoint*)> __Org_BouncyCastle_Math_EC_Endo_EndoUtilities_MapPointCallbackSizeCheck;
  static_assert(sizeof(EndoUtilities::MapPointCallback) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Endo::EndoUtilities::MapPointCallback*, "Org.BouncyCastle.Math.EC.Endo", "EndoUtilities/MapPointCallback");
