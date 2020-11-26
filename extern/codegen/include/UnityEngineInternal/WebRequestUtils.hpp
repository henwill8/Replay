// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Regex
  class Regex;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: UnityEngineInternal
namespace UnityEngineInternal {
  // Autogenerated type: UnityEngineInternal.WebRequestUtils
  class WebRequestUtils : public ::Il2CppObject {
    public:
    // Get static field: static private System.Text.RegularExpressions.Regex domainRegex
    static System::Text::RegularExpressions::Regex* _get_domainRegex();
    // Set static field: static private System.Text.RegularExpressions.Regex domainRegex
    static void _set_domainRegex(System::Text::RegularExpressions::Regex* value);
    // static System.String RedirectTo(System.String baseUri, System.String redirectUri)
    // Offset: 0x19E0874
    static ::Il2CppString* RedirectTo(::Il2CppString* baseUri, ::Il2CppString* redirectUri);
    // static System.String MakeInitialUrl(System.String targetUrl, System.String localUrl)
    // Offset: 0x19DF07C
    static ::Il2CppString* MakeInitialUrl(::Il2CppString* targetUrl, ::Il2CppString* localUrl);
    // static System.String MakeUriString(System.Uri targetUri, System.String targetUrl, System.Boolean prependProtocol)
    // Offset: 0x19E097C
    static ::Il2CppString* MakeUriString(System::Uri* targetUri, ::Il2CppString* targetUrl, bool prependProtocol);
    // static private System.String URLDecode(System.String encoded)
    // Offset: 0x19E0CCC
    static ::Il2CppString* URLDecode(::Il2CppString* encoded);
    // static private System.Void .cctor()
    // Offset: 0x19E0D80
    static void _cctor();
  }; // UnityEngineInternal.WebRequestUtils
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngineInternal::WebRequestUtils*, "UnityEngineInternal", "WebRequestUtils");
#pragma pack(pop)
