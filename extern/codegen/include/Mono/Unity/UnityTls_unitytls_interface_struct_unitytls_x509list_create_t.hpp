// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Unity.UnityTls/unitytls_interface_struct
#include "Mono/Unity/UnityTls_unitytls_interface_struct.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
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
// Completed forward declares
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Autogenerated type: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t
  class UnityTls::unitytls_interface_struct::unitytls_x509list_create_t : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1271C90
    static UnityTls::unitytls_interface_struct::unitytls_x509list_create_t* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Mono.Unity.UnityTls/unitytls_x509list* Invoke(Mono.Unity.UnityTls/unitytls_errorstate* errorState)
    // Offset: 0x1271CA4
    Mono::Unity::UnityTls::unitytls_x509list* Invoke(Mono::Unity::UnityTls::unitytls_errorstate* errorState);
    // public System.IAsyncResult BeginInvoke(Mono.Unity.UnityTls/unitytls_errorstate* errorState, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1271EFC
    System::IAsyncResult* BeginInvoke(Mono::Unity::UnityTls::unitytls_errorstate* errorState, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Mono.Unity.UnityTls/unitytls_x509list* EndInvoke(System.IAsyncResult result)
    // Offset: 0x1271F20
    Mono::Unity::UnityTls::unitytls_x509list* EndInvoke(System::IAsyncResult* result);
  }; // Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_x509list_create_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_x509list_create_t");
#pragma pack(pop)
