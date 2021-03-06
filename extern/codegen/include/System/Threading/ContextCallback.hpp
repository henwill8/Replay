// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
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
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.ContextCallback
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CAA608
  class ContextCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: ContextCallback
    ContextCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A79F40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContextCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ContextCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContextCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object state)
    // Offset: 0x1A7C608
    void Invoke(::Il2CppObject* state);
    // public System.IAsyncResult BeginInvoke(System.Object state, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A7C9C0
    System::IAsyncResult* BeginInvoke(::Il2CppObject* state, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1A7C9E4
    void EndInvoke(System::IAsyncResult* result);
  }; // System.Threading.ContextCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ContextCallback*, "System.Threading", "ContextCallback");
