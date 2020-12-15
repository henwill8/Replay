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
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Autogenerated type: NUnit.Framework.TestParameters
  class TestParameters : public ::Il2CppObject {
    public:
    // private readonly System.Collections.Generic.Dictionary`2<System.String,System.String> _parameters
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* parameters;
    // Creating conversion operator: operator System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*
    constexpr operator System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*() const noexcept {
      return parameters;
    }
    // Get static field: static private readonly System.IFormatProvider MODIFIED_INVARIANT_CULTURE
    static System::IFormatProvider* _get_MODIFIED_INVARIANT_CULTURE();
    // Set static field: static private readonly System.IFormatProvider MODIFIED_INVARIANT_CULTURE
    static void _set_MODIFIED_INVARIANT_CULTURE(System::IFormatProvider* value);
    // System.Void Add(System.String name, System.String value)
    // Offset: 0x1965748
    void Add(::Il2CppString* name, ::Il2CppString* value);
    // static private System.IFormatProvider CreateModifiedInvariantCulture()
    // Offset: 0x19657B8
    static System::IFormatProvider* CreateModifiedInvariantCulture();
    // static private System.Void .cctor()
    // Offset: 0x19658FC
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1965400
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TestParameters* New_ctor();
  }; // NUnit.Framework.TestParameters
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::TestParameters*, "NUnit.Framework", "TestParameters");
#pragma pack(pop)