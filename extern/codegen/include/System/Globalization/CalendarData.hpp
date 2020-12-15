// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Type namespace: System.Globalization
namespace System::Globalization {
  // Autogenerated type: System.Globalization.CalendarData
  class CalendarData : public ::Il2CppObject {
    public:
    // System.String sNativeName
    // Offset: 0x10
    ::Il2CppString* sNativeName;
    // System.String[] saShortDates
    // Offset: 0x18
    ::Array<::Il2CppString*>* saShortDates;
    // System.String[] saYearMonths
    // Offset: 0x20
    ::Array<::Il2CppString*>* saYearMonths;
    // System.String[] saLongDates
    // Offset: 0x28
    ::Array<::Il2CppString*>* saLongDates;
    // System.String sMonthDay
    // Offset: 0x30
    ::Il2CppString* sMonthDay;
    // System.String[] saEraNames
    // Offset: 0x38
    ::Array<::Il2CppString*>* saEraNames;
    // System.String[] saAbbrevEraNames
    // Offset: 0x40
    ::Array<::Il2CppString*>* saAbbrevEraNames;
    // System.String[] saAbbrevEnglishEraNames
    // Offset: 0x48
    ::Array<::Il2CppString*>* saAbbrevEnglishEraNames;
    // System.String[] saDayNames
    // Offset: 0x50
    ::Array<::Il2CppString*>* saDayNames;
    // System.String[] saAbbrevDayNames
    // Offset: 0x58
    ::Array<::Il2CppString*>* saAbbrevDayNames;
    // System.String[] saSuperShortDayNames
    // Offset: 0x60
    ::Array<::Il2CppString*>* saSuperShortDayNames;
    // System.String[] saMonthNames
    // Offset: 0x68
    ::Array<::Il2CppString*>* saMonthNames;
    // System.String[] saAbbrevMonthNames
    // Offset: 0x70
    ::Array<::Il2CppString*>* saAbbrevMonthNames;
    // System.String[] saMonthGenitiveNames
    // Offset: 0x78
    ::Array<::Il2CppString*>* saMonthGenitiveNames;
    // System.String[] saAbbrevMonthGenitiveNames
    // Offset: 0x80
    ::Array<::Il2CppString*>* saAbbrevMonthGenitiveNames;
    // System.String[] saLeapYearMonthNames
    // Offset: 0x88
    ::Array<::Il2CppString*>* saLeapYearMonthNames;
    // System.Int32 iTwoDigitYearMax
    // Offset: 0x90
    int iTwoDigitYearMax;
    // System.Int32 iCurrentEra
    // Offset: 0x94
    int iCurrentEra;
    // System.Boolean bUseUserOverrides
    // Offset: 0x98
    bool bUseUserOverrides;
    // static field const value: static System.Int32 MAX_CALENDARS
    static constexpr const int MAX_CALENDARS = 23;
    // Get static field: static System.Int32 MAX_CALENDARS
    static int _get_MAX_CALENDARS();
    // Set static field: static System.Int32 MAX_CALENDARS
    static void _set_MAX_CALENDARS(int value);
    // Get static field: static System.Globalization.CalendarData Invariant
    static System::Globalization::CalendarData* _get_Invariant();
    // Set static field: static System.Globalization.CalendarData Invariant
    static void _set_Invariant(System::Globalization::CalendarData* value);
    // static private System.Void .cctor()
    // Offset: 0x112CCA0
    static void _cctor();
    // System.Void .ctor(System.String localeName, System.Int32 calendarId, System.Boolean bUseUserOverrides)
    // Offset: 0x112DD74
    static CalendarData* New_ctor(::Il2CppString* localeName, int calendarId, bool bUseUserOverrides);
    // private System.Void InitializeEraNames(System.String localeName, System.Int32 calendarId)
    // Offset: 0x112E414
    void InitializeEraNames(::Il2CppString* localeName, int calendarId);
    // private System.Void InitializeAbbreviatedEraNames(System.String localeName, System.Int32 calendarId)
    // Offset: 0x112E80C
    void InitializeAbbreviatedEraNames(::Il2CppString* localeName, int calendarId);
    // static System.Globalization.CalendarData GetCalendarData(System.Int32 calendarId)
    // Offset: 0x112C73C
    static System::Globalization::CalendarData* GetCalendarData(int calendarId);
    // static private System.String CalendarIdToCultureName(System.Int32 calendarId)
    // Offset: 0x112EB30
    static ::Il2CppString* CalendarIdToCultureName(int calendarId);
    // static public System.Int32 nativeGetTwoDigitYearMax(System.Int32 calID)
    // Offset: 0x112CC88
    static int nativeGetTwoDigitYearMax(int calID);
    // static private System.Boolean nativeGetCalendarData(System.Globalization.CalendarData data, System.String localeName, System.Int32 calendarId)
    // Offset: 0x112E3C8
    static bool nativeGetCalendarData(System::Globalization::CalendarData* data, ::Il2CppString* localeName, int calendarId);
    // private System.Boolean fill_calendar_data(System.String localeName, System.Int32 datetimeIndex)
    // Offset: 0x112ECD4
    bool fill_calendar_data(::Il2CppString* localeName, int datetimeIndex);
    // private System.Void .ctor()
    // Offset: 0x112CC90
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CalendarData* New_ctor();
  }; // System.Globalization.CalendarData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::CalendarData*, "System.Globalization", "CalendarData");
#pragma pack(pop)