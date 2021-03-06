// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Polyglot
namespace Polyglot {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Polyglot.GoogleDriveDownloadFormat
  // [] Offset: FFFFFFFF
  struct GoogleDriveDownloadFormat/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: GoogleDriveDownloadFormat
    constexpr GoogleDriveDownloadFormat(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Polyglot.GoogleDriveDownloadFormat CSV
    static constexpr const int CSV = 0;
    // Get static field: static public Polyglot.GoogleDriveDownloadFormat CSV
    static Polyglot::GoogleDriveDownloadFormat _get_CSV();
    // Set static field: static public Polyglot.GoogleDriveDownloadFormat CSV
    static void _set_CSV(Polyglot::GoogleDriveDownloadFormat value);
    // static field const value: static public Polyglot.GoogleDriveDownloadFormat TSV
    static constexpr const int TSV = 1;
    // Get static field: static public Polyglot.GoogleDriveDownloadFormat TSV
    static Polyglot::GoogleDriveDownloadFormat _get_TSV();
    // Set static field: static public Polyglot.GoogleDriveDownloadFormat TSV
    static void _set_TSV(Polyglot::GoogleDriveDownloadFormat value);
  }; // Polyglot.GoogleDriveDownloadFormat
  #pragma pack(pop)
  static check_size<sizeof(GoogleDriveDownloadFormat), 0 + sizeof(int)> __Polyglot_GoogleDriveDownloadFormatSizeCheck;
  static_assert(sizeof(GoogleDriveDownloadFormat) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Polyglot::GoogleDriveDownloadFormat, "Polyglot", "GoogleDriveDownloadFormat");
