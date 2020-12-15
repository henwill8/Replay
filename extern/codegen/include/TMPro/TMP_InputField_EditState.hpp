// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_InputField
#include "TMPro/TMP_InputField.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_InputField/EditState
  struct TMP_InputField::EditState : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: EditState
    constexpr EditState(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public TMPro.TMP_InputField/EditState Continue
    static constexpr const int Continue = 0;
    // Get static field: static public TMPro.TMP_InputField/EditState Continue
    static TMPro::TMP_InputField::EditState _get_Continue();
    // Set static field: static public TMPro.TMP_InputField/EditState Continue
    static void _set_Continue(TMPro::TMP_InputField::EditState value);
    // static field const value: static public TMPro.TMP_InputField/EditState Finish
    static constexpr const int Finish = 1;
    // Get static field: static public TMPro.TMP_InputField/EditState Finish
    static TMPro::TMP_InputField::EditState _get_Finish();
    // Set static field: static public TMPro.TMP_InputField/EditState Finish
    static void _set_Finish(TMPro::TMP_InputField::EditState value);
  }; // TMPro.TMP_InputField/EditState
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_InputField::EditState, "TMPro", "TMP_InputField/EditState");
#pragma pack(pop)