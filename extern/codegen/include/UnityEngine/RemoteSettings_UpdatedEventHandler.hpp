// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.RemoteSettings
#include "UnityEngine/RemoteSettings.hpp"
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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.RemoteSettings/UpdatedEventHandler
  // [] Offset: FFFFFFFF
  class RemoteSettings::UpdatedEventHandler : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: UpdatedEventHandler
    UpdatedEventHandler() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x22DD438
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemoteSettings::UpdatedEventHandler* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::RemoteSettings::UpdatedEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemoteSettings::UpdatedEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke()
    // Offset: 0x22DD138
    void Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x22DD44C
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x22DD478
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.RemoteSettings/UpdatedEventHandler
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RemoteSettings::UpdatedEventHandler*, "UnityEngine", "RemoteSettings/UpdatedEventHandler");
