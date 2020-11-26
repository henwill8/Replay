// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: Mono.Xml.SmallXmlParser/IContentHandler
#include "Mono/Xml/SmallXmlParser_IContentHandler.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: Stack
  class Stack;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ChannelData
  class ChannelData;
  // Forward declaring type: ProviderData
  class ProviderData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Autogenerated type: System.Runtime.Remoting.ConfigHandler
  class ConfigHandler : public ::Il2CppObject/*, public Mono::Xml::SmallXmlParser::IContentHandler*/ {
    public:
    // private System.Collections.ArrayList typeEntries
    // Offset: 0x10
    System::Collections::ArrayList* typeEntries;
    // private System.Collections.ArrayList channelInstances
    // Offset: 0x18
    System::Collections::ArrayList* channelInstances;
    // private System.Runtime.Remoting.ChannelData currentChannel
    // Offset: 0x20
    System::Runtime::Remoting::ChannelData* currentChannel;
    // private System.Collections.Stack currentProviderData
    // Offset: 0x28
    System::Collections::Stack* currentProviderData;
    // private System.String currentClientUrl
    // Offset: 0x30
    ::Il2CppString* currentClientUrl;
    // private System.String appName
    // Offset: 0x38
    ::Il2CppString* appName;
    // private System.String currentXmlPath
    // Offset: 0x40
    ::Il2CppString* currentXmlPath;
    // private System.Boolean onlyDelayedChannels
    // Offset: 0x48
    bool onlyDelayedChannels;
    // Creating interface conversion operator: operator Mono::Xml::SmallXmlParser::IContentHandler
    operator Mono::Xml::SmallXmlParser::IContentHandler() noexcept {
      return *reinterpret_cast<Mono::Xml::SmallXmlParser::IContentHandler*>(this);
    }
    // public System.Void .ctor(System.Boolean onlyDelayedChannels)
    // Offset: 0x116EAC4
    static ConfigHandler* New_ctor(bool onlyDelayedChannels);
    // private System.Void ValidatePath(System.String element, params System.String[] paths)
    // Offset: 0x116EB8C
    void ValidatePath(::Il2CppString* element, ::Array<::Il2CppString*>* paths);
    // Creating initializer_list -> params proxy for: System.Void ValidatePath(System.String element, params System.String[] paths)
    void ValidatePath(::Il2CppString* element, std::initializer_list<::Il2CppString*> paths);
    // Creating TArgs -> initializer_list proxy for: System.Void ValidatePath(System.String element, params System.String[] paths)
    template<class ...TParams>
    void ValidatePath(::Il2CppString* element, TParams&&... paths) {
      ValidatePath(element, {paths...});
    }
    // private System.Boolean CheckPath(System.String path)
    // Offset: 0x116EC98
    bool CheckPath(::Il2CppString* path);
    // public System.Void ParseElement(System.String name, Mono.Xml.SmallXmlParser/IAttrList attrs)
    // Offset: 0x116EF38
    void ParseElement(::Il2CppString* name, Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // private System.Void ReadCustomProviderData(System.String name, Mono.Xml.SmallXmlParser/IAttrList attrs)
    // Offset: 0x116FF8C
    void ReadCustomProviderData(::Il2CppString* name, Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // private System.Void ReadLifetine(Mono.Xml.SmallXmlParser/IAttrList attrs)
    // Offset: 0x11702FC
    void ReadLifetine(Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // private System.TimeSpan ParseTime(System.String s)
    // Offset: 0x11719A0
    System::TimeSpan ParseTime(::Il2CppString* s);
    // private System.Void ReadChannel(Mono.Xml.SmallXmlParser/IAttrList attrs, System.Boolean isTemplate)
    // Offset: 0x11708B0
    void ReadChannel(Mono::Xml::SmallXmlParser::IAttrList* attrs, bool isTemplate);
    // private System.Runtime.Remoting.ProviderData ReadProvider(System.String name, Mono.Xml.SmallXmlParser/IAttrList attrs, System.Boolean isTemplate)
    // Offset: 0x1170C80
    System::Runtime::Remoting::ProviderData* ReadProvider(::Il2CppString* name, Mono::Xml::SmallXmlParser::IAttrList* attrs, bool isTemplate);
    // private System.Void ReadClientActivated(Mono.Xml.SmallXmlParser/IAttrList attrs)
    // Offset: 0x11712E0
    void ReadClientActivated(Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // private System.Void ReadServiceActivated(Mono.Xml.SmallXmlParser/IAttrList attrs)
    // Offset: 0x1171408
    void ReadServiceActivated(Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // private System.Void ReadClientWellKnown(Mono.Xml.SmallXmlParser/IAttrList attrs)
    // Offset: 0x1171054
    void ReadClientWellKnown(Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // private System.Void ReadServiceWellKnown(Mono.Xml.SmallXmlParser/IAttrList attrs)
    // Offset: 0x1171138
    void ReadServiceWellKnown(Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // private System.Void ReadInteropXml(Mono.Xml.SmallXmlParser/IAttrList attrs, System.Boolean isElement)
    // Offset: 0x11714CC
    void ReadInteropXml(Mono::Xml::SmallXmlParser::IAttrList* attrs, bool isElement);
    // private System.Void ReadPreload(Mono.Xml.SmallXmlParser/IAttrList attrs)
    // Offset: 0x1171698
    void ReadPreload(Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // private System.String GetNotNull(Mono.Xml.SmallXmlParser/IAttrList attrs, System.String name)
    // Offset: 0x1171E00
    ::Il2CppString* GetNotNull(Mono::Xml::SmallXmlParser::IAttrList* attrs, ::Il2CppString* name);
    // private System.String ExtractAssembly(ref System.String type)
    // Offset: 0x1171F3C
    ::Il2CppString* ExtractAssembly(::Il2CppString*& type);
    // public System.Void OnStartParsing(Mono.Xml.SmallXmlParser parser)
    // Offset: 0x116ED7C
    // Implemented from: Mono.Xml.SmallXmlParser/IContentHandler
    // Base method: System.Void IContentHandler::OnStartParsing(Mono.Xml.SmallXmlParser parser)
    void OnStartParsing(Mono::Xml::SmallXmlParser* parser);
    // public System.Void OnProcessingInstruction(System.String name, System.String text)
    // Offset: 0x116ED80
    // Implemented from: Mono.Xml.SmallXmlParser/IContentHandler
    // Base method: System.Void IContentHandler::OnProcessingInstruction(System.String name, System.String text)
    void OnProcessingInstruction(::Il2CppString* name, ::Il2CppString* text);
    // public System.Void OnIgnorableWhitespace(System.String s)
    // Offset: 0x116ED84
    // Implemented from: Mono.Xml.SmallXmlParser/IContentHandler
    // Base method: System.Void IContentHandler::OnIgnorableWhitespace(System.String s)
    void OnIgnorableWhitespace(::Il2CppString* s);
    // public System.Void OnStartElement(System.String name, Mono.Xml.SmallXmlParser/IAttrList attrs)
    // Offset: 0x116ED88
    // Implemented from: Mono.Xml.SmallXmlParser/IContentHandler
    // Base method: System.Void IContentHandler::OnStartElement(System.String name, Mono.Xml.SmallXmlParser/IAttrList attrs)
    void OnStartElement(::Il2CppString* name, Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // public System.Void OnEndElement(System.String name)
    // Offset: 0x11718FC
    // Implemented from: Mono.Xml.SmallXmlParser/IContentHandler
    // Base method: System.Void IContentHandler::OnEndElement(System.String name)
    void OnEndElement(::Il2CppString* name);
    // public System.Void OnChars(System.String ch)
    // Offset: 0x1172018
    // Implemented from: Mono.Xml.SmallXmlParser/IContentHandler
    // Base method: System.Void IContentHandler::OnChars(System.String ch)
    void OnChars(::Il2CppString* ch);
    // public System.Void OnEndParsing(Mono.Xml.SmallXmlParser parser)
    // Offset: 0x117201C
    // Implemented from: Mono.Xml.SmallXmlParser/IContentHandler
    // Base method: System.Void IContentHandler::OnEndParsing(Mono.Xml.SmallXmlParser parser)
    void OnEndParsing(Mono::Xml::SmallXmlParser* parser);
  }; // System.Runtime.Remoting.ConfigHandler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ConfigHandler*, "System.Runtime.Remoting", "ConfigHandler");
#pragma pack(pop)
