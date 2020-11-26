// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Store
  class X509Store;
}
// Completed forward declares
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Autogenerated type: Mono.Security.X509.X509Stores
  class X509Stores : public ::Il2CppObject {
    public:
    // private System.String _storePath
    // Offset: 0x10
    ::Il2CppString* storePath;
    // private System.Boolean _newFormat
    // Offset: 0x18
    bool newFormat;
    // System.Void .ctor(System.String path, System.Boolean newFormat)
    // Offset: 0x19C6878
    static X509Stores* New_ctor(::Il2CppString* path, bool newFormat);
    // public Mono.Security.X509.X509Store Open(System.String storeName, System.Boolean create)
    // Offset: 0x19C697C
    Mono::Security::X509::X509Store* Open(::Il2CppString* storeName, bool create);
  }; // Mono.Security.X509.X509Stores
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::X509Stores*, "Mono.Security.X509", "X509Stores");
#pragma pack(pop)
