// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IBufferedCipher
  class IBufferedCipher;
  // Forward declaring type: IBlockCipher
  class IBlockCipher;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Autogenerated type: Org.BouncyCastle.Security.CipherUtilities
  class CipherUtilities : public ::Il2CppObject {
    public:
    // Nested type: Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm
    struct CipherAlgorithm;
    // Nested type: Org::BouncyCastle::Security::CipherUtilities::CipherMode
    struct CipherMode;
    // Nested type: Org::BouncyCastle::Security::CipherUtilities::CipherPadding
    struct CipherPadding;
    // Get static field: static private readonly System.Collections.IDictionary algorithms
    static System::Collections::IDictionary* _get_algorithms();
    // Set static field: static private readonly System.Collections.IDictionary algorithms
    static void _set_algorithms(System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IDictionary oids
    static System::Collections::IDictionary* _get_oids();
    // Set static field: static private readonly System.Collections.IDictionary oids
    static void _set_oids(System::Collections::IDictionary* value);
    // static private System.Void .cctor()
    // Offset: 0x10A1EDC
    static void _cctor();
    // static public Org.BouncyCastle.Crypto.IBufferedCipher GetCipher(Org.BouncyCastle.Asn1.DerObjectIdentifier oid)
    // Offset: 0x10A4ADC
    static Org::BouncyCastle::Crypto::IBufferedCipher* GetCipher(Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
    // static public Org.BouncyCastle.Crypto.IBufferedCipher GetCipher(System.String algorithm)
    // Offset: 0x109CBD4
    static Org::BouncyCastle::Crypto::IBufferedCipher* GetCipher(::Il2CppString* algorithm);
    // static private System.Int32 GetDigitIndex(System.String s)
    // Offset: 0x10A4B4C
    static int GetDigitIndex(::Il2CppString* s);
    // static private Org.BouncyCastle.Crypto.IBlockCipher CreateBlockCipher(Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm cipherAlgorithm)
    // Offset: 0x10A4C0C
    static Org::BouncyCastle::Crypto::IBlockCipher* CreateBlockCipher(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm cipherAlgorithm);
  }; // Org.BouncyCastle.Security.CipherUtilities
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::CipherUtilities*, "Org.BouncyCastle.Security", "CipherUtilities");
#pragma pack(pop)
