// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.AssemblyCopyrightAttribute
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CA8D1C
  // [AttributeUsageAttribute] Offset: CA8D1C
  class AssemblyCopyrightAttribute : public System::Attribute {
    public:
    // private System.String m_copyright
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_copyright;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AssemblyCopyrightAttribute
    AssemblyCopyrightAttribute(::Il2CppString* m_copyright_ = {}) noexcept : m_copyright{m_copyright_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return m_copyright;
    }
    // public System.Void .ctor(System.String copyright)
    // Offset: 0x1B27018
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyCopyrightAttribute* New_ctor(::Il2CppString* copyright) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::AssemblyCopyrightAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyCopyrightAttribute*, creationType>(copyright)));
    }
  }; // System.Reflection.AssemblyCopyrightAttribute
  #pragma pack(pop)
  static check_size<sizeof(AssemblyCopyrightAttribute), 16 + sizeof(::Il2CppString*)> __System_Reflection_AssemblyCopyrightAttributeSizeCheck;
  static_assert(sizeof(AssemblyCopyrightAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyCopyrightAttribute*, "System.Reflection", "AssemblyCopyrightAttribute");
