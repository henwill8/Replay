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
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NoteCutDirection
  struct NoteCutDirection : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: NoteCutDirection
    constexpr NoteCutDirection(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public NoteCutDirection Up
    static constexpr const int Up = 0;
    // Get static field: static public NoteCutDirection Up
    static GlobalNamespace::NoteCutDirection _get_Up();
    // Set static field: static public NoteCutDirection Up
    static void _set_Up(GlobalNamespace::NoteCutDirection value);
    // static field const value: static public NoteCutDirection Down
    static constexpr const int Down = 1;
    // Get static field: static public NoteCutDirection Down
    static GlobalNamespace::NoteCutDirection _get_Down();
    // Set static field: static public NoteCutDirection Down
    static void _set_Down(GlobalNamespace::NoteCutDirection value);
    // static field const value: static public NoteCutDirection Left
    static constexpr const int Left = 2;
    // Get static field: static public NoteCutDirection Left
    static GlobalNamespace::NoteCutDirection _get_Left();
    // Set static field: static public NoteCutDirection Left
    static void _set_Left(GlobalNamespace::NoteCutDirection value);
    // static field const value: static public NoteCutDirection Right
    static constexpr const int Right = 3;
    // Get static field: static public NoteCutDirection Right
    static GlobalNamespace::NoteCutDirection _get_Right();
    // Set static field: static public NoteCutDirection Right
    static void _set_Right(GlobalNamespace::NoteCutDirection value);
    // static field const value: static public NoteCutDirection UpLeft
    static constexpr const int UpLeft = 4;
    // Get static field: static public NoteCutDirection UpLeft
    static GlobalNamespace::NoteCutDirection _get_UpLeft();
    // Set static field: static public NoteCutDirection UpLeft
    static void _set_UpLeft(GlobalNamespace::NoteCutDirection value);
    // static field const value: static public NoteCutDirection UpRight
    static constexpr const int UpRight = 5;
    // Get static field: static public NoteCutDirection UpRight
    static GlobalNamespace::NoteCutDirection _get_UpRight();
    // Set static field: static public NoteCutDirection UpRight
    static void _set_UpRight(GlobalNamespace::NoteCutDirection value);
    // static field const value: static public NoteCutDirection DownLeft
    static constexpr const int DownLeft = 6;
    // Get static field: static public NoteCutDirection DownLeft
    static GlobalNamespace::NoteCutDirection _get_DownLeft();
    // Set static field: static public NoteCutDirection DownLeft
    static void _set_DownLeft(GlobalNamespace::NoteCutDirection value);
    // static field const value: static public NoteCutDirection DownRight
    static constexpr const int DownRight = 7;
    // Get static field: static public NoteCutDirection DownRight
    static GlobalNamespace::NoteCutDirection _get_DownRight();
    // Set static field: static public NoteCutDirection DownRight
    static void _set_DownRight(GlobalNamespace::NoteCutDirection value);
    // static field const value: static public NoteCutDirection Any
    static constexpr const int Any = 8;
    // Get static field: static public NoteCutDirection Any
    static GlobalNamespace::NoteCutDirection _get_Any();
    // Set static field: static public NoteCutDirection Any
    static void _set_Any(GlobalNamespace::NoteCutDirection value);
    // static field const value: static public NoteCutDirection None
    static constexpr const int None = 9;
    // Get static field: static public NoteCutDirection None
    static GlobalNamespace::NoteCutDirection _get_None();
    // Set static field: static public NoteCutDirection None
    static void _set_None(GlobalNamespace::NoteCutDirection value);
  }; // NoteCutDirection
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutDirection, "", "NoteCutDirection");
#pragma pack(pop)
