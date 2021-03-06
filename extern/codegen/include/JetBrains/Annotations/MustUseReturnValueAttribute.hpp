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
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.MustUseReturnValueAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: CF44D0
  class MustUseReturnValueAttribute : public System::Attribute {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xCF4C9C
    // private System.String <Justification>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Justification;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: MustUseReturnValueAttribute
    MustUseReturnValueAttribute(::Il2CppString* Justification_ = {}) noexcept : Justification{Justification_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return Justification;
    }
    // public System.Void .ctor(System.String justification)
    // Offset: 0x22BD314
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MustUseReturnValueAttribute* New_ctor(::Il2CppString* justification) {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::MustUseReturnValueAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MustUseReturnValueAttribute*, creationType>(justification)));
    }
    // public System.String get_Justification()
    // Offset: 0x22BD348
    ::Il2CppString* get_Justification();
    // private System.Void set_Justification(System.String value)
    // Offset: 0x22BD350
    void set_Justification(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x22BD30C
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MustUseReturnValueAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::MustUseReturnValueAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MustUseReturnValueAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.MustUseReturnValueAttribute
  #pragma pack(pop)
  static check_size<sizeof(MustUseReturnValueAttribute), 16 + sizeof(::Il2CppString*)> __JetBrains_Annotations_MustUseReturnValueAttributeSizeCheck;
  static_assert(sizeof(MustUseReturnValueAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::MustUseReturnValueAttribute*, "JetBrains.Annotations", "MustUseReturnValueAttribute");
