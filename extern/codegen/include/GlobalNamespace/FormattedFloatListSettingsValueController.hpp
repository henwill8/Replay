// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ListSettingsController
#include "GlobalNamespace/ListSettingsController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FloatSO
  class FloatSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: FormattedFloatListSettingsValueController
  // [] Offset: FFFFFFFF
  class FormattedFloatListSettingsValueController : public GlobalNamespace::ListSettingsController {
    public:
    // Nested type: GlobalNamespace::FormattedFloatListSettingsValueController::ValueType
    struct ValueType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: FormattedFloatListSettingsValueController/ValueType
    // [] Offset: FFFFFFFF
    struct ValueType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: ValueType
      constexpr ValueType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public FormattedFloatListSettingsValueController/ValueType Normal
      static constexpr const int Normal = 0;
      // Get static field: static public FormattedFloatListSettingsValueController/ValueType Normal
      static GlobalNamespace::FormattedFloatListSettingsValueController::ValueType _get_Normal();
      // Set static field: static public FormattedFloatListSettingsValueController/ValueType Normal
      static void _set_Normal(GlobalNamespace::FormattedFloatListSettingsValueController::ValueType value);
      // static field const value: static public FormattedFloatListSettingsValueController/ValueType Normalized
      static constexpr const int Normalized = 1;
      // Get static field: static public FormattedFloatListSettingsValueController/ValueType Normalized
      static GlobalNamespace::FormattedFloatListSettingsValueController::ValueType _get_Normalized();
      // Set static field: static public FormattedFloatListSettingsValueController/ValueType Normalized
      static void _set_Normalized(GlobalNamespace::FormattedFloatListSettingsValueController::ValueType value);
      // static field const value: static public FormattedFloatListSettingsValueController/ValueType InvertedNormalized
      static constexpr const int InvertedNormalized = 2;
      // Get static field: static public FormattedFloatListSettingsValueController/ValueType InvertedNormalized
      static GlobalNamespace::FormattedFloatListSettingsValueController::ValueType _get_InvertedNormalized();
      // Set static field: static public FormattedFloatListSettingsValueController/ValueType InvertedNormalized
      static void _set_InvertedNormalized(GlobalNamespace::FormattedFloatListSettingsValueController::ValueType value);
    }; // FormattedFloatListSettingsValueController/ValueType
    #pragma pack(pop)
    static check_size<sizeof(FormattedFloatListSettingsValueController::ValueType), 0 + sizeof(int)> __GlobalNamespace_FormattedFloatListSettingsValueController_ValueTypeSizeCheck;
    static_assert(sizeof(FormattedFloatListSettingsValueController::ValueType) == 0x4);
    // private FloatSO _settingsValue
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::FloatSO* settingsValue;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FloatSO*) == 0x8);
    // private System.Single[] _values
    // Size: 0x8
    // Offset: 0x30
    ::Array<float>* values;
    // Field size check
    static_assert(sizeof(::Array<float>*) == 0x8);
    // private System.String _formattingString
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* formattingString;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private FormattedFloatListSettingsValueController/ValueType valueType
    // Size: 0x4
    // Offset: 0x40
    GlobalNamespace::FormattedFloatListSettingsValueController::ValueType valueType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FormattedFloatListSettingsValueController::ValueType) == 0x4);
    // private System.Single _min
    // Size: 0x4
    // Offset: 0x44
    float min;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _max
    // Size: 0x4
    // Offset: 0x48
    float max;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: FormattedFloatListSettingsValueController
    FormattedFloatListSettingsValueController(GlobalNamespace::FloatSO* settingsValue_ = {}, ::Array<float>* values_ = {}, ::Il2CppString* formattingString_ = {}, GlobalNamespace::FormattedFloatListSettingsValueController::ValueType valueType_ = {}, float min_ = {}, float max_ = {}) noexcept : settingsValue{settingsValue_}, values{values_}, formattingString{formattingString_}, valueType{valueType_}, min{min_}, max{max_} {}
    // protected override System.Boolean GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    // Offset: 0xF30C50
    // Implemented from: ListSettingsController
    // Base method: System.Boolean ListSettingsController::GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    bool GetInitValues(int& idx, int& numberOfElements);
    // protected override System.Void ApplyValue(System.Int32 idx)
    // Offset: 0xF30D78
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::ApplyValue(System.Int32 idx)
    void ApplyValue(int idx);
    // protected override System.String TextForValue(System.Int32 idx)
    // Offset: 0xF30E04
    // Implemented from: ListSettingsController
    // Base method: System.String ListSettingsController::TextForValue(System.Int32 idx)
    ::Il2CppString* TextForValue(int idx);
    // public System.Void .ctor()
    // Offset: 0xF30EF0
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::.ctor()
    // Base method: System.Void IncDecSettingsController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FormattedFloatListSettingsValueController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FormattedFloatListSettingsValueController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FormattedFloatListSettingsValueController*, creationType>()));
    }
  }; // FormattedFloatListSettingsValueController
  #pragma pack(pop)
  static check_size<sizeof(FormattedFloatListSettingsValueController), 72 + sizeof(float)> __GlobalNamespace_FormattedFloatListSettingsValueControllerSizeCheck;
  static_assert(sizeof(FormattedFloatListSettingsValueController) == 0x4C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FormattedFloatListSettingsValueController*, "", "FormattedFloatListSettingsValueController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FormattedFloatListSettingsValueController::ValueType, "", "FormattedFloatListSettingsValueController/ValueType");
