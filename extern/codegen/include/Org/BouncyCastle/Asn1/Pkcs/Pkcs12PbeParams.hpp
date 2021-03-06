// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerInteger
  class DerInteger;
  // Forward declaring type: Asn1OctetString
  class Asn1OctetString;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Pkcs.Pkcs12PbeParams
  // [] Offset: FFFFFFFF
  class Pkcs12PbeParams : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly Org.BouncyCastle.Asn1.DerInteger iterations
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::DerInteger* iterations;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.Asn1OctetString iv
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::Asn1OctetString* iv;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1OctetString*) == 0x8);
    // Creating value type constructor for type: Pkcs12PbeParams
    Pkcs12PbeParams(Org::BouncyCastle::Asn1::DerInteger* iterations_ = {}, Org::BouncyCastle::Asn1::Asn1OctetString* iv_ = {}) noexcept : iterations{iterations_}, iv{iv_} {}
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x16E88C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Pkcs12PbeParams* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Pkcs12PbeParams*, creationType>(seq)));
    }
    // static public Org.BouncyCastle.Asn1.Pkcs.Pkcs12PbeParams GetInstance(System.Object obj)
    // Offset: 0x16E89D8
    static Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams* GetInstance(::Il2CppObject* obj);
    // public Org.BouncyCastle.Math.BigInteger get_Iterations()
    // Offset: 0x16E8B58
    Org::BouncyCastle::Math::BigInteger* get_Iterations();
    // public System.Byte[] GetIV()
    // Offset: 0x16E8B74
    ::Array<uint8_t>* GetIV();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x16E8B94
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.Pkcs.Pkcs12PbeParams
  #pragma pack(pop)
  static check_size<sizeof(Pkcs12PbeParams), 24 + sizeof(Org::BouncyCastle::Asn1::Asn1OctetString*)> __Org_BouncyCastle_Asn1_Pkcs_Pkcs12PbeParamsSizeCheck;
  static_assert(sizeof(Pkcs12PbeParams) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams*, "Org.BouncyCastle.Asn1.Pkcs", "Pkcs12PbeParams");
