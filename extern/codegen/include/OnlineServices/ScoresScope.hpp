// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: OnlineServices
namespace OnlineServices {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OnlineServices.ScoresScope
  // [] Offset: FFFFFFFF
  struct ScoresScope/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ScoresScope
    constexpr ScoresScope(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OnlineServices.ScoresScope Global
    static constexpr const int Global = 0;
    // Get static field: static public OnlineServices.ScoresScope Global
    static OnlineServices::ScoresScope _get_Global();
    // Set static field: static public OnlineServices.ScoresScope Global
    static void _set_Global(OnlineServices::ScoresScope value);
    // static field const value: static public OnlineServices.ScoresScope Friends
    static constexpr const int Friends = 1;
    // Get static field: static public OnlineServices.ScoresScope Friends
    static OnlineServices::ScoresScope _get_Friends();
    // Set static field: static public OnlineServices.ScoresScope Friends
    static void _set_Friends(OnlineServices::ScoresScope value);
  }; // OnlineServices.ScoresScope
  #pragma pack(pop)
  static check_size<sizeof(ScoresScope), 0 + sizeof(int)> __OnlineServices_ScoresScopeSizeCheck;
  static_assert(sizeof(ScoresScope) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::ScoresScope, "OnlineServices", "ScoresScope");
