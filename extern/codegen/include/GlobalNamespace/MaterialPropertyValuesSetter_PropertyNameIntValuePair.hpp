// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MaterialPropertyValuesSetter
#include "GlobalNamespace/MaterialPropertyValuesSetter.hpp"
// Including type: MaterialPropertyValuesSetter/PropertyValuePairBase
#include "GlobalNamespace/MaterialPropertyValuesSetter_PropertyValuePairBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MaterialPropertyValuesSetter/PropertyNameIntValuePair
  // [] Offset: FFFFFFFF
  class MaterialPropertyValuesSetter::PropertyNameIntValuePair : public GlobalNamespace::MaterialPropertyValuesSetter::PropertyValuePairBase {
    public:
    // public System.Int32 value
    // Size: 0x4
    // Offset: 0x1C
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PropertyNameIntValuePair
    PropertyNameIntValuePair(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // public System.Void .ctor()
    // Offset: 0x1DA1D74
    // Implemented from: MaterialPropertyValuesSetter/PropertyValuePairBase
    // Base method: System.Void PropertyValuePairBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialPropertyValuesSetter::PropertyNameIntValuePair* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameIntValuePair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialPropertyValuesSetter::PropertyNameIntValuePair*, creationType>()));
    }
  }; // MaterialPropertyValuesSetter/PropertyNameIntValuePair
  #pragma pack(pop)
  static check_size<sizeof(MaterialPropertyValuesSetter::PropertyNameIntValuePair), 28 + sizeof(int)> __GlobalNamespace_MaterialPropertyValuesSetter_PropertyNameIntValuePairSizeCheck;
  static_assert(sizeof(MaterialPropertyValuesSetter::PropertyNameIntValuePair) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialPropertyValuesSetter::PropertyNameIntValuePair*, "", "MaterialPropertyValuesSetter/PropertyNameIntValuePair");
