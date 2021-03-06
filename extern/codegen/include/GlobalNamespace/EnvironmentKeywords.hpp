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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentKeywords
  // [] Offset: FFFFFFFF
  class EnvironmentKeywords : public ::Il2CppObject {
    public:
    // private readonly System.Collections.Generic.IReadOnlyList`1<System.String> _environmentKeywords
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>* environmentKeywords;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*) == 0x8);
    // private readonly System.Collections.Generic.HashSet`1<System.String> _environmentKeywordsSet
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::HashSet_1<::Il2CppString*>* environmentKeywordsSet;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: EnvironmentKeywords
    EnvironmentKeywords(System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>* environmentKeywords_ = {}, System::Collections::Generic::HashSet_1<::Il2CppString*>* environmentKeywordsSet_ = {}) noexcept : environmentKeywords{environmentKeywords_}, environmentKeywordsSet{environmentKeywordsSet_} {}
    // public System.Collections.Generic.IReadOnlyList`1<System.String> get_environmentKeywords()
    // Offset: 0xF27104
    System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>* get_environmentKeywords();
    // public System.Void .ctor(System.Collections.Generic.IReadOnlyList`1<System.String> environmentKeywords)
    // Offset: 0xF2710C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentKeywords* New_ctor(System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>* environmentKeywords) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnvironmentKeywords::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentKeywords*, creationType>(environmentKeywords)));
    }
    // public System.Boolean HasKeyword(System.String keyword)
    // Offset: 0xF27214
    bool HasKeyword(::Il2CppString* keyword);
  }; // EnvironmentKeywords
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentKeywords), 24 + sizeof(System::Collections::Generic::HashSet_1<::Il2CppString*>*)> __GlobalNamespace_EnvironmentKeywordsSizeCheck;
  static_assert(sizeof(EnvironmentKeywords) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentKeywords*, "", "EnvironmentKeywords");
