// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Constraints.Constraint
#include "NUnit/Framework/Constraints/Constraint.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: ConstraintResult
  class ConstraintResult;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Autogenerated type: NUnit.Framework.Constraints.StringConstraint
  class StringConstraint : public NUnit::Framework::Constraints::Constraint {
    public:
    // protected System.String expected
    // Offset: 0x30
    ::Il2CppString* expected;
    // protected System.Boolean caseInsensitive
    // Offset: 0x38
    bool caseInsensitive;
    // protected System.String descriptionText
    // Offset: 0x40
    ::Il2CppString* descriptionText;
    // protected System.Void .ctor(System.String expected)
    // Offset: 0x13E5E44
    static StringConstraint* New_ctor(::Il2CppString* expected);
    // protected System.Boolean Matches(System.String actual)
    // Offset: 0xFFFFFFFF
    bool Matches(::Il2CppString* actual);
    // public override System.String get_Description()
    // Offset: 0x13E6440
    // Implemented from: NUnit.Framework.Constraints.Constraint
    // Base method: System.String Constraint::get_Description()
    ::Il2CppString* get_Description();
    // public override NUnit.Framework.Constraints.ConstraintResult ApplyTo(System.Object actual)
    // Offset: 0x13E6500
    // Implemented from: NUnit.Framework.Constraints.Constraint
    // Base method: NUnit.Framework.Constraints.ConstraintResult Constraint::ApplyTo(System.Object actual)
    NUnit::Framework::Constraints::ConstraintResult* ApplyTo(::Il2CppObject* actual);
  }; // NUnit.Framework.Constraints.StringConstraint
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::StringConstraint*, "NUnit.Framework.Constraints", "StringConstraint");
#pragma pack(pop)
