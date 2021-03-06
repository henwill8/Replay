// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Interfaces.ITest
#include "NUnit/Framework/Interfaces/ITest.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: NUnit.Framework.Interfaces.RunState
#include "NUnit/Framework/Interfaces/RunState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: ICustomAttributeProvider
  class ICustomAttributeProvider;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
  // Forward declaring type: IPropertyBag
  class IPropertyBag;
  // Forward declaring type: TNode
  class TNode;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestResult
  class TestResult;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x75
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Test
  // [] Offset: FFFFFFFF
  class Test : public ::Il2CppObject/*, public NUnit::Framework::Interfaces::ITest, public System::IComparable*/ {
    public:
    // protected System.Reflection.MethodInfo[] setUpMethods
    // Size: 0x8
    // Offset: 0x10
    ::Array<System::Reflection::MethodInfo*>* setUpMethods;
    // Field size check
    static_assert(sizeof(::Array<System::Reflection::MethodInfo*>*) == 0x8);
    // protected System.Reflection.MethodInfo[] tearDownMethods
    // Size: 0x8
    // Offset: 0x18
    ::Array<System::Reflection::MethodInfo*>* tearDownMethods;
    // Field size check
    static_assert(sizeof(::Array<System::Reflection::MethodInfo*>*) == 0x8);
    // protected NUnit.Framework.Interfaces.ITypeInfo DeclaringTypeInfo
    // Size: 0x8
    // Offset: 0x20
    NUnit::Framework::Interfaces::ITypeInfo* DeclaringTypeInfo;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ITypeInfo*) == 0x8);
    // private NUnit.Framework.Interfaces.IMethodInfo _method
    // Size: 0x8
    // Offset: 0x28
    NUnit::Framework::Interfaces::IMethodInfo* method;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::IMethodInfo*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD25148
    // private System.String <Id>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* Id;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD25158
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD25168
    // private System.String <FullName>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* FullName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD25178
    // private NUnit.Framework.Interfaces.ITypeInfo <TypeInfo>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    NUnit::Framework::Interfaces::ITypeInfo* TypeInfo;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ITypeInfo*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD25188
    // private NUnit.Framework.Interfaces.RunState <RunState>k__BackingField
    // Size: 0x4
    // Offset: 0x50
    NUnit::Framework::Interfaces::RunState RunState;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::RunState) == 0x4);
    // Padding between fields: RunState and: Properties
    char __padding8[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD25198
    // private NUnit.Framework.Interfaces.IPropertyBag <Properties>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    NUnit::Framework::Interfaces::IPropertyBag* Properties;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::IPropertyBag*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD251A8
    // private NUnit.Framework.Interfaces.ITest <Parent>k__BackingField
    // Size: 0x8
    // Offset: 0x60
    NUnit::Framework::Interfaces::ITest* Parent;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ITest*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD251B8
    // private System.Object <Fixture>k__BackingField
    // Size: 0x8
    // Offset: 0x68
    ::Il2CppObject* Fixture;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD251D8
    // private System.Int32 <Seed>k__BackingField
    // Size: 0x4
    // Offset: 0x70
    int Seed;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD251E8
    // private System.Boolean <RequiresThread>k__BackingField
    // Size: 0x1
    // Offset: 0x74
    bool RequiresThread;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Test
    Test(::Array<System::Reflection::MethodInfo*>* setUpMethods_ = {}, ::Array<System::Reflection::MethodInfo*>* tearDownMethods_ = {}, NUnit::Framework::Interfaces::ITypeInfo* DeclaringTypeInfo_ = {}, NUnit::Framework::Interfaces::IMethodInfo* method_ = {}, ::Il2CppString* Id_ = {}, ::Il2CppString* Name_ = {}, ::Il2CppString* FullName_ = {}, NUnit::Framework::Interfaces::ITypeInfo* TypeInfo_ = {}, NUnit::Framework::Interfaces::RunState RunState_ = {}, NUnit::Framework::Interfaces::IPropertyBag* Properties_ = {}, NUnit::Framework::Interfaces::ITest* Parent_ = {}, ::Il2CppObject* Fixture_ = {}, int Seed_ = {}, bool RequiresThread_ = {}) noexcept : setUpMethods{setUpMethods_}, tearDownMethods{tearDownMethods_}, DeclaringTypeInfo{DeclaringTypeInfo_}, method{method_}, Id{Id_}, Name{Name_}, FullName{FullName_}, TypeInfo{TypeInfo_}, RunState{RunState_}, Properties{Properties_}, Parent{Parent_}, Fixture{Fixture_}, Seed{Seed_}, RequiresThread{RequiresThread_} {}
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::ITest
    operator NUnit::Framework::Interfaces::ITest() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::ITest*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable
    operator System::IComparable() noexcept {
      return *reinterpret_cast<System::IComparable*>(this);
    }
    // Get static field: static private System.Int32 _nextID
    static int _get__nextID();
    // Set static field: static private System.Int32 _nextID
    static void _set__nextID(int value);
    // [CompilerGeneratedAttribute] Offset: 0xD251C8
    // Get static field: static private System.String <IdPrefix>k__BackingField
    static ::Il2CppString* _get_$IdPrefix$k__BackingField();
    // Set static field: static private System.String <IdPrefix>k__BackingField
    static void _set_$IdPrefix$k__BackingField(::Il2CppString* value);
    // protected System.Void .ctor(System.String name)
    // Offset: 0x2223444
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Test* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Test::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Test*, creationType>(name)));
    }
    // protected System.Void .ctor(System.String pathName, System.String name)
    // Offset: 0x222358C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Test* New_ctor(::Il2CppString* pathName, ::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Test::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Test*, creationType>(pathName, name)));
    }
    // protected System.Void .ctor(NUnit.Framework.Interfaces.ITypeInfo typeInfo)
    // Offset: 0x2223634
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Test* New_ctor(NUnit::Framework::Interfaces::ITypeInfo* typeInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Test::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Test*, creationType>(typeInfo)));
    }
    // protected System.Void .ctor(NUnit.Framework.Interfaces.IMethodInfo method)
    // Offset: 0x22237D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Test* New_ctor(NUnit::Framework::Interfaces::IMethodInfo* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Test::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Test*, creationType>(method)));
    }
    // private System.Void Initialize(System.String name)
    // Offset: 0x22234BC
    void Initialize(::Il2CppString* name);
    // static private System.String GetNextId()
    // Offset: 0x2223A30
    static ::Il2CppString* GetNextId();
    // public System.Void set_Id(System.String value)
    // Offset: 0x2223B48
    void set_Id(::Il2CppString* value);
    // public System.Void set_Name(System.String value)
    // Offset: 0x2223B50
    void set_Name(::Il2CppString* value);
    // public System.Void set_FullName(System.String value)
    // Offset: 0x2223B60
    void set_FullName(::Il2CppString* value);
    // public System.String get_ClassName()
    // Offset: 0x2223B68
    ::Il2CppString* get_ClassName();
    // public System.String get_MethodName()
    // Offset: 0x2223DDC
    ::Il2CppString* get_MethodName();
    // private System.Void set_TypeInfo(NUnit.Framework.Interfaces.ITypeInfo value)
    // Offset: 0x2223DE4
    void set_TypeInfo(NUnit::Framework::Interfaces::ITypeInfo* value);
    // public System.Void set_Method(NUnit.Framework.Interfaces.IMethodInfo value)
    // Offset: 0x22217B8
    void set_Method(NUnit::Framework::Interfaces::IMethodInfo* value);
    // public System.Void set_RunState(NUnit.Framework.Interfaces.RunState value)
    // Offset: 0x2223DF4
    void set_RunState(NUnit::Framework::Interfaces::RunState value);
    // public System.String get_XmlElementName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_XmlElementName();
    // public System.String get_TestType()
    // Offset: 0x2223DFC
    ::Il2CppString* get_TestType();
    // private System.Void set_Properties(NUnit.Framework.Interfaces.IPropertyBag value)
    // Offset: 0x2223E34
    void set_Properties(NUnit::Framework::Interfaces::IPropertyBag* value);
    // public System.Void set_Parent(NUnit.Framework.Interfaces.ITest value)
    // Offset: 0x2223EC4
    void set_Parent(NUnit::Framework::Interfaces::ITest* value);
    // public System.Object get_Fixture()
    // Offset: 0x2223ECC
    ::Il2CppObject* get_Fixture();
    // public System.Void set_Fixture(System.Object value)
    // Offset: 0x2223ED4
    void set_Fixture(::Il2CppObject* value);
    // static public System.String get_IdPrefix()
    // Offset: 0x2223AD8
    static ::Il2CppString* get_IdPrefix();
    // public System.Int32 get_Seed()
    // Offset: 0x2223EDC
    int get_Seed();
    // public System.Void set_Seed(System.Int32 value)
    // Offset: 0x2223EE4
    void set_Seed(int value);
    // public NUnit.Framework.Internal.TestResult MakeTestResult()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Internal::TestResult* MakeTestResult();
    // public System.Void ApplyAttributesToTest(System.Reflection.ICustomAttributeProvider provider)
    // Offset: 0x2223EEC
    void ApplyAttributesToTest(System::Reflection::ICustomAttributeProvider* provider);
    // protected System.Void PopulateTestNode(NUnit.Framework.Interfaces.TNode thisNode, System.Boolean recursive)
    // Offset: 0x22240D8
    void PopulateTestNode(NUnit::Framework::Interfaces::TNode* thisNode, bool recursive);
    // static private System.Void .cctor()
    // Offset: 0x2224508
    static void _cctor();
    // public System.String get_Id()
    // Offset: 0x2223B40
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: System.String ITest::get_Id()
    ::Il2CppString* get_Id();
    // public System.String get_Name()
    // Offset: 0x22237C8
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: System.String ITest::get_Name()
    ::Il2CppString* get_Name();
    // public System.String get_FullName()
    // Offset: 0x2223B58
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: System.String ITest::get_FullName()
    ::Il2CppString* get_FullName();
    // public NUnit.Framework.Interfaces.ITypeInfo get_TypeInfo()
    // Offset: 0x2223DD4
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: NUnit.Framework.Interfaces.ITypeInfo ITest::get_TypeInfo()
    NUnit::Framework::Interfaces::ITypeInfo* get_TypeInfo();
    // public NUnit.Framework.Interfaces.IMethodInfo get_Method()
    // Offset: 0x22218D8
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: NUnit.Framework.Interfaces.IMethodInfo ITest::get_Method()
    NUnit::Framework::Interfaces::IMethodInfo* get_Method();
    // public NUnit.Framework.Interfaces.RunState get_RunState()
    // Offset: 0x2223DEC
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: NUnit.Framework.Interfaces.RunState ITest::get_RunState()
    NUnit::Framework::Interfaces::RunState get_RunState();
    // public System.Int32 get_TestCaseCount()
    // Offset: 0x2223E24
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: System.Int32 ITest::get_TestCaseCount()
    int get_TestCaseCount();
    // public NUnit.Framework.Interfaces.IPropertyBag get_Properties()
    // Offset: 0x2223E2C
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: NUnit.Framework.Interfaces.IPropertyBag ITest::get_Properties()
    NUnit::Framework::Interfaces::IPropertyBag* get_Properties();
    // public System.Boolean get_IsSuite()
    // Offset: 0x2223E3C
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: System.Boolean ITest::get_IsSuite()
    bool get_IsSuite();
    // public System.Boolean get_HasChildren()
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: System.Boolean ITest::get_HasChildren()
    bool get_HasChildren();
    // public NUnit.Framework.Interfaces.ITest get_Parent()
    // Offset: 0x2223EBC
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: NUnit.Framework.Interfaces.ITest ITest::get_Parent()
    NUnit::Framework::Interfaces::ITest* get_Parent();
    // public System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> get_Tests()
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Interfaces.ITest
    // Base method: System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> ITest::get_Tests()
    System::Collections::Generic::IList_1<NUnit::Framework::Interfaces::ITest*>* get_Tests();
    // public NUnit.Framework.Interfaces.TNode ToXml(System.Boolean recursive)
    // Offset: 0x22243C8
    // Implemented from: NUnit.Framework.Interfaces.IXmlNodeBuilder
    // Base method: NUnit.Framework.Interfaces.TNode IXmlNodeBuilder::ToXml(System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* ToXml(bool recursive);
    // public NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Interfaces.IXmlNodeBuilder
    // Base method: NUnit.Framework.Interfaces.TNode IXmlNodeBuilder::AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* AddToXml(NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
    // public System.Int32 CompareTo(System.Object obj)
    // Offset: 0x2224454
    // Implemented from: System.IComparable
    // Base method: System.Int32 IComparable::CompareTo(System.Object obj)
    int CompareTo(::Il2CppObject* obj);
    // Creating proxy method: System_IComparable_CompareTo
    // Maps to method: CompareTo
    int System_IComparable_CompareTo(::Il2CppObject* obj);
  }; // NUnit.Framework.Internal.Test
  #pragma pack(pop)
  static check_size<sizeof(Test), 116 + sizeof(bool)> __NUnit_Framework_Internal_TestSizeCheck;
  static_assert(sizeof(Test) == 0x75);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Test*, "NUnit.Framework.Internal", "Test");
