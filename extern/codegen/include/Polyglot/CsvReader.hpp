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
// Forward declaring namespace: Polyglot
namespace Polyglot {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Polyglot.CsvReader
  // [] Offset: FFFFFFFF
  class CsvReader : public ::Il2CppObject {
    public:
    // Nested type: Polyglot::CsvReader::ParsingMode
    struct ParsingMode;
    // Creating value type constructor for type: CsvReader
    CsvReader() noexcept {}
    // static public System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> Parse(System.String src)
    // Offset: 0x224961C
    static System::Collections::Generic::List_1<System::Collections::Generic::List_1<::Il2CppString*>*>* Parse(::Il2CppString* src);
    // public System.Void .ctor()
    // Offset: 0x2249B58
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CsvReader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::CsvReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CsvReader*, creationType>()));
    }
  }; // Polyglot.CsvReader
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Polyglot::CsvReader*, "Polyglot", "CsvReader");
