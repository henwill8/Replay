// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.TableViewSelectionType
  struct TableViewSelectionType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: TableViewSelectionType
    constexpr TableViewSelectionType(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HMUI.TableViewSelectionType None
    static constexpr const int None = 0;
    // Get static field: static public HMUI.TableViewSelectionType None
    static HMUI::TableViewSelectionType _get_None();
    // Set static field: static public HMUI.TableViewSelectionType None
    static void _set_None(HMUI::TableViewSelectionType value);
    // static field const value: static public HMUI.TableViewSelectionType Single
    static constexpr const int Single = 1;
    // Get static field: static public HMUI.TableViewSelectionType Single
    static HMUI::TableViewSelectionType _get_Single();
    // Set static field: static public HMUI.TableViewSelectionType Single
    static void _set_Single(HMUI::TableViewSelectionType value);
    // static field const value: static public HMUI.TableViewSelectionType Multiple
    static constexpr const int Multiple = 2;
    // Get static field: static public HMUI.TableViewSelectionType Multiple
    static HMUI::TableViewSelectionType _get_Multiple();
    // Set static field: static public HMUI.TableViewSelectionType Multiple
    static void _set_Multiple(HMUI::TableViewSelectionType value);
  }; // HMUI.TableViewSelectionType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::TableViewSelectionType, "HMUI", "TableViewSelectionType");
#pragma pack(pop)
