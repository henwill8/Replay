// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Runtime.ConstrainedExecution.Consistency
#include "System/Runtime/ConstrainedExecution/Consistency.hpp"
// Including type: System.Runtime.ConstrainedExecution.Cer
#include "System/Runtime/ConstrainedExecution/Cer.hpp"
// Completed includes
// Type namespace: System.Runtime.ConstrainedExecution
namespace System::Runtime::ConstrainedExecution {
  // Autogenerated type: System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
  class ReliabilityContractAttribute : public System::Attribute {
    public:
    // private System.Runtime.ConstrainedExecution.Consistency _consistency
    // Offset: 0x10
    System::Runtime::ConstrainedExecution::Consistency consistency;
    // private System.Runtime.ConstrainedExecution.Cer _cer
    // Offset: 0x14
    System::Runtime::ConstrainedExecution::Cer cer;
    // public System.Void .ctor(System.Runtime.ConstrainedExecution.Consistency consistencyGuarantee, System.Runtime.ConstrainedExecution.Cer cer)
    // Offset: 0x1163F3C
    static ReliabilityContractAttribute* New_ctor(System::Runtime::ConstrainedExecution::Consistency consistencyGuarantee, System::Runtime::ConstrainedExecution::Cer cer);
  }; // System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::ConstrainedExecution::ReliabilityContractAttribute*, "System.Runtime.ConstrainedExecution", "ReliabilityContractAttribute");
#pragma pack(pop)
