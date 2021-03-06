// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum
#include "System/Runtime/Serialization/Formatters/Binary/BinaryHeaderEnum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord
  // [] Offset: FFFFFFFF
  class SerializationHeaderRecord : public ::Il2CppObject {
    public:
    // System.Int32 binaryFormatterMajorVersion
    // Size: 0x4
    // Offset: 0x10
    int binaryFormatterMajorVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 binaryFormatterMinorVersion
    // Size: 0x4
    // Offset: 0x14
    int binaryFormatterMinorVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum
    // Size: 0x4
    // Offset: 0x18
    System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum) == 0x4);
    // System.Int32 topId
    // Size: 0x4
    // Offset: 0x1C
    int topId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 headerId
    // Size: 0x4
    // Offset: 0x20
    int headerId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 majorVersion
    // Size: 0x4
    // Offset: 0x24
    int majorVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 minorVersion
    // Size: 0x4
    // Offset: 0x28
    int minorVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SerializationHeaderRecord
    SerializationHeaderRecord(int binaryFormatterMajorVersion_ = {}, int binaryFormatterMinorVersion_ = {}, System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum_ = {}, int topId_ = {}, int headerId_ = {}, int majorVersion_ = {}, int minorVersion_ = {}) noexcept : binaryFormatterMajorVersion{binaryFormatterMajorVersion_}, binaryFormatterMinorVersion{binaryFormatterMinorVersion_}, binaryHeaderEnum{binaryHeaderEnum_}, topId{topId_}, headerId{headerId_}, majorVersion{majorVersion_}, minorVersion{minorVersion_} {}
    // System.Void .ctor(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum, System.Int32 topId, System.Int32 headerId, System.Int32 majorVersion, System.Int32 minorVersion)
    // Offset: 0x154EAEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationHeaderRecord* New_ctor(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum, int topId, int headerId, int majorVersion, int minorVersion) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationHeaderRecord*, creationType>(binaryHeaderEnum, topId, headerId, majorVersion, minorVersion)));
    }
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x154EB48
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // static private System.Int32 GetInt32(System.Byte[] buffer, System.Int32 index)
    // Offset: 0x154EBFC
    static int GetInt32(::Array<uint8_t>* buffer, int index);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0x154EC7C
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // public System.Void Dump()
    // Offset: 0x154EE58
    void Dump();
    // System.Void .ctor()
    // Offset: 0x154EADC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationHeaderRecord* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationHeaderRecord*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord
  #pragma pack(pop)
  static check_size<sizeof(SerializationHeaderRecord), 40 + sizeof(int)> __System_Runtime_Serialization_Formatters_Binary_SerializationHeaderRecordSizeCheck;
  static_assert(sizeof(SerializationHeaderRecord) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*, "System.Runtime.Serialization.Formatters.Binary", "SerializationHeaderRecord");
