// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.DerSet
#include "Org/BouncyCastle/Asn1/DerSet.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1EncodableVector
  class Asn1EncodableVector;
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.BerSet
  // [] Offset: FFFFFFFF
  class BerSet : public Org::BouncyCastle::Asn1::DerSet {
    public:
    // Creating value type constructor for type: BerSet
    BerSet() noexcept {}
    // Get static field: static public readonly Org.BouncyCastle.Asn1.BerSet Empty
    static Org::BouncyCastle::Asn1::BerSet* _get_Empty();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.BerSet Empty
    static void _set_Empty(Org::BouncyCastle::Asn1::BerSet* value);
    // public System.Void .ctor()
    // Offset: 0x16075F4
    // Implemented from: Org.BouncyCastle.Asn1.DerSet
    // Base method: System.Void DerSet::.ctor()
    // Base method: System.Void Asn1Set::.ctor()
    // Base method: System.Void Asn1Object::.ctor()
    // Base method: System.Void Asn1Encodable::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerSet* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::BerSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerSet*, creationType>()));
    }
    // System.Void .ctor(Org.BouncyCastle.Asn1.Asn1EncodableVector elementVector, System.Boolean needsSorting)
    // Offset: 0x160765C
    // Implemented from: Org.BouncyCastle.Asn1.DerSet
    // Base method: System.Void DerSet::.ctor(Org.BouncyCastle.Asn1.Asn1EncodableVector elementVector, System.Boolean needsSorting)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerSet* New_ctor(Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector, bool needsSorting) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::BerSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerSet*, creationType>(elementVector, needsSorting)));
    }
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x16076F0
    // Implemented from: Org.BouncyCastle.Asn1.DerSet
    // Base method: System.Void DerSet::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // static private System.Void .cctor()
    // Offset: 0x1607D48
    // Implemented from: Org.BouncyCastle.Asn1.DerSet
    // Base method: System.Void DerSet::.cctor()
    static void _cctor();
  }; // Org.BouncyCastle.Asn1.BerSet
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::BerSet*, "Org.BouncyCastle.Asn1", "BerSet");
