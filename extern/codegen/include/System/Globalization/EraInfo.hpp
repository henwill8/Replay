// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Globalization
namespace System::Globalization {
  // Autogenerated type: System.Globalization.EraInfo
  class EraInfo : public ::Il2CppObject {
    public:
    // System.Int32 era
    // Offset: 0x10
    int era;
    // System.Int64 ticks
    // Offset: 0x18
    int64_t ticks;
    // System.Int32 yearOffset
    // Offset: 0x20
    int yearOffset;
    // System.Int32 minEraYear
    // Offset: 0x24
    int minEraYear;
    // System.Int32 maxEraYear
    // Offset: 0x28
    int maxEraYear;
    // System.String eraName
    // Offset: 0x30
    ::Il2CppString* eraName;
    // System.String abbrevEraName
    // Offset: 0x38
    ::Il2CppString* abbrevEraName;
    // System.String englishEraName
    // Offset: 0x40
    ::Il2CppString* englishEraName;
    // System.Void .ctor(System.Int32 era, System.Int32 startYear, System.Int32 startMonth, System.Int32 startDay, System.Int32 yearOffset, System.Int32 minEraYear, System.Int32 maxEraYear)
    // Offset: 0x162C454
    static EraInfo* New_ctor(int era, int startYear, int startMonth, int startDay, int yearOffset, int minEraYear, int maxEraYear);
    // System.Void .ctor(System.Int32 era, System.Int32 startYear, System.Int32 startMonth, System.Int32 startDay, System.Int32 yearOffset, System.Int32 minEraYear, System.Int32 maxEraYear, System.String eraName, System.String abbrevEraName, System.String englishEraName)
    // Offset: 0x162C4F4
    static EraInfo* New_ctor(int era, int startYear, int startMonth, int startDay, int yearOffset, int minEraYear, int maxEraYear, ::Il2CppString* eraName, ::Il2CppString* abbrevEraName, ::Il2CppString* englishEraName);
  }; // System.Globalization.EraInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::EraInfo*, "System.Globalization", "EraInfo");
#pragma pack(pop)
