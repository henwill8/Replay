// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IWebRequestCreate
  class IWebRequestCreate;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.WebRequestPrefixElement
  class WebRequestPrefixElement : public ::Il2CppObject {
    public:
    // public System.String Prefix
    // Offset: 0x10
    ::Il2CppString* Prefix;
    // System.Net.IWebRequestCreate creator
    // Offset: 0x18
    System::Net::IWebRequestCreate* creator;
    // System.Type creatorType
    // Offset: 0x20
    System::Type* creatorType;
    // public System.Net.IWebRequestCreate get_Creator()
    // Offset: 0x1227D10
    System::Net::IWebRequestCreate* get_Creator();
    // public System.Void set_Creator(System.Net.IWebRequestCreate value)
    // Offset: 0x12298A8
    void set_Creator(System::Net::IWebRequestCreate* value);
    // public System.Void .ctor(System.String P, System.Net.IWebRequestCreate C)
    // Offset: 0x122814C
    static WebRequestPrefixElement* New_ctor(::Il2CppString* P, System::Net::IWebRequestCreate* C);
  }; // System.Net.WebRequestPrefixElement
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebRequestPrefixElement*, "System.Net", "WebRequestPrefixElement");
#pragma pack(pop)