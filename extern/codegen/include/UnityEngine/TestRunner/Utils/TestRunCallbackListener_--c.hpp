// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestRunner.Utils.TestRunCallbackListener
#include "UnityEngine/TestRunner/Utils/TestRunCallbackListener.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: AssemblyName
  class AssemblyName;
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::TestRunner
namespace UnityEngine::TestRunner {
  // Forward declaring type: TestRunCallbackAttribute
  class TestRunCallbackAttribute;
  // Forward declaring type: ITestRunCallback
  class ITestRunCallback;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.Utils
namespace UnityEngine::TestRunner::Utils {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.Utils.TestRunCallbackListener/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D58A20
  class TestRunCallbackListener::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.TestRunner.Utils.TestRunCallbackListener/<>c <>9
    static UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.TestRunner.Utils.TestRunCallbackListener/<>c <>9
    static void _set_$$9(UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c* value);
    // Get static field: static public System.Func`2<System.Reflection.AssemblyName,System.Boolean> <>9__2_3
    static System::Func_2<System::Reflection::AssemblyName*, bool>* _get_$$9__2_3();
    // Set static field: static public System.Func`2<System.Reflection.AssemblyName,System.Boolean> <>9__2_3
    static void _set_$$9__2_3(System::Func_2<System::Reflection::AssemblyName*, bool>* value);
    // Get static field: static public System.Func`2<System.Reflection.Assembly,System.Boolean> <>9__2_0
    static System::Func_2<System::Reflection::Assembly*, bool>* _get_$$9__2_0();
    // Set static field: static public System.Func`2<System.Reflection.Assembly,System.Boolean> <>9__2_0
    static void _set_$$9__2_0(System::Func_2<System::Reflection::Assembly*, bool>* value);
    // Get static field: static public System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<UnityEngine.TestRunner.TestRunCallbackAttribute>> <>9__2_1
    static System::Func_2<System::Reflection::Assembly*, System::Collections::Generic::IEnumerable_1<UnityEngine::TestRunner::TestRunCallbackAttribute*>*>* _get_$$9__2_1();
    // Set static field: static public System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<UnityEngine.TestRunner.TestRunCallbackAttribute>> <>9__2_1
    static void _set_$$9__2_1(System::Func_2<System::Reflection::Assembly*, System::Collections::Generic::IEnumerable_1<UnityEngine::TestRunner::TestRunCallbackAttribute*>*>* value);
    // Get static field: static public System.Func`2<UnityEngine.TestRunner.TestRunCallbackAttribute,UnityEngine.TestRunner.ITestRunCallback> <>9__2_2
    static System::Func_2<UnityEngine::TestRunner::TestRunCallbackAttribute*, UnityEngine::TestRunner::ITestRunCallback*>* _get_$$9__2_2();
    // Set static field: static public System.Func`2<UnityEngine.TestRunner.TestRunCallbackAttribute,UnityEngine.TestRunner.ITestRunCallback> <>9__2_2
    static void _set_$$9__2_2(System::Func_2<UnityEngine::TestRunner::TestRunCallbackAttribute*, UnityEngine::TestRunner::ITestRunCallback*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1334764
    static void _cctor();
    // System.Boolean <GetAllCallbacks>b__2_0(System.Reflection.Assembly x)
    // Offset: 0x13347D4
    bool $GetAllCallbacks$b__2_0(System::Reflection::Assembly* x);
    // System.Boolean <GetAllCallbacks>b__2_3(System.Reflection.AssemblyName z)
    // Offset: 0x13348F0
    bool $GetAllCallbacks$b__2_3(System::Reflection::AssemblyName* z);
    // System.Collections.Generic.IEnumerable`1<UnityEngine.TestRunner.TestRunCallbackAttribute> <GetAllCallbacks>b__2_1(System.Reflection.Assembly assembly)
    // Offset: 0x133494C
    System::Collections::Generic::IEnumerable_1<UnityEngine::TestRunner::TestRunCallbackAttribute*>* $GetAllCallbacks$b__2_1(System::Reflection::Assembly* assembly);
    // UnityEngine.TestRunner.ITestRunCallback <GetAllCallbacks>b__2_2(UnityEngine.TestRunner.TestRunCallbackAttribute attribute)
    // Offset: 0x13349F0
    UnityEngine::TestRunner::ITestRunCallback* $GetAllCallbacks$b__2_2(UnityEngine::TestRunner::TestRunCallbackAttribute* attribute);
    // public System.Void .ctor()
    // Offset: 0x13347CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestRunCallbackListener::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestRunCallbackListener::$$c*, creationType>()));
    }
  }; // UnityEngine.TestRunner.Utils.TestRunCallbackListener/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c*, "UnityEngine.TestRunner.Utils", "TestRunCallbackListener/<>c");
