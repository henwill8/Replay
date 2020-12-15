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
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.WatcherChangeTypes
  struct WatcherChangeTypes : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: WatcherChangeTypes
    constexpr WatcherChangeTypes(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.IO.WatcherChangeTypes All
    static constexpr const int All = 15;
    // Get static field: static public System.IO.WatcherChangeTypes All
    static System::IO::WatcherChangeTypes _get_All();
    // Set static field: static public System.IO.WatcherChangeTypes All
    static void _set_All(System::IO::WatcherChangeTypes value);
    // static field const value: static public System.IO.WatcherChangeTypes Changed
    static constexpr const int Changed = 4;
    // Get static field: static public System.IO.WatcherChangeTypes Changed
    static System::IO::WatcherChangeTypes _get_Changed();
    // Set static field: static public System.IO.WatcherChangeTypes Changed
    static void _set_Changed(System::IO::WatcherChangeTypes value);
    // static field const value: static public System.IO.WatcherChangeTypes Created
    static constexpr const int Created = 1;
    // Get static field: static public System.IO.WatcherChangeTypes Created
    static System::IO::WatcherChangeTypes _get_Created();
    // Set static field: static public System.IO.WatcherChangeTypes Created
    static void _set_Created(System::IO::WatcherChangeTypes value);
    // static field const value: static public System.IO.WatcherChangeTypes Deleted
    static constexpr const int Deleted = 2;
    // Get static field: static public System.IO.WatcherChangeTypes Deleted
    static System::IO::WatcherChangeTypes _get_Deleted();
    // Set static field: static public System.IO.WatcherChangeTypes Deleted
    static void _set_Deleted(System::IO::WatcherChangeTypes value);
    // static field const value: static public System.IO.WatcherChangeTypes Renamed
    static constexpr const int Renamed = 8;
    // Get static field: static public System.IO.WatcherChangeTypes Renamed
    static System::IO::WatcherChangeTypes _get_Renamed();
    // Set static field: static public System.IO.WatcherChangeTypes Renamed
    static void _set_Renamed(System::IO::WatcherChangeTypes value);
  }; // System.IO.WatcherChangeTypes
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::WatcherChangeTypes, "System.IO", "WatcherChangeTypes");
#pragma pack(pop)