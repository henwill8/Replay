// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.FormatterTypeStyle
#include "System/Runtime/Serialization/Formatters/FormatterTypeStyle.hpp"
// Including type: System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "System/Runtime/Serialization/Formatters/FormatterAssemblyStyle.hpp"
// Including type: System.Runtime.Serialization.Formatters.TypeFilterLevel
#include "System/Runtime/Serialization/Formatters/TypeFilterLevel.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalSerializerTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalSerializerTypeE.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.InternalFE
  // [] Offset: FFFFFFFF
  class InternalFE : public ::Il2CppObject {
    public:
    // System.Runtime.Serialization.Formatters.FormatterTypeStyle FEtypeFormat
    // Size: 0x4
    // Offset: 0x10
    System::Runtime::Serialization::Formatters::FormatterTypeStyle FEtypeFormat;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::FormatterTypeStyle) == 0x4);
    // System.Runtime.Serialization.Formatters.FormatterAssemblyStyle FEassemblyFormat
    // Size: 0x4
    // Offset: 0x14
    System::Runtime::Serialization::Formatters::FormatterAssemblyStyle FEassemblyFormat;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::FormatterAssemblyStyle) == 0x4);
    // System.Runtime.Serialization.Formatters.TypeFilterLevel FEsecurityLevel
    // Size: 0x4
    // Offset: 0x18
    System::Runtime::Serialization::Formatters::TypeFilterLevel FEsecurityLevel;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::TypeFilterLevel) == 0x4);
    // System.Runtime.Serialization.Formatters.Binary.InternalSerializerTypeE FEserializerTypeEnum
    // Size: 0x4
    // Offset: 0x1C
    System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE FEserializerTypeEnum;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE) == 0x4);
    // Creating value type constructor for type: InternalFE
    InternalFE(System::Runtime::Serialization::Formatters::FormatterTypeStyle FEtypeFormat_ = {}, System::Runtime::Serialization::Formatters::FormatterAssemblyStyle FEassemblyFormat_ = {}, System::Runtime::Serialization::Formatters::TypeFilterLevel FEsecurityLevel_ = {}, System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE FEserializerTypeEnum_ = {}) noexcept : FEtypeFormat{FEtypeFormat_}, FEassemblyFormat{FEassemblyFormat_}, FEsecurityLevel{FEsecurityLevel_}, FEserializerTypeEnum{FEserializerTypeEnum_} {}
    // public System.Void .ctor()
    // Offset: 0x15429A4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InternalFE* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::InternalFE::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InternalFE*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.InternalFE
  #pragma pack(pop)
  static check_size<sizeof(InternalFE), 28 + sizeof(System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE)> __System_Runtime_Serialization_Formatters_Binary_InternalFESizeCheck;
  static_assert(sizeof(InternalFE) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::InternalFE*, "System.Runtime.Serialization.Formatters.Binary", "InternalFE");
