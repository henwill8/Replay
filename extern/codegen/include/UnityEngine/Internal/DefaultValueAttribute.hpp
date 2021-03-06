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
// Type namespace: UnityEngine.Internal
namespace UnityEngine::Internal {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Internal.DefaultValueAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: CC0A14
  class DefaultValueAttribute : public System::Attribute {
    public:
    // private System.Object DefaultValue
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* DefaultValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: DefaultValueAttribute
    DefaultValueAttribute(::Il2CppObject* DefaultValue_ = {}) noexcept : DefaultValue{DefaultValue_} {}
    // Creating conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept {
      return DefaultValue;
    }
    // public System.Void .ctor(System.String value)
    // Offset: 0x1A25260
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultValueAttribute* New_ctor(::Il2CppString* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Internal::DefaultValueAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultValueAttribute*, creationType>(value)));
    }
    // public System.Object get_Value()
    // Offset: 0x1A25294
    ::Il2CppObject* get_Value();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1A2529C
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1A25368
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Internal.DefaultValueAttribute
  #pragma pack(pop)
  static check_size<sizeof(DefaultValueAttribute), 16 + sizeof(::Il2CppObject*)> __UnityEngine_Internal_DefaultValueAttributeSizeCheck;
  static_assert(sizeof(DefaultValueAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Internal::DefaultValueAttribute*, "UnityEngine.Internal", "DefaultValueAttribute");
