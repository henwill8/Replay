// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x1E
  #pragma pack(push, 1)
  // Autogenerated type: System.CharEnumerator
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CA7A84
  class CharEnumerator : public ::Il2CppObject/*, public System::ICloneable, public System::Collections::Generic::IEnumerator_1<::Il2CppChar>*/ {
    public:
    // private System.String str
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* str;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 index
    // Size: 0x4
    // Offset: 0x18
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Char currentElement
    // Size: 0x2
    // Offset: 0x1C
    ::Il2CppChar currentElement;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // Creating value type constructor for type: CharEnumerator
    CharEnumerator(::Il2CppString* str_ = {}, int index_ = {}, ::Il2CppChar currentElement_ = {}) noexcept : str{str_}, index{index_}, currentElement{currentElement_} {}
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppChar>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppChar>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppChar>*>(this);
    }
    // System.Void .ctor(System.String str)
    // Offset: 0x168A574
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CharEnumerator* New_ctor(::Il2CppString* str) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::CharEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CharEnumerator*, creationType>(str)));
    }
    // public System.Object Clone()
    // Offset: 0x168A5B4
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* Clone();
    // Creating proxy method: System_ICloneable_Clone
    // Maps to method: Clone
    ::Il2CppObject* System_ICloneable_Clone();
    // public System.Boolean MoveNext()
    // Offset: 0x168A5BC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // public System.Void Dispose()
    // Offset: 0x168A61C
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x168A63C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Char get_Current()
    // Offset: 0x168A720
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    ::Il2CppChar get_Current();
    // Creating proxy method: System_Collections_Generic_IEnumerator_1_get_Current
    // Maps to method: get_Current
    ::Il2CppChar System_Collections_Generic_IEnumerator_1_get_Current();
    // public System.Void Reset()
    // Offset: 0x168A7E4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void Reset();
    // Creating proxy method: System_Collections_IEnumerator_Reset
    // Maps to method: Reset
    void System_Collections_IEnumerator_Reset();
    // System.Void .ctor()
    // Offset: 0x168A7F4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CharEnumerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::CharEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CharEnumerator*, creationType>()));
    }
  }; // System.CharEnumerator
  #pragma pack(pop)
  static check_size<sizeof(CharEnumerator), 28 + sizeof(::Il2CppChar)> __System_CharEnumeratorSizeCheck;
  static_assert(sizeof(CharEnumerator) == 0x1E);
}
DEFINE_IL2CPP_ARG_TYPE(System::CharEnumerator*, "System", "CharEnumerator");
