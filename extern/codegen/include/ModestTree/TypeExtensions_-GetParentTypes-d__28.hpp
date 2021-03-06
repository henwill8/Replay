// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ModestTree.TypeExtensions
#include "ModestTree/TypeExtensions.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: ModestTree
namespace ModestTree {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.TypeExtensions/<GetParentTypes>d__28
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D04CAC
  class TypeExtensions::$GetParentTypes$d__28 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<System::Type*>, public System::Collections::Generic::IEnumerator_1<System::Type*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Type <>2__current
    // Size: 0x8
    // Offset: 0x18
    System::Type* $$2__current;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: type
    char __padding2[0x4] = {};
    // private System.Type type
    // Size: 0x8
    // Offset: 0x28
    System::Type* type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // public System.Type <>3__type
    // Size: 0x8
    // Offset: 0x30
    System::Type* $$3__type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<System.Type> <>7__wrap1
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::IEnumerator_1<System::Type*>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerator_1<System::Type*>*) == 0x8);
    // Creating value type constructor for type: $GetParentTypes$d__28
    $GetParentTypes$d__28(int $$1__state_ = {}, System::Type* $$2__current_ = {}, int $$l__initialThreadId_ = {}, System::Type* type_ = {}, System::Type* $$3__type_ = {}, System::Collections::Generic::IEnumerator_1<System::Type*>* $$7__wrap1_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, type{type_}, $$3__type{$$3__type_}, $$7__wrap1{$$7__wrap1_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<System::Type*>
    operator System::Collections::Generic::IEnumerable_1<System::Type*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<System::Type*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<System::Type*>
    operator System::Collections::Generic::IEnumerator_1<System::Type*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<System::Type*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x125B20C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeExtensions::$GetParentTypes$d__28* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::TypeExtensions::$GetParentTypes$d__28::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeExtensions::$GetParentTypes$d__28*, creationType>($$1__state)));
    }
    // private System.Void <>m__Finally1()
    // Offset: 0x125BB38
    void $$m__Finally1();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x125BB1C
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x125BBF8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Type System.Collections.Generic.IEnumerator<System.Type>.get_Current()
    // Offset: 0x125C0D4
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    System::Type* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x125C0DC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x125C13C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<System.Type> System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
    // Offset: 0x125C144
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<System::Type*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x125C1F8
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // ModestTree.TypeExtensions/<GetParentTypes>d__28
  #pragma pack(pop)
  static check_size<sizeof(TypeExtensions::$GetParentTypes$d__28), 56 + sizeof(System::Collections::Generic::IEnumerator_1<System::Type*>*)> __ModestTree_TypeExtensions_$GetParentTypes$d__28SizeCheck;
  static_assert(sizeof(TypeExtensions::$GetParentTypes$d__28) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(ModestTree::TypeExtensions::$GetParentTypes$d__28*, "ModestTree", "TypeExtensions/<GetParentTypes>d__28");
