// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Constraints.ConstraintResult
#include "NUnit/Framework/Constraints/ConstraintResult.hpp"
// Including type: NUnit.Framework.Constraints.NUnitEqualityComparer
#include "NUnit/Framework/Constraints/NUnitEqualityComparer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: Tolerance
  class Tolerance;
  // Forward declaring type: EqualConstraint
  class EqualConstraint;
  // Forward declaring type: MessageWriter
  class MessageWriter;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ICollection
  class ICollection;
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Autogenerated type: NUnit.Framework.Constraints.EqualConstraintResult
  class EqualConstraintResult : public NUnit::Framework::Constraints::ConstraintResult {
    public:
    // private System.Object expectedValue
    // Offset: 0x28
    ::Il2CppObject* expectedValue;
    // private NUnit.Framework.Constraints.Tolerance tolerance
    // Offset: 0x30
    NUnit::Framework::Constraints::Tolerance* tolerance;
    // private System.Boolean caseInsensitive
    // Offset: 0x38
    bool caseInsensitive;
    // private System.Boolean clipStrings
    // Offset: 0x39
    bool clipStrings;
    // private System.Collections.Generic.IList`1<NUnit.Framework.Constraints.NUnitEqualityComparer/FailurePoint> failurePoints
    // Offset: 0x40
    System::Collections::Generic::IList_1<NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint*>* failurePoints;
    // Get static field: static private readonly System.String StringsDiffer_1
    static ::Il2CppString* _get_StringsDiffer_1();
    // Set static field: static private readonly System.String StringsDiffer_1
    static void _set_StringsDiffer_1(::Il2CppString* value);
    // Get static field: static private readonly System.String StringsDiffer_2
    static ::Il2CppString* _get_StringsDiffer_2();
    // Set static field: static private readonly System.String StringsDiffer_2
    static void _set_StringsDiffer_2(::Il2CppString* value);
    // Get static field: static private readonly System.String StreamsDiffer_1
    static ::Il2CppString* _get_StreamsDiffer_1();
    // Set static field: static private readonly System.String StreamsDiffer_1
    static void _set_StreamsDiffer_1(::Il2CppString* value);
    // Get static field: static private readonly System.String StreamsDiffer_2
    static ::Il2CppString* _get_StreamsDiffer_2();
    // Set static field: static private readonly System.String StreamsDiffer_2
    static void _set_StreamsDiffer_2(::Il2CppString* value);
    // Get static field: static private readonly System.String CollectionType_1
    static ::Il2CppString* _get_CollectionType_1();
    // Set static field: static private readonly System.String CollectionType_1
    static void _set_CollectionType_1(::Il2CppString* value);
    // Get static field: static private readonly System.String CollectionType_2
    static ::Il2CppString* _get_CollectionType_2();
    // Set static field: static private readonly System.String CollectionType_2
    static void _set_CollectionType_2(::Il2CppString* value);
    // Get static field: static private readonly System.String ValuesDiffer_1
    static ::Il2CppString* _get_ValuesDiffer_1();
    // Set static field: static private readonly System.String ValuesDiffer_1
    static void _set_ValuesDiffer_1(::Il2CppString* value);
    // Get static field: static private readonly System.String ValuesDiffer_2
    static ::Il2CppString* _get_ValuesDiffer_2();
    // Set static field: static private readonly System.String ValuesDiffer_2
    static void _set_ValuesDiffer_2(::Il2CppString* value);
    // public System.Void .ctor(NUnit.Framework.Constraints.EqualConstraint constraint, System.Object actual, System.Boolean hasSucceeded)
    // Offset: 0x13DCE24
    static EqualConstraintResult* New_ctor(NUnit::Framework::Constraints::EqualConstraint* constraint, ::Il2CppObject* actual, bool hasSucceeded);
    // private System.Void DisplayDifferences(NUnit.Framework.Constraints.MessageWriter writer, System.Object expected, System.Object actual, System.Int32 depth)
    // Offset: 0x13DD21C
    void DisplayDifferences(NUnit::Framework::Constraints::MessageWriter* writer, ::Il2CppObject* expected, ::Il2CppObject* actual, int depth);
    // private System.Void DisplayStringDifferences(NUnit.Framework.Constraints.MessageWriter writer, System.String expected, System.String actual)
    // Offset: 0x13DD500
    void DisplayStringDifferences(NUnit::Framework::Constraints::MessageWriter* writer, ::Il2CppString* expected, ::Il2CppString* actual);
    // private System.Void DisplayStreamDifferences(NUnit.Framework.Constraints.MessageWriter writer, System.IO.Stream expected, System.IO.Stream actual, System.Int32 depth)
    // Offset: 0x13DDC38
    void DisplayStreamDifferences(NUnit::Framework::Constraints::MessageWriter* writer, System::IO::Stream* expected, System::IO::Stream* actual, int depth);
    // private System.Void DisplayCollectionDifferences(NUnit.Framework.Constraints.MessageWriter writer, System.Collections.ICollection expected, System.Collections.ICollection actual, System.Int32 depth)
    // Offset: 0x13DD82C
    void DisplayCollectionDifferences(NUnit::Framework::Constraints::MessageWriter* writer, System::Collections::ICollection* expected, System::Collections::ICollection* actual, int depth);
    // private System.Void DisplayTypesAndSizes(NUnit.Framework.Constraints.MessageWriter writer, System.Collections.IEnumerable expected, System.Collections.IEnumerable actual, System.Int32 indent)
    // Offset: 0x13DE104
    void DisplayTypesAndSizes(NUnit::Framework::Constraints::MessageWriter* writer, System::Collections::IEnumerable* expected, System::Collections::IEnumerable* actual, int indent);
    // private System.Void DisplayFailurePoint(NUnit.Framework.Constraints.MessageWriter writer, System.Collections.IEnumerable expected, System.Collections.IEnumerable actual, NUnit.Framework.Constraints.NUnitEqualityComparer/FailurePoint failurePoint, System.Int32 indent)
    // Offset: 0x13DE5D4
    void DisplayFailurePoint(NUnit::Framework::Constraints::MessageWriter* writer, System::Collections::IEnumerable* expected, System::Collections::IEnumerable* actual, NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint* failurePoint, int indent);
    // private System.Void DisplayEnumerableDifferences(NUnit.Framework.Constraints.MessageWriter writer, System.Collections.IEnumerable expected, System.Collections.IEnumerable actual, System.Int32 depth)
    // Offset: 0x13DDA80
    void DisplayEnumerableDifferences(NUnit::Framework::Constraints::MessageWriter* writer, System::Collections::IEnumerable* expected, System::Collections::IEnumerable* actual, int depth);
    // static private System.Void .cctor()
    // Offset: 0x13DEDB4
    static void _cctor();
    // public override System.Void WriteMessageTo(NUnit.Framework.Constraints.MessageWriter writer)
    // Offset: 0x13DD20C
    // Implemented from: NUnit.Framework.Constraints.ConstraintResult
    // Base method: System.Void ConstraintResult::WriteMessageTo(NUnit.Framework.Constraints.MessageWriter writer)
    void WriteMessageTo(NUnit::Framework::Constraints::MessageWriter* writer);
  }; // NUnit.Framework.Constraints.EqualConstraintResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::EqualConstraintResult*, "NUnit.Framework.Constraints", "EqualConstraintResult");
#pragma pack(pop)
