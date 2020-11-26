// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Net
namespace Mono::Net {
  // Forward declaring type: CFDictionary
  class CFDictionary;
  // Forward declaring type: CFProxyType
  struct CFProxyType;
}
// Completed forward declares
// Type namespace: Mono.Net
namespace Mono::Net {
  // Autogenerated type: Mono.Net.CFProxy
  class CFProxy : public ::Il2CppObject {
    public:
    // private Mono.Net.CFDictionary settings
    // Offset: 0x10
    Mono::Net::CFDictionary* settings;
    // Creating conversion operator: operator Mono::Net::CFDictionary*
    constexpr operator Mono::Net::CFDictionary*() const noexcept {
      return settings;
    }
    // Get static field: static private System.IntPtr kCFProxyAutoConfigurationJavaScriptKey
    static System::IntPtr _get_kCFProxyAutoConfigurationJavaScriptKey();
    // Set static field: static private System.IntPtr kCFProxyAutoConfigurationJavaScriptKey
    static void _set_kCFProxyAutoConfigurationJavaScriptKey(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFProxyAutoConfigurationURLKey
    static System::IntPtr _get_kCFProxyAutoConfigurationURLKey();
    // Set static field: static private System.IntPtr kCFProxyAutoConfigurationURLKey
    static void _set_kCFProxyAutoConfigurationURLKey(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFProxyHostNameKey
    static System::IntPtr _get_kCFProxyHostNameKey();
    // Set static field: static private System.IntPtr kCFProxyHostNameKey
    static void _set_kCFProxyHostNameKey(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFProxyPasswordKey
    static System::IntPtr _get_kCFProxyPasswordKey();
    // Set static field: static private System.IntPtr kCFProxyPasswordKey
    static void _set_kCFProxyPasswordKey(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFProxyPortNumberKey
    static System::IntPtr _get_kCFProxyPortNumberKey();
    // Set static field: static private System.IntPtr kCFProxyPortNumberKey
    static void _set_kCFProxyPortNumberKey(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFProxyTypeKey
    static System::IntPtr _get_kCFProxyTypeKey();
    // Set static field: static private System.IntPtr kCFProxyTypeKey
    static void _set_kCFProxyTypeKey(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFProxyUsernameKey
    static System::IntPtr _get_kCFProxyUsernameKey();
    // Set static field: static private System.IntPtr kCFProxyUsernameKey
    static void _set_kCFProxyUsernameKey(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFProxyTypeAutoConfigurationURL
    static System::IntPtr _get_kCFProxyTypeAutoConfigurationURL();
    // Set static field: static private System.IntPtr kCFProxyTypeAutoConfigurationURL
    static void _set_kCFProxyTypeAutoConfigurationURL(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFProxyTypeAutoConfigurationJavaScript
    static System::IntPtr _get_kCFProxyTypeAutoConfigurationJavaScript();
    // Set static field: static private System.IntPtr kCFProxyTypeAutoConfigurationJavaScript
    static void _set_kCFProxyTypeAutoConfigurationJavaScript(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFProxyTypeFTP
    static System::IntPtr _get_kCFProxyTypeFTP();
    // Set static field: static private System.IntPtr kCFProxyTypeFTP
    static void _set_kCFProxyTypeFTP(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFProxyTypeHTTP
    static System::IntPtr _get_kCFProxyTypeHTTP();
    // Set static field: static private System.IntPtr kCFProxyTypeHTTP
    static void _set_kCFProxyTypeHTTP(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFProxyTypeHTTPS
    static System::IntPtr _get_kCFProxyTypeHTTPS();
    // Set static field: static private System.IntPtr kCFProxyTypeHTTPS
    static void _set_kCFProxyTypeHTTPS(System::IntPtr value);
    // Get static field: static private System.IntPtr kCFProxyTypeSOCKS
    static System::IntPtr _get_kCFProxyTypeSOCKS();
    // Set static field: static private System.IntPtr kCFProxyTypeSOCKS
    static void _set_kCFProxyTypeSOCKS(System::IntPtr value);
    // static private System.Void .cctor()
    // Offset: 0x126329C
    static void _cctor();
    // System.Void .ctor(Mono.Net.CFDictionary settings)
    // Offset: 0x1260E6C
    static CFProxy* New_ctor(Mono::Net::CFDictionary* settings);
    // static private Mono.Net.CFProxyType CFProxyTypeToEnum(System.IntPtr type)
    // Offset: 0x1263498
    static Mono::Net::CFProxyType CFProxyTypeToEnum(System::IntPtr type);
    // public System.IntPtr get_AutoConfigurationJavaScript()
    // Offset: 0x1262B98
    System::IntPtr get_AutoConfigurationJavaScript();
    // public System.IntPtr get_AutoConfigurationUrl()
    // Offset: 0x1262C58
    System::IntPtr get_AutoConfigurationUrl();
    // public System.String get_HostName()
    // Offset: 0x12624D4
    ::Il2CppString* get_HostName();
    // public System.String get_Password()
    // Offset: 0x1262410
    ::Il2CppString* get_Password();
    // public System.Int32 get_Port()
    // Offset: 0x1262598
    int get_Port();
    // public Mono.Net.CFProxyType get_ProxyType()
    // Offset: 0x1262288
    Mono::Net::CFProxyType get_ProxyType();
    // public System.String get_Username()
    // Offset: 0x126234C
    ::Il2CppString* get_Username();
  }; // Mono.Net.CFProxy
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::CFProxy*, "Mono.Net", "CFProxy");
#pragma pack(pop)
