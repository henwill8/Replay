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
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.LocalizationRequiredAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: CF43A0
  class LocalizationRequiredAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xCF4C2C
    // private System.Boolean <Required>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool Required;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: LocalizationRequiredAttribute
    LocalizationRequiredAttribute(bool Required_ = {}) noexcept : Required{Required_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return Required;
    }
    // public System.Void .ctor(System.Boolean required)
    // Offset: 0x22BD1A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizationRequiredAttribute* New_ctor(bool required) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::LocalizationRequiredAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizationRequiredAttribute*, creationType>(required)));
    }
    // public System.Boolean get_Required()
    // Offset: 0x22BD1D8
    bool get_Required();
    // private System.Void set_Required(System.Boolean value)
    // Offset: 0x22BD1E0
    void set_Required(bool value);
    // public System.Void .ctor()
    // Offset: 0x22BD17C
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizationRequiredAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::LocalizationRequiredAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizationRequiredAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.LocalizationRequiredAttribute
  #pragma pack(pop)
  static check_size<sizeof(LocalizationRequiredAttribute), 16 + sizeof(bool)> __JetBrains_Annotations_LocalizationRequiredAttributeSizeCheck;
  static_assert(sizeof(LocalizationRequiredAttribute) == 0x11);
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::LocalizationRequiredAttribute*, "JetBrains.Annotations", "LocalizationRequiredAttribute");
