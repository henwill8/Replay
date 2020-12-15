// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: BinaryTypeEnum
  struct BinaryTypeEnum;
  // Forward declaring type: ReadObjectInfo
  class ReadObjectInfo;
  // Forward declaring type: ObjectReader
  class ObjectReader;
  // Forward declaring type: BinaryAssemblyInfo
  class BinaryAssemblyInfo;
  // Forward declaring type: SizedArray
  class SizedArray;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.ObjectMap
  class ObjectMap : public ::Il2CppObject {
    public:
    // System.String objectName
    // Offset: 0x10
    ::Il2CppString* objectName;
    // System.Type objectType
    // Offset: 0x18
    System::Type* objectType;
    // System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA
    // Offset: 0x20
    ::Array<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA;
    // System.Object[] typeInformationA
    // Offset: 0x28
    ::Array<::Il2CppObject*>* typeInformationA;
    // System.Type[] memberTypes
    // Offset: 0x30
    ::Array<System::Type*>* memberTypes;
    // System.String[] memberNames
    // Offset: 0x38
    ::Array<::Il2CppString*>* memberNames;
    // System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo objectInfo
    // Offset: 0x40
    System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo;
    // System.Boolean isInitObjectInfo
    // Offset: 0x48
    bool isInitObjectInfo;
    // System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader
    // Offset: 0x50
    System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader;
    // System.Int32 objectId
    // Offset: 0x58
    int objectId;
    // System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo
    // Offset: 0x60
    System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo;
    // System.Void .ctor(System.String objectName, System.Type objectType, System.String[] memberNames, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader, System.Int32 objectId, System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo)
    // Offset: 0x12F3518
    static ObjectMap* New_ctor(::Il2CppString* objectName, System::Type* objectType, ::Array<::Il2CppString*>* memberNames, System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int objectId, System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo);
    // System.Void .ctor(System.String objectName, System.String[] memberNames, System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA, System.Object[] typeInformationA, System.Int32[] memberAssemIds, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader, System.Int32 objectId, System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo, System.Runtime.Serialization.Formatters.Binary.SizedArray assemIdToAssemblyTable)
    // Offset: 0x12F3CAC
    static ObjectMap* New_ctor(::Il2CppString* objectName, ::Array<::Il2CppString*>* memberNames, ::Array<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA, ::Array<::Il2CppObject*>* typeInformationA, ::Array<int>* memberAssemIds, System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int objectId, System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo, System::Runtime::Serialization::Formatters::Binary::SizedArray* assemIdToAssemblyTable);
    // System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo CreateObjectInfo(ref System.Runtime.Serialization.SerializationInfo si, ref System.Object[] memberData)
    // Offset: 0x12F42D8
    System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* CreateObjectInfo(System::Runtime::Serialization::SerializationInfo*& si, ::Array<::Il2CppObject*>*& memberData);
    // static System.Runtime.Serialization.Formatters.Binary.ObjectMap Create(System.String name, System.Type objectType, System.String[] memberNames, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader, System.Int32 objectId, System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo)
    // Offset: 0x12F441C
    static System::Runtime::Serialization::Formatters::Binary::ObjectMap* Create(::Il2CppString* name, System::Type* objectType, ::Array<::Il2CppString*>* memberNames, System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int objectId, System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo);
    // static System.Runtime.Serialization.Formatters.Binary.ObjectMap Create(System.String name, System.String[] memberNames, System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA, System.Object[] typeInformationA, System.Int32[] memberAssemIds, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader, System.Int32 objectId, System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo, System.Runtime.Serialization.Formatters.Binary.SizedArray assemIdToAssemblyTable)
    // Offset: 0x12F44BC
    static System::Runtime::Serialization::Formatters::Binary::ObjectMap* Create(::Il2CppString* name, ::Array<::Il2CppString*>* memberNames, ::Array<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA, ::Array<::Il2CppObject*>* typeInformationA, ::Array<int>* memberAssemIds, System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int objectId, System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo, System::Runtime::Serialization::Formatters::Binary::SizedArray* assemIdToAssemblyTable);
  }; // System.Runtime.Serialization.Formatters.Binary.ObjectMap
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::ObjectMap*, "System.Runtime.Serialization.Formatters.Binary", "ObjectMap");
#pragma pack(pop)