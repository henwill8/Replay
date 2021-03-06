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
  // Forward declaring type: DerBitString
  class DerBitString;
  // Forward declaring type: DerInteger
  class DerInteger;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X9.DHValidationParms
  // [] Offset: FFFFFFFF
  class DHValidationParms : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly Org.BouncyCastle.Asn1.DerBitString seed
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::DerBitString* seed;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerBitString*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerInteger pgenCounter
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::DerInteger* pgenCounter;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // Creating value type constructor for type: DHValidationParms
    DHValidationParms(Org::BouncyCastle::Asn1::DerBitString* seed_ = {}, Org::BouncyCastle::Asn1::DerInteger* pgenCounter_ = {}) noexcept : seed{seed_}, pgenCounter{pgenCounter_} {}
    // static public Org.BouncyCastle.Asn1.X9.DHValidationParms GetInstance(System.Object obj)
    // Offset: 0x190577C
    static Org::BouncyCastle::Asn1::X9::DHValidationParms* GetInstance(::Il2CppObject* obj);
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1905D54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DHValidationParms* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X9::DHValidationParms::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DHValidationParms*, creationType>(seq)));
    }
    // public Org.BouncyCastle.Asn1.DerBitString get_Seed()
    // Offset: 0x1905ED8
    Org::BouncyCastle::Asn1::DerBitString* get_Seed();
    // public Org.BouncyCastle.Asn1.DerInteger get_PgenCounter()
    // Offset: 0x1905EE0
    Org::BouncyCastle::Asn1::DerInteger* get_PgenCounter();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1905EE8
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X9.DHValidationParms
  #pragma pack(pop)
  static check_size<sizeof(DHValidationParms), 24 + sizeof(Org::BouncyCastle::Asn1::DerInteger*)> __Org_BouncyCastle_Asn1_X9_DHValidationParmsSizeCheck;
  static_assert(sizeof(DHValidationParms) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X9::DHValidationParms*, "Org.BouncyCastle.Asn1.X9", "DHValidationParms");
