// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Utilities.IO.Pem.PemReader
#include "Org/BouncyCastle/Utilities/IO/Pem/PemReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::OpenSsl
namespace Org::BouncyCastle::OpenSsl {
  // Forward declaring type: IPasswordFinder
  class IPasswordFinder;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextReader
  class TextReader;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: AsymmetricKeyParameter
  class AsymmetricKeyParameter;
}
// Forward declaring namespace: Org::BouncyCastle::Utilities::IO::Pem
namespace Org::BouncyCastle::Utilities::IO::Pem {
  // Forward declaring type: PemObject
  class PemObject;
}
// Forward declaring namespace: Org::BouncyCastle::X509
namespace Org::BouncyCastle::X509 {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509Crl
  class X509Crl;
  // Forward declaring type: IX509AttributeCertificate
  class IX509AttributeCertificate;
}
// Forward declaring namespace: Org::BouncyCastle::Pkcs
namespace Org::BouncyCastle::Pkcs {
  // Forward declaring type: Pkcs10CertificationRequest
  class Pkcs10CertificationRequest;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::Cms
namespace Org::BouncyCastle::Asn1::Cms {
  // Forward declaring type: ContentInfo
  class ContentInfo;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.OpenSsl
namespace Org::BouncyCastle::OpenSsl {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.OpenSsl.PemReader
  // [] Offset: FFFFFFFF
  class PemReader : public Org::BouncyCastle::Utilities::IO::Pem::PemReader {
    public:
    // private readonly Org.BouncyCastle.OpenSsl.IPasswordFinder pFinder
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::OpenSsl::IPasswordFinder* pFinder;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::OpenSsl::IPasswordFinder*) == 0x8);
    // Creating value type constructor for type: PemReader
    PemReader(Org::BouncyCastle::OpenSsl::IPasswordFinder* pFinder_ = {}) noexcept : pFinder{pFinder_} {}
    // Deleting conversion operator: operator System::IO::TextReader*
    constexpr operator System::IO::TextReader*() const noexcept = delete;
    // public System.Void .ctor(System.IO.TextReader reader, Org.BouncyCastle.OpenSsl.IPasswordFinder pFinder)
    // Offset: 0x11EB1B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PemReader* New_ctor(System::IO::TextReader* reader, Org::BouncyCastle::OpenSsl::IPasswordFinder* pFinder) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::OpenSsl::PemReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PemReader*, creationType>(reader, pFinder)));
    }
    // public System.Object ReadObject()
    // Offset: 0x11EB1E8
    ::Il2CppObject* ReadObject();
    // private Org.BouncyCastle.Crypto.AsymmetricKeyParameter ReadRsaPublicKey(Org.BouncyCastle.Utilities.IO.Pem.PemObject pemObject)
    // Offset: 0x11EC688
    Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ReadRsaPublicKey(Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject);
    // private Org.BouncyCastle.Crypto.AsymmetricKeyParameter ReadPublicKey(Org.BouncyCastle.Utilities.IO.Pem.PemObject pemObject)
    // Offset: 0x11EC66C
    Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ReadPublicKey(Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject);
    // private Org.BouncyCastle.X509.X509Certificate ReadCertificate(Org.BouncyCastle.Utilities.IO.Pem.PemObject pemObject)
    // Offset: 0x11EC868
    Org::BouncyCastle::X509::X509Certificate* ReadCertificate(Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject);
    // private Org.BouncyCastle.X509.X509Crl ReadCrl(Org.BouncyCastle.Utilities.IO.Pem.PemObject pemObject)
    // Offset: 0x11ECB04
    Org::BouncyCastle::X509::X509Crl* ReadCrl(Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject);
    // private Org.BouncyCastle.Pkcs.Pkcs10CertificationRequest ReadCertificateRequest(Org.BouncyCastle.Utilities.IO.Pem.PemObject pemObject)
    // Offset: 0x11EC720
    Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest* ReadCertificateRequest(Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject);
    // private Org.BouncyCastle.X509.IX509AttributeCertificate ReadAttributeCertificate(Org.BouncyCastle.Utilities.IO.Pem.PemObject pemObject)
    // Offset: 0x11ECC64
    Org::BouncyCastle::X509::IX509AttributeCertificate* ReadAttributeCertificate(Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject);
    // private Org.BouncyCastle.Asn1.Cms.ContentInfo ReadPkcs7(Org.BouncyCastle.Utilities.IO.Pem.PemObject pemObject)
    // Offset: 0x11EC9C8
    Org::BouncyCastle::Asn1::Cms::ContentInfo* ReadPkcs7(Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject);
    // private System.Object ReadPrivateKey(Org.BouncyCastle.Utilities.IO.Pem.PemObject pemObject)
    // Offset: 0x11EB624
    ::Il2CppObject* ReadPrivateKey(Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject);
    // public System.Void .ctor(System.IO.TextReader reader)
    // Offset: 0x11EB184
    // Implemented from: Org.BouncyCastle.Utilities.IO.Pem.PemReader
    // Base method: System.Void PemReader::.ctor(System.IO.TextReader reader)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PemReader* New_ctor(System::IO::TextReader* reader) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::OpenSsl::PemReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PemReader*, creationType>(reader)));
    }
  }; // Org.BouncyCastle.OpenSsl.PemReader
  #pragma pack(pop)
  static check_size<sizeof(PemReader), 24 + sizeof(Org::BouncyCastle::OpenSsl::IPasswordFinder*)> __Org_BouncyCastle_OpenSsl_PemReaderSizeCheck;
  static_assert(sizeof(PemReader) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::OpenSsl::PemReader*, "Org.BouncyCastle.OpenSsl", "PemReader");
