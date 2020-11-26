// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: NUnit.Framework.Constraints.MessageWriter
#include "NUnit/Framework/Constraints/MessageWriter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: ConstraintResult
  class ConstraintResult;
  // Forward declaring type: Tolerance
  class Tolerance;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.TextMessageWriter
  class TextMessageWriter : public NUnit::Framework::Constraints::MessageWriter {
    public:
    // private System.Int32 maxLineLength
    // Offset: 0x34
    int maxLineLength;
    // Get static field: static private readonly System.Int32 DEFAULT_LINE_LENGTH
    static int _get_DEFAULT_LINE_LENGTH();
    // Set static field: static private readonly System.Int32 DEFAULT_LINE_LENGTH
    static void _set_DEFAULT_LINE_LENGTH(int value);
    // Get static field: static public readonly System.String Pfx_Expected
    static ::Il2CppString* _get_Pfx_Expected();
    // Set static field: static public readonly System.String Pfx_Expected
    static void _set_Pfx_Expected(::Il2CppString* value);
    // Get static field: static public readonly System.String Pfx_Actual
    static ::Il2CppString* _get_Pfx_Actual();
    // Set static field: static public readonly System.String Pfx_Actual
    static void _set_Pfx_Actual(::Il2CppString* value);
    // Get static field: static public readonly System.Int32 PrefixLength
    static int _get_PrefixLength();
    // Set static field: static public readonly System.Int32 PrefixLength
    static void _set_PrefixLength(int value);
    // public System.Void .ctor(System.String userMessage, params System.Object[] args)
    // Offset: 0x19620CC
    static TextMessageWriter* New_ctor(::Il2CppString* userMessage, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void .ctor(System.String userMessage, params System.Object[] args)
    static TextMessageWriter* New_ctor(::Il2CppString* userMessage, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void .ctor(System.String userMessage, params System.Object[] args)
    template<class ...TParams>
    static TextMessageWriter* New_ctor(::Il2CppString* userMessage, TParams&&... args) {
      return New_ctor(userMessage, {args...});
    }
    // private System.Void WriteExpectedLine(NUnit.Framework.Constraints.ConstraintResult result)
    // Offset: 0x19622E0
    void WriteExpectedLine(NUnit::Framework::Constraints::ConstraintResult* result);
    // private System.Void WriteExpectedLine(System.Object expected)
    // Offset: 0x196247C
    void WriteExpectedLine(::Il2CppObject* expected);
    // private System.Void WriteExpectedLine(System.Object expected, NUnit.Framework.Constraints.Tolerance tolerance)
    // Offset: 0x1962568
    void WriteExpectedLine(::Il2CppObject* expected, NUnit::Framework::Constraints::Tolerance* tolerance);
    // private System.Void WriteActualLine(NUnit.Framework.Constraints.ConstraintResult result)
    // Offset: 0x1962394
    void WriteActualLine(NUnit::Framework::Constraints::ConstraintResult* result);
    // private System.Void WriteActualLine(System.Object actual)
    // Offset: 0x1962484
    void WriteActualLine(::Il2CppObject* actual);
    // private System.Void WriteCaretLine(System.Int32 mismatch)
    // Offset: 0x1962960
    void WriteCaretLine(int mismatch);
    // public override System.Int32 get_MaxLineLength()
    // Offset: 0x19621A0
    // Implemented from: NUnit.Framework.Constraints.MessageWriter
    // Base method: System.Int32 MessageWriter::get_MaxLineLength()
    int get_MaxLineLength();
    // public override System.Void WriteMessageLine(System.Int32 level, System.String message, params System.Object[] args)
    // Offset: 0x19621A8
    // Implemented from: NUnit.Framework.Constraints.MessageWriter
    // Base method: System.Void MessageWriter::WriteMessageLine(System.Int32 level, System.String message, params System.Object[] args)
    void WriteMessageLine(int level, ::Il2CppString* message, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void WriteMessageLine(System.Int32 level, System.String message, params System.Object[] args)
    void WriteMessageLine(int level, ::Il2CppString* message, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void WriteMessageLine(System.Int32 level, System.String message, params System.Object[] args)
    template<class ...TParams>
    void WriteMessageLine(int level, ::Il2CppString* message, TParams&&... args) {
      WriteMessageLine(level, message, {args...});
    }
    // public override System.Void DisplayDifferences(NUnit.Framework.Constraints.ConstraintResult result)
    // Offset: 0x19622B4
    // Implemented from: NUnit.Framework.Constraints.MessageWriter
    // Base method: System.Void MessageWriter::DisplayDifferences(NUnit.Framework.Constraints.ConstraintResult result)
    void DisplayDifferences(NUnit::Framework::Constraints::ConstraintResult* result);
    // public override System.Void DisplayDifferences(System.Object expected, System.Object actual)
    // Offset: 0x196244C
    // Implemented from: NUnit.Framework.Constraints.MessageWriter
    // Base method: System.Void MessageWriter::DisplayDifferences(System.Object expected, System.Object actual)
    void DisplayDifferences(::Il2CppObject* expected, ::Il2CppObject* actual);
    // public override System.Void DisplayDifferences(System.Object expected, System.Object actual, NUnit.Framework.Constraints.Tolerance tolerance)
    // Offset: 0x1962538
    // Implemented from: NUnit.Framework.Constraints.MessageWriter
    // Base method: System.Void MessageWriter::DisplayDifferences(System.Object expected, System.Object actual, NUnit.Framework.Constraints.Tolerance tolerance)
    void DisplayDifferences(::Il2CppObject* expected, ::Il2CppObject* actual, NUnit::Framework::Constraints::Tolerance* tolerance);
    // public override System.Void DisplayStringDifferences(System.String expected, System.String actual, System.Int32 mismatch, System.Boolean ignoreCase, System.Boolean clipping)
    // Offset: 0x196273C
    // Implemented from: NUnit.Framework.Constraints.MessageWriter
    // Base method: System.Void MessageWriter::DisplayStringDifferences(System.String expected, System.String actual, System.Int32 mismatch, System.Boolean ignoreCase, System.Boolean clipping)
    void DisplayStringDifferences(::Il2CppString* expected, ::Il2CppString* actual, int mismatch, bool ignoreCase, bool clipping);
    // public override System.Void WriteActualValue(System.Object actual)
    // Offset: 0x1962A10
    // Implemented from: NUnit.Framework.Constraints.MessageWriter
    // Base method: System.Void MessageWriter::WriteActualValue(System.Object actual)
    void WriteActualValue(::Il2CppObject* actual);
    // public override System.Void WriteValue(System.Object val)
    // Offset: 0x1962A20
    // Implemented from: NUnit.Framework.Constraints.MessageWriter
    // Base method: System.Void MessageWriter::WriteValue(System.Object val)
    void WriteValue(::Il2CppObject* val);
    // public override System.Void WriteCollectionElements(System.Collections.IEnumerable collection, System.Int64 start, System.Int32 max)
    // Offset: 0x1962AAC
    // Implemented from: NUnit.Framework.Constraints.MessageWriter
    // Base method: System.Void MessageWriter::WriteCollectionElements(System.Collections.IEnumerable collection, System.Int64 start, System.Int32 max)
    void WriteCollectionElements(System::Collections::IEnumerable* collection, int64_t start, int max);
    // static private System.Void .cctor()
    // Offset: 0x1962B50
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::.cctor()
    static void _cctor();
  }; // NUnit.Framework.Internal.TextMessageWriter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TextMessageWriter*, "NUnit.Framework.Internal", "TextMessageWriter");
#pragma pack(pop)
