// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.IEnumerator
  // [] Offset: FFFFFFFF
  // [GuidAttribute] Offset: CAD514
  // [ComVisibleAttribute] Offset: CAD514
  class IEnumerator {
    public:
    // Creating value type constructor for type: IEnumerator
    IEnumerator() noexcept {}
    // public System.Boolean MoveNext()
    // Offset: 0xFFFFFFFF
    bool System_Collections_IEnumerator_MoveNext();
    // public System.Object get_Current()
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void Reset()
    // Offset: 0xFFFFFFFF
    void System_Collections_IEnumerator_Reset();
  }; // System.Collections.IEnumerator
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::IEnumerator*, "System.Collections", "IEnumerator");
