// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Globalization.CultureInfo
#include "System/Globalization/CultureInfo.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: System.Globalization
namespace System::Globalization {
  // Autogenerated type: System.Globalization.CultureInfo/Data
  struct CultureInfo::Data : public System::ValueType {
    public:
    // public System.Int32 ansi
    // Offset: 0x0
    int ansi;
    // public System.Int32 ebcdic
    // Offset: 0x4
    int ebcdic;
    // public System.Int32 mac
    // Offset: 0x8
    int mac;
    // public System.Int32 oem
    // Offset: 0xC
    int oem;
    // public System.Boolean right_to_left
    // Offset: 0x10
    bool right_to_left;
    // public System.Byte list_sep
    // Offset: 0x11
    uint8_t list_sep;
    // Creating value type constructor for type: Data
    constexpr Data(int ansi_ = {}, int ebcdic_ = {}, int mac_ = {}, int oem_ = {}, bool right_to_left_ = {}, uint8_t list_sep_ = {}) noexcept : ansi{ansi_}, ebcdic{ebcdic_}, mac{mac_}, oem{oem_}, right_to_left{right_to_left_}, list_sep{list_sep_} {}
  }; // System.Globalization.CultureInfo/Data
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::CultureInfo::Data, "System.Globalization", "CultureInfo/Data");
#pragma pack(pop)