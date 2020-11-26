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
  // Forward declaring type: IWebProxy
  class IWebProxy;
}
// Completed forward declares
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Autogenerated type: System.Net.Configuration.DefaultProxySectionInternal
  class DefaultProxySectionInternal : public ::Il2CppObject {
    public:
    // private System.Net.IWebProxy webProxy
    // Offset: 0x10
    System::Net::IWebProxy* webProxy;
    // Creating conversion operator: operator System::Net::IWebProxy*
    constexpr operator System::Net::IWebProxy*() const noexcept {
      return webProxy;
    }
    // Get static field: static private System.Object classSyncObject
    static ::Il2CppObject* _get_classSyncObject();
    // Set static field: static private System.Object classSyncObject
    static void _set_classSyncObject(::Il2CppObject* value);
    // static private System.Net.IWebProxy GetDefaultProxy_UsingOldMonoCode()
    // Offset: 0x130CA94
    static System::Net::IWebProxy* GetDefaultProxy_UsingOldMonoCode();
    // static private System.Net.IWebProxy GetSystemWebProxy()
    // Offset: 0x130CA9C
    static System::Net::IWebProxy* GetSystemWebProxy();
    // static System.Object get_ClassSyncObject()
    // Offset: 0x130CAA4
    static ::Il2CppObject* get_ClassSyncObject();
    // static System.Net.Configuration.DefaultProxySectionInternal GetSection()
    // Offset: 0x130CB38
    static System::Net::Configuration::DefaultProxySectionInternal* GetSection();
    // System.Net.IWebProxy get_WebProxy()
    // Offset: 0x130CC44
    System::Net::IWebProxy* get_WebProxy();
    // public System.Void .ctor()
    // Offset: 0x130CC3C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DefaultProxySectionInternal* New_ctor();
  }; // System.Net.Configuration.DefaultProxySectionInternal
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Configuration::DefaultProxySectionInternal*, "System.Net.Configuration", "DefaultProxySectionInternal");
#pragma pack(pop)
