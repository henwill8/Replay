// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Globalization::Unicode
namespace Mono::Globalization::Unicode {
  // Forward declaring type: Contraction
  class Contraction;
}
// Completed forward declares
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Autogenerated type: Mono.Globalization.Unicode.ContractionComparer
  class ContractionComparer : public ::Il2CppObject/*, public System::Collections::Generic::IComparer_1<Mono::Globalization::Unicode::Contraction*>*/ {
    public:
    // Creating interface conversion operator: operator System::Collections::Generic::IComparer_1<Mono::Globalization::Unicode::Contraction*>
    operator System::Collections::Generic::IComparer_1<Mono::Globalization::Unicode::Contraction*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IComparer_1<Mono::Globalization::Unicode::Contraction*>*>(this);
    }
    // Get static field: static public readonly Mono.Globalization.Unicode.ContractionComparer Instance
    static Mono::Globalization::Unicode::ContractionComparer* _get_Instance();
    // Set static field: static public readonly Mono.Globalization.Unicode.ContractionComparer Instance
    static void _set_Instance(Mono::Globalization::Unicode::ContractionComparer* value);
    // static private System.Void .cctor()
    // Offset: 0x15190D0
    static void _cctor();
    // public System.Int32 Compare(Mono.Globalization.Unicode.Contraction c1, Mono.Globalization.Unicode.Contraction c2)
    // Offset: 0x151902C
    // Implemented from: System.Collections.Generic.IComparer`1
    // Base method: System.Int32 IComparer_1::Compare(Mono.Globalization.Unicode.Contraction c1, Mono.Globalization.Unicode.Contraction c2)
    int Compare(Mono::Globalization::Unicode::Contraction* c1, Mono::Globalization::Unicode::Contraction* c2);
    // public System.Void .ctor()
    // Offset: 0x15190C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ContractionComparer* New_ctor();
  }; // Mono.Globalization.Unicode.ContractionComparer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::ContractionComparer*, "Mono.Globalization.Unicode", "ContractionComparer");
#pragma pack(pop)