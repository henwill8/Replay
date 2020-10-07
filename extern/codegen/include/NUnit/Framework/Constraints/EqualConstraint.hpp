// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Constraints.Constraint
#include "NUnit/Framework/Constraints/Constraint.hpp"
// Including type: NUnit.Framework.Constraints.NUnitEqualityComparer
#include "NUnit/Framework/Constraints/NUnitEqualityComparer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: Tolerance
  class Tolerance;
  // Forward declaring type: ConstraintResult
  class ConstraintResult;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Autogenerated type: NUnit.Framework.Constraints.EqualConstraint
  class EqualConstraint : public NUnit::Framework::Constraints::Constraint {
    public:
    // private readonly System.Object _expected
    // Offset: 0x30
    ::Il2CppObject* expected;
    // private NUnit.Framework.Constraints.Tolerance _tolerance
    // Offset: 0x38
    NUnit::Framework::Constraints::Tolerance* tolerance;
    // private NUnit.Framework.Constraints.NUnitEqualityComparer _comparer
    // Offset: 0x40
    NUnit::Framework::Constraints::NUnitEqualityComparer* comparer;
    // private System.Boolean <ClipStrings>k__BackingField
    // Offset: 0x48
    bool ClipStrings;
    // public System.Void .ctor(System.Object expected)
    // Offset: 0x1076A3C
    static EqualConstraint* New_ctor(::Il2CppObject* expected);
    // public NUnit.Framework.Constraints.Tolerance get_Tolerance()
    // Offset: 0x1076BF4
    NUnit::Framework::Constraints::Tolerance* get_Tolerance();
    // public System.Boolean get_CaseInsensitive()
    // Offset: 0x1076BFC
    bool get_CaseInsensitive();
    // public System.Boolean get_ClipStrings()
    // Offset: 0x1076C20
    bool get_ClipStrings();
    // private System.Void set_ClipStrings(System.Boolean value)
    // Offset: 0x1076C28
    void set_ClipStrings(bool value);
    // public System.Collections.Generic.IList`1<NUnit.Framework.Constraints.NUnitEqualityComparer/FailurePoint> get_FailurePoints()
    // Offset: 0x1076C34
    System::Collections::Generic::IList_1<NUnit::Framework::Constraints::NUnitEqualityComparer::FailurePoint*>* get_FailurePoints();
    // private System.Void AdjustArgumentIfNeeded(ref T arg)
    // Offset: 0xFFFFFFFF
    template<class T>
    void AdjustArgumentIfNeeded(T& arg) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "AdjustArgumentIfNeeded", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, arg));
    }
    // public override NUnit.Framework.Constraints.ConstraintResult ApplyTo(System.Object actual)
    // Offset: 0x1076C58
    // Implemented from: NUnit.Framework.Constraints.Constraint
    // Base method: NUnit.Framework.Constraints.ConstraintResult Constraint::ApplyTo(System.Object actual)
    NUnit::Framework::Constraints::ConstraintResult* ApplyTo(::Il2CppObject* actual);
    // public override System.String get_Description()
    // Offset: 0x1076DCC
    // Implemented from: NUnit.Framework.Constraints.Constraint
    // Base method: System.String Constraint::get_Description()
    ::Il2CppString* get_Description();
  }; // NUnit.Framework.Constraints.EqualConstraint
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::EqualConstraint*, "NUnit.Framework.Constraints", "EqualConstraint");
#pragma pack(pop)
