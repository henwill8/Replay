// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: SFB
namespace SFB {
  // Forward declaring type: ExtensionFilter
  struct ExtensionFilter;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: SFB
namespace SFB {
  // Autogenerated type: SFB.IStandaloneFileBrowser
  class IStandaloneFileBrowser {
    public:
    // public System.String[] OpenFilePanel(System.String title, System.String directory, SFB.ExtensionFilter[] extensions, System.Boolean multiselect)
    // Offset: 0xFFFFFFFF
    ::Array<::Il2CppString*>* OpenFilePanel(::Il2CppString* title, ::Il2CppString* directory, ::Array<SFB::ExtensionFilter>* extensions, bool multiselect);
    // public System.String[] OpenFolderPanel(System.String title, System.String directory, System.Boolean multiselect)
    // Offset: 0xFFFFFFFF
    ::Array<::Il2CppString*>* OpenFolderPanel(::Il2CppString* title, ::Il2CppString* directory, bool multiselect);
    // public System.String SaveFilePanel(System.String title, System.String directory, System.String defaultName, SFB.ExtensionFilter[] extensions)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* SaveFilePanel(::Il2CppString* title, ::Il2CppString* directory, ::Il2CppString* defaultName, ::Array<SFB::ExtensionFilter>* extensions);
    // public System.Void OpenFilePanelAsync(System.String title, System.String directory, SFB.ExtensionFilter[] extensions, System.Boolean multiselect, System.Action`1<System.String[]> cb)
    // Offset: 0xFFFFFFFF
    void OpenFilePanelAsync(::Il2CppString* title, ::Il2CppString* directory, ::Array<SFB::ExtensionFilter>* extensions, bool multiselect, System::Action_1<::Array<::Il2CppString*>*>* cb);
    // public System.Void OpenFolderPanelAsync(System.String title, System.String directory, System.Boolean multiselect, System.Action`1<System.String[]> cb)
    // Offset: 0xFFFFFFFF
    void OpenFolderPanelAsync(::Il2CppString* title, ::Il2CppString* directory, bool multiselect, System::Action_1<::Array<::Il2CppString*>*>* cb);
    // public System.Void SaveFilePanelAsync(System.String title, System.String directory, System.String defaultName, SFB.ExtensionFilter[] extensions, System.Action`1<System.String> cb)
    // Offset: 0xFFFFFFFF
    void SaveFilePanelAsync(::Il2CppString* title, ::Il2CppString* directory, ::Il2CppString* defaultName, ::Array<SFB::ExtensionFilter>* extensions, System::Action_1<::Il2CppString*>* cb);
  }; // SFB.IStandaloneFileBrowser
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(SFB::IStandaloneFileBrowser*, "SFB", "IStandaloneFileBrowser");
#pragma pack(pop)