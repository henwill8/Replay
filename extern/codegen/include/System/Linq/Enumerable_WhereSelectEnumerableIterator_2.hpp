// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Linq.Enumerable
#include "System/Linq/Enumerable.hpp"
// Including type: System.Linq.Enumerable/Iterator`1
#include "System/Linq/Enumerable_Iterator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: IEnumerable`1 because it is already included!
  // Skipping declaration: IEnumerator`1 because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // Autogenerated type: System.Linq.Enumerable/WhereSelectEnumerableIterator`2
  template<typename TSource, typename TResult>
  class Enumerable::WhereSelectEnumerableIterator_2 : public System::Linq::Enumerable::Iterator_1<TResult> {
    public:
    // private System.Collections.Generic.IEnumerable`1<TSource> source
    // Offset: 0x0
    System::Collections::Generic::IEnumerable_1<TSource>* source;
    // private System.Func`2<TSource,System.Boolean> predicate
    // Offset: 0x0
    System::Func_2<TSource, bool>* predicate;
    // private System.Func`2<TSource,TResult> selector
    // Offset: 0x0
    System::Func_2<TSource, TResult>* selector;
    // private System.Collections.Generic.IEnumerator`1<TSource> enumerator
    // Offset: 0x0
    System::Collections::Generic::IEnumerator_1<TSource>* enumerator;
    // public System.Void .ctor(System.Collections.Generic.IEnumerable`1<TSource> source, System.Func`2<TSource,System.Boolean> predicate, System.Func`2<TSource,TResult> selector)
    // Offset: 0xFFFFFFFF
    static Enumerable::WhereSelectEnumerableIterator_2<TSource, TResult>* New_ctor(System::Collections::Generic::IEnumerable_1<TSource>* source, System::Func_2<TSource, bool>* predicate, System::Func_2<TSource, TResult>* selector) {
      return THROW_UNLESS((il2cpp_utils::New<Enumerable::WhereSelectEnumerableIterator_2<TSource, TResult>*>(source, predicate, selector)));
    }
    // public System.Linq.Enumerable/Iterator`1<TResult> Clone()
    // Offset: 0xFFFFFFFF
    System::Linq::Enumerable::Iterator_1<TResult>* Clone() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Linq::Enumerable::Iterator_1<TResult>*>(this, "Clone"));
    }
    // public System.Collections.Generic.IEnumerable`1<TResult2> Select(System.Func`2<TResult,TResult2> selector)
    // Offset: 0xFFFFFFFF
    template<class TResult2>
    System::Collections::Generic::IEnumerable_1<TResult2>* Select(System::Func_2<TResult, TResult2>* selector) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TResult2>*>(this, "Select", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult2>::get()}, selector)));
    }
    // public System.Collections.Generic.IEnumerable`1<TResult> Where(System.Func`2<TResult,System.Boolean> predicate)
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerable_1<TResult>* Where(System::Func_2<TResult, bool>* predicate) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<TResult>*>(this, "Where", predicate));
    }
    // public override System.Void Dispose()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Linq.Enumerable/Iterator`1
    // Base method: System.Void Iterator_1::Dispose()
    void Dispose() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
    }
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose() {
      Dispose();
    }
    // public override System.Boolean MoveNext()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Linq.Enumerable/Iterator`1
    // Base method: System.Boolean Iterator_1::MoveNext()
    bool MoveNext() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
    }
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext() {
      return MoveNext();
    }
  }; // System.Linq.Enumerable/WhereSelectEnumerableIterator`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::Enumerable::WhereSelectEnumerableIterator_2, "System.Linq", "Enumerable/WhereSelectEnumerableIterator`2");
#pragma pack(pop)
