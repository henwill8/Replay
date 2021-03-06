// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryCrossAppDomainString
  // [] Offset: FFFFFFFF
  class BinaryCrossAppDomainString : public ::Il2CppObject {
    public:
    // System.Int32 objectId
    // Size: 0x4
    // Offset: 0x10
    int objectId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 value
    // Size: 0x4
    // Offset: 0x14
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BinaryCrossAppDomainString
    BinaryCrossAppDomainString(int objectId_ = {}, int value_ = {}) noexcept : objectId{objectId_}, value{value_} {}
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0x1590A50
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // public System.Void Dump()
    // Offset: 0x1590A98
    void Dump();
    // System.Void .ctor()
    // Offset: 0x1590A48
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryCrossAppDomainString* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryCrossAppDomainString*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryCrossAppDomainString
  #pragma pack(pop)
  static check_size<sizeof(BinaryCrossAppDomainString), 20 + sizeof(int)> __System_Runtime_Serialization_Formatters_Binary_BinaryCrossAppDomainStringSizeCheck;
  static_assert(sizeof(BinaryCrossAppDomainString) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString*, "System.Runtime.Serialization.Formatters.Binary", "BinaryCrossAppDomainString");
