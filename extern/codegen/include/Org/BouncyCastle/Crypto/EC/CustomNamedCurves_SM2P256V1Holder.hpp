// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.EC.CustomNamedCurves
#include "Org/BouncyCastle/Crypto/EC/CustomNamedCurves.hpp"
// Including type: Org.BouncyCastle.Asn1.X9.X9ECParametersHolder
#include "Org/BouncyCastle/Asn1/X9/X9ECParametersHolder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Forward declaring type: X9ECParameters
  class X9ECParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.EC
namespace Org::BouncyCastle::Crypto::EC {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SM2P256V1Holder
  // [] Offset: FFFFFFFF
  class CustomNamedCurves::SM2P256V1Holder : public Org::BouncyCastle::Asn1::X9::X9ECParametersHolder {
    public:
    // Creating value type constructor for type: SM2P256V1Holder
    SM2P256V1Holder() noexcept {}
    // Get static field: static readonly Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Instance
    static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* _get_Instance();
    // Set static field: static readonly Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Instance
    static void _set_Instance(Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value);
    // static private System.Void .cctor()
    // Offset: 0x17EA39C
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0x17EA284
    // Implemented from: Org.BouncyCastle.Asn1.X9.X9ECParametersHolder
    // Base method: System.Void X9ECParametersHolder::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomNamedCurves::SM2P256V1Holder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SM2P256V1Holder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomNamedCurves::SM2P256V1Holder*, creationType>()));
    }
    // protected override Org.BouncyCastle.Asn1.X9.X9ECParameters CreateParameters()
    // Offset: 0x17EA28C
    // Implemented from: Org.BouncyCastle.Asn1.X9.X9ECParametersHolder
    // Base method: Org.BouncyCastle.Asn1.X9.X9ECParameters X9ECParametersHolder::CreateParameters()
    Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters();
  }; // Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SM2P256V1Holder
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SM2P256V1Holder*, "Org.BouncyCastle.Crypto.EC", "CustomNamedCurves/SM2P256V1Holder");
