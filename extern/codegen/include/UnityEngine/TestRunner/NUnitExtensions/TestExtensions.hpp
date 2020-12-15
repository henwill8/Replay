// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions
namespace UnityEngine::TestRunner::NUnitExtensions {
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.TestExtensions
  class TestExtensions : public ::Il2CppObject {
    public:
    // static private System.Collections.Generic.IEnumerable`1<System.String> GetTestCategories(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x1188420
    static System::Collections::Generic::IEnumerable_1<::Il2CppString*>* GetTestCategories(NUnit::Framework::Interfaces::ITest* test);
    // static public System.Collections.Generic.List`1<System.String> GetAllCategoriesFromTest(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x1188774
    static System::Collections::Generic::List_1<::Il2CppString*>* GetAllCategoriesFromTest(NUnit::Framework::Interfaces::ITest* test);
    // static public System.Void ParseForNameDuplicates(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x11888E0
    static void ParseForNameDuplicates(NUnit::Framework::Interfaces::ITest* test);
    // static public System.Int32 GetChildIndex(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x1188DF8
    static int GetChildIndex(NUnit::Framework::Interfaces::ITest* test);
    // static public System.Boolean HasChildIndex(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x1188FD4
    static bool HasChildIndex(NUnit::Framework::Interfaces::ITest* test);
    // static private System.String GetAncestorPath(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x1189188
    static ::Il2CppString* GetAncestorPath(NUnit::Framework::Interfaces::ITest* test);
    // static public System.String GetUniqueName(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x1187F9C
    static ::Il2CppString* GetUniqueName(NUnit::Framework::Interfaces::ITest* test);
    // static public System.String GetFullName(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x1189420
    static ::Il2CppString* GetFullName(NUnit::Framework::Interfaces::ITest* test);
    // static public System.String GetSkipReason(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x11898EC
    static ::Il2CppString* GetSkipReason(NUnit::Framework::Interfaces::ITest* test);
    // static public System.String GetParentId(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x1189B38
    static ::Il2CppString* GetParentId(NUnit::Framework::Interfaces::ITest* test);
    // static public System.String GetParentFullName(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x1189CC4
    static ::Il2CppString* GetParentFullName(NUnit::Framework::Interfaces::ITest* test);
    // static public System.String GetParentUniqueName(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x1189E54
    static ::Il2CppString* GetParentUniqueName(NUnit::Framework::Interfaces::ITest* test);
  }; // UnityEngine.TestRunner.NUnitExtensions.TestExtensions
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::TestExtensions*, "UnityEngine.TestRunner.NUnitExtensions", "TestExtensions");
#pragma pack(pop)