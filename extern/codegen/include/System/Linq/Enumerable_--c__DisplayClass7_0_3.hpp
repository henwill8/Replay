// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Linq.Enumerable
#include "System/Linq/Enumerable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.Enumerable/<>c__DisplayClass7_0`3
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: CB93B8
  template<typename TSource, typename TMiddle, typename TResult>
  class Enumerable::$$c__DisplayClass7_0_3 : public ::Il2CppObject {
    public:
    // public System.Func`2<TMiddle,TResult> selector2
    // Size: 0x8
    // Offset: 0x0
    System::Func_2<TMiddle, TResult>* selector2;
    // Field size check
    static_assert(sizeof(System::Func_2<TMiddle, TResult>*) == 0x8);
    // public System.Func`2<TSource,TMiddle> selector1
    // Size: 0x8
    // Offset: 0x0
    System::Func_2<TSource, TMiddle>* selector1;
    // Field size check
    static_assert(sizeof(System::Func_2<TSource, TMiddle>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass7_0_3
    $$c__DisplayClass7_0_3(System::Func_2<TMiddle, TResult>* selector2_ = {}, System::Func_2<TSource, TMiddle>* selector1_ = {}) noexcept : selector2{selector2_}, selector1{selector1_} {}
    // TResult <CombineSelectors>b__0(TSource x)
    // Offset: 0xFFFFFFFF
    TResult $CombineSelectors$b__0(TSource x) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$$c__DisplayClass7_0_3::<CombineSelectors>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<CombineSelectors>b__0", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x))));
      return ::il2cpp_utils::RunMethodThrow<TResult, false>(this, ___internal__method, x);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Enumerable::$$c__DisplayClass7_0_3<TSource, TMiddle, TResult>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Enumerable::$$c__DisplayClass7_0_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Enumerable::$$c__DisplayClass7_0_3<TSource, TMiddle, TResult>*, creationType>()));
    }
  }; // System.Linq.Enumerable/<>c__DisplayClass7_0`3
  // Could not write size check! Type: System.Linq.Enumerable/<>c__DisplayClass7_0`3 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::Enumerable::$$c__DisplayClass7_0_3, "System.Linq", "Enumerable/<>c__DisplayClass7_0`3");
