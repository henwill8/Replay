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
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo
  // [] Offset: FFFFFFFF
  class BinaryAssemblyInfo : public ::Il2CppObject {
    public:
    // System.String assemblyString
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* assemblyString;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Reflection.Assembly assembly
    // Size: 0x8
    // Offset: 0x18
    System::Reflection::Assembly* assembly;
    // Field size check
    static_assert(sizeof(System::Reflection::Assembly*) == 0x8);
    // Creating value type constructor for type: BinaryAssemblyInfo
    BinaryAssemblyInfo(::Il2CppString* assemblyString_ = {}, System::Reflection::Assembly* assembly_ = {}) noexcept : assemblyString{assemblyString_}, assembly{assembly_} {}
    // System.Void .ctor(System.String assemblyString)
    // Offset: 0x158F71C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryAssemblyInfo* New_ctor(::Il2CppString* assemblyString) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryAssemblyInfo*, creationType>(assemblyString)));
    }
    // System.Void .ctor(System.String assemblyString, System.Reflection.Assembly assembly)
    // Offset: 0x158F750
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryAssemblyInfo* New_ctor(::Il2CppString* assemblyString, System::Reflection::Assembly* assembly) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryAssemblyInfo*, creationType>(assemblyString, assembly)));
    }
    // System.Reflection.Assembly GetAssembly()
    // Offset: 0x158F7A0
    System::Reflection::Assembly* GetAssembly();
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo
  #pragma pack(pop)
  static check_size<sizeof(BinaryAssemblyInfo), 24 + sizeof(System::Reflection::Assembly*)> __System_Runtime_Serialization_Formatters_Binary_BinaryAssemblyInfoSizeCheck;
  static_assert(sizeof(BinaryAssemblyInfo) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*, "System.Runtime.Serialization.Formatters.Binary", "BinaryAssemblyInfo");
