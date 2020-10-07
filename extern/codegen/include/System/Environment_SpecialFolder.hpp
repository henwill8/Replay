// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Environment
#include "System/Environment.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.Environment/SpecialFolder
  struct Environment::SpecialFolder : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: SpecialFolder
    constexpr SpecialFolder(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Environment/SpecialFolder MyDocuments
    static constexpr const int MyDocuments = 5;
    // Get static field: static public System.Environment/SpecialFolder MyDocuments
    static System::Environment::SpecialFolder _get_MyDocuments();
    // Set static field: static public System.Environment/SpecialFolder MyDocuments
    static void _set_MyDocuments(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder Desktop
    static constexpr const int Desktop = 0;
    // Get static field: static public System.Environment/SpecialFolder Desktop
    static System::Environment::SpecialFolder _get_Desktop();
    // Set static field: static public System.Environment/SpecialFolder Desktop
    static void _set_Desktop(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder MyComputer
    static constexpr const int MyComputer = 17;
    // Get static field: static public System.Environment/SpecialFolder MyComputer
    static System::Environment::SpecialFolder _get_MyComputer();
    // Set static field: static public System.Environment/SpecialFolder MyComputer
    static void _set_MyComputer(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder Programs
    static constexpr const int Programs = 2;
    // Get static field: static public System.Environment/SpecialFolder Programs
    static System::Environment::SpecialFolder _get_Programs();
    // Set static field: static public System.Environment/SpecialFolder Programs
    static void _set_Programs(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder Personal
    static constexpr const int Personal = 5;
    // Get static field: static public System.Environment/SpecialFolder Personal
    static System::Environment::SpecialFolder _get_Personal();
    // Set static field: static public System.Environment/SpecialFolder Personal
    static void _set_Personal(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder Favorites
    static constexpr const int Favorites = 6;
    // Get static field: static public System.Environment/SpecialFolder Favorites
    static System::Environment::SpecialFolder _get_Favorites();
    // Set static field: static public System.Environment/SpecialFolder Favorites
    static void _set_Favorites(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder Startup
    static constexpr const int Startup = 7;
    // Get static field: static public System.Environment/SpecialFolder Startup
    static System::Environment::SpecialFolder _get_Startup();
    // Set static field: static public System.Environment/SpecialFolder Startup
    static void _set_Startup(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder Recent
    static constexpr const int Recent = 8;
    // Get static field: static public System.Environment/SpecialFolder Recent
    static System::Environment::SpecialFolder _get_Recent();
    // Set static field: static public System.Environment/SpecialFolder Recent
    static void _set_Recent(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder SendTo
    static constexpr const int SendTo = 9;
    // Get static field: static public System.Environment/SpecialFolder SendTo
    static System::Environment::SpecialFolder _get_SendTo();
    // Set static field: static public System.Environment/SpecialFolder SendTo
    static void _set_SendTo(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder StartMenu
    static constexpr const int StartMenu = 11;
    // Get static field: static public System.Environment/SpecialFolder StartMenu
    static System::Environment::SpecialFolder _get_StartMenu();
    // Set static field: static public System.Environment/SpecialFolder StartMenu
    static void _set_StartMenu(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder MyMusic
    static constexpr const int MyMusic = 13;
    // Get static field: static public System.Environment/SpecialFolder MyMusic
    static System::Environment::SpecialFolder _get_MyMusic();
    // Set static field: static public System.Environment/SpecialFolder MyMusic
    static void _set_MyMusic(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder DesktopDirectory
    static constexpr const int DesktopDirectory = 16;
    // Get static field: static public System.Environment/SpecialFolder DesktopDirectory
    static System::Environment::SpecialFolder _get_DesktopDirectory();
    // Set static field: static public System.Environment/SpecialFolder DesktopDirectory
    static void _set_DesktopDirectory(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder Templates
    static constexpr const int Templates = 21;
    // Get static field: static public System.Environment/SpecialFolder Templates
    static System::Environment::SpecialFolder _get_Templates();
    // Set static field: static public System.Environment/SpecialFolder Templates
    static void _set_Templates(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder ApplicationData
    static constexpr const int ApplicationData = 26;
    // Get static field: static public System.Environment/SpecialFolder ApplicationData
    static System::Environment::SpecialFolder _get_ApplicationData();
    // Set static field: static public System.Environment/SpecialFolder ApplicationData
    static void _set_ApplicationData(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder LocalApplicationData
    static constexpr const int LocalApplicationData = 28;
    // Get static field: static public System.Environment/SpecialFolder LocalApplicationData
    static System::Environment::SpecialFolder _get_LocalApplicationData();
    // Set static field: static public System.Environment/SpecialFolder LocalApplicationData
    static void _set_LocalApplicationData(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder InternetCache
    static constexpr const int InternetCache = 32;
    // Get static field: static public System.Environment/SpecialFolder InternetCache
    static System::Environment::SpecialFolder _get_InternetCache();
    // Set static field: static public System.Environment/SpecialFolder InternetCache
    static void _set_InternetCache(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder Cookies
    static constexpr const int Cookies = 33;
    // Get static field: static public System.Environment/SpecialFolder Cookies
    static System::Environment::SpecialFolder _get_Cookies();
    // Set static field: static public System.Environment/SpecialFolder Cookies
    static void _set_Cookies(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder History
    static constexpr const int History = 34;
    // Get static field: static public System.Environment/SpecialFolder History
    static System::Environment::SpecialFolder _get_History();
    // Set static field: static public System.Environment/SpecialFolder History
    static void _set_History(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder CommonApplicationData
    static constexpr const int CommonApplicationData = 35;
    // Get static field: static public System.Environment/SpecialFolder CommonApplicationData
    static System::Environment::SpecialFolder _get_CommonApplicationData();
    // Set static field: static public System.Environment/SpecialFolder CommonApplicationData
    static void _set_CommonApplicationData(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder System
    static constexpr const int System = 37;
    // Get static field: static public System.Environment/SpecialFolder System
    static System::Environment::SpecialFolder _get_System();
    // Set static field: static public System.Environment/SpecialFolder System
    static void _set_System(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder ProgramFiles
    static constexpr const int ProgramFiles = 38;
    // Get static field: static public System.Environment/SpecialFolder ProgramFiles
    static System::Environment::SpecialFolder _get_ProgramFiles();
    // Set static field: static public System.Environment/SpecialFolder ProgramFiles
    static void _set_ProgramFiles(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder MyPictures
    static constexpr const int MyPictures = 39;
    // Get static field: static public System.Environment/SpecialFolder MyPictures
    static System::Environment::SpecialFolder _get_MyPictures();
    // Set static field: static public System.Environment/SpecialFolder MyPictures
    static void _set_MyPictures(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder CommonProgramFiles
    static constexpr const int CommonProgramFiles = 43;
    // Get static field: static public System.Environment/SpecialFolder CommonProgramFiles
    static System::Environment::SpecialFolder _get_CommonProgramFiles();
    // Set static field: static public System.Environment/SpecialFolder CommonProgramFiles
    static void _set_CommonProgramFiles(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder MyVideos
    static constexpr const int MyVideos = 14;
    // Get static field: static public System.Environment/SpecialFolder MyVideos
    static System::Environment::SpecialFolder _get_MyVideos();
    // Set static field: static public System.Environment/SpecialFolder MyVideos
    static void _set_MyVideos(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder NetworkShortcuts
    static constexpr const int NetworkShortcuts = 19;
    // Get static field: static public System.Environment/SpecialFolder NetworkShortcuts
    static System::Environment::SpecialFolder _get_NetworkShortcuts();
    // Set static field: static public System.Environment/SpecialFolder NetworkShortcuts
    static void _set_NetworkShortcuts(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder Fonts
    static constexpr const int Fonts = 20;
    // Get static field: static public System.Environment/SpecialFolder Fonts
    static System::Environment::SpecialFolder _get_Fonts();
    // Set static field: static public System.Environment/SpecialFolder Fonts
    static void _set_Fonts(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder CommonStartMenu
    static constexpr const int CommonStartMenu = 22;
    // Get static field: static public System.Environment/SpecialFolder CommonStartMenu
    static System::Environment::SpecialFolder _get_CommonStartMenu();
    // Set static field: static public System.Environment/SpecialFolder CommonStartMenu
    static void _set_CommonStartMenu(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder CommonPrograms
    static constexpr const int CommonPrograms = 23;
    // Get static field: static public System.Environment/SpecialFolder CommonPrograms
    static System::Environment::SpecialFolder _get_CommonPrograms();
    // Set static field: static public System.Environment/SpecialFolder CommonPrograms
    static void _set_CommonPrograms(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder CommonStartup
    static constexpr const int CommonStartup = 24;
    // Get static field: static public System.Environment/SpecialFolder CommonStartup
    static System::Environment::SpecialFolder _get_CommonStartup();
    // Set static field: static public System.Environment/SpecialFolder CommonStartup
    static void _set_CommonStartup(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder CommonDesktopDirectory
    static constexpr const int CommonDesktopDirectory = 25;
    // Get static field: static public System.Environment/SpecialFolder CommonDesktopDirectory
    static System::Environment::SpecialFolder _get_CommonDesktopDirectory();
    // Set static field: static public System.Environment/SpecialFolder CommonDesktopDirectory
    static void _set_CommonDesktopDirectory(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder PrinterShortcuts
    static constexpr const int PrinterShortcuts = 27;
    // Get static field: static public System.Environment/SpecialFolder PrinterShortcuts
    static System::Environment::SpecialFolder _get_PrinterShortcuts();
    // Set static field: static public System.Environment/SpecialFolder PrinterShortcuts
    static void _set_PrinterShortcuts(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder Windows
    static constexpr const int Windows = 36;
    // Get static field: static public System.Environment/SpecialFolder Windows
    static System::Environment::SpecialFolder _get_Windows();
    // Set static field: static public System.Environment/SpecialFolder Windows
    static void _set_Windows(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder UserProfile
    static constexpr const int UserProfile = 40;
    // Get static field: static public System.Environment/SpecialFolder UserProfile
    static System::Environment::SpecialFolder _get_UserProfile();
    // Set static field: static public System.Environment/SpecialFolder UserProfile
    static void _set_UserProfile(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder SystemX86
    static constexpr const int SystemX86 = 41;
    // Get static field: static public System.Environment/SpecialFolder SystemX86
    static System::Environment::SpecialFolder _get_SystemX86();
    // Set static field: static public System.Environment/SpecialFolder SystemX86
    static void _set_SystemX86(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder ProgramFilesX86
    static constexpr const int ProgramFilesX86 = 42;
    // Get static field: static public System.Environment/SpecialFolder ProgramFilesX86
    static System::Environment::SpecialFolder _get_ProgramFilesX86();
    // Set static field: static public System.Environment/SpecialFolder ProgramFilesX86
    static void _set_ProgramFilesX86(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder CommonProgramFilesX86
    static constexpr const int CommonProgramFilesX86 = 44;
    // Get static field: static public System.Environment/SpecialFolder CommonProgramFilesX86
    static System::Environment::SpecialFolder _get_CommonProgramFilesX86();
    // Set static field: static public System.Environment/SpecialFolder CommonProgramFilesX86
    static void _set_CommonProgramFilesX86(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder CommonTemplates
    static constexpr const int CommonTemplates = 45;
    // Get static field: static public System.Environment/SpecialFolder CommonTemplates
    static System::Environment::SpecialFolder _get_CommonTemplates();
    // Set static field: static public System.Environment/SpecialFolder CommonTemplates
    static void _set_CommonTemplates(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder CommonDocuments
    static constexpr const int CommonDocuments = 46;
    // Get static field: static public System.Environment/SpecialFolder CommonDocuments
    static System::Environment::SpecialFolder _get_CommonDocuments();
    // Set static field: static public System.Environment/SpecialFolder CommonDocuments
    static void _set_CommonDocuments(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder CommonAdminTools
    static constexpr const int CommonAdminTools = 47;
    // Get static field: static public System.Environment/SpecialFolder CommonAdminTools
    static System::Environment::SpecialFolder _get_CommonAdminTools();
    // Set static field: static public System.Environment/SpecialFolder CommonAdminTools
    static void _set_CommonAdminTools(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder AdminTools
    static constexpr const int AdminTools = 48;
    // Get static field: static public System.Environment/SpecialFolder AdminTools
    static System::Environment::SpecialFolder _get_AdminTools();
    // Set static field: static public System.Environment/SpecialFolder AdminTools
    static void _set_AdminTools(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder CommonMusic
    static constexpr const int CommonMusic = 53;
    // Get static field: static public System.Environment/SpecialFolder CommonMusic
    static System::Environment::SpecialFolder _get_CommonMusic();
    // Set static field: static public System.Environment/SpecialFolder CommonMusic
    static void _set_CommonMusic(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder CommonPictures
    static constexpr const int CommonPictures = 54;
    // Get static field: static public System.Environment/SpecialFolder CommonPictures
    static System::Environment::SpecialFolder _get_CommonPictures();
    // Set static field: static public System.Environment/SpecialFolder CommonPictures
    static void _set_CommonPictures(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder CommonVideos
    static constexpr const int CommonVideos = 55;
    // Get static field: static public System.Environment/SpecialFolder CommonVideos
    static System::Environment::SpecialFolder _get_CommonVideos();
    // Set static field: static public System.Environment/SpecialFolder CommonVideos
    static void _set_CommonVideos(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder Resources
    static constexpr const int Resources = 56;
    // Get static field: static public System.Environment/SpecialFolder Resources
    static System::Environment::SpecialFolder _get_Resources();
    // Set static field: static public System.Environment/SpecialFolder Resources
    static void _set_Resources(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder LocalizedResources
    static constexpr const int LocalizedResources = 57;
    // Get static field: static public System.Environment/SpecialFolder LocalizedResources
    static System::Environment::SpecialFolder _get_LocalizedResources();
    // Set static field: static public System.Environment/SpecialFolder LocalizedResources
    static void _set_LocalizedResources(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder CommonOemLinks
    static constexpr const int CommonOemLinks = 58;
    // Get static field: static public System.Environment/SpecialFolder CommonOemLinks
    static System::Environment::SpecialFolder _get_CommonOemLinks();
    // Set static field: static public System.Environment/SpecialFolder CommonOemLinks
    static void _set_CommonOemLinks(System::Environment::SpecialFolder value);
    // static field const value: static public System.Environment/SpecialFolder CDBurning
    static constexpr const int CDBurning = 59;
    // Get static field: static public System.Environment/SpecialFolder CDBurning
    static System::Environment::SpecialFolder _get_CDBurning();
    // Set static field: static public System.Environment/SpecialFolder CDBurning
    static void _set_CDBurning(System::Environment::SpecialFolder value);
  }; // System.Environment/SpecialFolder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Environment::SpecialFolder, "System", "Environment/SpecialFolder");
#pragma pack(pop)
