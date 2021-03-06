// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.TupleExtensions
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TupleExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TupleExtensions
    TupleExtensions() noexcept {}
    // static public System.Void Deconstruct(System.Tuple`2<T1,T2> value, out T1 item1, out T2 item2)
    // Offset: 0xFFFFFFFF
    template<class T1, class T2>
    static void Deconstruct(System::Tuple_2<T1, T2>* value, T1& item1, T2& item2) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TupleExtensions::Deconstruct");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System", "TupleExtensions", "Deconstruct", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()}, ::il2cpp_utils::ExtractTypes(value, item1, item2))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, value, item1, item2);
    }
  }; // System.TupleExtensions
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::TupleExtensions*, "System", "TupleExtensions");
