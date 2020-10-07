// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.TableCell/TransitionType
  struct TableCell::TransitionType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: TransitionType
    constexpr TransitionType(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HMUI.TableCell/TransitionType Instant
    static constexpr const int Instant = 0;
    // Get static field: static public HMUI.TableCell/TransitionType Instant
    static HMUI::TableCell::TransitionType _get_Instant();
    // Set static field: static public HMUI.TableCell/TransitionType Instant
    static void _set_Instant(HMUI::TableCell::TransitionType value);
    // static field const value: static public HMUI.TableCell/TransitionType Animated
    static constexpr const int Animated = 1;
    // Get static field: static public HMUI.TableCell/TransitionType Animated
    static HMUI::TableCell::TransitionType _get_Animated();
    // Set static field: static public HMUI.TableCell/TransitionType Animated
    static void _set_Animated(HMUI::TableCell::TransitionType value);
  }; // HMUI.TableCell/TransitionType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::TableCell::TransitionType, "HMUI", "TableCell/TransitionType");
#pragma pack(pop)
