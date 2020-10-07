// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: GroupCollection
  class GroupCollection;
  // Forward declaring type: Capture
  class Capture;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Autogenerated type: System.Text.RegularExpressions.GroupEnumerator
  class GroupEnumerator : public ::Il2CppObject, public System::Collections::IEnumerator {
    public:
    // System.Text.RegularExpressions.GroupCollection _rgc
    // Offset: 0x10
    System::Text::RegularExpressions::GroupCollection* rgc;
    // System.Int32 _curindex
    // Offset: 0x18
    int curindex;
    // System.Void .ctor(System.Text.RegularExpressions.GroupCollection rgc)
    // Offset: 0x1220518
    static GroupEnumerator* New_ctor(System::Text::RegularExpressions::GroupCollection* rgc);
    // public System.Text.RegularExpressions.Capture get_Capture()
    // Offset: 0x12205E8
    System::Text::RegularExpressions::Capture* get_Capture();
    // public System.Boolean MoveNext()
    // Offset: 0x1220594
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // public System.Object get_Current()
    // Offset: 0x12205E4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* get_Current();
    // Creating proxy method: System_Collections_IEnumerator_get_Current
    // Maps to method: get_Current
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void Reset()
    // Offset: 0x12206A4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void Reset();
    // Creating proxy method: System_Collections_IEnumerator_Reset
    // Maps to method: Reset
    void System_Collections_IEnumerator_Reset();
  }; // System.Text.RegularExpressions.GroupEnumerator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::GroupEnumerator*, "System.Text.RegularExpressions", "GroupEnumerator");
#pragma pack(pop)
