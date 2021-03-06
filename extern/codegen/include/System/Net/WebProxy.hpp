// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.IWebProxy
#include "System/Net/IWebProxy.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: ICredentials
  class ICredentials;
  // Forward declaring type: AutoWebProxyScriptEngine
  class AutoWebProxyScriptEngine;
}
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Regex
  class Regex;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebProxy
  // [] Offset: FFFFFFFF
  class WebProxy : public ::Il2CppObject/*, public System::Net::IWebProxy, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // private System.Boolean _UseRegistry
    // Size: 0x1
    // Offset: 0x10
    bool UseRegistry;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _BypassOnLocal
    // Size: 0x1
    // Offset: 0x11
    bool BypassOnLocal;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_EnableAutoproxy
    // Size: 0x1
    // Offset: 0x12
    bool m_EnableAutoproxy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_EnableAutoproxy and: ProxyAddress
    char __padding2[0x5] = {};
    // private System.Uri _ProxyAddress
    // Size: 0x8
    // Offset: 0x18
    System::Uri* ProxyAddress;
    // Field size check
    static_assert(sizeof(System::Uri*) == 0x8);
    // private System.Collections.ArrayList _BypassList
    // Size: 0x8
    // Offset: 0x20
    System::Collections::ArrayList* BypassList;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private System.Net.ICredentials _Credentials
    // Size: 0x8
    // Offset: 0x28
    System::Net::ICredentials* Credentials;
    // Field size check
    static_assert(sizeof(System::Net::ICredentials*) == 0x8);
    // private System.Text.RegularExpressions.Regex[] _RegExBypassList
    // Size: 0x8
    // Offset: 0x30
    ::Array<System::Text::RegularExpressions::Regex*>* RegExBypassList;
    // Field size check
    static_assert(sizeof(::Array<System::Text::RegularExpressions::Regex*>*) == 0x8);
    // private System.Collections.Hashtable _ProxyHostAddresses
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Hashtable* ProxyHostAddresses;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // private System.Net.AutoWebProxyScriptEngine m_ScriptEngine
    // Size: 0x8
    // Offset: 0x40
    System::Net::AutoWebProxyScriptEngine* m_ScriptEngine;
    // Field size check
    static_assert(sizeof(System::Net::AutoWebProxyScriptEngine*) == 0x8);
    // Creating value type constructor for type: WebProxy
    WebProxy(bool UseRegistry_ = {}, bool BypassOnLocal_ = {}, bool m_EnableAutoproxy_ = {}, System::Uri* ProxyAddress_ = {}, System::Collections::ArrayList* BypassList_ = {}, System::Net::ICredentials* Credentials_ = {}, ::Array<System::Text::RegularExpressions::Regex*>* RegExBypassList_ = {}, System::Collections::Hashtable* ProxyHostAddresses_ = {}, System::Net::AutoWebProxyScriptEngine* m_ScriptEngine_ = {}) noexcept : UseRegistry{UseRegistry_}, BypassOnLocal{BypassOnLocal_}, m_EnableAutoproxy{m_EnableAutoproxy_}, ProxyAddress{ProxyAddress_}, BypassList{BypassList_}, Credentials{Credentials_}, RegExBypassList{RegExBypassList_}, ProxyHostAddresses{ProxyHostAddresses_}, m_ScriptEngine{m_ScriptEngine_} {}
    // Creating interface conversion operator: operator System::Net::IWebProxy
    operator System::Net::IWebProxy() noexcept {
      return *reinterpret_cast<System::Net::IWebProxy*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // public System.Void .ctor(System.Uri Address, System.Boolean BypassOnLocal, System.String[] BypassList, System.Net.ICredentials Credentials)
    // Offset: 0x1442E74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebProxy* New_ctor(System::Uri* Address, bool BypassOnLocal, ::Array<::Il2CppString*>* BypassList, System::Net::ICredentials* Credentials) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebProxy*, creationType>(Address, BypassOnLocal, BypassList, Credentials)));
    }
    // public System.Boolean get_UseDefaultCredentials()
    // Offset: 0x14431D4
    bool get_UseDefaultCredentials();
    // public System.Void set_UseDefaultCredentials(System.Boolean value)
    // Offset: 0x1443258
    void set_UseDefaultCredentials(bool value);
    // private System.Void UpdateRegExList(System.Boolean canThrow)
    // Offset: 0x1442F54
    void UpdateRegExList(bool canThrow);
    // private System.Boolean IsMatchInBypassList(System.Uri input)
    // Offset: 0x1443724
    bool IsMatchInBypassList(System::Uri* input);
    // private System.Boolean IsLocal(System.Uri host)
    // Offset: 0x14438BC
    bool IsLocal(System::Uri* host);
    // private System.Boolean IsLocalInProxyHash(System.Uri host)
    // Offset: 0x1443A2C
    bool IsLocalInProxyHash(System::Uri* host);
    // private System.Boolean IsBypassedManual(System.Uri host)
    // Offset: 0x1443640
    bool IsBypassedManual(System::Uri* host);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x1443D48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebProxy* New_ctor(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebProxy*, creationType>(serializationInfo, streamingContext)));
    }
    // protected System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x1444040
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // System.Net.AutoWebProxyScriptEngine get_ScriptEngine()
    // Offset: 0x144413C
    System::Net::AutoWebProxyScriptEngine* get_ScriptEngine();
    // static public System.Net.IWebProxy CreateDefaultProxy()
    // Offset: 0x1444144
    static System::Net::IWebProxy* CreateDefaultProxy();
    // System.Void .ctor(System.Boolean enableAutoproxy)
    // Offset: 0x14441AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebProxy* New_ctor(bool enableAutoproxy) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebProxy*, creationType>(enableAutoproxy)));
    }
    // System.Void UnsafeUpdateFromRegistry()
    // Offset: 0x1444028
    void UnsafeUpdateFromRegistry();
    // private System.Boolean GetProxyAuto(System.Uri destination, out System.Uri proxyUri)
    // Offset: 0x1443484
    bool GetProxyAuto(System::Uri* destination, System::Uri*& proxyUri);
    // private System.Boolean IsBypassedAuto(System.Uri destination, out System.Boolean isBypassed)
    // Offset: 0x1443C28
    bool IsBypassedAuto(System::Uri* destination, bool& isBypassed);
    // static private System.Boolean AreAllBypassed(System.Collections.Generic.IEnumerable`1<System.String> proxies, System.Boolean checkFirstOnly)
    // Offset: 0x14441E4
    static bool AreAllBypassed(System::Collections::Generic::IEnumerable_1<::Il2CppString*>* proxies, bool checkFirstOnly);
    // static private System.Uri ProxyUri(System.String proxyName)
    // Offset: 0x1444498
    static System::Uri* ProxyUri(::Il2CppString* proxyName);
    // public System.Void .ctor()
    // Offset: 0x1442E60
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebProxy* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebProxy*, creationType>()));
    }
    // public System.Net.ICredentials get_Credentials()
    // Offset: 0x14431CC
    // Implemented from: System.Net.IWebProxy
    // Base method: System.Net.ICredentials IWebProxy::get_Credentials()
    System::Net::ICredentials* get_Credentials();
    // public System.Uri GetProxy(System.Uri destination)
    // Offset: 0x14432E4
    // Implemented from: System.Net.IWebProxy
    // Base method: System.Uri IWebProxy::GetProxy(System.Uri destination)
    System::Uri* GetProxy(System::Uri* destination);
    // public System.Boolean IsBypassed(System.Uri host)
    // Offset: 0x1443B34
    // Implemented from: System.Net.IWebProxy
    // Base method: System.Boolean IWebProxy::IsBypassed(System.Uri host)
    bool IsBypassed(System::Uri* host);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x1444034
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
  }; // System.Net.WebProxy
  #pragma pack(pop)
  static check_size<sizeof(WebProxy), 64 + sizeof(System::Net::AutoWebProxyScriptEngine*)> __System_Net_WebProxySizeCheck;
  static_assert(sizeof(WebProxy) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebProxy*, "System.Net", "WebProxy");
