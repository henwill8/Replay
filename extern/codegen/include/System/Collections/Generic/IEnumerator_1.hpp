// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Autogenerated type: System.Collections.Generic.IEnumerator`1
  template<typename T>
  class IEnumerator_1 : public System::IDisposable/*, public System::Collections::IEnumerator*/ {
    public:
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // public T get_Current()
    // Offset: 0xFFFFFFFF
    T System_Collections_Generic_IEnumerator_1_get_Current() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "get_Current"));
    }
  }; // System.Collections.Generic.IEnumerator`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::IEnumerator_1, "System.Collections.Generic", "IEnumerator`1");
#pragma pack(pop)
