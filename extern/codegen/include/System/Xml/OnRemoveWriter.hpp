// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlRawWriter
  class XmlRawWriter;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.OnRemoveWriter
  class OnRemoveWriter : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x14E5CA4
    static OnRemoveWriter* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Xml.XmlRawWriter writer)
    // Offset: 0x14E5CB8
    void Invoke(System::Xml::XmlRawWriter* writer);
    // public System.IAsyncResult BeginInvoke(System.Xml.XmlRawWriter writer, System.AsyncCallback callback, System.Object object)
    // Offset: 0x14E6070
    System::IAsyncResult* BeginInvoke(System::Xml::XmlRawWriter* writer, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x14E6094
    void EndInvoke(System::IAsyncResult* result);
  }; // System.Xml.OnRemoveWriter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::OnRemoveWriter*, "System.Xml", "OnRemoveWriter");
#pragma pack(pop)