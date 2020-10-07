// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SearchResult
  class SearchResult;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.SearchResultHandler`1
  template<typename TSource>
  class SearchResultHandler_1 : public ::Il2CppObject {
    public:
    // System.Boolean IsResultIncluded(System.IO.SearchResult result)
    // Offset: 0xFFFFFFFF
    bool IsResultIncluded(System::IO::SearchResult* result) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsResultIncluded", result));
    }
    // TSource CreateObject(System.IO.SearchResult result)
    // Offset: 0xFFFFFFFF
    TSource CreateObject(System::IO::SearchResult* result) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TSource>(this, "CreateObject", result));
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SearchResultHandler_1<TSource>* New_ctor() {
      return THROW_UNLESS(il2cpp_utils::New<SearchResultHandler_1<TSource>*>());
    }
  }; // System.IO.SearchResultHandler`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::IO::SearchResultHandler_1, "System.IO", "SearchResultHandler`1");
#pragma pack(pop)
