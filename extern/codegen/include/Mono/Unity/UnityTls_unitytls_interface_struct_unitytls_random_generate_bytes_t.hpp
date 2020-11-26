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
  // Autogenerated type: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t
  class UnityTls::unitytls_interface_struct::unitytls_random_generate_bytes_t : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x126E648
    static UnityTls::unitytls_interface_struct::unitytls_random_generate_bytes_t* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Byte* buffer, System.IntPtr bufferLen, Mono.Unity.UnityTls/unitytls_errorstate* errorState)
    // Offset: 0x126E65C
    void Invoke(uint8_t* buffer, System::IntPtr bufferLen, Mono::Unity::UnityTls::unitytls_errorstate* errorState);
    // public System.IAsyncResult BeginInvoke(System.Byte* buffer, System.IntPtr bufferLen, Mono.Unity.UnityTls/unitytls_errorstate* errorState, System.AsyncCallback callback, System.Object object)
    // Offset: 0x126E8E0
    System::IAsyncResult* BeginInvoke(uint8_t* buffer, System::IntPtr bufferLen, Mono::Unity::UnityTls::unitytls_errorstate* errorState, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x126E980
    void EndInvoke(System::IAsyncResult* result);
  }; // Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_random_generate_bytes_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t");
#pragma pack(pop)
