// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.WebRequest
#include "System/Net/WebRequest.hpp"
// Including type: System.Net.WebRequest/WebProxyWrapperOpaque
#include "System/Net/WebRequest_WebProxyWrapperOpaque.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebProxy
  class WebProxy;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.WebRequest/WebProxyWrapper
  class WebRequest::WebProxyWrapper : public System::Net::WebRequest::WebProxyWrapperOpaque {
    public:
    // System.Net.WebProxy get_WebProxy()
    // Offset: 0x1229854
    System::Net::WebProxy* get_WebProxy();
  }; // System.Net.WebRequest/WebProxyWrapper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebRequest::WebProxyWrapper*, "System.Net", "WebRequest/WebProxyWrapper");
#pragma pack(pop)
