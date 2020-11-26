// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum
#include "System/Runtime/Serialization/Formatters/Binary/BinaryTypeEnum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: ObjectReader
  class ObjectReader;
  // Forward declaring type: SizedArray
  class SizedArray;
  // Forward declaring type: SerStack
  class SerStack;
  // Forward declaring type: ParseRecord
  class ParseRecord;
  // Forward declaring type: BinaryAssemblyInfo
  class BinaryAssemblyInfo;
  // Forward declaring type: BinaryObject
  class BinaryObject;
  // Forward declaring type: BinaryObjectWithMap
  class BinaryObjectWithMap;
  // Forward declaring type: BinaryObjectWithMapTyped
  class BinaryObjectWithMapTyped;
  // Forward declaring type: BinaryObjectString
  class BinaryObjectString;
  // Forward declaring type: BinaryCrossAppDomainString
  class BinaryCrossAppDomainString;
  // Forward declaring type: MemberPrimitiveTyped
  class MemberPrimitiveTyped;
  // Forward declaring type: MemberPrimitiveUnTyped
  class MemberPrimitiveUnTyped;
  // Forward declaring type: MemberReference
  class MemberReference;
  // Forward declaring type: ObjectNull
  class ObjectNull;
  // Forward declaring type: MessageEnd
  class MessageEnd;
  // Forward declaring type: BinaryHeaderEnum
  struct BinaryHeaderEnum;
  // Forward declaring type: InternalPrimitiveTypeE
  struct InternalPrimitiveTypeE;
  // Forward declaring type: ObjectProgress
  class ObjectProgress;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
  // Forward declaring type: BinaryReader
  class BinaryReader;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Decimal
  struct Decimal;
  // Forward declaring type: TimeSpan
  struct TimeSpan;
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.__BinaryParser
  class __BinaryParser : public ::Il2CppObject {
    public:
    // System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader
    // Offset: 0x10
    System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader;
    // System.IO.Stream input
    // Offset: 0x18
    System::IO::Stream* input;
    // System.Int64 topId
    // Offset: 0x20
    int64_t topId;
    // System.Int64 headerId
    // Offset: 0x28
    int64_t headerId;
    // System.Runtime.Serialization.Formatters.Binary.SizedArray objectMapIdTable
    // Offset: 0x30
    System::Runtime::Serialization::Formatters::Binary::SizedArray* objectMapIdTable;
    // System.Runtime.Serialization.Formatters.Binary.SizedArray assemIdToAssemblyTable
    // Offset: 0x38
    System::Runtime::Serialization::Formatters::Binary::SizedArray* assemIdToAssemblyTable;
    // System.Runtime.Serialization.Formatters.Binary.SerStack stack
    // Offset: 0x40
    System::Runtime::Serialization::Formatters::Binary::SerStack* stack;
    // System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum expectedType
    // Offset: 0x48
    System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum expectedType;
    // System.Object expectedTypeInformation
    // Offset: 0x50
    ::Il2CppObject* expectedTypeInformation;
    // System.Runtime.Serialization.Formatters.Binary.ParseRecord PRS
    // Offset: 0x58
    System::Runtime::Serialization::Formatters::Binary::ParseRecord* PRS;
    // private System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo systemAssemblyInfo
    // Offset: 0x60
    System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* systemAssemblyInfo;
    // private System.IO.BinaryReader dataReader
    // Offset: 0x68
    System::IO::BinaryReader* dataReader;
    // private System.Runtime.Serialization.Formatters.Binary.SerStack opPool
    // Offset: 0x70
    System::Runtime::Serialization::Formatters::Binary::SerStack* opPool;
    // private System.Runtime.Serialization.Formatters.Binary.BinaryObject binaryObject
    // Offset: 0x78
    System::Runtime::Serialization::Formatters::Binary::BinaryObject* binaryObject;
    // private System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMap bowm
    // Offset: 0x80
    System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* bowm;
    // private System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMapTyped bowmt
    // Offset: 0x88
    System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* bowmt;
    // System.Runtime.Serialization.Formatters.Binary.BinaryObjectString objectString
    // Offset: 0x90
    System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* objectString;
    // System.Runtime.Serialization.Formatters.Binary.BinaryCrossAppDomainString crossAppDomainString
    // Offset: 0x98
    System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString* crossAppDomainString;
    // System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveTyped memberPrimitiveTyped
    // Offset: 0xA0
    System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* memberPrimitiveTyped;
    // private System.Byte[] byteBuffer
    // Offset: 0xA8
    ::Array<uint8_t>* byteBuffer;
    // System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveUnTyped memberPrimitiveUnTyped
    // Offset: 0xB0
    System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* memberPrimitiveUnTyped;
    // System.Runtime.Serialization.Formatters.Binary.MemberReference memberReference
    // Offset: 0xB8
    System::Runtime::Serialization::Formatters::Binary::MemberReference* memberReference;
    // System.Runtime.Serialization.Formatters.Binary.ObjectNull objectNull
    // Offset: 0xC0
    System::Runtime::Serialization::Formatters::Binary::ObjectNull* objectNull;
    // Get static field: static private System.Text.Encoding encoding
    static System::Text::Encoding* _get_encoding();
    // Set static field: static private System.Text.Encoding encoding
    static void _set_encoding(System::Text::Encoding* value);
    // Get static field: static System.Runtime.Serialization.Formatters.Binary.MessageEnd messageEnd
    static System::Runtime::Serialization::Formatters::Binary::MessageEnd* _get_messageEnd();
    // Set static field: static System.Runtime.Serialization.Formatters.Binary.MessageEnd messageEnd
    static void _set_messageEnd(System::Runtime::Serialization::Formatters::Binary::MessageEnd* value);
    // System.Void .ctor(System.IO.Stream stream, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader)
    // Offset: 0x1300BA4
    static __BinaryParser* New_ctor(System::IO::Stream* stream, System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader);
    // System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo get_SystemAssemblyInfo()
    // Offset: 0x1300CC0
    System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* get_SystemAssemblyInfo();
    // System.Runtime.Serialization.Formatters.Binary.SizedArray get_ObjectMapIdTable()
    // Offset: 0x1300D74
    System::Runtime::Serialization::Formatters::Binary::SizedArray* get_ObjectMapIdTable();
    // System.Runtime.Serialization.Formatters.Binary.SizedArray get_AssemIdToAssemblyTable()
    // Offset: 0x1300DE8
    System::Runtime::Serialization::Formatters::Binary::SizedArray* get_AssemIdToAssemblyTable();
    // System.Runtime.Serialization.Formatters.Binary.ParseRecord get_prs()
    // Offset: 0x1300E60
    System::Runtime::Serialization::Formatters::Binary::ParseRecord* get_prs();
    // System.Void Run()
    // Offset: 0x12F5498
    void Run();
    // System.Void ReadBegin()
    // Offset: 0x1300ED8
    void ReadBegin();
    // System.Void ReadEnd()
    // Offset: 0x1302C40
    void ReadEnd();
    // System.Boolean ReadBoolean()
    // Offset: 0x1302F44
    bool ReadBoolean();
    // System.Byte ReadByte()
    // Offset: 0x12F2CEC
    uint8_t ReadByte();
    // System.Byte[] ReadBytes(System.Int32 length)
    // Offset: 0x12FF0A0
    ::Array<uint8_t>* ReadBytes(int length);
    // System.Void ReadBytes(System.Byte[] byteA, System.Int32 offset, System.Int32 size)
    // Offset: 0x1302F64
    void ReadBytes(::Array<uint8_t>* byteA, int offset, int size);
    // System.Char ReadChar()
    // Offset: 0x1302FEC
    ::Il2CppChar ReadChar();
    // System.Char[] ReadChars(System.Int32 length)
    // Offset: 0x130300C
    ::Array<::Il2CppChar>* ReadChars(int length);
    // System.Decimal ReadDecimal()
    // Offset: 0x1303030
    System::Decimal ReadDecimal();
    // System.Single ReadSingle()
    // Offset: 0x13030F0
    float ReadSingle();
    // System.Double ReadDouble()
    // Offset: 0x1303114
    double ReadDouble();
    // System.Int16 ReadInt16()
    // Offset: 0x1303138
    int16_t ReadInt16();
    // System.Int32 ReadInt32()
    // Offset: 0x12F31D4
    int ReadInt32();
    // System.Int64 ReadInt64()
    // Offset: 0x130315C
    int64_t ReadInt64();
    // System.SByte ReadSByte()
    // Offset: 0x1303180
    int8_t ReadSByte();
    // System.String ReadString()
    // Offset: 0x13031A0
    ::Il2CppString* ReadString();
    // System.TimeSpan ReadTimeSpan()
    // Offset: 0x13031C4
    System::TimeSpan ReadTimeSpan();
    // System.DateTime ReadDateTime()
    // Offset: 0x13031E8
    System::DateTime ReadDateTime();
    // System.UInt16 ReadUInt16()
    // Offset: 0x1303274
    uint16_t ReadUInt16();
    // System.UInt32 ReadUInt32()
    // Offset: 0x1303298
    uint ReadUInt32();
    // System.UInt64 ReadUInt64()
    // Offset: 0x13032BC
    uint64_t ReadUInt64();
    // System.Void ReadSerializationHeaderRecord()
    // Offset: 0x1300EDC
    void ReadSerializationHeaderRecord();
    // System.Void ReadAssembly(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
    // Offset: 0x1300F9C
    void ReadAssembly(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);
    // private System.Void ReadObject()
    // Offset: 0x13011F8
    void ReadObject();
    // System.Void ReadCrossAppDomainMap()
    // Offset: 0x13015BC
    void ReadCrossAppDomainMap();
    // System.Void ReadObjectWithMap(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
    // Offset: 0x130176C
    void ReadObjectWithMap(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);
    // private System.Void ReadObjectWithMap(System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMap record)
    // Offset: 0x130338C
    void ReadObjectWithMap(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* record);
    // System.Void ReadObjectWithMapTyped(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
    // Offset: 0x130182C
    void ReadObjectWithMapTyped(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);
    // private System.Void ReadObjectWithMapTyped(System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMapTyped record)
    // Offset: 0x1303804
    void ReadObjectWithMapTyped(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* record);
    // private System.Void ReadObjectString(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
    // Offset: 0x13018DC
    void ReadObjectString(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);
    // private System.Void ReadMemberPrimitiveTyped()
    // Offset: 0x1302410
    void ReadMemberPrimitiveTyped();
    // private System.Void ReadArray(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
    // Offset: 0x1301E14
    void ReadArray(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);
    // private System.Void ReadArrayAsBytes(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
    // Offset: 0x1303CA4
    void ReadArrayAsBytes(System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);
    // private System.Void ReadMemberPrimitiveUnTyped()
    // Offset: 0x1302C44
    void ReadMemberPrimitiveUnTyped();
    // private System.Void ReadMemberReference()
    // Offset: 0x1302768
    void ReadMemberReference();
    // private System.Void ReadObjectNull(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
    // Offset: 0x1302910
    void ReadObjectNull(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);
    // private System.Void ReadMessageEnd()
    // Offset: 0x1302AD0
    void ReadMessageEnd();
    // System.Object ReadValue(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code)
    // Offset: 0x12F2D0C
    ::Il2CppObject* ReadValue(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code);
    // private System.Runtime.Serialization.Formatters.Binary.ObjectProgress GetOp()
    // Offset: 0x13032E0
    System::Runtime::Serialization::Formatters::Binary::ObjectProgress* GetOp();
    // private System.Void PutOp(System.Runtime.Serialization.Formatters.Binary.ObjectProgress op)
    // Offset: 0x1302EAC
    void PutOp(System::Runtime::Serialization::Formatters::Binary::ObjectProgress* op);
    // static private System.Void .cctor()
    // Offset: 0x130402C
    static void _cctor();
  }; // System.Runtime.Serialization.Formatters.Binary.__BinaryParser
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::__BinaryParser*, "System.Runtime.Serialization.Formatters.Binary", "__BinaryParser");
#pragma pack(pop)
