// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
}
// Forward declaring namespace: NUnit::Framework
namespace NUnit::Framework {
  // Forward declaring type: TestParameters
  class TestParameters;
}
// Completed forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Autogenerated type: NUnit.Framework.TestContext
  class TestContext : public ::Il2CppObject {
    public:
    // Get static field: static public NUnit.Framework.Internal.ITestExecutionContext CurrentTestExecutionContext
    static NUnit::Framework::Internal::ITestExecutionContext* _get_CurrentTestExecutionContext();
    // Set static field: static public NUnit.Framework.Internal.ITestExecutionContext CurrentTestExecutionContext
    static void _set_CurrentTestExecutionContext(NUnit::Framework::Internal::ITestExecutionContext* value);
    // Get static field: static public System.IO.TextWriter Error
    static System::IO::TextWriter* _get_Error();
    // Set static field: static public System.IO.TextWriter Error
    static void _set_Error(System::IO::TextWriter* value);
    // Get static field: static public readonly System.IO.TextWriter Progress
    static System::IO::TextWriter* _get_Progress();
    // Set static field: static public readonly System.IO.TextWriter Progress
    static void _set_Progress(System::IO::TextWriter* value);
    // Get static field: static public readonly NUnit.Framework.TestParameters Parameters
    static NUnit::Framework::TestParameters* _get_Parameters();
    // Set static field: static public readonly NUnit.Framework.TestParameters Parameters
    static void _set_Parameters(NUnit::Framework::TestParameters* value);
    // static public System.IO.TextWriter get_Out()
    // Offset: 0x196515C
    static System::IO::TextWriter* get_Out();
    // static private System.Void .cctor()
    // Offset: 0x1965260
    static void _cctor();
  }; // NUnit.Framework.TestContext
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::TestContext*, "NUnit.Framework", "TestContext");
#pragma pack(pop)
