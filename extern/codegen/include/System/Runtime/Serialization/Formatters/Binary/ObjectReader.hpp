// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: InternalFE
  class InternalFE;
  // Forward declaring type: SerObjectInfoInit
  class SerObjectInfoInit;
  // Forward declaring type: SerStack
  class SerStack;
  // Forward declaring type: IntSizedArray
  class IntSizedArray;
  // Forward declaring type: NameCache
  class NameCache;
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
  // Forward declaring type: ReadObjectInfo
  class ReadObjectInfo;
  // Forward declaring type: ParseRecord
  class ParseRecord;
  // Forward declaring type: BinaryAssemblyInfo
  class BinaryAssemblyInfo;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: ISurrogateSelector
  class ISurrogateSelector;
  // Forward declaring type: ObjectManager
  class ObjectManager;
  // Forward declaring type: SerializationBinder
  class SerializationBinder;
  // Forward declaring type: IFormatterConverter
  class IFormatterConverter;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: Header
  class Header;
  // Forward declaring type: HeaderHandler
  class HeaderHandler;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: AssemblyName
  class AssemblyName;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0xD0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.ObjectReader
  // [] Offset: FFFFFFFF
  class ObjectReader : public ::Il2CppObject {
    public:
    // Nested type: System::Runtime::Serialization::Formatters::Binary::ObjectReader::TypeNAssembly
    class TypeNAssembly;
    // Nested type: System::Runtime::Serialization::Formatters::Binary::ObjectReader::TopLevelAssemblyTypeResolver
    class TopLevelAssemblyTypeResolver;
    // System.IO.Stream m_stream
    // Size: 0x8
    // Offset: 0x10
    System::IO::Stream* m_stream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // System.Runtime.Serialization.ISurrogateSelector m_surrogates
    // Size: 0x8
    // Offset: 0x18
    System::Runtime::Serialization::ISurrogateSelector* m_surrogates;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::ISurrogateSelector*) == 0x8);
    // System.Runtime.Serialization.StreamingContext m_context
    // Size: 0xC
    // Offset: 0x20
    System::Runtime::Serialization::StreamingContext m_context;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::StreamingContext) == 0xC);
    // Padding between fields: m_context and: m_objectManager
    char __padding2[0x4] = {};
    // System.Runtime.Serialization.ObjectManager m_objectManager
    // Size: 0x8
    // Offset: 0x30
    System::Runtime::Serialization::ObjectManager* m_objectManager;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::ObjectManager*) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.InternalFE formatterEnums
    // Size: 0x8
    // Offset: 0x38
    System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::InternalFE*) == 0x8);
    // System.Runtime.Serialization.SerializationBinder m_binder
    // Size: 0x8
    // Offset: 0x40
    System::Runtime::Serialization::SerializationBinder* m_binder;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::SerializationBinder*) == 0x8);
    // System.Int64 topId
    // Size: 0x8
    // Offset: 0x48
    int64_t topId;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.Boolean bSimpleAssembly
    // Size: 0x1
    // Offset: 0x50
    bool bSimpleAssembly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bSimpleAssembly and: handlerObject
    char __padding7[0x7] = {};
    // System.Object handlerObject
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppObject* handlerObject;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Object m_topObject
    // Size: 0x8
    // Offset: 0x60
    ::Il2CppObject* m_topObject;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Runtime.Remoting.Messaging.Header[] headers
    // Size: 0x8
    // Offset: 0x68
    ::Array<System::Runtime::Remoting::Messaging::Header*>* headers;
    // Field size check
    static_assert(sizeof(::Array<System::Runtime::Remoting::Messaging::Header*>*) == 0x8);
    // System.Runtime.Remoting.Messaging.HeaderHandler handler
    // Size: 0x8
    // Offset: 0x70
    System::Runtime::Remoting::Messaging::HeaderHandler* handler;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::HeaderHandler*) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit
    // Size: 0x8
    // Offset: 0x78
    System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*) == 0x8);
    // System.Runtime.Serialization.IFormatterConverter m_formatterConverter
    // Size: 0x8
    // Offset: 0x80
    System::Runtime::Serialization::IFormatterConverter* m_formatterConverter;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::IFormatterConverter*) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.SerStack stack
    // Size: 0x8
    // Offset: 0x88
    System::Runtime::Serialization::Formatters::Binary::SerStack* stack;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::SerStack*) == 0x8);
    // private System.Runtime.Serialization.Formatters.Binary.SerStack valueFixupStack
    // Size: 0x8
    // Offset: 0x90
    System::Runtime::Serialization::Formatters::Binary::SerStack* valueFixupStack;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::SerStack*) == 0x8);
    // System.Object[] crossAppDomainArray
    // Size: 0x8
    // Offset: 0x98
    ::Array<::Il2CppObject*>* crossAppDomainArray;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // private System.Boolean bFullDeserialization
    // Size: 0x1
    // Offset: 0xA0
    bool bFullDeserialization;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean bOldFormatDetected
    // Size: 0x1
    // Offset: 0xA1
    bool bOldFormatDetected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bOldFormatDetected and: valTypeObjectIdTable
    char __padding18[0x6] = {};
    // private System.Runtime.Serialization.Formatters.Binary.IntSizedArray valTypeObjectIdTable
    // Size: 0x8
    // Offset: 0xA8
    System::Runtime::Serialization::Formatters::Binary::IntSizedArray* valTypeObjectIdTable;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::IntSizedArray*) == 0x8);
    // private System.Runtime.Serialization.Formatters.Binary.NameCache typeCache
    // Size: 0x8
    // Offset: 0xB0
    System::Runtime::Serialization::Formatters::Binary::NameCache* typeCache;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::NameCache*) == 0x8);
    // private System.String previousAssemblyString
    // Size: 0x8
    // Offset: 0xB8
    ::Il2CppString* previousAssemblyString;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String previousName
    // Size: 0x8
    // Offset: 0xC0
    ::Il2CppString* previousName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Type previousType
    // Size: 0x8
    // Offset: 0xC8
    System::Type* previousType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: ObjectReader
    ObjectReader(System::IO::Stream* m_stream_ = {}, System::Runtime::Serialization::ISurrogateSelector* m_surrogates_ = {}, System::Runtime::Serialization::StreamingContext m_context_ = {}, System::Runtime::Serialization::ObjectManager* m_objectManager_ = {}, System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums_ = {}, System::Runtime::Serialization::SerializationBinder* m_binder_ = {}, int64_t topId_ = {}, bool bSimpleAssembly_ = {}, ::Il2CppObject* handlerObject_ = {}, ::Il2CppObject* m_topObject_ = {}, ::Array<System::Runtime::Remoting::Messaging::Header*>* headers_ = {}, System::Runtime::Remoting::Messaging::HeaderHandler* handler_ = {}, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit_ = {}, System::Runtime::Serialization::IFormatterConverter* m_formatterConverter_ = {}, System::Runtime::Serialization::Formatters::Binary::SerStack* stack_ = {}, System::Runtime::Serialization::Formatters::Binary::SerStack* valueFixupStack_ = {}, ::Array<::Il2CppObject*>* crossAppDomainArray_ = {}, bool bFullDeserialization_ = {}, bool bOldFormatDetected_ = {}, System::Runtime::Serialization::Formatters::Binary::IntSizedArray* valTypeObjectIdTable_ = {}, System::Runtime::Serialization::Formatters::Binary::NameCache* typeCache_ = {}, ::Il2CppString* previousAssemblyString_ = {}, ::Il2CppString* previousName_ = {}, System::Type* previousType_ = {}) noexcept : m_stream{m_stream_}, m_surrogates{m_surrogates_}, m_context{m_context_}, m_objectManager{m_objectManager_}, formatterEnums{formatterEnums_}, m_binder{m_binder_}, topId{topId_}, bSimpleAssembly{bSimpleAssembly_}, handlerObject{handlerObject_}, m_topObject{m_topObject_}, headers{headers_}, handler{handler_}, serObjectInfoInit{serObjectInfoInit_}, m_formatterConverter{m_formatterConverter_}, stack{stack_}, valueFixupStack{valueFixupStack_}, crossAppDomainArray{crossAppDomainArray_}, bFullDeserialization{bFullDeserialization_}, bOldFormatDetected{bOldFormatDetected_}, valTypeObjectIdTable{valTypeObjectIdTable_}, typeCache{typeCache_}, previousAssemblyString{previousAssemblyString_}, previousName{previousName_}, previousType{previousType_} {}
    // private System.Runtime.Serialization.Formatters.Binary.SerStack get_ValueFixupStack()
    // Offset: 0x1544A98
    System::Runtime::Serialization::Formatters::Binary::SerStack* get_ValueFixupStack();
    // System.Object get_TopObject()
    // Offset: 0x1544BA8
    ::Il2CppObject* get_TopObject();
    // System.Void set_TopObject(System.Object value)
    // Offset: 0x1544BB0
    void set_TopObject(::Il2CppObject* value);
    // System.Void .ctor(System.IO.Stream stream, System.Runtime.Serialization.ISurrogateSelector selector, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.Formatters.Binary.InternalFE formatterEnums, System.Runtime.Serialization.SerializationBinder binder)
    // Offset: 0x1544BF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectReader* New_ctor(System::IO::Stream* stream, System::Runtime::Serialization::ISurrogateSelector* selector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums, System::Runtime::Serialization::SerializationBinder* binder) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::ObjectReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectReader*, creationType>(stream, selector, context, formatterEnums, binder)));
    }
    // System.Object Deserialize(System.Runtime.Remoting.Messaging.HeaderHandler handler, System.Runtime.Serialization.Formatters.Binary.__BinaryParser serParser, System.Boolean fCheck)
    // Offset: 0x1544D50
    ::Il2CppObject* Deserialize(System::Runtime::Remoting::Messaging::HeaderHandler* handler, System::Runtime::Serialization::Formatters::Binary::__BinaryParser* serParser, bool fCheck);
    // private System.Boolean HasSurrogate(System.Type t)
    // Offset: 0x15457C0
    bool HasSurrogate(System::Type* t);
    // private System.Void CheckSerializable(System.Type t)
    // Offset: 0x15458AC
    void CheckSerializable(System::Type* t);
    // private System.Void InitFullDeserialization()
    // Offset: 0x1545A18
    void InitFullDeserialization();
    // System.Object CrossAppDomainArray(System.Int32 index)
    // Offset: 0x1545B2C
    ::Il2CppObject* CrossAppDomainArray(int index);
    // System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo CreateReadObjectInfo(System.Type objectType)
    // Offset: 0x15434F8
    System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* CreateReadObjectInfo(System::Type* objectType);
    // System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo CreateReadObjectInfo(System.Type objectType, System.String[] memberNames, System.Type[] memberTypes)
    // Offset: 0x1544028
    System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* CreateReadObjectInfo(System::Type* objectType, ::Array<::Il2CppString*>* memberNames, ::Array<System::Type*>* memberTypes);
    // System.Void Parse(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
    // Offset: 0x1545CAC
    void Parse(System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);
    // private System.Void ParseError(System.Runtime.Serialization.Formatters.Binary.ParseRecord processing, System.Runtime.Serialization.Formatters.Binary.ParseRecord onStack)
    // Offset: 0x15469A4
    void ParseError(System::Runtime::Serialization::Formatters::Binary::ParseRecord* processing, System::Runtime::Serialization::Formatters::Binary::ParseRecord* onStack);
    // private System.Void ParseSerializedStreamHeader(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
    // Offset: 0x1545E54
    void ParseSerializedStreamHeader(System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);
    // private System.Void ParseSerializedStreamHeaderEnd(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
    // Offset: 0x1545E6C
    void ParseSerializedStreamHeaderEnd(System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);
    // private System.Void ParseObject(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
    // Offset: 0x1545E84
    void ParseObject(System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);
    // private System.Void ParseObjectEnd(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
    // Offset: 0x15461BC
    void ParseObjectEnd(System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);
    // private System.Void ParseArray(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
    // Offset: 0x1546D38
    void ParseArray(System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);
    // private System.Void NextRectangleMap(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
    // Offset: 0x1547908
    void NextRectangleMap(System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);
    // private System.Void ParseArrayMember(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
    // Offset: 0x15479E8
    void ParseArrayMember(System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);
    // private System.Void ParseArrayMemberEnd(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
    // Offset: 0x1548694
    void ParseArrayMemberEnd(System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);
    // private System.Void ParseMember(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
    // Offset: 0x15463E0
    void ParseMember(System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);
    // private System.Void ParseMemberEnd(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr)
    // Offset: 0x15468D0
    void ParseMemberEnd(System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr);
    // private System.Void ParseString(System.Runtime.Serialization.Formatters.Binary.ParseRecord pr, System.Runtime.Serialization.Formatters.Binary.ParseRecord parentPr)
    // Offset: 0x15481F4
    void ParseString(System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr, System::Runtime::Serialization::Formatters::Binary::ParseRecord* parentPr);
    // private System.Void RegisterObject(System.Object obj, System.Runtime.Serialization.Formatters.Binary.ParseRecord pr, System.Runtime.Serialization.Formatters.Binary.ParseRecord objectPr)
    // Offset: 0x1547474
    void RegisterObject(::Il2CppObject* obj, System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr, System::Runtime::Serialization::Formatters::Binary::ParseRecord* objectPr);
    // private System.Void RegisterObject(System.Object obj, System.Runtime.Serialization.Formatters.Binary.ParseRecord pr, System.Runtime.Serialization.Formatters.Binary.ParseRecord objectPr, System.Boolean bIsString)
    // Offset: 0x1548A28
    void RegisterObject(::Il2CppObject* obj, System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr, System::Runtime::Serialization::Formatters::Binary::ParseRecord* objectPr, bool bIsString);
    // System.Int64 GetId(System.Int64 objectId)
    // Offset: 0x1549384
    int64_t GetId(int64_t objectId);
    // System.Type Bind(System.String assemblyString, System.String typeString)
    // Offset: 0x154947C
    System::Type* Bind(::Il2CppString* assemblyString, ::Il2CppString* typeString);
    // System.Type FastBindToType(System.String assemblyName, System.String typeName)
    // Offset: 0x15494E4
    System::Type* FastBindToType(::Il2CppString* assemblyName, ::Il2CppString* typeName);
    // static private System.Reflection.Assembly ResolveSimpleAssemblyName(System.Reflection.AssemblyName assemblyName)
    // Offset: 0x15497D0
    static System::Reflection::Assembly* ResolveSimpleAssemblyName(System::Reflection::AssemblyName* assemblyName);
    // static private System.Void GetSimplyNamedTypeFromAssembly(System.Reflection.Assembly assm, System.String typeName, ref System.Type type)
    // Offset: 0x154983C
    static void GetSimplyNamedTypeFromAssembly(System::Reflection::Assembly* assm, ::Il2CppString* typeName, System::Type*& type);
    // System.Type GetType(System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo, System.String name)
    // Offset: 0x1543DC0
    System::Type* GetType(System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo, ::Il2CppString* name);
    // static private System.Void CheckTypeForwardedTo(System.Reflection.Assembly sourceAssembly, System.Reflection.Assembly destAssembly, System.Type resolvedType)
    // Offset: 0x1549A90
    static void CheckTypeForwardedTo(System::Reflection::Assembly* sourceAssembly, System::Reflection::Assembly* destAssembly, System::Type* resolvedType);
  }; // System.Runtime.Serialization.Formatters.Binary.ObjectReader
  #pragma pack(pop)
  static check_size<sizeof(ObjectReader), 200 + sizeof(System::Type*)> __System_Runtime_Serialization_Formatters_Binary_ObjectReaderSizeCheck;
  static_assert(sizeof(ObjectReader) == 0xD0);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::ObjectReader*, "System.Runtime.Serialization.Formatters.Binary", "ObjectReader");
