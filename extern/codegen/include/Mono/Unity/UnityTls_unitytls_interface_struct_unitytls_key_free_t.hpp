// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Unity.UnityTls/unitytls_interface_struct
#include "Mono/Unity/UnityTls_unitytls_interface_struct.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CB55DC
  class UnityTls::unitytls_interface_struct::unitytls_key_free_t : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: unitytls_key_free_t
    unitytls_key_free_t() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x14AAA00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTls::unitytls_interface_struct::unitytls_key_free_t* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_free_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTls::unitytls_interface_struct::unitytls_key_free_t*, creationType>(object, method)));
    }
    // public System.Void Invoke(Mono.Unity.UnityTls/unitytls_key* key)
    // Offset: 0x14AAA14
    void Invoke(Mono::Unity::UnityTls::unitytls_key* key);
    // public System.IAsyncResult BeginInvoke(Mono.Unity.UnityTls/unitytls_key* key, System.AsyncCallback callback, System.Object object)
    // Offset: 0x14AAC64
    System::IAsyncResult* BeginInvoke(Mono::Unity::UnityTls::unitytls_key* key, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x14AAC88
    void EndInvoke(System::IAsyncResult* result);
  }; // Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_key_free_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_key_free_t");
