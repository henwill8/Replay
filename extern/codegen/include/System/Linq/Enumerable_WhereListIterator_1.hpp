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
// Including type: System.Collections.Generic.List`1/Enumerator
#include "System/Collections/Generic/List_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: List`1 because it is already included!
  // Skipping declaration: IEnumerable`1 because it is already included!
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
  // Autogenerated type: System.Linq.Enumerable/WhereListIterator`1
  template<typename TSource>
  class Enumerable::WhereListIterator_1 : public System::Linq::Enumerable::Iterator_1<TSource> {
    public:
    // private System.Collections.Generic.List`1<TSource> source
    // Offset: 0x0
    System::Collections::Generic::List_1<TSource>* source;
    // private System.Func`2<TSource,System.Boolean> predicate
    // Offset: 0x0
    System::Func_2<TSource, bool>* predicate;
    // private System.Collections.Generic.List`1/Enumerator<TSource> enumerator
    // Offset: 0x0
    typename System::Collections::Generic::List_1<TSource>::Enumerator enumerator;
    // public System.Void .ctor(System.Collections.Generic.List`1<TSource> source, System.Func`2<TSource,System.Boolean> predicate)
    // Offset: 0xFFFFFFFF
    static Enumerable::WhereListIterator_1<TSource>* New_ctor(System::Collections::Generic::List_1<TSource>* source, System::Func_2<TSource, bool>* predicate) {
      return THROW_UNLESS(il2cpp_utils::New<Enumerable::WhereListIterator_1<TSource>*>(source, predicate));
    }
    // public override System.Linq.Enumerable/Iterator`1<TSource> Clone()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Linq.Enumerable/Iterator`1
    // Base method: System.Linq.Enumerable/Iterator`1<TSource> Iterator`1::Clone()
    System::Linq::Enumerable::Iterator_1<TSource>* Clone() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Linq::Enumerable::Iterator_1<TSource>*>(this, "Clone"));
    }
    // public override System.Boolean MoveNext()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Linq.Enumerable/Iterator`1
    // Base method: System.Boolean Iterator`1::MoveNext()
    bool MoveNext() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
    }
    // public override System.Collections.Generic.IEnumerable`1<TResult> Select(System.Func`2<TSource,TResult> selector)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Linq.Enumerable/Iterator`1
    // Base method: System.Collections.Generic.IEnumerable`1<TResult> Iterator`1::Select(System.Func`2<TSource,TResult> selector)
    template<class TResult>
    System::Collections::Generic::IEnumerable_1<TResult>* Select(System::Func_2<TSource, TResult>* selector) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<TResult>*>(this, "Select", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}, selector)));
    }
    // public override System.Collections.Generic.IEnumerable`1<TSource> Where(System.Func`2<TSource,System.Boolean> predicate)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Linq.Enumerable/Iterator`1
    // Base method: System.Collections.Generic.IEnumerable`1<TSource> Iterator`1::Where(System.Func`2<TSource,System.Boolean> predicate)
    System::Collections::Generic::IEnumerable_1<TSource>* Where(System::Func_2<TSource, bool>* predicate) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<TSource>*>(this, "Where", predicate));
    }
  }; // System.Linq.Enumerable/WhereListIterator`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::Enumerable::WhereListIterator_1, "System.Linq", "Enumerable/WhereListIterator`1");
#pragma pack(pop)
